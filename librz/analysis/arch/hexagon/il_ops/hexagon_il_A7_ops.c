// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 17:23:53-04:00
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
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("minv"));
	RzILOpPure *op_GT_9 = UGT(Rs, cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("minv"));
	RzILOpPure *cond_11 = ITE(op_GT_9, DUP(Rs), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("maxv"));
	RzILOpPure *op_LT_13 = ULT(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("minv"));
	RzILOpPure *op_GT_15 = UGT(DUP(Rs), cast_16);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("minv"));
	RzILOpPure *cond_17 = ITE(op_GT_15, DUP(Rs), cast_18);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("maxv"));
	RzILOpPure *cond_19 = ITE(op_LT_13, cast_20, cond_17);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("maxv", cast_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("minv", cast_8);
	RzILOpEffect *op_ASSIGN_21 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_19);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_21, empty_22);

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
	RzILOpPure *cast_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_15 = SGT(cast_st64_14, cast_16);
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_23 = ITE(op_GT_15, cast_st64_22, cast_24);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *op_LT_25 = SLT(cast_26, cond_23);
	RzILOpPure *op_MUL_27 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_33 = SGT(cast_st64_32, cast_34);
	RzILOpPure *op_MUL_35 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(DUP(cast_st32_39)), cast_st32_39);
	RzILOpPure *cast_42 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_41 = ITE(op_GT_33, cast_st64_40, cast_42);
	RzILOpPure *cast_44 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *cond_43 = ITE(op_LT_25, cast_44, cond_41);
	RzILOpPure *cast_46 = CAST(4, MSB(DUP(cond_43)), cond_43);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(64, IL_FALSE, op_NOT_50);
	RzILOpPure *op_AND_51 = LOGAND(VARG(Rdd_assoc_tmp), cast_52);
	RzILOpPure *cast_54 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_54, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(op_AND_53, op_MUL_55);
	RzILOpPure *cast_58 = CAST(64, IL_FALSE, op_LSHIFT_56);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_51, cast_58);
	RzILOpPure *op_LSHIFT_61 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_62 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_61, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(32, MSB(DUP(op_SUB_62)), op_SUB_62);
	RzILOpPure *op_LSHIFT_65 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NEG_66 = NEG(op_LSHIFT_65);
	RzILOpPure *cast_68 = CAST(32, MSB(DUP(op_NEG_66)), op_NEG_66);
	RzILOpPure *op_MUL_69 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *cast_72 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st32_73 = CAST(32, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(DUP(cast_st32_73)), cast_st32_73);
	RzILOpPure *cast_76 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_75 = SGT(cast_st64_74, cast_76);
	RzILOpPure *op_MUL_77 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_78 = SHIFTR0(DUP(Rss), op_MUL_77);
	RzILOpPure *cast_80 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_79 = LOGAND(op_RSHIFT_78, cast_80);
	RzILOpPure *cast_st32_81 = CAST(32, MSB(DUP(op_AND_79)), op_AND_79);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(DUP(cast_st32_81)), cast_st32_81);
	RzILOpPure *cast_84 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_83 = ITE(op_GT_75, cast_st64_82, cast_84);
	RzILOpPure *cast_86 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *op_LT_85 = SLT(cast_86, cond_83);
	RzILOpPure *op_MUL_87 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_88 = SHIFTR0(DUP(Rss), op_MUL_87);
	RzILOpPure *cast_90 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_89 = LOGAND(op_RSHIFT_88, cast_90);
	RzILOpPure *cast_st32_91 = CAST(32, MSB(DUP(op_AND_89)), op_AND_89);
	RzILOpPure *cast_st64_92 = CAST(64, MSB(DUP(cast_st32_91)), cast_st32_91);
	RzILOpPure *cast_94 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *op_GT_93 = SGT(cast_st64_92, cast_94);
	RzILOpPure *op_MUL_95 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_96 = SHIFTR0(DUP(Rss), op_MUL_95);
	RzILOpPure *cast_98 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_97 = LOGAND(op_RSHIFT_96, cast_98);
	RzILOpPure *cast_st32_99 = CAST(32, MSB(DUP(op_AND_97)), op_AND_97);
	RzILOpPure *cast_st64_100 = CAST(64, MSB(DUP(cast_st32_99)), cast_st32_99);
	RzILOpPure *cast_102 = CAST(64, MSB(DUP(VARL("minv"))), VARL("minv"));
	RzILOpPure *cond_101 = ITE(op_GT_93, cast_st64_100, cast_102);
	RzILOpPure *cast_104 = CAST(64, MSB(DUP(VARL("maxv"))), VARL("maxv"));
	RzILOpPure *cond_103 = ITE(op_LT_85, cast_104, cond_101);
	RzILOpPure *cast_106 = CAST(4, MSB(DUP(cond_103)), cond_103);
	RzILOpPure *op_MUL_108 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_109 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_108));
	RzILOpPure *op_NOT_110 = LOGNOT(op_LSHIFT_109);
	RzILOpPure *cast_112 = CAST(64, IL_FALSE, op_NOT_110);
	RzILOpPure *op_AND_111 = LOGAND(VARG(Rdd_assoc_tmp), cast_112);
	RzILOpPure *cast_114 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_113 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_114, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_115 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_116 = SHIFTL0(op_AND_113, op_MUL_115);
	RzILOpPure *cast_118 = CAST(64, IL_FALSE, op_LSHIFT_116);
	RzILOpPure *op_OR_117 = LOGOR(op_AND_111, cast_118);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("maxv", cast_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("minv", cast_8);
	RzILOpEffect *op_ASSIGN_45 = SETL("tmp", cast_46);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *op_ASSIGN_59 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_57);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *op_ASSIGN_63 = SETL("maxv", cast_64);
	RzILOpEffect *op_ASSIGN_67 = SETL("minv", cast_68);
	RzILOpEffect *op_ASSIGN_105 = SETL("tmp", cast_106);
	RzILOpEffect *empty_107 = EMPTY();
	RzILOpEffect *op_ASSIGN_119 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_117);
	RzILOpEffect *empty_120 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(13, imm_assign_0, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_45, empty_47, op_ASSIGN_59, empty_60, op_ASSIGN_63, op_ASSIGN_67, op_ASSIGN_105, empty_107, op_ASSIGN_119, empty_120);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>