// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-21 16:48:53-04:00
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
	// Declare: ut32 maxv;
	// Declare: ut32 minv;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_SUB_1 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_0, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_NEG_4 = NEG(op_LSHIFT_3);
	RzILOpPure *op_GT_6 = UGT(Rs, VARL("minv"));
	RzILOpPure *cond_7 = ITE(op_GT_6, DUP(Rs), VARL("minv"));
	RzILOpPure *op_LT_8 = ULT(VARL("maxv"), cond_7);
	RzILOpPure *op_GT_9 = UGT(DUP(Rs), VARL("minv"));
	RzILOpPure *cond_10 = ITE(op_GT_9, DUP(Rs), VARL("minv"));
	RzILOpPure *cond_11 = ITE(op_LT_8, VARL("maxv"), cond_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("maxv", op_SUB_1);
	RzILOpEffect *op_ASSIGN_5 = SETL("minv", op_NEG_4);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rd_assoc_tmp, cond_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_2, op_ASSIGN_5, op_ASSIGN_12, empty_13);

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
	// Declare: ut64 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st64 maxv;
	// Declare: st32 minv;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_SUB_1 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_0, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_NEG_4 = NEG(op_LSHIFT_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzILOpPure *cast_st64_10 = CAST(32, MSB(cast_st32_9), cast_st32_9);
	RzILOpPure *op_GT_11 = SGT(cast_st64_10, VARL("minv"));
	RzILOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rss), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *cond_17 = ITE(op_GT_11, cast_st64_16, VARL("minv"));
	RzILOpPure *op_LT_18 = SLT(VARL("maxv"), cond_17);
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(32, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_GT_24 = SGT(cast_st64_23, VARL("minv"));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(op_AND_27), op_AND_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzILOpPure *cond_30 = ITE(op_GT_24, cast_st64_29, VARL("minv"));
	RzILOpPure *cond_31 = ITE(op_LT_18, VARL("maxv"), cond_30);
	RzILOpPure *op_MUL_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_34));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("tmp"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_39 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_37, op_LSHIFT_40);
	RzILOpPure *op_LSHIFT_44 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_SUB_45 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_44, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzILOpPure *op_MUL_50 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_51, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_53 = CAST(32, MSB(op_AND_52), op_AND_52);
	RzILOpPure *cast_st64_54 = CAST(32, MSB(cast_st32_53), cast_st32_53);
	RzILOpPure *op_GT_55 = SGT(cast_st64_54, VARL("minv"));
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_57, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_59 = CAST(32, MSB(op_AND_58), op_AND_58);
	RzILOpPure *cast_st64_60 = CAST(64, MSB(cast_st32_59), cast_st32_59);
	RzILOpPure *cond_61 = ITE(op_GT_55, cast_st64_60, VARL("minv"));
	RzILOpPure *op_LT_62 = SLT(VARL("maxv"), cond_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_66 = CAST(32, MSB(op_AND_65), op_AND_65);
	RzILOpPure *cast_st64_67 = CAST(32, MSB(cast_st32_66), cast_st32_66);
	RzILOpPure *op_GT_68 = SGT(cast_st64_67, VARL("minv"));
	RzILOpPure *op_MUL_69 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_70, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_72 = CAST(32, MSB(op_AND_71), op_AND_71);
	RzILOpPure *cast_st64_73 = CAST(64, MSB(cast_st32_72), cast_st32_72);
	RzILOpPure *cond_74 = ITE(op_GT_68, cast_st64_73, VARL("minv"));
	RzILOpPure *cond_75 = ITE(op_LT_62, VARL("maxv"), cond_74);
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_78));
	RzILOpPure *op_NOT_80 = LOGNOT(op_LSHIFT_79);
	RzILOpPure *op_AND_81 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_80);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("tmp"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_83 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(op_AND_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_81, op_LSHIFT_84);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("maxv", op_SUB_1);
	RzILOpEffect *op_ASSIGN_5 = SETL("minv", op_NEG_4);
	RzILOpEffect *op_ASSIGN_32 = SETL("tmp", cond_31);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc_tmp, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *op_ASSIGN_46 = SETL("maxv", op_SUB_45);
	RzILOpEffect *op_ASSIGN_49 = SETL("minv", op_NEG_48);
	RzILOpEffect *op_ASSIGN_76 = SETL("tmp", cond_75);
	RzILOpEffect *empty_77 = EMPTY();
	RzILOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_2, op_ASSIGN_5, op_ASSIGN_32, empty_33, op_ASSIGN_42, empty_43, op_ASSIGN_46, op_ASSIGN_49, op_ASSIGN_76, empty_77, op_ASSIGN_86, empty_87);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>