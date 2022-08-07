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

RzILOpEffect *hex_il_op_a6_vcmpbeq_notany(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos0 = UN(32, 0);
	// Declare: ut32 i;
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_LT_3 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_5 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_12 = CAST(8, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_EQ_13 = EQ(cast_st8_8, cast_st8_12);
	RzIlOpPure *op_NOT_20 = LOGNOT(Pd);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, const_pos0);
	RzIlOpEffect *op_ASSIGN_2 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_4 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_14 = SETG(Pd_assoc, const_pos0xff);
	RzIlOpEffect *seq_then_15 = SEQN(1, op_ASSIGN_14);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *branch_16 = BRANCH(op_EQ_13, seq_then_15, empty_17);
	RzIlOpEffect *seq_18 = SEQN(2, branch_16, op_INC_4);
	RzIlOpEffect *for_19 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_3, seq_18));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_NOT_20);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, for_19, op_ASSIGN_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a6_vminub_rdp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pe_assoc = ISA2REG(hi, "Pe", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pe, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_10 = CAST(8, IL_FALSE, op_AND_9);
	RzIlOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_14 = CAST(8, IL_FALSE, op_AND_13);
	RzIlOpPure *op_GT_15 = UGT(cast_ut8_10, cast_ut8_14);
	RzIlOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_GT_15);
	RzIlOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_16, VARL("i"));
	RzIlOpPure *op_OR_18 = LOGOR(op_AND_6, op_LSHIFT_17);
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_22 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_21));
	RzIlOpPure *op_NOT_23 = LOGNOT(op_LSHIFT_22);
	RzIlOpPure *op_AND_24 = LOGAND(Rdd, op_NOT_23);
	RzIlOpPure *op_MUL_25 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzIlOpPure *op_AND_27 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_28 = CAST(8, IL_FALSE, op_AND_27);
	RzIlOpPure *op_MUL_29 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzIlOpPure *op_AND_31 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_32 = CAST(8, IL_FALSE, op_AND_31);
	RzIlOpPure *op_LT_33 = ULT(cast_ut8_28, cast_ut8_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_37 = CAST(64, IL_FALSE, op_AND_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_39, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_41 = CAST(8, IL_FALSE, op_AND_40);
	RzIlOpPure *cond_42 = ITE(op_LT_33, cast_ut8_37, cast_ut8_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_42, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_AND_43);
	RzIlOpPure *op_MUL_45 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_46 = SHIFTL0(cast_ut64_44, op_MUL_45);
	RzIlOpPure *op_OR_47 = LOGOR(op_AND_24, op_LSHIFT_46);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_19 = SETG(Pe_assoc, op_OR_18);
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *op_ASSIGN_48 = SETG(Rdd_assoc, op_OR_47);
	RzIlOpEffect *empty_49 = EMPTY();
	RzIlOpEffect *seq_50 = SEQN(5, op_ASSIGN_19, empty_20, op_ASSIGN_48, empty_49, op_INC_3);
	RzIlOpEffect *for_51 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_50));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_51);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>