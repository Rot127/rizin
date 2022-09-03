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

RzILOpEffect *hex_il_op_s2_addasl_rrri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_allocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_neg8 = UN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(Rx, VARLP("const_neg8")));
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_3, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, VARG(fp_assoc_tmp));
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_4, cast_ut32_5);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", DUP(const_pos32), SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(op_OR_6, op_LSHIFT_8);
	RzILOpPure *op_SUB_14 = LET("u", u, SUB(VARL("EA"), VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_XOR_9_10 = STOREW(VARL("EA"), op_XOR_9);
	RzILOpEffect *op_ASSIGN_11 = SETG(fp_assoc_tmp, VARL("EA"));
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(Rx_assoc_tmp, op_SUB_14);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_1, empty_2, ms_op_XOR_9_10, op_ASSIGN_11, empty_12, empty_13, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_xacc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_sat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_xacc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_LSHIFT_14 = LET("u", u, SHIFTL0(cast_st16_13, VARLP("u")));
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_LSHIFT_14, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, IL_FALSE, cast_st32_13);
	RzILOpPure *op_LSHIFT_15 = LET("u", u, SHIFTL0(cast_st64_14, VARLP("u")));
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_LSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(op_AND_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_xor(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_sat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st16_21 = CAST(16, MSB(cast_st16_20), cast_st16_20);
	RzILOpPure *cast_st64_22 = CAST(32, IL_FALSE, cast_st16_21);
	RzILOpPure *op_NE_23 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_28 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_23, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_29 = NEG(cond_28);
	RzILOpPure *op_SUB_30 = LET("const_pos1", const_pos1, SUB(op_NEG_29, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(cast_st64_22, op_SUB_30);
	RzILOpPure *op_RSHIFT_32 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_31, VARLP("const_pos1")));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(op_AND_35), op_AND_35);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(cast_st16_36), cast_st16_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(cast_st16_37), cast_st16_37);
	RzILOpPure *op_NE_39 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_39, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(cast_st64_38, cond_44);
	RzILOpPure *cond_46 = ITE(op_LT_16, op_RSHIFT_32, op_LSHIFT_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_46, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_9, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_24 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_14, seq_26);
	RzILOpEffect *c_call_40 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_27, seq_42);
	RzILOpEffect *op_ASSIGN_52 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_43, op_ASSIGN_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, seq_53, empty_54);
	RzILOpEffect *for_56 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_55));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, IL_FALSE, cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_24, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_30 = NEG(cond_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_NEG_30, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(cast_st64_23, op_SUB_31);
	RzILOpPure *op_RSHIFT_33 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(op_AND_36), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(cast_st32_37), cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(cast_st64_38), cast_st64_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *op_NE_41 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_46 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_41, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(cast_st64_40, cond_46);
	RzILOpPure *cond_48 = ITE(op_LT_16, op_RSHIFT_33, op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_50 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(op_AND_49, op_MUL_50);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_9, op_LSHIFT_51);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_14, seq_27);
	RzILOpEffect *c_call_42 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_28, seq_44);
	RzILOpEffect *op_ASSIGN_53 = SETG(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_45, op_ASSIGN_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, seq_54, empty_55);
	RzILOpEffect *for_57 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_56));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(Rss), DUP(Rss));
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st64_0, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, op_RSHIFT_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st64_0, VARLP("u")));
	RzILOpPure *op_ADD_2 = ADD(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st64_0, VARLP("u")));
	RzILOpPure *op_AND_2 = LOGAND(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc_tmp, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st64_0, VARLP("u")));
	RzILOpPure *op_SUB_2 = SUB(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc_tmp, op_SUB_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st64_0, VARLP("u")));
	RzILOpPure *op_OR_2 = LOGOR(Rxx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rxx_assoc_tmp, op_OR_2);
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
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(64, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(Rss), DUP(Rss));
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st64_0, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(VARL("tmp"), VARLP("const_pos1")));
	RzILOpPure *cast_st64_5 = CAST(8, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_RSHIFT_6 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cast_st64_5, VARLP("const_pos1")));
	RzILOpPure *op_ADD_7 = ADD(op_RSHIFT_6, VARL("rnd"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("tmp", op_RSHIFT_1);
	RzILOpEffect *op_ASSIGN_4 = SETL("rnd", op_AND_3);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_ADD_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, op_ASSIGN_4, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st32_0, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_RSHIFT_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st32_0, VARLP("u")));
	RzILOpPure *op_ADD_2 = ADD(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st32_0, VARLP("u")));
	RzILOpPure *op_AND_2 = LOGAND(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st32_0, VARLP("u")));
	RzILOpPure *op_SUB_2 = SUB(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_SUB_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_1 = LET("u", u, SHIFTR0(cast_st32_0, VARLP("u")));
	RzILOpPure *op_OR_2 = LOGOR(Rx, op_RSHIFT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(64, 0x1);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(32, IL_FALSE, cast_st32_0);
	RzILOpPure *op_RSHIFT_2 = LET("u", u, SHIFTR0(cast_st64_1, VARLP("u")));
	RzILOpPure *op_ADD_3 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_2, VARLP("const_pos1")));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(op_ADD_3), op_ADD_3);
	RzILOpPure *op_RSHIFT_5 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cast_st64_4, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, op_RSHIFT_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(32, IL_FALSE, cast_st32_13);
	RzILOpPure *op_RSHIFT_15 = LET("u", u, SHIFTR0(cast_st64_14, VARLP("u")));
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(op_RSHIFT_15, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_RSHIFT_14 = LET("u", u, SHIFTR0(cast_st16_13, VARLP("u")));
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, IL_FALSE, cast_st32_13);
	RzILOpPure *op_RSHIFT_15 = LET("u", u, SHIFTR0(cast_st64_14, VARLP("u")));
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(op_AND_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_xor(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_sat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(32, IL_FALSE, cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_24, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_30 = NEG(cond_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_NEG_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_st64_23, op_SUB_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(op_AND_36), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(cast_st32_37), cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(cast_st64_38), cast_st64_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *op_NE_41 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_46 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_41, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(cast_st64_40, cond_46);
	RzILOpPure *cond_48 = ITE(op_LT_16, op_LSHIFT_33, op_RSHIFT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(cond_48, op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_9, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_14, seq_27);
	RzILOpEffect *c_call_42 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_28, seq_44);
	RzILOpEffect *op_ASSIGN_58 = SETG(Rd_assoc_tmp, op_OR_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_45, op_ASSIGN_58);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *seq_61 = SEQN(2, seq_59, empty_60);
	RzILOpEffect *for_62 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_61));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st16_21 = CAST(16, MSB(cast_st16_20), cast_st16_20);
	RzILOpPure *cast_st64_22 = CAST(32, IL_FALSE, cast_st16_21);
	RzILOpPure *op_NE_23 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_28 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_23, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_29 = NEG(cond_28);
	RzILOpPure *op_SUB_30 = LET("const_pos1", const_pos1, SUB(op_NEG_29, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_st64_22, op_SUB_30);
	RzILOpPure *op_LSHIFT_32 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_31, VARLP("const_pos1")));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(op_AND_35), op_AND_35);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(cast_st16_36), cast_st16_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(cast_st16_37), cast_st16_37);
	RzILOpPure *op_NE_39 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_39, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(cast_st64_38, cond_44);
	RzILOpPure *cond_46 = ITE(op_LT_16, op_LSHIFT_32, op_RSHIFT_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_46, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_9, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_24 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_14, seq_26);
	RzILOpEffect *c_call_40 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_27, seq_42);
	RzILOpEffect *op_ASSIGN_52 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_43, op_ASSIGN_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, seq_53, empty_54);
	RzILOpEffect *for_56 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_55));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, IL_FALSE, cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_24, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_30 = NEG(cond_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_NEG_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_st64_23, op_SUB_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(op_AND_36), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(cast_st32_37), cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(cast_st64_38), cast_st64_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *op_NE_41 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_46 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_41, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(cast_st64_40, cond_46);
	RzILOpPure *cond_48 = ITE(op_LT_16, op_LSHIFT_33, op_RSHIFT_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_50 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(op_AND_49, op_MUL_50);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_9, op_LSHIFT_51);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_14, seq_27);
	RzILOpEffect *c_call_42 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_28, seq_44);
	RzILOpEffect *op_ASSIGN_53 = SETG(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_45, op_ASSIGN_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, seq_54, empty_55);
	RzILOpEffect *for_57 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_56));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_brev(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_brevp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cabacdecbin(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cl0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp0;

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_CLO32(op_NOT_0);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, VARL("h_tmp0"));
	RzILOpEffect *seq_5 = SEQN(2, seq_3, op_ASSIGN_4);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_cl0p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cl1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp0;

	// EXEC

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(Rs);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp0", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, VARL("h_tmp0"));
	RzILOpEffect *seq_4 = SEQN(2, seq_2, op_ASSIGN_3);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_cl1p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_clb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp0;
	// Declare: st32 h_tmp1;
	// Declare: st32 h_tmp2;
	// Declare: st32 h_tmp3;

	// EXEC
	RzILOpPure *op_NOT_3 = LOGNOT(Rs);
	RzILOpPure *op_GT_8 = SGT(VARL("h_tmp0"), VARL("h_tmp1"));
	RzILOpPure *op_NOT_13 = LOGNOT(DUP(Rs));
	RzILOpPure *cond_18 = ITE(op_GT_8, VARL("h_tmp2"), VARL("h_tmp3"));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp0", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_4 = HEX_CLO32(op_NOT_3);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_2, seq_6);
	RzILOpEffect *c_call_9 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp2", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_7, seq_11);
	RzILOpEffect *c_call_14 = HEX_CLO32(op_NOT_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_12, seq_16);
	RzILOpEffect *op_ASSIGN_19 = SETG(Rd_assoc_tmp, cond_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_17, op_ASSIGN_19);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbnorm(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	// Declare: st32 h_tmp0;
	// Declare: st32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: st32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_NOT_5 = LOGNOT(DUP(Rs));
	RzILOpPure *op_GT_10 = SGT(VARL("h_tmp0"), VARL("h_tmp1"));
	RzILOpPure *op_NOT_15 = LOGNOT(DUP(Rs));
	RzILOpPure *cond_20 = ITE(op_GT_10, VARL("h_tmp2"), VARL("h_tmp3"));
	RzILOpPure *op_SUB_21 = LET("const_pos1", const_pos1, SUB(cond_20, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *c_call_2 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *c_call_6 = HEX_CLO32(op_NOT_5);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_4, seq_8);
	RzILOpEffect *c_call_11 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_9, seq_13);
	RzILOpEffect *c_call_16 = HEX_CLO32(op_NOT_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp3", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_14, seq_18);
	RzILOpEffect *op_ASSIGN_22 = SETG(Rd_assoc_tmp, op_SUB_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_19, op_ASSIGN_22);
	RzILOpEffect *seq_then_24 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_26 = SEQN(1, seq_23);
	RzILOpEffect *branch_25 = BRANCH(op_EQ_0, seq_then_24, seq_else_26);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_clrbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_LSHIFT_0);
	RzILOpPure *op_AND_2 = LOGAND(Rs, op_NOT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clrbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: st64 h_tmp2;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_5 = LET("const_pos0", DUP(const_pos0), ULT(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_6 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_13 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_8, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_14 = NEG(cond_13);
	RzILOpPure *op_SUB_15 = LET("const_pos1", DUP(const_pos1), SUB(op_NEG_14, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(cast_ut64_7, op_SUB_15);
	RzILOpPure *op_RSHIFT_17 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_16, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_18 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_NE_20 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_25 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_20, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_19, cond_25);
	RzILOpPure *cond_27 = ITE(op_LT_5, op_RSHIFT_17, op_LSHIFT_26);
	RzILOpPure *op_NOT_28 = LOGNOT(cond_27);
	RzILOpPure *op_AND_29 = LOGAND(Rs, op_NOT_28);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_9 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_3, seq_11);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_12, seq_23);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rd_assoc_tmp, op_AND_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_24, op_ASSIGN_30);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_ct0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct0p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct1(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct1p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_deinterleave(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractu(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractu_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractup(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractup_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insert(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insert_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insertp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insertp_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_interleave(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lfsp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_xor(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_20 = CAST(16, IL_FALSE, op_AND_19);
	RzILOpPure *cast_ut16_21 = CAST(16, IL_FALSE, cast_ut16_20);
	RzILOpPure *cast_ut64_22 = CAST(32, IL_FALSE, cast_ut16_21);
	RzILOpPure *op_NE_23 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_28 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_23, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_29 = NEG(cond_28);
	RzILOpPure *op_SUB_30 = LET("const_pos1", const_pos1, SUB(op_NEG_29, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(cast_ut64_22, op_SUB_30);
	RzILOpPure *op_RSHIFT_32 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_31, VARLP("const_pos1")));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_36 = CAST(16, IL_FALSE, op_AND_35);
	RzILOpPure *cast_ut16_37 = CAST(16, IL_FALSE, cast_ut16_36);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut16_37);
	RzILOpPure *op_NE_39 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_39, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(cast_ut64_38, cond_44);
	RzILOpPure *cond_46 = ITE(op_LT_16, op_RSHIFT_32, op_LSHIFT_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_46, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_9, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_24 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_14, seq_26);
	RzILOpEffect *c_call_40 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_27, seq_42);
	RzILOpEffect *op_ASSIGN_52 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_43, op_ASSIGN_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, seq_53, empty_54);
	RzILOpEffect *for_56 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_55));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, op_AND_19);
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *cast_ut32_22 = CAST(32, IL_FALSE, cast_ut64_21);
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, cast_ut32_22);
	RzILOpPure *op_NE_24 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_24, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_30 = NEG(cond_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_NEG_30, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(cast_ut64_23, op_SUB_31);
	RzILOpPure *op_RSHIFT_33 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut32_37);
	RzILOpPure *cast_ut32_39 = CAST(32, IL_FALSE, cast_ut64_38);
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, cast_ut32_39);
	RzILOpPure *op_NE_41 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_46 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_41, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(cast_ut64_40, cond_46);
	RzILOpPure *cond_48 = ITE(op_LT_16, op_RSHIFT_33, op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_50 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(op_AND_49, op_MUL_50);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_9, op_LSHIFT_51);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_14, seq_27);
	RzILOpEffect *c_call_42 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_28, seq_44);
	RzILOpEffect *op_ASSIGN_53 = SETG(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_45, op_ASSIGN_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, seq_54, empty_55);
	RzILOpEffect *for_57 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_56));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_xacc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_xacc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_13 = CAST(16, IL_FALSE, op_AND_12);
	RzILOpPure *op_RSHIFT_14 = LET("u", u, SHIFTR0(cast_ut16_13, VARLP("u")));
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_RSHIFT_15 = LET("u", u, SHIFTR0(cast_ut64_14, VARLP("u")));
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(op_AND_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_xor(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_and(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_nac(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_or(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_20 = CAST(16, IL_FALSE, op_AND_19);
	RzILOpPure *cast_ut16_21 = CAST(16, IL_FALSE, cast_ut16_20);
	RzILOpPure *cast_ut64_22 = CAST(32, IL_FALSE, cast_ut16_21);
	RzILOpPure *op_NE_23 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_28 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_23, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_29 = NEG(cond_28);
	RzILOpPure *op_SUB_30 = LET("const_pos1", const_pos1, SUB(op_NEG_29, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_22, op_SUB_30);
	RzILOpPure *op_LSHIFT_32 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_31, VARLP("const_pos1")));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_35 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_36 = CAST(16, IL_FALSE, op_AND_35);
	RzILOpPure *cast_ut16_37 = CAST(16, IL_FALSE, cast_ut16_36);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut16_37);
	RzILOpPure *op_NE_39 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_39, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(cast_ut64_38, cond_44);
	RzILOpPure *cond_46 = ITE(op_LT_16, op_LSHIFT_32, op_RSHIFT_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_46, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_9, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_24 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_14, seq_26);
	RzILOpEffect *c_call_40 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_27, seq_42);
	RzILOpEffect *op_ASSIGN_52 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_43, op_ASSIGN_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, seq_53, empty_54);
	RzILOpEffect *for_56 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_55));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut32 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: st64 h_tmp3;

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_16 = LET("const_pos0", DUP(const_pos0), ULT(cond_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, op_AND_19);
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *cast_ut32_22 = CAST(32, IL_FALSE, cast_ut64_21);
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, cast_ut32_22);
	RzILOpPure *op_NE_24 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_24, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_30 = NEG(cond_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_NEG_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_23, op_SUB_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut32_37);
	RzILOpPure *cast_ut32_39 = CAST(32, IL_FALSE, cast_ut64_38);
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, cast_ut32_39);
	RzILOpPure *op_NE_41 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_46 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_41, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(cast_ut64_40, cond_46);
	RzILOpPure *cond_48 = ITE(op_LT_16, op_LSHIFT_33, op_RSHIFT_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_50 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(op_AND_49, op_MUL_50);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_9, op_LSHIFT_51);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_14, seq_27);
	RzILOpEffect *c_call_42 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_28, seq_44);
	RzILOpEffect *op_ASSIGN_53 = SETG(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_45, op_ASSIGN_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, seq_54, empty_55);
	RzILOpEffect *for_57 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_56));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_mask(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_SUB_1 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_0, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("U", U, SHIFTL0(op_SUB_1, VARLP("U")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_packhl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc_tmp, op_OR_57);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_parityp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerff_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerff_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerffnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerft_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerft_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerftnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerht_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerht_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerif_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerif_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerifnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerit_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerit_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstoreritnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_setbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_OR_1 = LOGOR(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_setbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: st64 h_tmp2;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_5 = LET("const_pos0", DUP(const_pos0), ULT(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_6 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_13 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_8, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_14 = NEG(cond_13);
	RzILOpPure *op_SUB_15 = LET("const_pos1", DUP(const_pos1), SUB(op_NEG_14, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(cast_ut64_7, op_SUB_15);
	RzILOpPure *op_RSHIFT_17 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_16, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_18 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_NE_20 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_25 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_20, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_19, cond_25);
	RzILOpPure *cond_27 = ITE(op_LT_5, op_RSHIFT_17, op_LSHIFT_26);
	RzILOpPure *op_OR_28 = LOGOR(Rs, cond_27);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_9 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_3, seq_11);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_12, seq_23);
	RzILOpEffect *op_ASSIGN_29 = SETG(Rd_assoc_tmp, op_OR_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_24, op_ASSIGN_29);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(op_MUL_6, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *op_AND_10 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_11, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_15, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_18, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_17, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_10, op_LSHIFT_20);
	RzILOpPure *op_MUL_25 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(op_MUL_25, VARLP("const_pos1")));
	RzILOpPure *op_MUL_27 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_26, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_28 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_27));
	RzILOpPure *op_NOT_29 = LOGNOT(op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_29);
	RzILOpPure *op_MUL_31 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_31, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(Rss, op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_35 = CAST(64, IL_FALSE, op_AND_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_35, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_MUL_38 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_39 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_38, VARLP("const_pos1")));
	RzILOpPure *op_MUL_40 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_39, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_37, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_30, op_LSHIFT_41);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_5, op_ASSIGN_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_45 = SEQN(4, seq_23, empty_24, op_ASSIGN_43, empty_44);
	RzILOpEffect *for_46 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_45));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_46);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_MUL_6 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(op_MUL_6, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *op_AND_10 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_11, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_15, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_18, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_17, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_10, op_LSHIFT_20);
	RzILOpPure *op_MUL_25 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(op_MUL_25, VARLP("const_pos1")));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_26, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_28 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_27));
	RzILOpPure *op_NOT_29 = LOGNOT(op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_29);
	RzILOpPure *op_MUL_31 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(Rss, op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(32, IL_FALSE, op_AND_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_35, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_MUL_38 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_39 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_38, VARLP("const_pos1")));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_39, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_37, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_30, op_LSHIFT_41);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_5, op_ASSIGN_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_45 = SEQN(4, seq_23, empty_24, op_ASSIGN_43, empty_44);
	RzILOpEffect *for_46 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_45));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_46);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffob(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(op_MUL_6, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *op_AND_10 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_12 = LET("const_pos1", const_pos1, ADD(op_MUL_11, VARLP("const_pos1")));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_16, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_19, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_18, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_10, op_LSHIFT_21);
	RzILOpPure *op_MUL_26 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_27 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_26, VARLP("const_pos1")));
	RzILOpPure *op_MUL_28 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_27, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_29 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_28));
	RzILOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzILOpPure *op_AND_31 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_30);
	RzILOpPure *op_MUL_32 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_33 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_33, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(Rtt, op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_37 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_37, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_41 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_40, VARLP("const_pos1")));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_41, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_39, op_MUL_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_31, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_45 = SETG(Rdd_assoc_tmp, op_OR_44);
	RzILOpEffect *empty_46 = EMPTY();
	RzILOpEffect *seq_47 = SEQN(4, seq_24, empty_25, op_ASSIGN_45, empty_46);
	RzILOpEffect *for_48 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_47));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffoh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_MUL_6 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(op_MUL_6, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *op_AND_10 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_12 = LET("const_pos1", const_pos1, ADD(op_MUL_11, VARLP("const_pos1")));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_12, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_16, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_19, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_18, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_10, op_LSHIFT_21);
	RzILOpPure *op_MUL_26 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_27 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_26, VARLP("const_pos1")));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_27, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_29 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_28));
	RzILOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzILOpPure *op_AND_31 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_30);
	RzILOpPure *op_MUL_32 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_33 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(Rtt, op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_41 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_40, VARLP("const_pos1")));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_41, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_39, op_MUL_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_31, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_45 = SETG(Rdd_assoc_tmp, op_OR_44);
	RzILOpEffect *empty_46 = EMPTY();
	RzILOpEffect *seq_47 = SEQN(4, seq_24, empty_25, op_ASSIGN_45, empty_46);
	RzILOpEffect *for_48 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_47));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6_7 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8_9 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8_9 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6_7 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6_7 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8_9 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st8_8_9 = STOREW(VARL("EA"), cast_st8_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st8_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6_7 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt_3 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rtt_5 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rtt_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rtt_5 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rtt_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerdgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt_3 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *op_MUL_3 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8_9 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8_9 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerfgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *op_MUL_3 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8_9 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8_9 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8_9 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_cast_st16_8_9 = STOREW(VARL("EA"), cast_st16_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_cast_st16_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt_3 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rt_5 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rt_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Rt_5 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Rt_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerigp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt_3 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Nt_3 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Nt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Nt_5 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Nt_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_Nt_5 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_Nt_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Nt_3 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Nt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storew_locked(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storew_rl_at_vi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storew_rl_st_vi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_svsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos0 = UN(64, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	// Declare: st16 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(DUP(Rs), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzILOpPure *op_EQ_17 = EQ(cond_12, cast_st16_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cond_38 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_41 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *op_LT_45 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_44, VARLP("const_pos0")));
	RzILOpPure *op_SUB_46 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_46));
	RzILOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzILOpPure *op_SUB_49 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_49));
	RzILOpPure *op_SUB_51 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_50, VARLP("const_pos1")));
	RzILOpPure *cond_52 = ITE(op_LT_45, op_NEG_48, op_SUB_51);
	RzILOpPure *cond_53 = ITE(op_EQ_17, cast_st16_21, cond_52);
	RzILOpPure *op_AND_54 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_53, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_55 = CAST(64, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_57 = SHIFTL0(cast_ut64_55, op_MUL_56);
	RzILOpPure *op_OR_58 = LOGOR(op_AND_3, op_LSHIFT_57);
	RzILOpPure *op_MUL_61 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_62 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_61));
	RzILOpPure *op_NOT_63 = LOGNOT(op_LSHIFT_62);
	RzILOpPure *op_AND_64 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_63);
	RzILOpPure *op_NE_65 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_66 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rs), op_MUL_66);
	RzILOpPure *op_AND_68 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_67, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(op_AND_68), op_AND_68);
	RzILOpPure *cond_73 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_65, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_74 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rs), op_MUL_74);
	RzILOpPure *op_AND_76 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_75, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_77 = CAST(16, MSB(op_AND_76), op_AND_76);
	RzILOpPure *op_EQ_78 = EQ(cond_73, cast_st16_77);
	RzILOpPure *op_MUL_79 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rs), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *cond_99 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rs), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_103, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_105 = CAST(32, IL_FALSE, op_AND_104);
	RzILOpPure *op_LT_106 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_105, VARLP("const_pos0")));
	RzILOpPure *op_SUB_107 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_108 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_107));
	RzILOpPure *op_NEG_109 = NEG(op_LSHIFT_108);
	RzILOpPure *op_SUB_110 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_111 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_110));
	RzILOpPure *op_SUB_112 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_111, VARLP("const_pos1")));
	RzILOpPure *cond_113 = ITE(op_LT_106, op_NEG_109, op_SUB_112);
	RzILOpPure *cond_114 = ITE(op_EQ_78, cast_st16_82, cond_113);
	RzILOpPure *op_AND_115 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_114, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_116 = CAST(64, IL_FALSE, op_AND_115);
	RzILOpPure *op_MUL_117 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_118 = SHIFTL0(cast_ut64_116, op_MUL_117);
	RzILOpPure *op_OR_119 = LOGOR(op_AND_64, op_LSHIFT_118);
	RzILOpPure *op_MUL_122 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_123 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_122));
	RzILOpPure *op_NOT_124 = LOGNOT(op_LSHIFT_123);
	RzILOpPure *op_AND_125 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_124);
	RzILOpPure *op_AND_126 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_127 = CAST(64, IL_FALSE, op_AND_126);
	RzILOpPure *op_MUL_128 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_129 = SHIFTL0(cast_ut64_127, op_MUL_128);
	RzILOpPure *op_OR_130 = LOGOR(op_AND_125, op_LSHIFT_129);
	RzILOpPure *op_MUL_133 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_133));
	RzILOpPure *op_NOT_135 = LOGNOT(op_LSHIFT_134);
	RzILOpPure *op_AND_136 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_135);
	RzILOpPure *op_AND_137 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_138 = CAST(64, IL_FALSE, op_AND_137);
	RzILOpPure *op_MUL_139 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_140 = SHIFTL0(cast_ut64_138, op_MUL_139);
	RzILOpPure *op_OR_141 = LOGOR(op_AND_136, op_LSHIFT_140);

	// WRITE
	RzILOpEffect *c_call_9 = HEX_SEXTRACT64(cast_st16_8, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_22 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_11, seq_24);
	RzILOpEffect *c_call_26 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_25, seq_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_29, seq_32);
	RzILOpEffect *c_call_34 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_33, seq_36);
	RzILOpEffect *op_ASSIGN_39 = SETG(usr_assoc_tmp, cond_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_37, op_ASSIGN_39);
	RzILOpEffect *op_ASSIGN_59 = SETG(Rd_assoc_tmp, op_OR_58);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *c_call_70 = HEX_SEXTRACT64(cast_st16_69, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp5", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *c_call_83 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_84 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_85 = SEQN(2, c_call_83, op_ASSIGN_hybrid_tmp_84);
	RzILOpEffect *seq_86 = SEQN(2, seq_72, seq_85);
	RzILOpEffect *c_call_87 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_88 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_89 = SEQN(2, c_call_87, op_ASSIGN_hybrid_tmp_88);
	RzILOpEffect *seq_90 = SEQN(2, seq_86, seq_89);
	RzILOpEffect *c_call_91 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_92 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_93 = SEQN(2, c_call_91, op_ASSIGN_hybrid_tmp_92);
	RzILOpEffect *seq_94 = SEQN(2, seq_90, seq_93);
	RzILOpEffect *c_call_95 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_96 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_97 = SEQN(2, c_call_95, op_ASSIGN_hybrid_tmp_96);
	RzILOpEffect *seq_98 = SEQN(2, seq_94, seq_97);
	RzILOpEffect *op_ASSIGN_100 = SETG(usr_assoc_tmp, cond_99);
	RzILOpEffect *seq_101 = SEQN(2, seq_98, op_ASSIGN_100);
	RzILOpEffect *op_ASSIGN_120 = SETG(Rd_assoc_tmp, op_OR_119);
	RzILOpEffect *empty_121 = EMPTY();
	RzILOpEffect *op_ASSIGN_131 = SETG(Rd_assoc_tmp, op_OR_130);
	RzILOpEffect *empty_132 = EMPTY();
	RzILOpEffect *op_ASSIGN_142 = SETG(Rd_assoc_tmp, op_OR_141);
	RzILOpEffect *empty_143 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_59, empty_60, op_ASSIGN_120, empty_121, op_ASSIGN_131, empty_132, op_ASSIGN_142, empty_143, seq_40, seq_101);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_svsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos0 = UN(64, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = UN(64, 0x1);
	// Declare: ut16 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(DUP(Rs), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, IL_FALSE, op_AND_15);
	RzILOpPure *op_EQ_17 = EQ(cond_12, cast_st16_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cond_38 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_41 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *op_LT_45 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_44, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_47 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_46, VARLP("const_pos1")));
	RzILOpPure *cond_48 = LET("const_pos0", DUP(const_pos0), ITE(op_LT_45, VARLP("const_pos0"), op_SUB_47));
	RzILOpPure *cond_49 = ITE(op_EQ_17, cast_st16_21, cond_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_49, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_51 = CAST(64, IL_FALSE, op_AND_50);
	RzILOpPure *op_MUL_52 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_53 = SHIFTL0(cast_ut64_51, op_MUL_52);
	RzILOpPure *op_OR_54 = LOGOR(op_AND_3, op_LSHIFT_53);
	RzILOpPure *op_MUL_57 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_57));
	RzILOpPure *op_NOT_59 = LOGNOT(op_LSHIFT_58);
	RzILOpPure *op_AND_60 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_59);
	RzILOpPure *op_NE_61 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_62 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rs), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_63, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_65 = CAST(16, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cond_69 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_61, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_71, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_73 = CAST(16, IL_FALSE, op_AND_72);
	RzILOpPure *op_EQ_74 = EQ(cond_69, cast_st16_73);
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rs), op_MUL_75);
	RzILOpPure *op_AND_77 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_76, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *cond_95 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_98 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rs), op_MUL_98);
	RzILOpPure *op_AND_100 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_99, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_101 = CAST(64, IL_FALSE, op_AND_100);
	RzILOpPure *op_LT_102 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_101, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_103 = LET("const_pos1LL", DUP(const_pos1LL), LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_104 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_103, VARLP("const_pos1")));
	RzILOpPure *cond_105 = LET("const_pos0", DUP(const_pos0), ITE(op_LT_102, VARLP("const_pos0"), op_SUB_104));
	RzILOpPure *cond_106 = ITE(op_EQ_74, cast_st16_78, cond_105);
	RzILOpPure *op_AND_107 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_106, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_108 = CAST(64, IL_FALSE, op_AND_107);
	RzILOpPure *op_MUL_109 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_110 = SHIFTL0(cast_ut64_108, op_MUL_109);
	RzILOpPure *op_OR_111 = LOGOR(op_AND_60, op_LSHIFT_110);
	RzILOpPure *op_MUL_114 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_115 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_114));
	RzILOpPure *op_NOT_116 = LOGNOT(op_LSHIFT_115);
	RzILOpPure *op_AND_117 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_116);
	RzILOpPure *op_AND_118 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_119 = CAST(64, IL_FALSE, op_AND_118);
	RzILOpPure *op_MUL_120 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_121 = SHIFTL0(cast_ut64_119, op_MUL_120);
	RzILOpPure *op_OR_122 = LOGOR(op_AND_117, op_LSHIFT_121);
	RzILOpPure *op_MUL_125 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_126 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_125));
	RzILOpPure *op_NOT_127 = LOGNOT(op_LSHIFT_126);
	RzILOpPure *op_AND_128 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_127);
	RzILOpPure *op_AND_129 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffLL"))));
	RzILOpPure *cast_ut64_130 = CAST(64, IL_FALSE, op_AND_129);
	RzILOpPure *op_MUL_131 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_132 = SHIFTL0(cast_ut64_130, op_MUL_131);
	RzILOpPure *op_OR_133 = LOGOR(op_AND_128, op_LSHIFT_132);

	// WRITE
	RzILOpEffect *c_call_9 = HEX_EXTRACT64(cast_st16_8, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp0", UNSIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_22 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_11, seq_24);
	RzILOpEffect *c_call_26 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_25, seq_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_29, seq_32);
	RzILOpEffect *c_call_34 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_33, seq_36);
	RzILOpEffect *op_ASSIGN_39 = SETG(usr_assoc_tmp, cond_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_37, op_ASSIGN_39);
	RzILOpEffect *op_ASSIGN_55 = SETG(Rd_assoc_tmp, op_OR_54);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *c_call_66 = HEX_EXTRACT64(cast_st16_65, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp5", UNSIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_79 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_80 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_81 = SEQN(2, c_call_79, op_ASSIGN_hybrid_tmp_80);
	RzILOpEffect *seq_82 = SEQN(2, seq_68, seq_81);
	RzILOpEffect *c_call_83 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_84 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_85 = SEQN(2, c_call_83, op_ASSIGN_hybrid_tmp_84);
	RzILOpEffect *seq_86 = SEQN(2, seq_82, seq_85);
	RzILOpEffect *c_call_87 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_88 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_89 = SEQN(2, c_call_87, op_ASSIGN_hybrid_tmp_88);
	RzILOpEffect *seq_90 = SEQN(2, seq_86, seq_89);
	RzILOpEffect *c_call_91 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_92 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_93 = SEQN(2, c_call_91, op_ASSIGN_hybrid_tmp_92);
	RzILOpEffect *seq_94 = SEQN(2, seq_90, seq_93);
	RzILOpEffect *op_ASSIGN_96 = SETG(usr_assoc_tmp, cond_95);
	RzILOpEffect *seq_97 = SEQN(2, seq_94, op_ASSIGN_96);
	RzILOpEffect *op_ASSIGN_112 = SETG(Rd_assoc_tmp, op_OR_111);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *op_ASSIGN_123 = SETG(Rd_assoc_tmp, op_OR_122);
	RzILOpEffect *empty_124 = EMPTY();
	RzILOpEffect *op_ASSIGN_134 = SETG(Rd_assoc_tmp, op_OR_133);
	RzILOpEffect *empty_135 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_55, empty_56, op_ASSIGN_112, empty_113, op_ASSIGN_123, empty_124, op_ASSIGN_134, empty_135, seq_40, seq_97);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tableidxb(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_tableidxd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_tableidxh(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_tableidxw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_togglebit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_XOR_1 = LOGXOR(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_XOR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_togglebit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: st64 h_tmp2;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_5 = LET("const_pos0", DUP(const_pos0), ULT(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_6 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_13 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_8, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_14 = NEG(cond_13);
	RzILOpPure *op_SUB_15 = LET("const_pos1", DUP(const_pos1), SUB(op_NEG_14, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(cast_ut64_7, op_SUB_15);
	RzILOpPure *op_RSHIFT_17 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_16, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_18 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_NE_20 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_25 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_20, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_19, cond_25);
	RzILOpPure *cond_27 = ITE(op_LT_5, op_RSHIFT_17, op_LSHIFT_26);
	RzILOpPure *op_XOR_28 = LOGXOR(Rs, cond_27);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_9 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_3, seq_11);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_12, seq_23);
	RzILOpEffect *op_ASSIGN_29 = SETG(Rd_assoc_tmp, op_XOR_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_24, op_ASSIGN_29);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tstbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_LSHIFT_0);
	RzILOpPure *op_NE_2 = LET("const_pos0", const_pos0, INV(EQ(op_AND_1, VARLP("const_pos0"))));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tstbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(64, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(32, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_6 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_7 = LET("const_pos0", DUP(const_pos0), ULT(cond_6, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_8 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, cast_ut32_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_16 = NEG(cond_15);
	RzILOpPure *op_SUB_17 = LET("const_pos1", DUP(const_pos1), SUB(op_NEG_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_9, op_SUB_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_NE_22 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_27 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_22, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(cast_ut64_21, cond_27);
	RzILOpPure *cond_29 = ITE(op_LT_7, op_RSHIFT_19, op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(cast_ut64_1, cond_29);
	RzILOpPure *op_NE_31 = LET("const_pos0", DUP(const_pos0), INV(EQ(op_AND_30, VARLP("const_pos0"))));
	RzILOpPure *cond_32 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_31, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(Rt, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(DUP(Rt), LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos7", DUP(const_pos7), VARLP("const_pos7")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_14, seq_25);
	RzILOpEffect *op_ASSIGN_33 = SETG(Pd_assoc_tmp, cond_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_26, op_ASSIGN_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_valignib(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_valignrb(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *op_AND_7 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_6, VARLP("const_pos1")));
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzILOpPure *op_NEG_17 = NEG(cast_st16_16);
	RzILOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_26 = CAST(16, MSB(op_AND_25), op_AND_25);
	RzILOpPure *op_NEG_27 = NEG(cast_st16_26);
	RzILOpPure *op_EQ_28 = EQ(cond_22, op_NEG_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(32, IL_FALSE, op_AND_31);
	RzILOpPure *op_NEG_33 = NEG(cast_st16_32);
	RzILOpPure *cond_50 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_53 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rss), op_MUL_53);
	RzILOpPure *op_AND_55 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_54, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_56 = CAST(32, IL_FALSE, op_AND_55);
	RzILOpPure *op_NEG_57 = NEG(cast_st16_56);
	RzILOpPure *op_LT_58 = LET("const_pos0", DUP(const_pos0), ULT(op_NEG_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_28, op_NEG_33, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_66, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *op_MUL_69 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *op_OR_71 = LOGOR(op_AND_11, op_LSHIFT_70);
	RzILOpPure *op_MUL_74 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_74));
	RzILOpPure *op_NOT_76 = LOGNOT(op_LSHIFT_75);
	RzILOpPure *op_AND_77 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_76);
	RzILOpPure *op_MUL_78 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(32, IL_FALSE, op_AND_80);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_81, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_83 = CAST(64, IL_FALSE, op_AND_82);
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(cast_ut64_83, op_MUL_84);
	RzILOpPure *op_OR_86 = LOGOR(op_AND_77, op_LSHIFT_85);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_18 = HEX_SEXTRACT64(op_NEG_17, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, seq_20);
	RzILOpEffect *c_call_34 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_21, seq_36);
	RzILOpEffect *c_call_38 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_37, seq_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_41, seq_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_45, seq_48);
	RzILOpEffect *op_ASSIGN_51 = SETG(usr_assoc_tmp, cond_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_49, op_ASSIGN_51);
	RzILOpEffect *op_ASSIGN_72 = SETG(Rdd_assoc_tmp, op_OR_71);
	RzILOpEffect *empty_73 = EMPTY();
	RzILOpEffect *op_ASSIGN_87 = SETG(Rdd_assoc_tmp, op_OR_86);
	RzILOpEffect *empty_88 = EMPTY();
	RzILOpEffect *seq_then_89 = SEQN(2, op_ASSIGN_72, empty_73);
	RzILOpEffect *seq_else_91 = SEQN(2, op_ASSIGN_87, empty_88);
	RzILOpEffect *branch_90 = BRANCH(op_AND_7, seq_then_89, seq_else_91);
	RzILOpEffect *seq_92 = SEQN(1, branch_90);
	RzILOpEffect *for_93 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_92));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_93, seq_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vcrotate(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vrcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *op_AND_7 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_6, VARLP("const_pos1")));
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(64, IL_FALSE, op_AND_10);
	RzILOpPure *op_NEG_12 = NEG(cast_st16_11);
	RzILOpPure *addop_NEG_12Rxx = ADD(op_NEG_12, Rxx);
	RzILOpPure *op_MUL_15 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *addcast_st16_18Rxx = ADD(cast_st16_18, DUP(Rxx));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_ADD_13 = SETG(Rxx_assoc_tmp, addop_NEG_12Rxx);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, op_ASSIGN_ADD_13);
	RzILOpEffect *op_ASSIGN_ADD_19 = SETG(Rxx_assoc_tmp, addcast_st16_18Rxx);
	RzILOpEffect *seq_then_20 = SEQN(1, seq_14);
	RzILOpEffect *seq_else_22 = SEQN(1, op_ASSIGN_ADD_19);
	RzILOpEffect *branch_21 = BRANCH(op_AND_7, seq_then_20, seq_else_22);
	RzILOpEffect *seq_23 = SEQN(1, branch_21);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(32, IL_FALSE, cast_st32_13);
	RzILOpPure *op_ADD_15 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_14, VARLP("const_pos0x08000")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(op_ADD_15, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(32, IL_FALSE, cast_st32_14);
	RzILOpPure *op_ADD_16 = LET("const_pos0x08000", const_pos0x08000, ADD(cast_st64_15, VARLP("const_pos0x08000")));
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(32, IL_FALSE, cast_st32_25);
	RzILOpPure *op_ADD_27 = LET("const_pos0x08000", DUP(const_pos0x08000), ADD(cast_st64_26, VARLP("const_pos0x08000")));
	RzILOpPure *op_EQ_28 = EQ(cond_21, op_ADD_27);
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(op_AND_31), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(32, IL_FALSE, cast_st32_32);
	RzILOpPure *op_ADD_34 = LET("const_pos0x08000", DUP(const_pos0x08000), ADD(cast_st64_33, VARLP("const_pos0x08000")));
	RzILOpPure *cond_51 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_54 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rss), op_MUL_54);
	RzILOpPure *op_AND_56 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_55, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_57 = CAST(32, MSB(op_AND_56), op_AND_56);
	RzILOpPure *cast_st64_58 = CAST(32, IL_FALSE, cast_st32_57);
	RzILOpPure *op_ADD_59 = LET("const_pos0x08000", DUP(const_pos0x08000), ADD(cast_st64_58, VARLP("const_pos0x08000")));
	RzILOpPure *op_LT_60 = LET("const_pos0", DUP(const_pos0), ULT(op_ADD_59, VARLP("const_pos0")));
	RzILOpPure *op_SUB_61 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_62 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_61));
	RzILOpPure *op_NEG_63 = NEG(op_LSHIFT_62);
	RzILOpPure *op_SUB_64 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_65 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_64));
	RzILOpPure *op_SUB_66 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_65, VARLP("const_pos1")));
	RzILOpPure *cond_67 = ITE(op_LT_60, op_NEG_63, op_SUB_66);
	RzILOpPure *cond_68 = ITE(op_EQ_28, op_ADD_34, cond_67);
	RzILOpPure *op_MUL_69 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(cond_68, op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_70, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_72 = CAST(32, IL_FALSE, op_AND_71);
	RzILOpPure *op_AND_73 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_72, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_74 = CAST(64, IL_FALSE, op_AND_73);
	RzILOpPure *op_MUL_75 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_76 = SHIFTL0(cast_ut64_74, op_MUL_75);
	RzILOpPure *op_OR_77 = LOGOR(op_AND_9, op_LSHIFT_76);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_17 = HEX_SEXTRACT64(op_ADD_16, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos32", DUP(const_pos32), VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, seq_19);
	RzILOpEffect *c_call_35 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_20, seq_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_38, seq_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_42, seq_45);
	RzILOpEffect *c_call_47 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *op_ASSIGN_52 = SETG(usr_assoc_tmp, cond_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_50, op_ASSIGN_52);
	RzILOpEffect *op_ASSIGN_78 = SETG(Rd_assoc_tmp, op_OR_77);
	RzILOpEffect *empty_79 = EMPTY();
	RzILOpEffect *seq_80 = SEQN(2, op_ASSIGN_78, empty_79);
	RzILOpEffect *for_81 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_80));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_81, seq_53);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_EQ_24 = EQ(cond_19, cast_st16_23);
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cond_45 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_48 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_49, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_51 = CAST(32, IL_FALSE, op_AND_50);
	RzILOpPure *op_LT_52 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_51, VARLP("const_pos0")));
	RzILOpPure *op_SUB_53 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_53));
	RzILOpPure *op_NEG_55 = NEG(op_LSHIFT_54);
	RzILOpPure *op_SUB_56 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_56));
	RzILOpPure *op_SUB_58 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_57, VARLP("const_pos1")));
	RzILOpPure *cond_59 = ITE(op_LT_52, op_NEG_55, op_SUB_58);
	RzILOpPure *cond_60 = ITE(op_EQ_24, cast_st16_28, cond_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_60, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_62 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_62, op_MUL_63);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_9, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_15 = HEX_SEXTRACT64(cast_st16_14, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, seq_17);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_18, seq_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc_tmp, cond_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_44, op_ASSIGN_46);
	RzILOpEffect *op_ASSIGN_66 = SETG(Rd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_66, empty_67);
	RzILOpEffect *for_69 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_68));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_69, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_EQ_24 = EQ(cond_19, cast_st16_23);
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(32, IL_FALSE, op_AND_27);
	RzILOpPure *cond_45 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_48 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_49, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_51 = CAST(32, IL_FALSE, op_AND_50);
	RzILOpPure *op_LT_52 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_51, VARLP("const_pos0")));
	RzILOpPure *op_SUB_53 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_53));
	RzILOpPure *op_NEG_55 = NEG(op_LSHIFT_54);
	RzILOpPure *op_SUB_56 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_56));
	RzILOpPure *op_SUB_58 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_57, VARLP("const_pos1")));
	RzILOpPure *cond_59 = ITE(op_LT_52, op_NEG_55, op_SUB_58);
	RzILOpPure *cond_60 = ITE(op_EQ_24, cast_st16_28, cond_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_60, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_62 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_62, op_MUL_63);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_9, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_15 = HEX_SEXTRACT64(cast_st16_14, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, seq_17);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_18, seq_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc_tmp, cond_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_44, op_ASSIGN_46);
	RzILOpEffect *op_ASSIGN_66 = SETG(Rdd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_66, empty_67);
	RzILOpEffect *for_69 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_68));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_69, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut64 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(64, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_EQ_24 = EQ(cond_19, cast_st16_23);
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cond_45 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_48 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_49, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_51 = CAST(32, IL_FALSE, op_AND_50);
	RzILOpPure *op_LT_52 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_51, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_53 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_54 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_53, VARLP("const_pos1")));
	RzILOpPure *cond_55 = LET("const_pos0", DUP(const_pos0), ITE(op_LT_52, VARLP("const_pos0"), op_SUB_54));
	RzILOpPure *cond_56 = ITE(op_EQ_24, cast_st16_28, cond_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_56, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_AND_57);
	RzILOpPure *op_MUL_59 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_ut64_58, op_MUL_59);
	RzILOpPure *op_OR_61 = LOGOR(op_AND_9, op_LSHIFT_60);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 64));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_15 = HEX_EXTRACT64(cast_st16_14, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp1", UNSIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, seq_17);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_18, seq_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc_tmp, cond_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_44, op_ASSIGN_46);
	RzILOpEffect *op_ASSIGN_62 = SETG(Rd_assoc_tmp, op_OR_61);
	RzILOpEffect *empty_63 = EMPTY();
	RzILOpEffect *seq_64 = SEQN(2, op_ASSIGN_62, empty_63);
	RzILOpEffect *for_65 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_64));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_65, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(64, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_EQ_24 = EQ(cond_19, cast_st16_23);
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(32, IL_FALSE, op_AND_27);
	RzILOpPure *cond_45 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_48 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_49, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_51 = CAST(32, IL_FALSE, op_AND_50);
	RzILOpPure *op_LT_52 = LET("const_pos0", DUP(const_pos0), ULT(cast_st16_51, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_53 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_54 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_53, VARLP("const_pos1")));
	RzILOpPure *cond_55 = LET("const_pos0", DUP(const_pos0), ITE(op_LT_52, VARLP("const_pos0"), op_SUB_54));
	RzILOpPure *cond_56 = ITE(op_EQ_24, cast_st16_28, cond_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_56, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_AND_57);
	RzILOpPure *op_MUL_59 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_ut64_58, op_MUL_59);
	RzILOpPure *op_OR_61 = LOGOR(op_AND_9, op_LSHIFT_60);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_15 = HEX_EXTRACT64(cast_st16_14, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp1", UNSIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, seq_17);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_18, seq_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc_tmp, cond_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_44, op_ASSIGN_46);
	RzILOpEffect *op_ASSIGN_62 = SETG(Rdd_assoc_tmp, op_OR_61);
	RzILOpEffect *empty_63 = EMPTY();
	RzILOpEffect *seq_64 = SEQN(2, op_ASSIGN_62, empty_63);
	RzILOpEffect *for_65 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_64));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_65, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_EQ_26 = EQ(cond_20, cast_st64_25);
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(32, IL_FALSE, cast_st32_30);
	RzILOpPure *cond_48 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_51 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(32, IL_FALSE, cast_st32_54);
	RzILOpPure *op_LT_56 = LET("const_pos0", DUP(const_pos0), ULT(cast_st64_55, VARLP("const_pos0")));
	RzILOpPure *op_SUB_57 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_57));
	RzILOpPure *op_NEG_59 = NEG(op_LSHIFT_58);
	RzILOpPure *op_SUB_60 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_61 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_60));
	RzILOpPure *op_SUB_62 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_61, VARLP("const_pos1")));
	RzILOpPure *cond_63 = ITE(op_LT_56, op_NEG_59, op_SUB_62);
	RzILOpPure *cond_64 = ITE(op_EQ_26, cast_st64_31, cond_63);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_64, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_66 = CAST(64, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_68 = SHIFTL0(cast_ut64_66, op_MUL_67);
	RzILOpPure *op_OR_69 = LOGOR(op_AND_9, op_LSHIFT_68);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(cast_st64_15, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_19, seq_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_35, seq_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_39, seq_42);
	RzILOpEffect *c_call_44 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_43, seq_46);
	RzILOpEffect *op_ASSIGN_49 = SETG(usr_assoc_tmp, cond_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_47, op_ASSIGN_49);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rd_assoc_tmp, op_OR_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, op_ASSIGN_70, empty_71);
	RzILOpEffect *for_73 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_72));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_73, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_EQ_26 = EQ(cond_20, cast_st64_25);
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, IL_FALSE, cast_st32_30);
	RzILOpPure *cond_48 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_51 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(32, IL_FALSE, cast_st32_54);
	RzILOpPure *op_LT_56 = LET("const_pos0", DUP(const_pos0), ULT(cast_st64_55, VARLP("const_pos0")));
	RzILOpPure *op_SUB_57 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_57));
	RzILOpPure *op_NEG_59 = NEG(op_LSHIFT_58);
	RzILOpPure *op_SUB_60 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_61 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_60));
	RzILOpPure *op_SUB_62 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_61, VARLP("const_pos1")));
	RzILOpPure *cond_63 = ITE(op_LT_56, op_NEG_59, op_SUB_62);
	RzILOpPure *cond_64 = ITE(op_EQ_26, cast_st64_31, cond_63);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_66 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(op_AND_65, op_MUL_66);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_9, op_LSHIFT_67);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(cast_st64_15, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_19, seq_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_35, seq_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_39, seq_42);
	RzILOpEffect *c_call_44 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_43, seq_46);
	RzILOpEffect *op_ASSIGN_49 = SETG(usr_assoc_tmp, cond_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_47, op_ASSIGN_49);
	RzILOpEffect *op_ASSIGN_69 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *empty_70 = EMPTY();
	RzILOpEffect *seq_71 = SEQN(2, op_ASSIGN_69, empty_70);
	RzILOpEffect *for_72 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_71));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_72, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut64 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(64, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, IL_FALSE, cast_st32_24);
	RzILOpPure *op_EQ_26 = EQ(cond_20, cast_st64_25);
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(32, IL_FALSE, cast_st32_30);
	RzILOpPure *cond_48 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_51 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(32, IL_FALSE, cast_st32_54);
	RzILOpPure *op_LT_56 = LET("const_pos0", DUP(const_pos0), ULT(cast_st64_55, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_58 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_57, VARLP("const_pos1")));
	RzILOpPure *cond_59 = LET("const_pos0", DUP(const_pos0), ITE(op_LT_56, VARLP("const_pos0"), op_SUB_58));
	RzILOpPure *cond_60 = ITE(op_EQ_26, cast_st64_31, cond_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_60, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_62 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_62, op_MUL_63);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_9, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 64));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_EXTRACT64(cast_st64_15, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_19, seq_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_35, seq_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_39, seq_42);
	RzILOpEffect *c_call_44 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_43, seq_46);
	RzILOpEffect *op_ASSIGN_49 = SETG(usr_assoc_tmp, cond_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_47, op_ASSIGN_49);
	RzILOpEffect *op_ASSIGN_66 = SETG(Rd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_66, empty_67);
	RzILOpEffect *for_69 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_68));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_69, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(64, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, IL_FALSE, cast_st32_24);
	RzILOpPure *op_EQ_26 = EQ(cond_20, cast_st64_25);
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, IL_FALSE, cast_st32_30);
	RzILOpPure *cond_48 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_51 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(32, IL_FALSE, cast_st32_54);
	RzILOpPure *op_LT_56 = LET("const_pos0", DUP(const_pos0), ULT(cast_st64_55, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_58 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_57, VARLP("const_pos1")));
	RzILOpPure *cond_59 = LET("const_pos0", DUP(const_pos0), ITE(op_LT_56, VARLP("const_pos0"), op_SUB_58));
	RzILOpPure *cond_60 = ITE(op_EQ_26, cast_st64_31, cond_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_60, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_62 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_63 = SHIFTL0(op_AND_61, op_MUL_62);
	RzILOpPure *op_OR_64 = LOGOR(op_AND_9, op_LSHIFT_63);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_EXTRACT64(cast_st64_15, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_19, seq_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_35, seq_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_39, seq_42);
	RzILOpEffect *c_call_44 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_43, seq_46);
	RzILOpEffect *op_ASSIGN_49 = SETG(usr_assoc_tmp, cond_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_47, op_ASSIGN_49);
	RzILOpEffect *op_ASSIGN_65 = SETG(Rdd_assoc_tmp, op_OR_64);
	RzILOpEffect *empty_66 = EMPTY();
	RzILOpEffect *seq_67 = SEQN(2, op_ASSIGN_65, empty_66);
	RzILOpEffect *for_68 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_67));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_68, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
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
	RzILOpEffect *op_ASSIGN_19 = SETG(Rd_assoc_tmp, op_OR_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, op_ASSIGN_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_22 = SEQN(2, seq_20, empty_21);
	RzILOpEffect *for_23 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_22));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_13, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
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

RzILOpEffect *hex_il_op_s2_vspliceib(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vsplicerb(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vsxtbh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_13, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_9, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
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

RzILOpEffect *hex_il_op_s2_vsxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_st16_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_9, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, op_ASSIGN_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_21 = SEQN(2, seq_19, empty_20);
	RzILOpEffect *for_22 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_21));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunehb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_10, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_14 = CAST(64, IL_FALSE, op_AND_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_14, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_16, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_9, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rd_assoc_tmp, op_OR_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, op_ASSIGN_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(2, seq_21, empty_22);
	RzILOpEffect *for_24 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_23));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunewh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rtt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(Rss, op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc_tmp, op_OR_57);
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
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_11 = LET("const_pos1", const_pos1, ADD(op_MUL_10, VARLP("const_pos1")));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_11, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_st8_15, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_9, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_21 = SETG(Rd_assoc_tmp, op_OR_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_5, op_ASSIGN_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(2, seq_22, empty_23);
	RzILOpEffect *for_25 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_24));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunowh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rtt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(Rss, op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc_tmp, op_OR_57);
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
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_13, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_9, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
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

RzILOpEffect *hex_il_op_s2_vzxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_ut16_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos32", DUP(const_pos32), MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_9, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, op_ASSIGN_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_21 = SEQN(2, seq_19, empty_20);
	RzILOpEffect *for_22 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_21));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_22);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>