// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-06 11:05:56-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_m6_vabsdiffb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_15 = CAST(8, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_st8_11, cast_st8_15);
	RzIlOpPure *op_LT_17 = LET("const_pos0", const_pos0, ULT(op_SUB_16, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rtt), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_21 = CAST(64, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_25 = CAST(8, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_SUB_26 = SUB(cast_st8_21, cast_st8_25);
	RzIlOpPure *op_NEG_27 = NEG(op_SUB_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_31 = CAST(8, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_35 = CAST(8, MSB(op_AND_34), op_AND_34);
	RzIlOpPure *op_SUB_36 = SUB(cast_st8_31, cast_st8_35);
	RzIlOpPure *cond_37 = ITE(op_LT_17, op_NEG_27, op_SUB_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_37, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzIlOpPure *op_MUL_40 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzIlOpPure *op_OR_42 = LOGOR(op_AND_7, op_LSHIFT_41);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc, op_OR_42);
	RzIlOpEffect *empty_44 = EMPTY();
	RzIlOpEffect *seq_45 = SEQN(3, op_ASSIGN_43, empty_44, op_INC_3);
	RzIlOpEffect *for_46 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_45));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_46);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m6_vabsdiffub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_LT_17 = LET("const_pos0", const_pos0, ULT(op_SUB_16, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rtt), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_21 = CAST(64, IL_FALSE, op_AND_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_25 = CAST(8, IL_FALSE, op_AND_24);
	RzIlOpPure *op_SUB_26 = SUB(cast_ut8_21, cast_ut8_25);
	RzIlOpPure *op_NEG_27 = NEG(op_SUB_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_35 = CAST(8, IL_FALSE, op_AND_34);
	RzIlOpPure *op_SUB_36 = SUB(cast_ut8_31, cast_ut8_35);
	RzIlOpPure *cond_37 = ITE(op_LT_17, op_NEG_27, op_SUB_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_37, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzIlOpPure *op_MUL_40 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzIlOpPure *op_OR_42 = LOGOR(op_AND_7, op_LSHIFT_41);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc, op_OR_42);
	RzIlOpEffect *empty_44 = EMPTY();
	RzIlOpEffect *seq_45 = SEQN(3, op_ASSIGN_43, empty_44, op_INC_3);
	RzIlOpEffect *for_46 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_45));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_46);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>