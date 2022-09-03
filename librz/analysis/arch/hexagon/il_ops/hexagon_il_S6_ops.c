// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-03 08:20:53-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-02 14:24:46-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_s6_rol_i_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_xacc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_xacc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s6_vsplatrbp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_13, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_9, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_19 = SETG(Rdd_assoc_tmp, op_OR_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, op_ASSIGN_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_22 = SEQN(2, seq_20, empty_21);
	RzILOpEffect *for_23 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_22));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunehb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_10, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_14 = CAST(64, IL_FALSE, op_AND_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_14, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);
	RzILOpPure *op_ADD_23 = LET("const_pos4", DUP(const_pos4), ADD(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_23, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_24));
	RzILOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzILOpPure *op_AND_27 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_26);
	RzILOpPure *op_MUL_28 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_29 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_28, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(Rss, op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_30, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_32 = CAST(64, IL_FALSE, op_AND_31);
	RzILOpPure *op_AND_33 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_32, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, op_AND_33);
	RzILOpPure *op_ADD_35 = LET("const_pos4", DUP(const_pos4), ADD(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_36 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_35, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(cast_ut64_34, op_MUL_36);
	RzILOpPure *op_OR_38 = LOGOR(op_AND_27, op_LSHIFT_37);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *op_ASSIGN_39 = SETG(Rdd_assoc_tmp, op_OR_38);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *seq_41 = SEQN(4, seq_21, empty_22, op_ASSIGN_39, empty_40);
	RzILOpEffect *for_42 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_41));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunohb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_11 = LET("const_pos1", const_pos1, ADD(op_MUL_10, VARLP("const_pos1")));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_11, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_15, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_9, op_LSHIFT_19);
	RzILOpPure *op_ADD_24 = LET("const_pos4", DUP(const_pos4), ADD(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_25 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_26 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_25));
	RzILOpPure *op_NOT_27 = LOGNOT(op_LSHIFT_26);
	RzILOpPure *op_AND_28 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_27);
	RzILOpPure *op_MUL_29 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_30 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_29, VARLP("const_pos1")));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_30, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(Rss, op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_32, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_34 = CAST(64, IL_FALSE, op_AND_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_34, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, op_AND_35);
	RzILOpPure *op_ADD_37 = LET("const_pos4", DUP(const_pos4), ADD(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_38 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_37, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_36, op_MUL_38);
	RzILOpPure *op_OR_40 = LOGOR(op_AND_28, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc_tmp, op_OR_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_5, op_ASSIGN_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_41 = SETG(Rdd_assoc_tmp, op_OR_40);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *seq_43 = SEQN(4, seq_22, empty_23, op_ASSIGN_41, empty_42);
	RzILOpEffect *for_44 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_43));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_44);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>