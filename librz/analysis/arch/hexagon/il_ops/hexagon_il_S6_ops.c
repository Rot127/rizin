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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp2319;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(cast_st8_16)), cast_st8_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_18, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2319", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_24, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunehb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2320;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", const_pos2, MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st8_19 = CAST(8, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(cast_st8_19)), cast_st8_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_21, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos8", DUP(const_pos8), MUL(cast_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_29 = LET("const_pos4", DUP(const_pos4), ADD(cast_30, VARLP("const_pos4")));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_29, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_32 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_31));
	RzILOpPure *op_NOT_33 = LOGNOT(op_LSHIFT_32);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_NOT_33);
	RzILOpPure *op_AND_34 = LOGAND(VARG(Rdd_assoc_tmp), cast_35);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos2", DUP(const_pos2), MUL(cast_37, VARLP("const_pos2")));
	RzILOpPure *op_MUL_38 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_36, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(Rss, op_MUL_38);
	RzILOpPure *cast_41 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st8_42 = CAST(8, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(64, MSB(DUP(cast_st8_42)), cast_st8_42);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_44, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_46 = LET("const_pos4", DUP(const_pos4), ADD(cast_47, VARLP("const_pos4")));
	RzILOpPure *op_MUL_48 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_46, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_MUL_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_34, op_LSHIFT_49);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2320", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_50);
	RzILOpEffect *empty_52 = EMPTY();
	RzILOpEffect *seq_53 = SEQN(4, op_ASSIGN_27, empty_28, op_ASSIGN_51, empty_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_6, seq_53);
	RzILOpEffect *for_56 = REPEAT(op_LT_2, seq_54);
	RzILOpEffect *seq_55 = SEQN(2, op_ASSIGN_0, for_56);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunohb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2321;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", const_pos2, MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_ADD_15 = LET("const_pos1", const_pos1, ADD(op_MUL_13, VARLP("const_pos1")));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_15, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(cast_st8_20)), cast_st8_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_22, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_11, op_LSHIFT_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_30 = LET("const_pos4", DUP(const_pos4), ADD(cast_31, VARLP("const_pos4")));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_30, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_NOT_34);
	RzILOpPure *op_AND_35 = LOGAND(VARG(Rdd_assoc_tmp), cast_36);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos2", DUP(const_pos2), MUL(cast_38, VARLP("const_pos2")));
	RzILOpPure *op_ADD_39 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_37, VARLP("const_pos1")));
	RzILOpPure *op_MUL_40 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_39, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(Rss, op_MUL_40);
	RzILOpPure *cast_43 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st8_44 = CAST(8, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_46 = CAST(64, MSB(DUP(cast_st8_44)), cast_st8_44);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_46, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_48 = LET("const_pos4", DUP(const_pos4), ADD(cast_49, VARLP("const_pos4")));
	RzILOpPure *op_MUL_50 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_48, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_47, op_MUL_50);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_35, op_LSHIFT_51);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2321", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_53 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(4, op_ASSIGN_28, empty_29, op_ASSIGN_53, empty_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_6, seq_55);
	RzILOpEffect *for_58 = REPEAT(op_LT_2, seq_56);
	RzILOpEffect *seq_57 = SEQN(2, op_ASSIGN_0, for_58);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_57);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>