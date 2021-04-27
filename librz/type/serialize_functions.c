// SPDX-FileCopyrightText: 2021 Anton Kochkov <anton.kochkov@gmail.com>
// SPDX-License-Identifier: LGPL-3.0-only

#include <rz_util/rz_serialize.h>
#include <rz_list.h>
#include <rz_vector.h>
#include <rz_type.h>
#include <sdb.h>

static RzCallable *get_callable_type(RzTypeDB *typedb, Sdb *sdb, const char *name) {
	rz_return_val_if_fail(typedb && sdb && RZ_STR_ISNOTEMPTY(name), NULL);

	RzCallable *callable = rz_type_func_new(typedb, name, NULL);
	if (!callable) {
		return NULL;
	}

	char *args_key = rz_str_newf("%s.%s.args", "func", name);
	if (!args_key) {
		return NULL;
	}

	size_t arguments = sdb_num_get(sdb, args_key, 0);
	if (!rz_pvector_reserve(callable->args, arguments)) {
		goto error;
	}

	eprintf("func \"%s\" has %zu arguments\n", name, arguments);
	int i;
	for (i = 0; i < arguments; i++) {
		char *argument_key = rz_str_newf("func.%s.arg.%d", name, i);
		if (!argument_key) {
			goto error;
		}
		char *values = sdb_get(sdb, argument_key, NULL);
		free(argument_key);

		if (!values) {
			goto error;
		}
		char *argument_type = sdb_anext(values, NULL);
		eprintf("parsing \"%s\" func arg type\n", argument_type);
		char *error_msg = NULL;
		RzType *ttype = rz_type_parse_string_single(typedb->parser, argument_type, &error_msg);
		if (!ttype || error_msg) {
			eprintf("parsing \"%s\" func arg type\n", argument_type);
			free(values);
			goto error;
		}
		char *argument_name = sdb_anext(values, NULL);
		RzCallableArg arg = {
			.name = argument_name,
			.type = ttype
		};
		free(values);

		void *element = rz_pvector_push(callable->args, &arg); // returns null if no space available
		if (!element) {
			goto error;
		}
	}

	RzStrBuf key;
	const char *rettype = sdb_get(sdb, rz_strbuf_initf(&key, "func.%s.ret", name), 0);
	rz_strbuf_fini(&key);

	char *error_msg = NULL;
	RzType *ttype = rz_type_parse_string_single(typedb->parser, rettype, &error_msg);
	if (!ttype || error_msg) {
		goto error;
	}
	callable->ret = ttype;

	return callable;

error:
	rz_type_callable_free(callable);
	return NULL;
}

bool sdb_load_callables(RzTypeDB *typedb, Sdb *sdb) {
	rz_return_val_if_fail(typedb && sdb, NULL);
	RzCallable *callable;
	SdbKv *kv;
	SdbListIter *iter;
	SdbList *l = sdb_foreach_list(sdb, true);
	ls_foreach (l, iter, kv) {
		if (!strcmp(sdbkv_value(kv), "func")) {
			eprintf("parsing \"%s\" func SDB key\n", sdbkv_key(kv));
			callable = get_callable_type(typedb, sdb, sdbkv_key(kv));
			if (callable) {
				ht_pp_insert(typedb->callables, callable->name, callable);
				RZ_LOG_DEBUG("inserting the \"%s\" callable type\n", callable->name);
			}
		}
	}
	return true;
}

static bool sdb_load_by_path(RZ_NONNULL RzTypeDB *typedb, const char *path) {
	Sdb *db = sdb_new(0, path, 0);
	bool result = sdb_load_callables(typedb, db);
	sdb_close(db);
	sdb_free(db);
	return result;
}

RZ_API bool rz_type_db_load_callables_sdb(RzTypeDB *typedb, const char *path) {
	if (!rz_file_exists(path)) {
		return false;
	}
	return sdb_load_by_path(typedb, path);
}

RZ_API void rz_serialize_callables_save(RZ_NONNULL Sdb *db, RZ_NONNULL RzTypeDB *typedb) {
}

RZ_API bool rz_serialize_callables_load(RZ_NONNULL Sdb *db, RZ_NONNULL RzTypeDB *typedb, RZ_NULLABLE RzSerializeResultInfo *res) {
	sdb_load_callables(typedb, db);
	return true;
}

