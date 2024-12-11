// SPDX-FileCopyrightText: 2024 deroad <deroad@kumo.xn--q9jyb4c>
// SPDX-FileCopyrightText: 2024 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

#include <rz_util/rz_log.h>
#include <rz_core.h>
#include <rz_search.h>
#include <rz_util/rz_assert.h>
#include <rz_util/rz_str_search.h>

/**
 * \brief Sets up the search parameters according to the core IO layer and config.
 *
 * \param core The core to get the IO maps, settings and other relevant information from.
 * \param search_opts Search options to set up. Only fields to search behavior will be set (max_threads, max hits). Can be NULL.
 *
 * \return The boundaries to search in. Or NULL in case of failure.
 */
RZ_API RZ_OWN RzList /*<RzIOMap *>*/ *rz_core_setup_io_search_parameters(RzCore *core, RZ_NULLABLE RZ_OUT RzSearchOpt *search_opts) {
	rz_return_val_if_fail(core && core->io && core->config, NULL);
	RzList *boundaries = NULL;

	if (!core->io) {
		RZ_LOG_ERROR("core: RzIO is not available.\n");
		return NULL;
	}

	boundaries = rz_core_get_boundaries_select(core, "search.from", "search.to", "search.in");
	if (!boundaries || rz_list_empty(boundaries)) {
		ut64 from = rz_config_get_i(core->config, "search.from");
		ut64 to = rz_config_get_i(core->config, "search.to");
		RZ_LOG_ERROR("core: Failed to get search boundaries within [0x%" PFMT64x ", 0x%" PFMT64x "].\n", from, to);
		goto fail;
	}

	if (search_opts) {
		// Set search options known by core.
		ut32 max_threads = rz_th_max_threads(rz_config_get_i(core->config, "search.max_threads"));
		if (!rz_search_opt_set_max_threads(search_opts, max_threads)) {
			RZ_LOG_ERROR("core: Failed to set 'max_threads' search option.\n");
			goto fail;
		}

		ut32 max_hits = rz_config_get_i(core->config, "search.maxhits");
		if (!rz_search_opt_set_max_hits(search_opts, max_hits)) {
			RZ_LOG_ERROR("core: Failed to set 'max_hits' search option.\n");
			goto fail;
		}
	}

	return boundaries;
fail:
	rz_list_free(boundaries);
	return NULL;
}

static bool default_search_no_cancel(void *user, size_t n_hits, RzSearchCancelReason invoke_reason) {
	return rz_cons_is_breaked();
}

/**
 * \brief      Finds a byte array in the IO layer of the given core and core configuration.
 *
 * \param      core    The RzCore core.
 * \param      opt     The search options to apply. If it is NULL a default set of options is used.
 * \param      pattern The bytes pattern to search.
 *
 * \return     On success returns a valid pointer, otherwise NULL
 */
RZ_API RZ_OWN RzList /*<RzSearchHit *>*/ *rz_core_search_bytes(RZ_NONNULL RzCore *core, RZ_BORROW RZ_NULLABLE RzSearchOpt *user_opts, RZ_NONNULL RZ_OWN RzSearchBytesPattern *pattern) {
	rz_return_val_if_fail(core && core->config && pattern, NULL);
	if (pattern->length < 1) {
		RZ_LOG_ERROR("core: Cannot search for byte pattern if 'length' < 1.\n");
		rz_search_bytes_pattern_free(pattern);
		return NULL;
	}

	RzList *hits = NULL;
	RzList *boundaries = NULL;
	RzSearchOpt *search_opts = NULL;

	RzSearchCollection *collection = rz_search_collection_bytes();
	if (!collection ||
		!rz_search_collection_bytes_add_pattern(collection, pattern)) {
		RZ_LOG_ERROR("core: Failed to initialize search collection.\n");
		rz_search_bytes_pattern_free(pattern);
		goto quit;
	}

	if (!user_opts) {
		// Use default search options for byte search.
		search_opts = rz_search_opt_new();
		bool opt_applied = rz_search_opt_set_inverse_match(search_opts, false);
		opt_applied &= rz_search_opt_set_buffer_size(search_opts, RZ_MAX(pattern->length, RZ_SEARCH_MIN_BUFFER_SIZE));
		opt_applied &= rz_search_opt_set_cancel_cb(search_opts, default_search_no_cancel, NULL);
		if (!opt_applied) {
			RZ_LOG_ERROR("code: Failed to setup default search options.\n");
			goto quit;
		}
	}

	// Don't pass the search options.
	// They were set up by the user and we respect them.
	boundaries = rz_core_setup_io_search_parameters(core, user_opts ? NULL : search_opts);
	if (!boundaries) {
		RZ_LOG_ERROR("core: Setting up search from core failed.\n");
		goto quit;
	}

	hits = rz_search_on_io(user_opts ? user_opts : search_opts, collection, core->io, boundaries);
	if (!hits) {
		ut64 from = rz_config_get_i(core->config, "search.from");
		ut64 to = rz_config_get_i(core->config, "search.to");
		RZ_LOG_ERROR("core: Failed to search within [0x%" PFMT64x ", 0x%" PFMT64x "].\n", from, to);
	}

quit:
	rz_list_free(boundaries);
	rz_search_opt_free(search_opts);
	rz_search_collection_free(collection);
	return hits;
}
