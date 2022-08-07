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

RzILOpEffect *hex_il_op_s6_rol_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_vsplatrbp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_11 = CAST(64, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_AND_12 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_11, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_AND_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzIlOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_17 = SETG(Rdd_assoc, op_OR_16);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *seq_19 = SEQN(3, op_ASSIGN_17, empty_18, op_INC_3);
	RzIlOpEffect *for_20 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_19));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunehb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 2);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(op_MUL_8, VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_12 = CAST(64, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_12, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_AND_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);
	RzIlOpPure *op_ADD_20 = LET("const_pos4", const_pos4, ADD(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(op_ADD_20, VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_22 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_21));
	RzIlOpPure *op_NOT_23 = LOGNOT(op_LSHIFT_22);
	RzIlOpPure *op_AND_24 = LOGAND(DUP(Rdd), op_NOT_23);
	RzIlOpPure *op_MUL_25 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_26 = LET("const_pos8", const_pos8, MUL(op_MUL_25, VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(Rss, op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_29 = CAST(64, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_29, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_31 = CAST(64, IL_FALSE, op_AND_30);
	RzIlOpPure *op_ADD_32 = LET("const_pos4", const_pos4, ADD(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_33 = LET("const_pos8", const_pos8, MUL(op_ADD_32, VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_31, op_MUL_33);
	RzIlOpPure *op_OR_35 = LOGOR(op_AND_24, op_LSHIFT_34);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc, op_OR_35);
	RzIlOpEffect *empty_37 = EMPTY();
	RzIlOpEffect *seq_38 = SEQN(5, op_ASSIGN_18, empty_19, op_ASSIGN_36, empty_37, op_INC_3);
	RzIlOpEffect *for_39 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_38));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunohb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 2);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_9 = LET("const_pos1", const_pos1, ADD(op_MUL_8, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(op_ADD_9, VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzIlOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_13 = CAST(64, MSB(op_AND_12), op_AND_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_13, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzIlOpPure *op_OR_18 = LOGOR(op_AND_7, op_LSHIFT_17);
	RzIlOpPure *op_ADD_21 = LET("const_pos4", const_pos4, ADD(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(op_ADD_21, VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_23 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_22));
	RzIlOpPure *op_NOT_24 = LOGNOT(op_LSHIFT_23);
	RzIlOpPure *op_AND_25 = LOGAND(DUP(Rdd), op_NOT_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_MUL_26, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(op_ADD_27, VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(Rss, op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_31 = CAST(64, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_31, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_33 = CAST(64, IL_FALSE, op_AND_32);
	RzIlOpPure *op_ADD_34 = LET("const_pos4", const_pos4, ADD(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_35 = LET("const_pos8", const_pos8, MUL(op_ADD_34, VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_36 = SHIFTL0(cast_ut64_33, op_MUL_35);
	RzIlOpPure *op_OR_37 = LOGOR(op_AND_25, op_LSHIFT_36);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_19 = SETG(Rdd_assoc, op_OR_18);
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *op_ASSIGN_38 = SETG(Rdd_assoc, op_OR_37);
	RzIlOpEffect *empty_39 = EMPTY();
	RzIlOpEffect *seq_40 = SEQN(5, op_ASSIGN_19, empty_20, op_ASSIGN_38, empty_39, op_INC_3);
	RzIlOpEffect *for_41 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_40));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_41);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>