// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-15 11:57:41-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_s2_addasl_rrri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_allocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_neg8 = UN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(Rx, VARLP("const_neg8")));
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_3, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, fp);
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_4, cast_ut32_5);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(op_OR_6, op_LSHIFT_8);
	RzILOpPure *op_SUB_13 = SUB(VARL("EA"), VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_XOR_9 = STOREW(VARL("EA"), op_XOR_9);
	RzILOpEffect *op_ASSIGN_10 = SETG(fp_assoc, EA);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_14 = SETG(Rx_assoc, op_SUB_13);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_1, empty_2, ms_op_XOR_9, op_ASSIGN_10, empty_11, empty_12, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *op_LSHIFT_12 = SHIFTL0(cast_st16_11, VARL("u"));
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_LSHIFT_12, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzILOpPure *cast_st64_12 = CAST(64, IL_FALSE, cast_st32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_st64_12, VARL("u"));
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_LSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, MSB(Rss), DUP(Rss));
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, cond_12);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_ADD_13 = ADD(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_ADD_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_AND_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_SUB_13 = SUB(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_SUB_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_OR_13 = LOGOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_OR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_XOR_13 = LOGXOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_XOR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_ADD_15 = ADD(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_ADD_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_AND_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_SUB_15 = SUB(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_SUB_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_OR_15 = LOGOR(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_OR_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st16_16 = CAST(16, MSB(cast_st16_15), cast_st16_15);
	RzILOpPure *cast_st64_17 = CAST(32, IL_FALSE, cast_st16_16);
	RzILOpPure *op_NE_18 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_19 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_18, c_call_19, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_21 = NEG(cond_20);
	RzILOpPure *op_SUB_22 = LET("const_pos1", const_pos1, SUB(op_NEG_21, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_st64_17, op_SUB_22);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *cast_st16_29 = CAST(16, MSB(cast_st16_28), cast_st16_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st16_29), cast_st16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_32 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_31, c_call_32, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_st64_30, cond_33);
	RzILOpPure *cond_35 = ITE(op_LT_11, op_RSHIFT_24, op_LSHIFT_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_35, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_MUL_38 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_37, op_MUL_38);
	RzILOpPure *op_OR_40 = LOGOR(op_AND_7, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_41 = SETG(Rdd_assoc, op_OR_40);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *seq_43 = SEQN(3, op_ASSIGN_41, empty_42, op_INC_3);
	RzILOpEffect *for_44 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_43));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *cast_st32_17 = CAST(32, MSB(cast_st64_16), cast_st64_16);
	RzILOpPure *cast_st64_18 = CAST(64, IL_FALSE, cast_st32_17);
	RzILOpPure *op_NE_19 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_19, c_call_20, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *op_SUB_23 = LET("const_pos1", const_pos1, SUB(op_NEG_22, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(cast_st64_18, op_SUB_23);
	RzILOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_24, VARLP("const_pos1")));
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st32_29), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(cast_st64_30), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);
	RzILOpPure *op_NE_33 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_33, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_36 = SHIFTL0(cast_st64_32, cond_35);
	RzILOpPure *cond_37 = ITE(op_LT_11, op_RSHIFT_25, op_LSHIFT_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_7, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(3, op_ASSIGN_42, empty_43, op_INC_3);
	RzILOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(Rss), DUP(Rss));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st64_0, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc, op_RSHIFT_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_AND_2 = LOGAND(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_SUB_2 = SUB(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc, op_SUB_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_OR_2 = LOGOR(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 tmp;
	// Declare: ut8 rnd;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(Rss), DUP(Rss));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(VARL("tmp"), VARLP("const_pos1")));
	RzILOpPure *cast_st64_5 = CAST(8, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_RSHIFT_6 = LET("const_pos1", const_pos1, SHIFTR0(cast_st64_5, VARLP("const_pos1")));
	RzILOpPure *op_ADD_7 = ADD(op_RSHIFT_6, VARL("rnd"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("tmp", op_RSHIFT_1);
	RzILOpEffect *op_ASSIGN_4 = SETL("rnd", op_AND_3);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_ADD_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, op_ASSIGN_4, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st32_0, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_RSHIFT_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_AND_2 = LOGAND(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_SUB_2 = SUB(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_SUB_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_OR_2 = LOGOR(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(32, IL_FALSE, cast_st32_0);
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_1, VARL("u"));
	RzILOpPure *op_ADD_3 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_2, VARLP("const_pos1")));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(op_ADD_3), op_ADD_3);
	RzILOpPure *op_RSHIFT_5 = LET("const_pos1", const_pos1, SHIFTR0(cast_st64_4, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, op_RSHIFT_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzILOpPure *cast_st64_12 = CAST(32, IL_FALSE, cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("u"));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(op_RSHIFT_13, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_17, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzILOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(cast_st16_11, VARL("u"));
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzILOpPure *cast_st64_12 = CAST(64, IL_FALSE, cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("u"));
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, MSB(Rss), DUP(Rss));
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, cond_12);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_ADD_13 = ADD(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_ADD_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_AND_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_SUB_13 = SUB(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_SUB_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_OR_13 = LOGOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_OR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_st64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_XOR_13 = LOGXOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_XOR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_ADD_15 = ADD(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_ADD_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_AND_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_SUB_15 = SUB(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_SUB_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_st64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_st64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_OR_15 = LOGOR(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_OR_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *cast_st32_17 = CAST(32, MSB(cast_st64_16), cast_st64_16);
	RzILOpPure *cast_st64_18 = CAST(32, IL_FALSE, cast_st32_17);
	RzILOpPure *op_NE_19 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_19, c_call_20, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *op_SUB_23 = LET("const_pos1", const_pos1, SUB(op_NEG_22, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_st64_18, op_SUB_23);
	RzILOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_24, VARLP("const_pos1")));
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st32_29), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(cast_st64_30), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);
	RzILOpPure *op_NE_33 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_33, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(cast_st64_32, cond_35);
	RzILOpPure *cond_37 = ITE(op_LT_11, op_LSHIFT_25, op_RSHIFT_36);
	RzILOpPure *op_MUL_38 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(cond_37, op_MUL_38);
	RzILOpPure *op_AND_40 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_39, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(32, IL_FALSE, op_AND_40);
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_41, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_43 = CAST(64, IL_FALSE, op_AND_42);
	RzILOpPure *op_MUL_44 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(cast_ut64_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_7, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_47 = SETG(Rd_assoc, op_OR_46);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(3, op_ASSIGN_47, empty_48, op_INC_3);
	RzILOpEffect *for_50 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_49));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st16_16 = CAST(16, MSB(cast_st16_15), cast_st16_15);
	RzILOpPure *cast_st64_17 = CAST(32, IL_FALSE, cast_st16_16);
	RzILOpPure *op_NE_18 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_19 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_18, c_call_19, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_21 = NEG(cond_20);
	RzILOpPure *op_SUB_22 = LET("const_pos1", const_pos1, SUB(op_NEG_21, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_st64_17, op_SUB_22);
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *cast_st16_29 = CAST(16, MSB(cast_st16_28), cast_st16_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st16_29), cast_st16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_32 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_31, c_call_32, VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(cast_st64_30, cond_33);
	RzILOpPure *cond_35 = ITE(op_LT_11, op_LSHIFT_24, op_RSHIFT_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_35, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_MUL_38 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_37, op_MUL_38);
	RzILOpPure *op_OR_40 = LOGOR(op_AND_7, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_41 = SETG(Rdd_assoc, op_OR_40);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *seq_43 = SEQN(3, op_ASSIGN_41, empty_42, op_INC_3);
	RzILOpEffect *for_44 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_43));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *cast_st32_17 = CAST(32, MSB(cast_st64_16), cast_st64_16);
	RzILOpPure *cast_st64_18 = CAST(64, IL_FALSE, cast_st32_17);
	RzILOpPure *op_NE_19 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_19, c_call_20, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *op_SUB_23 = LET("const_pos1", const_pos1, SUB(op_NEG_22, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_st64_18, op_SUB_23);
	RzILOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_24, VARLP("const_pos1")));
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st32_29), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(cast_st64_30), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);
	RzILOpPure *op_NE_33 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_33, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(cast_st64_32, cond_35);
	RzILOpPure *cond_37 = ITE(op_LT_11, op_LSHIFT_25, op_RSHIFT_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_7, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(3, op_ASSIGN_42, empty_43, op_INC_3);
	RzILOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_brev(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_brevp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cabacdecbin(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cl0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *c_call_1 = HEX_CLO32(op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, c_call_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_cl0p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cl1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *c_call_0 = HEX_CLO32(Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, c_call_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_cl1p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_clb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *c_call_0 = HEX_CLO32(Rs);
	RzILOpPure *op_NOT_1 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_2 = HEX_CLO32(op_NOT_1);
	RzILOpPure *op_GT_3 = UGT(c_call_0, c_call_2);
	RzILOpPure *c_call_4 = HEX_CLO32(DUP(Rs));
	RzILOpPure *op_NOT_5 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_6 = HEX_CLO32(op_NOT_5);
	RzILOpPure *cond_7 = ITE(op_GT_3, c_call_4, c_call_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc, cond_7);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbnorm(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *c_call_2 = HEX_CLO32(DUP(Rs));
	RzILOpPure *op_NOT_3 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_4 = HEX_CLO32(op_NOT_3);
	RzILOpPure *op_GT_5 = UGT(c_call_2, c_call_4);
	RzILOpPure *c_call_6 = HEX_CLO32(DUP(Rs));
	RzILOpPure *op_NOT_7 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_8 = HEX_CLO32(op_NOT_7);
	RzILOpPure *cond_9 = ITE(op_GT_5, c_call_6, c_call_8);
	RzILOpPure *op_SUB_10 = LET("const_pos1", const_pos1, SUB(cond_9, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, const_pos0);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc, op_SUB_10);
	RzILOpEffect *seq_then_12 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_14 = SEQN(1, op_ASSIGN_11);
	RzILOpEffect *branch_13 = BRANCH(op_EQ_0, seq_then_12, seq_else_14);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_clrbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NOT_1 = LOGNOT(op_LSHIFT_0);
	RzILOpPure *op_AND_2 = LOGAND(Rs, op_NOT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clrbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_3 = LET("const_pos0", const_pos0, ULT(cond_2, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_4 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *op_NE_6 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_7 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_8 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, c_call_7, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_9 = NEG(cond_8);
	RzILOpPure *op_SUB_10 = LET("const_pos1", const_pos1, SUB(op_NEG_9, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_5, op_SUB_10);
	RzILOpPure *op_RSHIFT_12 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_11, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_13 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NE_15 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_15, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, cond_17);
	RzILOpPure *cond_19 = ITE(op_LT_3, op_RSHIFT_12, op_LSHIFT_18);
	RzILOpPure *op_NOT_20 = LOGNOT(cond_19);
	RzILOpPure *op_AND_21 = LOGAND(Rs, op_NOT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_22 = SETG(Rd_assoc, op_AND_21);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_ct0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct0p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct1p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_deinterleave(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractu_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractup_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insert(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insert_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insertp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insertp_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_interleave(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lfsp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, cond_12);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_ADD_13 = ADD(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_ADD_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_AND_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_SUB_13 = SUB(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_SUB_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_OR_13 = LOGOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_OR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_RSHIFT_9, op_LSHIFT_11);
	RzILOpPure *op_XOR_13 = LOGXOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_XOR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_ADD_15 = ADD(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_ADD_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_AND_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_SUB_15 = SUB(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_SUB_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);
	RzILOpPure *op_OR_15 = LOGOR(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_OR_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzILOpPure *cast_ut16_16 = CAST(16, IL_FALSE, cast_ut16_15);
	RzILOpPure *cast_ut64_17 = CAST(32, IL_FALSE, cast_ut16_16);
	RzILOpPure *op_NE_18 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_19 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_18, c_call_19, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_21 = NEG(cond_20);
	RzILOpPure *op_SUB_22 = LET("const_pos1", const_pos1, SUB(op_NEG_21, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_17, op_SUB_22);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *cast_ut16_29 = CAST(16, IL_FALSE, cast_ut16_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_32 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_31, c_call_32, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_30, cond_33);
	RzILOpPure *cond_35 = ITE(op_LT_11, op_RSHIFT_24, op_LSHIFT_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_35, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_MUL_38 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_37, op_MUL_38);
	RzILOpPure *op_OR_40 = LOGOR(op_AND_7, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_41 = SETG(Rdd_assoc, op_OR_40);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *seq_43 = SEQN(3, op_ASSIGN_41, empty_42, op_INC_3);
	RzILOpEffect *for_44 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_43));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *cast_ut32_17 = CAST(32, IL_FALSE, cast_ut64_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, cast_ut32_17);
	RzILOpPure *op_NE_19 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_19, c_call_20, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *op_SUB_23 = LET("const_pos1", const_pos1, SUB(op_NEG_22, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(cast_ut64_18, op_SUB_23);
	RzILOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_24, VARLP("const_pos1")));
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut32_29);
	RzILOpPure *cast_ut32_31 = CAST(32, IL_FALSE, cast_ut64_30);
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, cast_ut32_31);
	RzILOpPure *op_NE_33 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_33, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_36 = SHIFTL0(cast_ut64_32, cond_35);
	RzILOpPure *cond_37 = ITE(op_LT_11, op_RSHIFT_25, op_LSHIFT_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_7, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(3, op_ASSIGN_42, empty_43, op_INC_3);
	RzILOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_11 = CAST(16, IL_FALSE, op_AND_10);
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(cast_ut16_11, VARL("u"));
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, op_AND_10);
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_12, VARL("u"));
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, cond_12);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_ADD_13 = ADD(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_ADD_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_AND_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_SUB_13 = SUB(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_SUB_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_OR_13 = LOGOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_OR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_6 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_7 = LET("const_pos1", const_pos1, SUB(op_NEG_6, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_ut64_5, op_SUB_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_10, VARL("shamt"));
	RzILOpPure *cond_12 = ITE(op_LT_4, op_LSHIFT_9, op_RSHIFT_11);
	RzILOpPure *op_XOR_13 = LOGXOR(Rxx, cond_12);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rxx_assoc, op_XOR_13);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_ADD_15 = ADD(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_ADD_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_AND_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_SUB_15 = SUB(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_SUB_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_LSHIFT_10, op_RSHIFT_13);
	RzILOpPure *op_OR_15 = LOGOR(Rx, cond_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rx_assoc, op_OR_15);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzILOpPure *cast_ut16_16 = CAST(16, IL_FALSE, cast_ut16_15);
	RzILOpPure *cast_ut64_17 = CAST(32, IL_FALSE, cast_ut16_16);
	RzILOpPure *op_NE_18 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_19 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_18, c_call_19, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_21 = NEG(cond_20);
	RzILOpPure *op_SUB_22 = LET("const_pos1", const_pos1, SUB(op_NEG_21, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_17, op_SUB_22);
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *cast_ut16_29 = CAST(16, IL_FALSE, cast_ut16_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_32 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_31, c_call_32, VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(cast_ut64_30, cond_33);
	RzILOpPure *cond_35 = ITE(op_LT_11, op_LSHIFT_24, op_RSHIFT_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_35, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_MUL_38 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_37, op_MUL_38);
	RzILOpPure *op_OR_40 = LOGOR(op_AND_7, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_41 = SETG(Rdd_assoc, op_OR_40);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *seq_43 = SEQN(3, op_ASSIGN_41, empty_42, op_INC_3);
	RzILOpEffect *for_44 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_43));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_11 = LET("const_pos0", const_pos0, ULT(cond_10, VARLP("const_pos0")));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *cast_ut32_17 = CAST(32, IL_FALSE, cast_ut64_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, cast_ut32_17);
	RzILOpPure *op_NE_19 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_19, c_call_20, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *op_SUB_23 = LET("const_pos1", const_pos1, SUB(op_NEG_22, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_18, op_SUB_23);
	RzILOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(op_LSHIFT_24, VARLP("const_pos1")));
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut32_29);
	RzILOpPure *cast_ut32_31 = CAST(32, IL_FALSE, cast_ut64_30);
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, cast_ut32_31);
	RzILOpPure *op_NE_33 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_33, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(cast_ut64_32, cond_35);
	RzILOpPure *cond_37 = ITE(op_LT_11, op_LSHIFT_25, op_RSHIFT_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_7, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(3, op_ASSIGN_42, empty_43, op_INC_3);
	RzILOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_mask(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_1 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_0, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(op_SUB_1, VARL("U"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, op_LSHIFT_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_packhl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(DUP(Rdd), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(DUP(Rdd), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(DUP(Rdd), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc, op_OR_57);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_parityp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerff_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerff_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerffnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerft_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerft_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerftnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerif_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerif_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerifnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerit_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerit_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstoreritnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_setbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_OR_1 = LOGOR(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_setbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_3 = LET("const_pos0", const_pos0, ULT(cond_2, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_4 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *op_NE_6 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_7 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_8 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, c_call_7, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_9 = NEG(cond_8);
	RzILOpPure *op_SUB_10 = LET("const_pos1", const_pos1, SUB(op_NEG_9, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_5, op_SUB_10);
	RzILOpPure *op_RSHIFT_12 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_11, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_13 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NE_15 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_15, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, cond_17);
	RzILOpPure *cond_19 = ITE(op_LT_3, op_RSHIFT_12, op_LSHIFT_18);
	RzILOpPure *op_OR_20 = LOGOR(Rs, cond_19);

	// WRITE
	RzILOpEffect *op_ASSIGN_21 = SETG(Rd_assoc, op_OR_20);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_5 = LET("const_pos8", const_pos8, MUL(op_MUL_4, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_5));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(Rdd, op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(op_MUL_9, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(64, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_13, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(op_MUL_16, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_15, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_8, op_LSHIFT_18);
	RzILOpPure *op_MUL_22 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_23 = LET("const_pos1", const_pos1, ADD(op_MUL_22, VARLP("const_pos1")));
	RzILOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(op_ADD_23, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_24));
	RzILOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzILOpPure *op_AND_27 = LOGAND(DUP(Rdd), op_NOT_26);
	RzILOpPure *op_MUL_28 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_29 = LET("const_pos8", const_pos8, MUL(op_MUL_28, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(Rss, op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_32 = CAST(64, MSB(op_AND_31), op_AND_31);
	RzILOpPure *op_AND_33 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_32, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, op_AND_33);
	RzILOpPure *op_MUL_35 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_MUL_35, VARLP("const_pos1")));
	RzILOpPure *op_MUL_37 = LET("const_pos8", const_pos8, MUL(op_ADD_36, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_38 = SHIFTL0(cast_ut64_34, op_MUL_37);
	RzILOpPure *op_OR_39 = LOGOR(op_AND_27, op_LSHIFT_38);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc, op_OR_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc, op_OR_39);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *seq_42 = SEQN(5, op_ASSIGN_20, empty_21, op_ASSIGN_40, empty_41, op_INC_3);
	RzILOpEffect *for_43 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_42));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_5 = LET("const_pos16", const_pos16, MUL(op_MUL_4, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_5));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(Rdd, op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(op_MUL_9, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_13, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(op_MUL_16, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_15, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_8, op_LSHIFT_18);
	RzILOpPure *op_MUL_22 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_23 = LET("const_pos1", const_pos1, ADD(op_MUL_22, VARLP("const_pos1")));
	RzILOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(op_ADD_23, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_24));
	RzILOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzILOpPure *op_AND_27 = LOGAND(DUP(Rdd), op_NOT_26);
	RzILOpPure *op_MUL_28 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(op_MUL_28, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(Rss, op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(32, IL_FALSE, op_AND_31);
	RzILOpPure *op_AND_33 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_32, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, op_AND_33);
	RzILOpPure *op_MUL_35 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_MUL_35, VARLP("const_pos1")));
	RzILOpPure *op_MUL_37 = LET("const_pos16", const_pos16, MUL(op_ADD_36, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_38 = SHIFTL0(cast_ut64_34, op_MUL_37);
	RzILOpPure *op_OR_39 = LOGOR(op_AND_27, op_LSHIFT_38);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc, op_OR_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc, op_OR_39);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *seq_42 = SEQN(5, op_ASSIGN_20, empty_21, op_ASSIGN_40, empty_41, op_INC_3);
	RzILOpEffect *for_43 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_42));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffob(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_5 = LET("const_pos8", const_pos8, MUL(op_MUL_4, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_5));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(Rdd, op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_10 = LET("const_pos1", const_pos1, ADD(op_MUL_9, VARLP("const_pos1")));
	RzILOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(op_ADD_10, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_14 = CAST(64, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_14, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(op_MUL_17, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_16, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_8, op_LSHIFT_19);
	RzILOpPure *op_MUL_23 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_24 = LET("const_pos1", const_pos1, ADD(op_MUL_23, VARLP("const_pos1")));
	RzILOpPure *op_MUL_25 = LET("const_pos8", const_pos8, MUL(op_ADD_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_26 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_25));
	RzILOpPure *op_NOT_27 = LOGNOT(op_LSHIFT_26);
	RzILOpPure *op_AND_28 = LOGAND(DUP(Rdd), op_NOT_27);
	RzILOpPure *op_MUL_29 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_30 = LET("const_pos1", const_pos1, ADD(op_MUL_29, VARLP("const_pos1")));
	RzILOpPure *op_MUL_31 = LET("const_pos8", const_pos8, MUL(op_ADD_30, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(Rtt, op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_34 = CAST(64, MSB(op_AND_33), op_AND_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_34, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, op_AND_35);
	RzILOpPure *op_MUL_37 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_38 = LET("const_pos1", const_pos1, ADD(op_MUL_37, VARLP("const_pos1")));
	RzILOpPure *op_MUL_39 = LET("const_pos8", const_pos8, MUL(op_ADD_38, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(cast_ut64_36, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_28, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(5, op_ASSIGN_21, empty_22, op_ASSIGN_42, empty_43, op_INC_3);
	RzILOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffoh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_5 = LET("const_pos16", const_pos16, MUL(op_MUL_4, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_5));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(Rdd, op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_10 = LET("const_pos1", const_pos1, ADD(op_MUL_9, VARLP("const_pos1")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(op_ADD_10, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_14, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(op_MUL_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_16, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_8, op_LSHIFT_19);
	RzILOpPure *op_MUL_23 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_24 = LET("const_pos1", const_pos1, ADD(op_MUL_23, VARLP("const_pos1")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(op_ADD_24, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_26 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_25));
	RzILOpPure *op_NOT_27 = LOGNOT(op_LSHIFT_26);
	RzILOpPure *op_AND_28 = LOGAND(DUP(Rdd), op_NOT_27);
	RzILOpPure *op_MUL_29 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_30 = LET("const_pos1", const_pos1, ADD(op_MUL_29, VARLP("const_pos1")));
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(op_ADD_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(Rtt, op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(32, IL_FALSE, op_AND_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_34, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, op_AND_35);
	RzILOpPure *op_MUL_37 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_38 = LET("const_pos1", const_pos1, ADD(op_MUL_37, VARLP("const_pos1")));
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(op_ADD_38, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(cast_ut64_36, op_MUL_39);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_28, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(5, op_ASSIGN_21, empty_22, op_ASSIGN_42, empty_43, op_INC_3);
	RzILOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerdgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *op_MUL_3 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerfgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerigp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Nt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Nt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Nt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Nt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storew_locked(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storew_rl_at_vi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storew_rl_st_vi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_svsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(cast_st16_8, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_11 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(DUP(Rs), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_EQ_15 = EQ(cond_10, cast_st16_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(64, MSB(op_AND_18), op_AND_18);
	RzILOpPure *c_call_20 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_21 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_22 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_23 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_21, c_call_22, VARLP("const_pos1")));
	RzILOpPure *cond_24 = ITE(c_call_20, c_call_23, usr);
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *op_LT_30 = LET("const_pos0", const_pos0, ULT(cast_st16_29, VARLP("const_pos0")));
	RzILOpPure *op_SUB_31 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_32 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_31));
	RzILOpPure *op_NEG_33 = NEG(op_LSHIFT_32);
	RzILOpPure *op_SUB_34 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_34));
	RzILOpPure *op_SUB_36 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_35, VARLP("const_pos1")));
	RzILOpPure *cond_37 = ITE(op_LT_30, op_NEG_33, op_SUB_36);
	RzILOpPure *cond_38 = ITE(op_EQ_15, cast_st16_19, cond_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_38, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_3, op_LSHIFT_42);
	RzILOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_46));
	RzILOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LOGAND(DUP(Rd), op_NOT_48);
	RzILOpPure *op_NE_50 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rs), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(op_AND_53), op_AND_53);
	RzILOpPure *c_call_55 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(cast_st16_54, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_56 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_50, c_call_55, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_57 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rs), op_MUL_57);
	RzILOpPure *op_AND_59 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_58, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_60 = CAST(16, MSB(op_AND_59), op_AND_59);
	RzILOpPure *op_EQ_61 = EQ(cond_56, cast_st16_60);
	RzILOpPure *op_MUL_62 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rs), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_63, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_65 = CAST(64, MSB(op_AND_64), op_AND_64);
	RzILOpPure *c_call_66 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_67 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_69 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_67, c_call_68, VARLP("const_pos1")));
	RzILOpPure *cond_70 = ITE(c_call_66, c_call_69, usr);
	RzILOpPure *op_MUL_72 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_73 = SHIFTR0(DUP(Rs), op_MUL_72);
	RzILOpPure *op_AND_74 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_75 = CAST(32, IL_FALSE, op_AND_74);
	RzILOpPure *op_LT_76 = LET("const_pos0", const_pos0, ULT(cast_st16_75, VARLP("const_pos0")));
	RzILOpPure *op_SUB_77 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_NEG_79 = NEG(op_LSHIFT_78);
	RzILOpPure *op_SUB_80 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_81 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_80));
	RzILOpPure *op_SUB_82 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_81, VARLP("const_pos1")));
	RzILOpPure *cond_83 = ITE(op_LT_76, op_NEG_79, op_SUB_82);
	RzILOpPure *cond_84 = ITE(op_EQ_61, cast_st16_65, cond_83);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_84, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_86 = CAST(64, IL_FALSE, op_AND_85);
	RzILOpPure *op_MUL_87 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_88 = SHIFTL0(cast_ut64_86, op_MUL_87);
	RzILOpPure *op_OR_89 = LOGOR(op_AND_49, op_LSHIFT_88);
	RzILOpPure *op_MUL_92 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_93 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_92));
	RzILOpPure *op_NOT_94 = LOGNOT(op_LSHIFT_93);
	RzILOpPure *op_AND_95 = LOGAND(DUP(Rd), op_NOT_94);
	RzILOpPure *op_AND_96 = LET("const_pos0", const_pos0, LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_97 = CAST(64, IL_FALSE, op_AND_96);
	RzILOpPure *op_MUL_98 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_99 = SHIFTL0(cast_ut64_97, op_MUL_98);
	RzILOpPure *op_OR_100 = LOGOR(op_AND_95, op_LSHIFT_99);
	RzILOpPure *op_MUL_103 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_104 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_103));
	RzILOpPure *op_NOT_105 = LOGNOT(op_LSHIFT_104);
	RzILOpPure *op_AND_106 = LOGAND(DUP(Rd), op_NOT_105);
	RzILOpPure *op_AND_107 = LET("const_pos0", const_pos0, LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_108 = CAST(64, IL_FALSE, op_AND_107);
	RzILOpPure *op_MUL_109 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_110 = SHIFTL0(cast_ut64_108, op_MUL_109);
	RzILOpPure *op_OR_111 = LOGOR(op_AND_106, op_LSHIFT_110);

	// WRITE
	RzILOpEffect *op_ASSIGN_25 = SETG(usr_assoc, cond_24);
	RzILOpEffect *op_ASSIGN_44 = SETG(Rd_assoc, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *op_ASSIGN_71 = SETG(usr_assoc, cond_70);
	RzILOpEffect *op_ASSIGN_90 = SETG(Rd_assoc, op_OR_89);
	RzILOpEffect *empty_91 = EMPTY();
	RzILOpEffect *op_ASSIGN_101 = SETG(Rd_assoc, op_OR_100);
	RzILOpEffect *empty_102 = EMPTY();
	RzILOpEffect *op_ASSIGN_112 = SETG(Rd_assoc, op_OR_111);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_44, empty_45, op_ASSIGN_90, empty_91, op_ASSIGN_101, empty_102, op_ASSIGN_112, empty_113);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_svsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(cast_st16_8, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_11 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(DUP(Rs), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, IL_FALSE, op_AND_13);
	RzILOpPure *op_EQ_15 = EQ(cond_10, cast_st16_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(64, MSB(op_AND_18), op_AND_18);
	RzILOpPure *c_call_20 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_21 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_22 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_23 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_21, c_call_22, VARLP("const_pos1")));
	RzILOpPure *cond_24 = ITE(c_call_20, c_call_23, usr);
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *op_LT_30 = LET("const_pos0", const_pos0, ULT(cast_st16_29, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_32 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_31, VARLP("const_pos1")));
	RzILOpPure *cond_33 = LET("const_pos0", const_pos0, ITE(op_LT_30, VARLP("const_pos0"), op_SUB_32));
	RzILOpPure *cond_34 = ITE(op_EQ_15, cast_st16_19, cond_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_34, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, op_AND_35);
	RzILOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_38 = SHIFTL0(cast_ut64_36, op_MUL_37);
	RzILOpPure *op_OR_39 = LOGOR(op_AND_3, op_LSHIFT_38);
	RzILOpPure *op_MUL_42 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_43 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_42));
	RzILOpPure *op_NOT_44 = LOGNOT(op_LSHIFT_43);
	RzILOpPure *op_AND_45 = LOGAND(DUP(Rd), op_NOT_44);
	RzILOpPure *op_NE_46 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_47 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rs), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_50 = CAST(16, MSB(op_AND_49), op_AND_49);
	RzILOpPure *c_call_51 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(cast_st16_50, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_52 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_46, c_call_51, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_53 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rs), op_MUL_53);
	RzILOpPure *op_AND_55 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_54, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_56 = CAST(16, IL_FALSE, op_AND_55);
	RzILOpPure *op_EQ_57 = EQ(cond_52, cast_st16_56);
	RzILOpPure *op_MUL_58 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(DUP(Rs), op_MUL_58);
	RzILOpPure *op_AND_60 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_59, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_61 = CAST(64, MSB(op_AND_60), op_AND_60);
	RzILOpPure *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_63 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_64 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_65 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_63, c_call_64, VARLP("const_pos1")));
	RzILOpPure *cond_66 = ITE(c_call_62, c_call_65, usr);
	RzILOpPure *op_MUL_68 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rs), op_MUL_68);
	RzILOpPure *op_AND_70 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_69, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_71 = CAST(32, IL_FALSE, op_AND_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(cast_st16_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_57, cast_st16_61, cond_75);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_76, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *op_MUL_79 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(cast_ut64_78, op_MUL_79);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_45, op_LSHIFT_80);
	RzILOpPure *op_MUL_84 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_85 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_84));
	RzILOpPure *op_NOT_86 = LOGNOT(op_LSHIFT_85);
	RzILOpPure *op_AND_87 = LOGAND(DUP(Rd), op_NOT_86);
	RzILOpPure *op_AND_88 = LET("const_pos0", const_pos0, LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_89 = CAST(64, IL_FALSE, op_AND_88);
	RzILOpPure *op_MUL_90 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_91 = SHIFTL0(cast_ut64_89, op_MUL_90);
	RzILOpPure *op_OR_92 = LOGOR(op_AND_87, op_LSHIFT_91);
	RzILOpPure *op_MUL_95 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_96 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_95));
	RzILOpPure *op_NOT_97 = LOGNOT(op_LSHIFT_96);
	RzILOpPure *op_AND_98 = LOGAND(DUP(Rd), op_NOT_97);
	RzILOpPure *op_AND_99 = LET("const_pos0", const_pos0, LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_100 = CAST(64, IL_FALSE, op_AND_99);
	RzILOpPure *op_MUL_101 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_102 = SHIFTL0(cast_ut64_100, op_MUL_101);
	RzILOpPure *op_OR_103 = LOGOR(op_AND_98, op_LSHIFT_102);

	// WRITE
	RzILOpEffect *op_ASSIGN_25 = SETG(usr_assoc, cond_24);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rd_assoc, op_OR_39);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *op_ASSIGN_67 = SETG(usr_assoc, cond_66);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rd_assoc, op_OR_81);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *op_ASSIGN_93 = SETG(Rd_assoc, op_OR_92);
	RzILOpEffect *empty_94 = EMPTY();
	RzILOpEffect *op_ASSIGN_104 = SETG(Rd_assoc, op_OR_103);
	RzILOpEffect *empty_105 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_40, empty_41, op_ASSIGN_82, empty_83, op_ASSIGN_93, empty_94, op_ASSIGN_104, empty_105);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tableidxb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_tableidxd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_tableidxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_tableidxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_togglebit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_XOR_1 = LOGXOR(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_XOR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_togglebit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_3 = LET("const_pos0", const_pos0, ULT(cond_2, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_4 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *op_NE_6 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_7 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_8 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, c_call_7, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_9 = NEG(cond_8);
	RzILOpPure *op_SUB_10 = LET("const_pos1", const_pos1, SUB(op_NEG_9, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_5, op_SUB_10);
	RzILOpPure *op_RSHIFT_12 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_11, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_13 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NE_15 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_15, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, cond_17);
	RzILOpPure *cond_19 = ITE(op_LT_3, op_RSHIFT_12, op_LSHIFT_18);
	RzILOpPure *op_XOR_20 = LOGXOR(Rs, cond_19);

	// WRITE
	RzILOpEffect *op_ASSIGN_21 = SETG(Rd_assoc, op_XOR_20);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tstbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_LSHIFT_0);
	RzILOpPure *op_NE_2 = LET("const_pos0", const_pos0, INV(EQ(op_AND_1, VARLP("const_pos0"))));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tstbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(32, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_3 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, c_call_3, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_5 = LET("const_pos0", const_pos0, ULT(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_6 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_11 = NEG(cond_10);
	RzILOpPure *op_SUB_12 = LET("const_pos1", const_pos1, SUB(op_NEG_11, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_7, op_SUB_12);
	RzILOpPure *op_RSHIFT_14 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_13, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_15 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_17, c_call_18, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_16, cond_19);
	RzILOpPure *cond_21 = ITE(op_LT_5, op_RSHIFT_14, op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(cast_ut64_1, cond_21);
	RzILOpPure *op_NE_23 = LET("const_pos0", const_pos0, INV(EQ(op_AND_22, VARLP("const_pos0"))));
	RzILOpPure *cond_24 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_23, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_25 = SETG(Pd_assoc, cond_24);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_valignib(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_valignrb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_4, VARLP("const_pos1")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(Rdd, op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_NEG_15 = NEG(cast_st16_14);
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_NEG_15, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_NEG_22 = NEG(cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_17, op_NEG_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *op_NEG_28 = NEG(cast_st16_27);
	RzILOpPure *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_30 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_31 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_32 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_30, c_call_31, VARLP("const_pos1")));
	RzILOpPure *cond_33 = ITE(c_call_29, c_call_32, usr);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_NEG_39 = NEG(cast_st16_38);
	RzILOpPure *op_LT_40 = LET("const_pos0", const_pos0, ULT(op_NEG_39, VARLP("const_pos0")));
	RzILOpPure *op_SUB_41 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_41));
	RzILOpPure *op_NEG_43 = NEG(op_LSHIFT_42);
	RzILOpPure *op_SUB_44 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_44));
	RzILOpPure *op_SUB_46 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_45, VARLP("const_pos1")));
	RzILOpPure *cond_47 = ITE(op_LT_40, op_NEG_43, op_SUB_46);
	RzILOpPure *cond_48 = ITE(op_EQ_23, op_NEG_28, cond_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_48, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, op_AND_49);
	RzILOpPure *op_MUL_51 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_52 = SHIFTL0(cast_ut64_50, op_MUL_51);
	RzILOpPure *op_OR_53 = LOGOR(op_AND_9, op_LSHIFT_52);
	RzILOpPure *op_MUL_56 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_56));
	RzILOpPure *op_NOT_58 = LOGNOT(op_LSHIFT_57);
	RzILOpPure *op_AND_59 = LOGAND(DUP(Rdd), op_NOT_58);
	RzILOpPure *op_MUL_60 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rss), op_MUL_60);
	RzILOpPure *op_AND_62 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_61, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_63 = CAST(32, IL_FALSE, op_AND_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_63, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_65 = CAST(64, IL_FALSE, op_AND_64);
	RzILOpPure *op_MUL_66 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(cast_ut64_65, op_MUL_66);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_59, op_LSHIFT_67);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_34 = SETG(usr_assoc, cond_33);
	RzILOpEffect *op_ASSIGN_54 = SETG(Rdd_assoc, op_OR_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *op_ASSIGN_69 = SETG(Rdd_assoc, op_OR_68);
	RzILOpEffect *empty_70 = EMPTY();
	RzILOpEffect *seq_then_71 = SEQN(2, op_ASSIGN_54, empty_55);
	RzILOpEffect *seq_else_73 = SEQN(2, op_ASSIGN_69, empty_70);
	RzILOpEffect *branch_72 = BRANCH(op_AND_5, seq_then_71, seq_else_73);
	RzILOpEffect *seq_74 = SEQN(2, branch_72, op_INC_3);
	RzILOpEffect *for_75 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_74));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vcrotate(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vrcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_4, VARLP("const_pos1")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_NEG_10 = NEG(cast_st16_9);
	RzILOpPure *addop_NEG_10Rxx = ADD(op_NEG_10, Rxx);
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rss), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *addcast_st16_15Rxx = ADD(cast_st16_15, DUP(Rxx));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_ADD_11 = SETG(Rxx_assoc, addop_NEG_10Rxx);
	RzILOpEffect *op_ASSIGN_ADD_16 = SETG(Rxx_assoc, addcast_st16_15Rxx);
	RzILOpEffect *seq_then_17 = SEQN(1, op_ASSIGN_ADD_11);
	RzILOpEffect *seq_else_19 = SEQN(1, op_ASSIGN_ADD_16);
	RzILOpEffect *branch_18 = BRANCH(op_AND_5, seq_then_17, seq_else_19);
	RzILOpEffect *seq_20 = SEQN(2, branch_18, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzILOpPure *cast_st64_12 = CAST(32, IL_FALSE, cast_st32_11);
	RzILOpPure *op_ADD_13 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_12, VARLP("const_pos0x08000")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(op_ADD_13, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_17, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzILOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(32, IL_FALSE, cast_st32_12);
	RzILOpPure *op_ADD_14 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_13, VARLP("const_pos0x08000")));
	RzILOpPure *c_call_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_14, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_15, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(32, IL_FALSE, cast_st32_20);
	RzILOpPure *op_ADD_22 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_21, VARLP("const_pos0x08000")));
	RzILOpPure *op_EQ_23 = EQ(cond_16, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzILOpPure *cast_st64_28 = CAST(32, IL_FALSE, cast_st32_27);
	RzILOpPure *op_ADD_29 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_28, VARLP("const_pos0x08000")));
	RzILOpPure *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_31 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_33 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_31, c_call_32, VARLP("const_pos1")));
	RzILOpPure *cond_34 = ITE(c_call_30, c_call_33, usr);
	RzILOpPure *op_MUL_36 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(32, IL_FALSE, cast_st32_39);
	RzILOpPure *op_ADD_41 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_40, VARLP("const_pos0x08000")));
	RzILOpPure *op_LT_42 = LET("const_pos0", const_pos0, ULT(op_ADD_41, VARLP("const_pos0")));
	RzILOpPure *op_SUB_43 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_44 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_43));
	RzILOpPure *op_NEG_45 = NEG(op_LSHIFT_44);
	RzILOpPure *op_SUB_46 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_46));
	RzILOpPure *op_SUB_48 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_47, VARLP("const_pos1")));
	RzILOpPure *cond_49 = ITE(op_LT_42, op_NEG_45, op_SUB_48);
	RzILOpPure *cond_50 = ITE(op_EQ_23, op_ADD_29, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(cond_50, op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(32, IL_FALSE, op_AND_53);
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_54, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_56 = CAST(64, IL_FALSE, op_AND_55);
	RzILOpPure *op_MUL_57 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_56, op_MUL_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_7, op_LSHIFT_58);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_35 = SETG(usr_assoc, cond_34);
	RzILOpEffect *op_ASSIGN_60 = SETG(Rd_assoc, op_OR_59);
	RzILOpEffect *empty_61 = EMPTY();
	RzILOpEffect *seq_62 = SEQN(3, op_ASSIGN_60, empty_61, op_INC_3);
	RzILOpEffect *for_63 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_62));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_EQ_19 = EQ(cond_14, cast_st16_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(64, MSB(op_AND_22), op_AND_22);
	RzILOpPure *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_25 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_26 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_27 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_25, c_call_26, VARLP("const_pos1")));
	RzILOpPure *cond_28 = ITE(c_call_24, c_call_27, usr);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_LT_34 = LET("const_pos0", const_pos0, ULT(cast_st16_33, VARLP("const_pos0")));
	RzILOpPure *op_SUB_35 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_36 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_35));
	RzILOpPure *op_NEG_37 = NEG(op_LSHIFT_36);
	RzILOpPure *op_SUB_38 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_38));
	RzILOpPure *op_SUB_40 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_39, VARLP("const_pos1")));
	RzILOpPure *cond_41 = ITE(op_LT_34, op_NEG_37, op_SUB_40);
	RzILOpPure *cond_42 = ITE(op_EQ_19, cast_st16_23, cond_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_42, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_46 = SHIFTL0(cast_ut64_44, op_MUL_45);
	RzILOpPure *op_OR_47 = LOGOR(op_AND_7, op_LSHIFT_46);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc, cond_28);
	RzILOpEffect *op_ASSIGN_48 = SETG(Rd_assoc, op_OR_47);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *seq_50 = SEQN(3, op_ASSIGN_48, empty_49, op_INC_3);
	RzILOpEffect *for_51 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_50));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_EQ_19 = EQ(cond_14, cast_st16_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(32, IL_FALSE, op_AND_22);
	RzILOpPure *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_25 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_26 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_27 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_25, c_call_26, VARLP("const_pos1")));
	RzILOpPure *cond_28 = ITE(c_call_24, c_call_27, usr);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_LT_34 = LET("const_pos0", const_pos0, ULT(cast_st16_33, VARLP("const_pos0")));
	RzILOpPure *op_SUB_35 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_36 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_35));
	RzILOpPure *op_NEG_37 = NEG(op_LSHIFT_36);
	RzILOpPure *op_SUB_38 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_38));
	RzILOpPure *op_SUB_40 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_39, VARLP("const_pos1")));
	RzILOpPure *cond_41 = ITE(op_LT_34, op_NEG_37, op_SUB_40);
	RzILOpPure *cond_42 = ITE(op_EQ_19, cast_st16_23, cond_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_42, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_46 = SHIFTL0(cast_ut64_44, op_MUL_45);
	RzILOpPure *op_OR_47 = LOGOR(op_AND_7, op_LSHIFT_46);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc, cond_28);
	RzILOpEffect *op_ASSIGN_48 = SETG(Rdd_assoc, op_OR_47);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *seq_50 = SEQN(3, op_ASSIGN_48, empty_49, op_INC_3);
	RzILOpEffect *for_51 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_50));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *op_EQ_19 = EQ(cond_14, cast_st16_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(64, MSB(op_AND_22), op_AND_22);
	RzILOpPure *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_25 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_26 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_27 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_25, c_call_26, VARLP("const_pos1")));
	RzILOpPure *cond_28 = ITE(c_call_24, c_call_27, usr);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_LT_34 = LET("const_pos0", const_pos0, ULT(cast_st16_33, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_36 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_35, VARLP("const_pos1")));
	RzILOpPure *cond_37 = LET("const_pos0", const_pos0, ITE(op_LT_34, VARLP("const_pos0"), op_SUB_36));
	RzILOpPure *cond_38 = ITE(op_EQ_19, cast_st16_23, cond_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_38, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *op_MUL_41 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_7, op_LSHIFT_42);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc, cond_28);
	RzILOpEffect *op_ASSIGN_44 = SETG(Rd_assoc, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *seq_46 = SEQN(3, op_ASSIGN_44, empty_45, op_INC_3);
	RzILOpEffect *for_47 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_46));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *op_EQ_19 = EQ(cond_14, cast_st16_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(32, IL_FALSE, op_AND_22);
	RzILOpPure *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_25 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_26 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_27 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_25, c_call_26, VARLP("const_pos1")));
	RzILOpPure *cond_28 = ITE(c_call_24, c_call_27, usr);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_LT_34 = LET("const_pos0", const_pos0, ULT(cast_st16_33, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_36 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_35, VARLP("const_pos1")));
	RzILOpPure *cond_37 = LET("const_pos0", const_pos0, ITE(op_LT_34, VARLP("const_pos0"), op_SUB_36));
	RzILOpPure *cond_38 = ITE(op_EQ_19, cast_st16_23, cond_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_38, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *op_MUL_41 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_7, op_LSHIFT_42);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc, cond_28);
	RzILOpEffect *op_ASSIGN_44 = SETG(Rdd_assoc, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *seq_46 = SEQN(3, op_ASSIGN_44, empty_45, op_INC_3);
	RzILOpEffect *for_47 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_46));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *op_EQ_21 = EQ(cond_15, cast_st64_20);
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(32, IL_FALSE, cast_st32_25);
	RzILOpPure *c_call_27 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_28 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_30 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_28, c_call_29, VARLP("const_pos1")));
	RzILOpPure *cond_31 = ITE(c_call_27, c_call_30, usr);
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_36 = CAST(32, MSB(op_AND_35), op_AND_35);
	RzILOpPure *cast_st64_37 = CAST(32, IL_FALSE, cast_st32_36);
	RzILOpPure *op_LT_38 = LET("const_pos0", const_pos0, ULT(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_SUB_39 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_39));
	RzILOpPure *op_NEG_41 = NEG(op_LSHIFT_40);
	RzILOpPure *op_SUB_42 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_43 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_42));
	RzILOpPure *op_SUB_44 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(op_LT_38, op_NEG_41, op_SUB_44);
	RzILOpPure *cond_46 = ITE(op_EQ_21, cast_st64_26, cond_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_46, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_7, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_32 = SETG(usr_assoc, cond_31);
	RzILOpEffect *op_ASSIGN_52 = SETG(Rd_assoc, op_OR_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(3, op_ASSIGN_52, empty_53, op_INC_3);
	RzILOpEffect *for_55 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_54));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *op_EQ_21 = EQ(cond_15, cast_st64_20);
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, IL_FALSE, cast_st32_25);
	RzILOpPure *c_call_27 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_28 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_30 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_28, c_call_29, VARLP("const_pos1")));
	RzILOpPure *cond_31 = ITE(c_call_27, c_call_30, usr);
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_36 = CAST(32, MSB(op_AND_35), op_AND_35);
	RzILOpPure *cast_st64_37 = CAST(32, IL_FALSE, cast_st32_36);
	RzILOpPure *op_LT_38 = LET("const_pos0", const_pos0, ULT(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_SUB_39 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_39));
	RzILOpPure *op_NEG_41 = NEG(op_LSHIFT_40);
	RzILOpPure *op_SUB_42 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_43 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_42));
	RzILOpPure *op_SUB_44 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(op_LT_38, op_NEG_41, op_SUB_44);
	RzILOpPure *cond_46 = ITE(op_EQ_21, cast_st64_26, cond_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_46, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_48 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_47, op_MUL_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_7, op_LSHIFT_49);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_32 = SETG(usr_assoc, cond_31);
	RzILOpEffect *op_ASSIGN_51 = SETG(Rdd_assoc, op_OR_50);
	RzILOpEffect *empty_52 = EMPTY();
	RzILOpEffect *seq_53 = SEQN(3, op_ASSIGN_51, empty_52, op_INC_3);
	RzILOpEffect *for_54 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_53));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_54);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, IL_FALSE, cast_st32_19);
	RzILOpPure *op_EQ_21 = EQ(cond_15, cast_st64_20);
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(32, IL_FALSE, cast_st32_25);
	RzILOpPure *c_call_27 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_28 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_30 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_28, c_call_29, VARLP("const_pos1")));
	RzILOpPure *cond_31 = ITE(c_call_27, c_call_30, usr);
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_36 = CAST(32, MSB(op_AND_35), op_AND_35);
	RzILOpPure *cast_st64_37 = CAST(32, IL_FALSE, cast_st32_36);
	RzILOpPure *op_LT_38 = LET("const_pos0", const_pos0, ULT(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_40 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_39, VARLP("const_pos1")));
	RzILOpPure *cond_41 = LET("const_pos0", const_pos0, ITE(op_LT_38, VARLP("const_pos0"), op_SUB_40));
	RzILOpPure *cond_42 = ITE(op_EQ_21, cast_st64_26, cond_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_42, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_46 = SHIFTL0(cast_ut64_44, op_MUL_45);
	RzILOpPure *op_OR_47 = LOGOR(op_AND_7, op_LSHIFT_46);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_32 = SETG(usr_assoc, cond_31);
	RzILOpEffect *op_ASSIGN_48 = SETG(Rd_assoc, op_OR_47);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *seq_50 = SEQN(3, op_ASSIGN_48, empty_49, op_INC_3);
	RzILOpEffect *for_51 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_50));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, IL_FALSE, cast_st32_19);
	RzILOpPure *op_EQ_21 = EQ(cond_15, cast_st64_20);
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, IL_FALSE, cast_st32_25);
	RzILOpPure *c_call_27 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_28 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_30 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_28, c_call_29, VARLP("const_pos1")));
	RzILOpPure *cond_31 = ITE(c_call_27, c_call_30, usr);
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_36 = CAST(32, MSB(op_AND_35), op_AND_35);
	RzILOpPure *cast_st64_37 = CAST(32, IL_FALSE, cast_st32_36);
	RzILOpPure *op_LT_38 = LET("const_pos0", const_pos0, ULT(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_40 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_39, VARLP("const_pos1")));
	RzILOpPure *cond_41 = LET("const_pos0", const_pos0, ITE(op_LT_38, VARLP("const_pos0"), op_SUB_40));
	RzILOpPure *cond_42 = ITE(op_EQ_21, cast_st64_26, cond_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_42, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_44 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_7, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_32 = SETG(usr_assoc, cond_31);
	RzILOpEffect *op_ASSIGN_47 = SETG(Rdd_assoc, op_OR_46);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(3, op_ASSIGN_47, empty_48, op_INC_3);
	RzILOpEffect *for_50 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_49));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_11 = CAST(64, MSB(op_AND_10), op_AND_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_11, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzILOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_17 = SETG(Rd_assoc, op_OR_16);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *seq_19 = SEQN(3, op_ASSIGN_17, empty_18, op_INC_3);
	RzILOpEffect *for_20 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_19));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_11, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzILOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_17 = SETG(Rdd_assoc, op_OR_16);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *seq_19 = SEQN(3, op_ASSIGN_17, empty_18, op_INC_3);
	RzILOpEffect *for_20 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_19));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vspliceib(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vsplicerb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vsxtbh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_11 = CAST(32, IL_FALSE, op_AND_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_11, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzILOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_17 = SETG(Rdd_assoc, op_OR_16);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *seq_19 = SEQN(3, op_ASSIGN_17, empty_18, op_INC_3);
	RzILOpEffect *for_20 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_19));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(64, IL_FALSE, op_AND_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_st16_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(op_AND_12, op_MUL_13);
	RzILOpPure *op_OR_15 = LOGOR(op_AND_7, op_LSHIFT_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc, op_OR_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *seq_18 = SEQN(3, op_ASSIGN_16, empty_17, op_INC_3);
	RzILOpEffect *for_19 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_18));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunehb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(op_MUL_8, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_12 = CAST(64, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_12, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_7, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_18 = SETG(Rd_assoc, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(3, op_ASSIGN_18, empty_19, op_INC_3);
	RzILOpEffect *for_21 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunewh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rtt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(DUP(Rdd), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(DUP(Rdd), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(Rss, op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(DUP(Rdd), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc, op_OR_57);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunohb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_9 = LET("const_pos1", const_pos1, ADD(op_MUL_8, VARLP("const_pos1")));
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(op_ADD_9, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(64, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_13, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_7, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_19 = SETG(Rd_assoc, op_OR_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_21 = SEQN(3, op_ASSIGN_19, empty_20, op_INC_3);
	RzILOpEffect *for_22 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_21));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunowh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rtt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(DUP(Rdd), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(DUP(Rdd), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(Rss, op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(DUP(Rdd), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc, op_OR_57);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vzxtbh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_11 = CAST(32, IL_FALSE, op_AND_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_11, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzILOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_17 = SETG(Rdd_assoc, op_OR_16);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *seq_19 = SEQN(3, op_ASSIGN_17, empty_18, op_INC_3);
	RzILOpEffect *for_20 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_19));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vzxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_11 = CAST(64, IL_FALSE, op_AND_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_ut16_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(op_AND_12, op_MUL_13);
	RzILOpPure *op_OR_15 = LOGOR(op_AND_7, op_LSHIFT_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc, op_OR_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *seq_18 = SEQN(3, op_ASSIGN_16, empty_17, op_INC_3);
	RzILOpEffect *for_19 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_18));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_19);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>