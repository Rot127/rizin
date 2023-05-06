// SPDX-FileCopyrightText: 2013-2018 pancake <pancake@nopcode.org>
// SPDX-License-Identifier: LGPL-3.0-only

#include <rz_asm.h>
#include <rz_lib.h>
#include <ht_uu.h>
#include <capstone/capstone.h>
#include "../arch/arm/asm-arm.h"
#include "../arch/arm/arm_it.h"
#include "./asm_arm_hacks.inc"

typedef struct arm_cs_context_t {
	RzArmITContext it;
	csh cd;
	int omode;
	int obits;
} ArmCSContext;

bool arm64ass(const char *str, ut64 addr, ut32 *op);

static bool check_features(RzAsm *a, cs_insn *insn) {
	ArmCSContext *ctx = (ArmCSContext *)a->plugin_data;
	int i;
	if (!insn || !insn->detail) {
		return true;
	}
	for (i = 0; i < insn->detail->groups_count; i++) {
		int id = insn->detail->groups[i];
		switch (id) {
		case ARM_FEATURE_IsARM:
		case ARM_FEATURE_IsThumb:
		case ARM_FEATURE_IsThumb2:
			continue;
		default:
			if (id < 128) {
				continue;
			}
		}
		const char *name = cs_group_name(ctx->cd, id);
		if (!name) {
			return true;
		}
		if (!strstr(a->features, name)) {
			return false;
		}
	}
	return true;
}

static int disassemble(RzAsm *a, RzAsmOp *op, const ut8 *buf, int len) {
	ArmCSContext *ctx = (ArmCSContext *)a->plugin_data;

	bool disp_hash = a->immdisp;
	cs_insn *insn = NULL;
	cs_mode mode = 0;
	int ret, n = 0;

	bool thumb = a->bits == 16;
	mode |= thumb ? CS_MODE_THUMB : CS_MODE_ARM;
	mode |= (a->big_endian) ? CS_MODE_BIG_ENDIAN : CS_MODE_LITTLE_ENDIAN;
	if (mode != ctx->omode || a->bits != ctx->obits) {
		cs_close(&ctx->cd);
		ctx->cd = 0; // unnecessary
		ctx->omode = mode;
		ctx->obits = a->bits;
	}

	if (a->cpu) {
		if (strstr(a->cpu, "cortex")) {
			mode |= CS_MODE_MCLASS;
		}
		if (a->bits != 64) {
			if (strstr(a->cpu, "v8")) {
				mode |= CS_MODE_V8;
			}
		}
	}
	if (a->features && a->bits != 64) {
		if (strstr(a->features, "v8")) {
			mode |= CS_MODE_V8;
		}
	}
	if (op) {
		op->size = 4;
		rz_strbuf_set(&op->buf_asm, "");
	}
	if (!ctx->cd || mode != ctx->omode) {
		ret = (a->bits == 64) ? cs_open(CS_ARCH_ARM64, mode, &ctx->cd) : cs_open(CS_ARCH_ARM, mode, &ctx->cd);
		if (ret) {
			ret = -1;
			goto beach;
		}
	}
	cs_option(ctx->cd, CS_OPT_SYNTAX, (a->syntax == RZ_ASM_SYNTAX_REGNUM) ? CS_OPT_SYNTAX_NOREGNAME : CS_OPT_SYNTAX_DEFAULT);
	cs_option(ctx->cd, CS_OPT_DETAIL, (a->features && *a->features) ? CS_OPT_ON : CS_OPT_OFF);
	cs_option(ctx->cd, CS_OPT_DETAIL, CS_OPT_ON);
	if (!buf) {
		goto beach;
	}
	int haa = hackyArmAsm(a, op, buf, len);
	if (haa > 0) {
		return haa;
	}

	n = cs_disasm(ctx->cd, buf, RZ_MIN(4, len), a->pc, 1, &insn);
	if (n < 1 || insn->size < 1) {
		ret = -1;
		goto beach;
	}
	if (op) {
		op->size = 0;
	}
	if (a->features && *a->features) {
		if (!check_features(a, insn) && op) {
			op->size = insn->size;
			rz_strbuf_set(&op->buf_asm, "illegal");
		}
	}
	if (op && !op->size) {
		op->size = insn->size;
		if (insn->id == ARM_INS_IT) {
			rz_arm_it_update_block(&ctx->it, insn);
		} else {
			rz_arm_it_update_nonblock(&ctx->it, insn);
		}
		if (thumb && rz_arm_it_apply_cond(&ctx->it, insn)) {
			char *tmpstr = rz_str_newf("%s%s",
				cs_insn_name(ctx->cd, insn->id),
				ARMCondCodeToString(insn->detail->arm.cc));
			rz_str_cpy(insn->mnemonic, tmpstr);
			free(tmpstr);
		}
		char *buf_asm = sdb_fmt("%s%s%s",
			insn->mnemonic,
			insn->op_str[0] ? " " : "",
			insn->op_str);
		if (!disp_hash) {
			rz_str_replace_char(buf_asm, '#', 0);
		}
		rz_strbuf_set(&op->buf_asm, buf_asm);
	}
	cs_free(insn, n);
beach:
	cs_close(&ctx->cd);
	if (op) {
		if (!*rz_strbuf_get(&op->buf_asm)) {
			rz_strbuf_set(&op->buf_asm, "invalid");
		}
		return op->size;
	}
	return ret;
}

static int assemble(RzAsm *a, RzAsmOp *op, const char *buf) {
	const bool is_thumb = (a->bits == 16);
	int opsize;
	ut32 opcode;
	if (a->bits == 64) {
		if (!arm64ass(buf, a->pc, &opcode)) {
			return -1;
		}
	} else {
		opcode = armass_assemble(buf, a->pc, is_thumb);
		if (a->bits != 32 && a->bits != 16) {
			RZ_LOG_ERROR("assembler: arm: cannot assemble instruction due invalid 'asm.bits' value (accepted only 16 or 32 bits).\n");
			return -1;
		}
	}
	if (opcode == UT32_MAX) {
		return -1;
	}
	ut8 opbuf[4];
	if (is_thumb) {
		const int o = opcode >> 16;
		opsize = o > 0 ? 4 : 2;
		if (opsize == 4) {
			if (a->big_endian) {
				rz_write_le16(opbuf, opcode >> 16);
				rz_write_le16(opbuf + 2, opcode & UT16_MAX);
			} else {
				rz_write_be32(opbuf, opcode);
			}
		} else if (opsize == 2) {
			if (a->big_endian) {
				rz_write_le16(opbuf, opcode & UT16_MAX);
			} else {
				rz_write_be16(opbuf, opcode & UT16_MAX);
			}
		}
	} else {
		opsize = 4;
		if (a->big_endian) {
			rz_write_le32(opbuf, opcode);
		} else {
			rz_write_be32(opbuf, opcode);
		}
	}
	rz_strbuf_setbin(&op->buf, opbuf, opsize);
	// XXX. thumb endian assembler needs no swap
	return opsize;
}

static bool arm_init(void **user) {
	ArmCSContext *ctx = RZ_NEW0(ArmCSContext);
	if (!ctx) {
		return false;
	}
	rz_arm_it_context_init(&ctx->it);
	ctx->cd = 0;
	ctx->omode = -1;
	ctx->obits = 32;
	*user = ctx;
	return true;
}

static bool arm_fini(void *user) {
	rz_return_val_if_fail(user, false);
	ArmCSContext *ctx = (ArmCSContext *)user;
	cs_close(&ctx->cd);
	rz_arm_it_context_fini(&ctx->it);
	free(ctx);
	return true;
}

static char *mnemonics(RzAsm *a, int id, bool json) {
	ArmCSContext *ctx = (ArmCSContext *)a->plugin_data;
	int i;
	a->cur->disassemble(a, NULL, NULL, -1);
	if (id != -1) {
		const char *name = cs_insn_name(ctx->cd, id);
		if (json) {
			return name ? rz_str_newf("[\"%s\"]\n", name) : NULL;
		}
		return name ? strdup(name) : NULL;
	}
	RzStrBuf *buf = rz_strbuf_new("");
	if (json) {
		rz_strbuf_append(buf, "[");
	}
	for (i = 1;; i++) {
		const char *op = cs_insn_name(ctx->cd, i);
		if (!op) {
			break;
		}
		if (json) {
			rz_strbuf_append(buf, "\"");
		}
		rz_strbuf_append(buf, op);
		if (json) {
			if (cs_insn_name(ctx->cd, i + 1)) {
				rz_strbuf_append(buf, "\",");
			} else {
				rz_strbuf_append(buf, "\"]\n");
			}
		} else {
			rz_strbuf_append(buf, "\n");
		}
	}
	return rz_strbuf_drain(buf);
}

RzAsmPlugin rz_asm_plugin_arm_cs = {
	.name = "arm",
	.desc = "Capstone ARM disassembler",
	.cpus = "v8,cortex,arm1176,cortexA72,cortexA8",
	.platforms = "bcm2835,omap3430",
	.features = "v8",
	.license = "BSD",
	.arch = "arm",
	.bits = 16 | 32 | 64,
	.endian = RZ_SYS_ENDIAN_LITTLE | RZ_SYS_ENDIAN_BIG,
	.disassemble = &disassemble,
	.mnemonics = mnemonics,
	.assemble = &assemble,
	.init = &arm_init,
	.fini = &arm_fini,
#if 0
	// arm32 and arm64
	"crypto,databarrier,divide,fparmv8,multpro,neon,t2extractpack,"
	"thumb2dsp,trustzone,v4t,v5t,v5te,v6,v6t2,v7,v8,vfp2,vfp3,vfp4,"
	"arm,mclass,notmclass,thumb,thumb1only,thumb2,prev8,fpvmlx,"
	"mulops,crc,dpvfp,v6m"
#endif
};

#ifndef RZ_PLUGIN_INCORE
RZ_API RzLibStruct rizin_plugin = {
	.type = RZ_LIB_TYPE_ASM,
	.data = &rz_asm_plugin_arm_cs,
	.version = RZ_VERSION
};
#endif
