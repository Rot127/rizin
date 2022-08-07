// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 15:53:51-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_a7_clip(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 maxv;
	// Declare: ut32 minv;
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzIlOpPure *op_SUB_1 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_0, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_3 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzIlOpPure *op_NEG_4 = NEG(op_LSHIFT_3);
	RzIlOpPure *op_GT_6 = UGT(Rs, VARL("minv"));
	RzIlOpPure *cond_7 = ITE(op_GT_6, DUP(Rs), VARL("minv"));
	RzIlOpPure *op_LT_8 = ULT(VARL("maxv"), cond_7);
	RzIlOpPure *op_GT_9 = UGT(DUP(Rs), VARL("minv"));
	RzIlOpPure *cond_10 = ITE(op_GT_9, DUP(Rs), VARL("minv"));
	RzIlOpPure *cond_11 = ITE(op_LT_8, VARL("maxv"), cond_10);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("maxv", op_SUB_1);
	RzIlOpEffect *op_ASSIGN_5 = SETL("minv", op_NEG_4);
	RzIlOpEffect *op_ASSIGN_12 = SETG(Rd_assoc, cond_11);
	RzIlOpEffect *empty_13 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_2, op_ASSIGN_5, op_ASSIGN_12, empty_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a7_croundd_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a7_croundd_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a7_vclip(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: st64 maxv;
	// Declare: st32 minv;
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzIlOpPure *op_SUB_1 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_0, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_3 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzIlOpPure *op_NEG_4 = NEG(op_LSHIFT_3);
	RzIlOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzIlOpPure *cast_st64_10 = CAST(32, MSB(cast_st32_9), cast_st32_9);
	RzIlOpPure *op_GT_11 = SGT(cast_st64_10, VARL("minv"));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rss), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzIlOpPure *cond_17 = ITE(op_GT_11, cast_st64_16, VARL("minv"));
	RzIlOpPure *op_LT_18 = SLT(VARL("maxv"), cond_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzIlOpPure *cast_st64_23 = CAST(32, MSB(cast_st32_22), cast_st32_22);
	RzIlOpPure *op_GT_24 = SGT(cast_st64_23, VARL("minv"));
	RzIlOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzIlOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_28 = CAST(32, MSB(op_AND_27), op_AND_27);
	RzIlOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzIlOpPure *cond_30 = ITE(op_GT_24, cast_st64_29, VARL("minv"));
	RzIlOpPure *cond_31 = ITE(op_LT_18, VARL("maxv"), cond_30);
	RzIlOpPure *op_MUL_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_34));
	RzIlOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzIlOpPure *op_AND_37 = LOGAND(Rdd, op_NOT_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("tmp"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_39 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_40 = SHIFTL0(op_AND_38, op_MUL_39);
	RzIlOpPure *op_OR_41 = LOGOR(op_AND_37, op_LSHIFT_40);
	RzIlOpPure *op_LSHIFT_44 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzIlOpPure *op_SUB_45 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_44, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_47 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzIlOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzIlOpPure *op_MUL_50 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzIlOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_51, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_53 = CAST(32, MSB(op_AND_52), op_AND_52);
	RzIlOpPure *cast_st64_54 = CAST(32, MSB(cast_st32_53), cast_st32_53);
	RzIlOpPure *op_GT_55 = SGT(cast_st64_54, VARL("minv"));
	RzIlOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzIlOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_57, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_59 = CAST(32, MSB(op_AND_58), op_AND_58);
	RzIlOpPure *cast_st64_60 = CAST(64, MSB(cast_st32_59), cast_st32_59);
	RzIlOpPure *cond_61 = ITE(op_GT_55, cast_st64_60, VARL("minv"));
	RzIlOpPure *op_LT_62 = SLT(VARL("maxv"), cond_61);
	RzIlOpPure *op_MUL_63 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzIlOpPure *op_AND_65 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_64, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_66 = CAST(32, MSB(op_AND_65), op_AND_65);
	RzIlOpPure *cast_st64_67 = CAST(32, MSB(cast_st32_66), cast_st32_66);
	RzIlOpPure *op_GT_68 = SGT(cast_st64_67, VARL("minv"));
	RzIlOpPure *op_MUL_69 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzIlOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_70, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_72 = CAST(32, MSB(op_AND_71), op_AND_71);
	RzIlOpPure *cast_st64_73 = CAST(64, MSB(cast_st32_72), cast_st32_72);
	RzIlOpPure *cond_74 = ITE(op_GT_68, cast_st64_73, VARL("minv"));
	RzIlOpPure *cond_75 = ITE(op_LT_62, VARL("maxv"), cond_74);
	RzIlOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_79 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_78));
	RzIlOpPure *op_NOT_80 = LOGNOT(op_LSHIFT_79);
	RzIlOpPure *op_AND_81 = LOGAND(DUP(Rdd), op_NOT_80);
	RzIlOpPure *op_AND_82 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("tmp"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_83 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_84 = SHIFTL0(op_AND_82, op_MUL_83);
	RzIlOpPure *op_OR_85 = LOGOR(op_AND_81, op_LSHIFT_84);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("maxv", op_SUB_1);
	RzIlOpEffect *op_ASSIGN_5 = SETL("minv", op_NEG_4);
	RzIlOpEffect *op_ASSIGN_32 = SETL("tmp", cond_31);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzIlOpEffect *empty_43 = EMPTY();
	RzIlOpEffect *op_ASSIGN_46 = SETL("maxv", op_SUB_45);
	RzIlOpEffect *op_ASSIGN_49 = SETL("minv", op_NEG_48);
	RzIlOpEffect *op_ASSIGN_76 = SETL("tmp", cond_75);
	RzIlOpEffect *empty_77 = EMPTY();
	RzIlOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc, op_OR_85);
	RzIlOpEffect *empty_87 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_2, op_ASSIGN_5, op_ASSIGN_32, empty_33, op_ASSIGN_42, empty_43, op_ASSIGN_46, op_ASSIGN_49, op_ASSIGN_76, empty_77, op_ASSIGN_86, empty_87);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>