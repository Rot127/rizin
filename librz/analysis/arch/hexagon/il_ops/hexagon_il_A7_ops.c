// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_a7_clip(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 maxv;
	// Declare: st32 minv;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_2 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_1, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, MSB(DUP(op_SUB_2)), op_SUB_2);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NEG_6 = NEG(op_LSHIFT_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_NEG_6)), op_NEG_6);
	RzILOpPure *op_GT_9 = SGT(Rs, VARL("minv"));
	RzILOpPure *cond_10 = ITE(op_GT_9, DUP(Rs), VARL("minv"));
	RzILOpPure *op_LT_11 = SLT(VARL("maxv"), cond_10);
	RzILOpPure *op_GT_12 = SGT(DUP(Rs), VARL("minv"));
	RzILOpPure *cond_13 = ITE(op_GT_12, DUP(Rs), VARL("minv"));
	RzILOpPure *cond_14 = ITE(op_LT_11, VARL("maxv"), cond_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("maxv", cast_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("minv", cast_8);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_15, empty_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a7_croundd_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a7_croundd_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a7_vclip(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 maxv;
	// Declare: st32 minv;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_2 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_1, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, MSB(DUP(op_SUB_2)), op_SUB_2);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NEG_6 = NEG(op_LSHIFT_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_NEG_6)), op_NEG_6);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_15 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_14 = SGT(cast_st64_13, cast_15);
	RzILOpPure *op_MUL_16 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_21 = ITE(op_GT_14, cast_st64_20, cast_22);
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *op_LT_23 = SLT(cast_24, cond_21);
	RzILOpPure *op_MUL_25 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_30 = SGT(cast_st64_29, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *cast_38 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_37 = ITE(op_GT_30, cast_st64_36, cast_38);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *cond_39 = ITE(op_LT_23, cast_40, cond_37);
	RzILOpPure *cast_42 = CAST(4, MSB(DUP(cond_39)), cond_39);
	RzILOpPure *op_MUL_44 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_44));
	RzILOpPure *op_NOT_46 = LOGNOT(op_LSHIFT_45);
	RzILOpPure *op_AND_47 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_46);
	RzILOpPure *cast_49 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_48 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_50 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(op_AND_48, op_MUL_50);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_47, op_LSHIFT_51);
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_56 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cast_58 = CAST(32, MSB(DUP(op_SUB_56)), op_SUB_56);
	RzILOpPure *op_LSHIFT_59 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NEG_60 = NEG(op_LSHIFT_59);
	RzILOpPure *cast_62 = CAST(32, MSB(DUP(op_NEG_60)), op_NEG_60);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_66 = CAST(32, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *cast_st64_67 = CAST(64, MSB(DUP(cast_st32_66)), cast_st32_66);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_68 = SGT(cast_st64_67, cast_69);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(DUP(cast_st32_73)), cast_st32_73);
	RzILOpPure *cast_76 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_75 = ITE(op_GT_68, cast_st64_74, cast_76);
	RzILOpPure *cast_78 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *op_LT_77 = SLT(cast_78, cond_75);
	RzILOpPure *op_MUL_79 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_80, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_82 = CAST(32, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(DUP(cast_st32_82)), cast_st32_82);
	RzILOpPure *cast_85 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_84 = SGT(cast_st64_83, cast_85);
	RzILOpPure *op_MUL_86 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_87, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_89 = CAST(32, MSB(DUP(op_AND_88)), op_AND_88);
	RzILOpPure *cast_st64_90 = CAST(64, MSB(DUP(cast_st32_89)), cast_st32_89);
	RzILOpPure *cast_92 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_91 = ITE(op_GT_84, cast_st64_90, cast_92);
	RzILOpPure *cast_94 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *cond_93 = ITE(op_LT_77, cast_94, cond_91);
	RzILOpPure *cast_96 = CAST(4, MSB(DUP(cond_93)), cond_93);
	RzILOpPure *op_MUL_98 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_98));
	RzILOpPure *op_NOT_100 = LOGNOT(op_LSHIFT_99);
	RzILOpPure *op_AND_101 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_100);
	RzILOpPure *cast_103 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_102 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_104 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_105 = SHIFTL0(op_AND_102, op_MUL_104);
	RzILOpPure *op_OR_106 = LOGOR(op_AND_101, op_LSHIFT_105);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("maxv", cast_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("minv", cast_8);
	RzILOpEffect *op_ASSIGN_41 = SETL("tmp", cast_42);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *op_ASSIGN_53 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETL("maxv", cast_58);
	RzILOpEffect *op_ASSIGN_61 = SETL("minv", cast_62);
	RzILOpEffect *op_ASSIGN_95 = SETL("tmp", cast_96);
	RzILOpEffect *empty_97 = EMPTY();
	RzILOpEffect *op_ASSIGN_107 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_106);
	RzILOpEffect *empty_108 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(13, imm_assign_0, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_41, empty_43, op_ASSIGN_53, empty_54, op_ASSIGN_57, op_ASSIGN_61, op_ASSIGN_95, empty_97, op_ASSIGN_107, empty_108);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>