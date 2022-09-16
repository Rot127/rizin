// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 12:19:10-04:00
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
	RzILOpPure *const_neg8 = SN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_neg8", const_neg8, CAST(32, IL_FALSE, VARLP("const_neg8")));
	RzILOpPure *op_ADD_0 = ADD(Rx, cast_1);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_6 = CAST(32, IL_FALSE, VARG(fp_assoc_tmp));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_OR_7 = LOGOR(op_LSHIFT_5, cast_8);
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos32", DUP(const_pos32), SHIFTL0(cast_ut64_9, VARLP("const_pos32")));
	RzILOpPure *op_XOR_11 = LOGXOR(op_OR_7, op_LSHIFT_10);
	RzILOpPure *op_12 = CAST(64, IL_FALSE, op_XOR_11);
	RzILOpPure *op_SUB_18 = SUB(VARL("EA"), VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *op_ASSIGN_14 = SETG(fp_assoc_tmp, VARL("EA"));
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_19 = SETG(Rx_assoc_tmp, op_SUB_18);
	RzILOpEffect *instruction_sequence = SEQN(8, imm_assign_17, op_ASSIGN_2, empty_3, ms_op_12_13, op_ASSIGN_14, empty_15, empty_16, op_ASSIGN_19);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1968;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st16_18, VARL("u"));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_LSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(cast_25, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_11, op_LSHIFT_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1968", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_28, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1969;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_st64_19, VARL("u"));
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_LSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(op_AND_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_LSHIFT_25);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, cast_27);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1969", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_20 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_28, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_20, seq_32);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1982;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1983;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1984;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1985;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp1983"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st16_29 = CAST(16, MSB(DUP(cast_st16_28)), cast_st16_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st16_29)), cast_st16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_33 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_38 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_31, VARL("h_tmp1984"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_39 = NEG(cond_38);
	RzILOpPure *cast_41 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_40 = SUB(op_NEG_39, cast_41);
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(cast_st64_30, op_SUB_40);
	RzILOpPure *op_RSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_42, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos16", DUP(const_pos16), MUL(cast_45, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *cast_48 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_st16_50 = CAST(16, MSB(DUP(cast_st16_49)), cast_st16_49);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st16_50)), cast_st16_50);
	RzILOpPure *op_NE_52 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_54 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_55 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_56 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_59 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_52, VARL("h_tmp1985"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_st64_51, cond_59);
	RzILOpPure *cond_61 = ITE(op_LT_21, op_RSHIFT_43, op_LSHIFT_60);
	RzILOpPure *cast_63 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_62 = LOGAND(cond_61, cast_63);
	RzILOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_62);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos16", DUP(const_pos16), MUL(cast_66, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_11, op_LSHIFT_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1982", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1983", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_32 = HEX_SEXTRACT64(arg_cast_33, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp1984", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp1985", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *op_ASSIGN_69 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *seq_70 = SEQN(4, seq_19, seq_37, seq_58, op_ASSIGN_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, seq_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1986;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1987;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp1988;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1989;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp1987"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1988"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_40 = NEG(cond_39);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_41 = SUB(op_NEG_40, cast_42);
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(cast_st64_31, op_SUB_41);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(cast_st64_51)), cast_st64_51);
	RzILOpPure *cast_st64_53 = CAST(64, MSB(DUP(cast_st32_52)), cast_st32_52);
	RzILOpPure *op_NE_54 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_57 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_58 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_61 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_54, VARL("h_tmp1989"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_st64_53, cond_61);
	RzILOpPure *cond_63 = ITE(op_LT_21, op_RSHIFT_44, op_LSHIFT_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos32", DUP(const_pos32), MUL(cast_66, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(op_AND_64, op_MUL_65);
	RzILOpPure *cast_69 = CAST(64, IL_FALSE, op_LSHIFT_67);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_11, cast_69);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1986", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1987", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp1988", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_55 = HEX_SEXTRACT64(arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp1989", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *seq_71 = SEQN(4, seq_19, seq_38, seq_60, op_ASSIGN_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

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
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_3);

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
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(Rxx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rxx_assoc_tmp, op_ADD_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

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
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LOGAND(Rxx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rxx_assoc_tmp, op_AND_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

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
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_SUB_3 = SUB(Rxx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rxx_assoc_tmp, op_SUB_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

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
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_OR_3 = LOGOR(Rxx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rxx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut8 rnd;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *cast_8 = CAST(8, IL_FALSE, op_AND_5);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cast_st64_9, VARLP("const_pos1")));
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARL("rnd"))), VARL("rnd"));
	RzILOpPure *op_ADD_11 = ADD(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, op_ADD_11);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("rnd", cast_8);
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, cast_14);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_13);

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
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_3);

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
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

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
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LOGAND(Rx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_AND_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

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
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_SUB_3 = SUB(Rx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_SUB_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

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
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_OR_3 = LOGOR(Rx, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(DUP(cast_st32_0)), cast_st32_0);
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(cast_st64_1, VARL("u"));
	RzILOpPure *cast_5 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_4 = ADD(op_RSHIFT_3, cast_5);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(op_ADD_4)), op_ADD_4);
	RzILOpPure *op_RSHIFT_7 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cast_st64_6, VARLP("const_pos1")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1990;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_st64_19, VARL("u"));
	RzILOpPure *op_MUL_22 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(op_RSHIFT_21, op_MUL_22);
	RzILOpPure *cast_25 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, cast_st16_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1990", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_20 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_35 = SETG(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_20, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1991;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st16_18, VARL("u"));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(cast_25, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_11, op_LSHIFT_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1991", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_28, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1992;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_st64_19, VARL("u"));
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(op_AND_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_LSHIFT_25);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, cast_27);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1992", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_20 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_28, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_20, seq_32);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2005;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2006;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: st64 h_tmp2007;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2008;
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2006"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", const_pos32, MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp2007"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_40 = NEG(cond_39);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_41 = SUB(op_NEG_40, cast_42);
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_st64_31, op_SUB_41);
	RzILOpPure *op_LSHIFT_44 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(cast_st64_51)), cast_st64_51);
	RzILOpPure *cast_st64_53 = CAST(64, MSB(DUP(cast_st32_52)), cast_st32_52);
	RzILOpPure *op_NE_54 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_57 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_58 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_61 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_54, VARL("h_tmp2008"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(cast_st64_53, cond_61);
	RzILOpPure *cond_63 = ITE(op_LT_21, op_LSHIFT_44, op_RSHIFT_62);
	RzILOpPure *op_MUL_64 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(cond_63, op_MUL_64);
	RzILOpPure *cast_67 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_st16_68 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_70 = CAST(32, IL_FALSE, cast_st16_68);
	RzILOpPure *op_AND_69 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_70, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_71 = CAST(64, IL_FALSE, op_AND_69);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_72 = LET("const_pos16", DUP(const_pos16), MUL(cast_73, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(cast_ut64_71, op_MUL_72);
	RzILOpPure *cast_76 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_75 = LOGOR(cast_76, op_LSHIFT_74);
	RzILOpPure *cast_78 = CAST(32, IL_FALSE, op_OR_75);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2005", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2006", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp2007", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_55 = HEX_SEXTRACT64(arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2008", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *op_ASSIGN_77 = SETG(Rd_assoc_tmp, cast_78);
	RzILOpEffect *seq_79 = SEQN(4, seq_19, seq_38, seq_60, op_ASSIGN_77);
	RzILOpEffect *empty_80 = EMPTY();
	RzILOpEffect *seq_81 = SEQN(2, seq_79, empty_80);
	RzILOpEffect *seq_82 = SEQN(2, seq_6, seq_81);
	RzILOpEffect *for_84 = REPEAT(op_LT_2, seq_82);
	RzILOpEffect *seq_83 = SEQN(2, op_ASSIGN_0, for_84);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2009;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2010;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2011;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2012;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2010"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st16_29 = CAST(16, MSB(DUP(cast_st16_28)), cast_st16_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st16_29)), cast_st16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_33 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_38 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_31, VARL("h_tmp2011"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_39 = NEG(cond_38);
	RzILOpPure *cast_41 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_40 = SUB(op_NEG_39, cast_41);
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_st64_30, op_SUB_40);
	RzILOpPure *op_LSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_42, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos16", DUP(const_pos16), MUL(cast_45, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *cast_48 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_st16_50 = CAST(16, MSB(DUP(cast_st16_49)), cast_st16_49);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st16_50)), cast_st16_50);
	RzILOpPure *op_NE_52 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_54 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_55 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_56 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_59 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_52, VARL("h_tmp2012"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(cast_st64_51, cond_59);
	RzILOpPure *cond_61 = ITE(op_LT_21, op_LSHIFT_43, op_RSHIFT_60);
	RzILOpPure *cast_63 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_62 = LOGAND(cond_61, cast_63);
	RzILOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_62);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos16", DUP(const_pos16), MUL(cast_66, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_11, op_LSHIFT_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2009", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2010", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_32 = HEX_SEXTRACT64(arg_cast_33, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp2011", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2012", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *op_ASSIGN_69 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *seq_70 = SEQN(4, seq_19, seq_37, seq_58, op_ASSIGN_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, seq_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2013;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2014;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2015;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2016;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2014"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp2015"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_40 = NEG(cond_39);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_41 = SUB(op_NEG_40, cast_42);
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_st64_31, op_SUB_41);
	RzILOpPure *op_LSHIFT_44 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(cast_st64_51)), cast_st64_51);
	RzILOpPure *cast_st64_53 = CAST(64, MSB(DUP(cast_st32_52)), cast_st32_52);
	RzILOpPure *op_NE_54 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_57 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_58 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_61 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_54, VARL("h_tmp2016"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(cast_st64_53, cond_61);
	RzILOpPure *cond_63 = ITE(op_LT_21, op_LSHIFT_44, op_RSHIFT_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos32", DUP(const_pos32), MUL(cast_66, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(op_AND_64, op_MUL_65);
	RzILOpPure *cast_69 = CAST(64, IL_FALSE, op_LSHIFT_67);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_11, cast_69);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2013", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2014", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp2015", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_55 = HEX_SEXTRACT64(arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2016", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *seq_71 = SEQN(4, seq_19, seq_38, seq_60, op_ASSIGN_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

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
	// Declare: st32 h_tmp2020;

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("h_tmp2020"));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_CLO32(op_NOT_0);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp2020", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, cast_5);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_4);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

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
	// Declare: st32 h_tmp2021;

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("h_tmp2021"));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(Rs);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp2021", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cast_4);
	RzILOpEffect *seq_5 = SEQN(2, seq_2, op_ASSIGN_3);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_5);

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
	// Declare: st32 h_tmp2022;
	// Declare: st32 h_tmp2023;
	// Declare: st32 h_tmp2024;
	// Declare: st32 h_tmp2025;

	// EXEC
	RzILOpPure *op_NOT_3 = LOGNOT(Rs);
	RzILOpPure *op_GT_7 = SGT(VARL("h_tmp2022"), VARL("h_tmp2023"));
	RzILOpPure *op_NOT_11 = LOGNOT(DUP(Rs));
	RzILOpPure *cond_15 = ITE(op_GT_7, VARL("h_tmp2024"), VARL("h_tmp2025"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, cond_15);

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp2022", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_4 = HEX_CLO32(op_NOT_3);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2023", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_8 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_9 = SETL("h_tmp2024", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_10 = SEQN(2, c_call_8, op_ASSIGN_hybrid_tmp_9);
	RzILOpEffect *c_call_12 = HEX_CLO32(op_NOT_11);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp2025", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rd_assoc_tmp, cast_17);
	RzILOpEffect *seq_18 = SEQN(5, seq_2, seq_6, seq_10, seq_14, op_ASSIGN_16);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_18);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbnorm(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	// Declare: st32 h_tmp2026;
	// Declare: st32 h_tmp2027;
	// Declare: st32 h_tmp2028;
	// Declare: st32 h_tmp2029;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_NOT_5 = LOGNOT(DUP(Rs));
	RzILOpPure *op_GT_9 = SGT(VARL("h_tmp2026"), VARL("h_tmp2027"));
	RzILOpPure *op_NOT_13 = LOGNOT(DUP(Rs));
	RzILOpPure *cond_17 = ITE(op_GT_9, VARL("h_tmp2028"), VARL("h_tmp2029"));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cond_17);
	RzILOpPure *op_SUB_18 = LET("const_pos1", const_pos1, SUB(cast_19, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")));
	RzILOpEffect *c_call_2 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp2026", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *c_call_6 = HEX_CLO32(op_NOT_5);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp2027", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_10 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp2028", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_14 = HEX_CLO32(op_NOT_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp2029", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rd_assoc_tmp, op_SUB_18);
	RzILOpEffect *seq_21 = SEQN(5, seq_4, seq_8, seq_12, seq_16, op_ASSIGN_20);
	RzILOpEffect *seq_then_22 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_24 = SEQN(1, seq_21);
	RzILOpEffect *branch_23 = BRANCH(op_EQ_0, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_23);

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
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rs, op_NOT_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, op_AND_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

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
	// Declare: st64 h_tmp2030;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2031;
	// Declare: st64 h_tmp2032;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2030"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_8 = SLT(cond_7, cast_9);
	RzILOpPure *cast_ut32_10 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp2031"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_20 = NEG(cond_19);
	RzILOpPure *cast_22 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_21 = SUB(op_NEG_20, cast_22);
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_11, op_SUB_21);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_25 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_NE_27 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_29 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_31 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_34 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp2032"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_26, cond_34);
	RzILOpPure *cond_36 = ITE(op_LT_8, op_RSHIFT_24, op_LSHIFT_35);
	RzILOpPure *op_NOT_37 = LOGNOT(cond_36);
	RzILOpPure *cast_39 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_AND_38 = LOGAND(cast_39, op_NOT_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, op_AND_38);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2030", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2031", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(arg_cast_29, arg_cast_30, arg_cast_31);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2032", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rd_assoc_tmp, cast_41);
	RzILOpEffect *seq_42 = SEQN(4, seq_6, seq_18, seq_33, op_ASSIGN_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_42);

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
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp2033;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_6 = LET("const_pos0", const_pos0, INV(EQ(cast_7, VARLP("const_pos0"))));
	RzILOpPure *cast_ut32_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_8, VARL("offset"));
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_RSHIFT_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_17 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_16 = ITE(op_NE_6, VARL("h_tmp2033"), cast_17);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cond_16);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_EXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp2033", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_18 = SETG(Rd_assoc_tmp, cast_19);
	RzILOpEffect *seq_20 = SEQN(2, seq_15, op_ASSIGN_18);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_extractu_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp2035;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_6 = LET("const_pos0", const_pos0, INV(EQ(cast_7, VARLP("const_pos0"))));
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_8, VARL("offset"));
	RzILOpPure *arg_cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_12 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_16 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_15 = ITE(op_NE_6, VARL("h_tmp2035"), cast_16);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_EXTRACT64(op_RSHIFT_9, arg_cast_11, arg_cast_12);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp2035", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *op_ASSIGN_17 = SETG(Rdd_assoc_tmp, cond_15);
	RzILOpEffect *seq_18 = SEQN(2, seq_14, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_18);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_extractup_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insert(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_8 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_7 = SUB(op_LSHIFT_6, cast_8);
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_SUB_7, VARL("offset"));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *andop_NOT_10Rx = LOGAND(op_NOT_10, cast_12);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, andop_NOT_10Rx);
	RzILOpPure *op_LSHIFT_14 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_16 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_15 = SUB(op_LSHIFT_14, cast_16);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_17 = LOGAND(cast_18, op_SUB_15);
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(op_AND_17, VARL("offset"));
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *orop_LSHIFT_19Rx = LOGOR(op_LSHIFT_19, cast_21);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, orop_LSHIFT_19Rx);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *op_ASSIGN_AND_11 = SETG(Rx_assoc_tmp, cast_13);
	RzILOpEffect *op_ASSIGN_OR_20 = SETG(Rx_assoc_tmp, cast_22);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, op_ASSIGN_AND_11, op_ASSIGN_OR_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_insert_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_insertp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_8 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_7 = SUB(op_LSHIFT_6, cast_8);
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_SUB_7, VARL("offset"));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *andop_NOT_10Rxx = LOGAND(cast_12, Rxx);
	RzILOpPure *op_LSHIFT_13 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_15 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_14 = SUB(op_LSHIFT_13, cast_15);
	RzILOpPure *cast_17 = CAST(64, IL_FALSE, op_SUB_14);
	RzILOpPure *op_AND_16 = LOGAND(Rss, cast_17);
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(op_AND_16, VARL("offset"));
	RzILOpPure *orop_LSHIFT_18Rxx = LOGOR(op_LSHIFT_18, DUP(Rxx));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *op_ASSIGN_AND_11 = SETG(Rxx_assoc_tmp, andop_NOT_10Rxx);
	RzILOpEffect *op_ASSIGN_OR_19 = SETG(Rxx_assoc_tmp, orop_LSHIFT_18Rxx);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, op_ASSIGN_AND_11, op_ASSIGN_OR_19);

	return instruction_sequence;
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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2050;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2051;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2052;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2053;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2051"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut16_29 = CAST(16, IL_FALSE, cast_ut16_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_33 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_38 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_31, VARL("h_tmp2052"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_39 = NEG(cond_38);
	RzILOpPure *cast_41 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_40 = SUB(op_NEG_39, cast_41);
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(cast_ut64_30, op_SUB_40);
	RzILOpPure *op_RSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_42, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos16", DUP(const_pos16), MUL(cast_45, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *cast_48 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_ut16_49 = CAST(16, IL_FALSE, op_AND_47);
	RzILOpPure *cast_ut16_50 = CAST(16, IL_FALSE, cast_ut16_49);
	RzILOpPure *cast_ut64_51 = CAST(64, IL_FALSE, cast_ut16_50);
	RzILOpPure *op_NE_52 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_54 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_55 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_56 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_59 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_52, VARL("h_tmp2053"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_ut64_51, cond_59);
	RzILOpPure *cond_61 = ITE(op_LT_21, op_RSHIFT_43, op_LSHIFT_60);
	RzILOpPure *cast_63 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, IL_FALSE, VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_62 = LOGAND(cond_61, cast_63);
	RzILOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_62);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos16", DUP(const_pos16), MUL(cast_66, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_11, op_LSHIFT_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2050", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2051", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_32 = HEX_SEXTRACT64(arg_cast_33, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp2052", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2053", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *op_ASSIGN_69 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *seq_70 = SEQN(4, seq_19, seq_37, seq_58, op_ASSIGN_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, seq_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2054;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2055;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2056;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2057;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2055"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_ut32_28 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut32_28);
	RzILOpPure *cast_ut32_30 = CAST(32, IL_FALSE, cast_ut64_29);
	RzILOpPure *cast_ut64_31 = CAST(64, IL_FALSE, cast_ut32_30);
	RzILOpPure *op_NE_32 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp2056"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_40 = NEG(cond_39);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_41 = SUB(op_NEG_40, cast_42);
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(cast_ut64_31, op_SUB_41);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_ut32_50 = CAST(32, IL_FALSE, op_AND_48);
	RzILOpPure *cast_ut64_51 = CAST(64, IL_FALSE, cast_ut32_50);
	RzILOpPure *cast_ut32_52 = CAST(32, IL_FALSE, cast_ut64_51);
	RzILOpPure *cast_ut64_53 = CAST(64, IL_FALSE, cast_ut32_52);
	RzILOpPure *op_NE_54 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_57 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_58 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_61 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_54, VARL("h_tmp2057"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_53, cond_61);
	RzILOpPure *cond_63 = ITE(op_LT_21, op_RSHIFT_44, op_LSHIFT_62);
	RzILOpPure *cast_65 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_64 = LOGAND(cond_63, cast_65);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_66 = LET("const_pos32", DUP(const_pos32), MUL(cast_67, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_68 = SHIFTL0(op_AND_64, op_MUL_66);
	RzILOpPure *op_OR_69 = LOGOR(op_AND_11, op_LSHIFT_68);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2054", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2055", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp2056", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_55 = HEX_SEXTRACT64(arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2057", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_69);
	RzILOpEffect *seq_71 = SEQN(4, seq_19, seq_38, seq_60, op_ASSIGN_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2058;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut16_18, VARL("u"));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(cast_25, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_11, op_LSHIFT_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2058", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_28, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2059;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut32_18 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_ut64_19, VARL("u"));
	RzILOpPure *cast_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos32", DUP(const_pos32), MUL(cast_25, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(op_AND_22, op_MUL_24);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_11, op_LSHIFT_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2059", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_20 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_28, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_20, seq_32);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2071;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2072;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2073;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2074;
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2072"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut16_29 = CAST(16, IL_FALSE, cast_ut16_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut16_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_33 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_38 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_31, VARL("h_tmp2073"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_39 = NEG(cond_38);
	RzILOpPure *cast_41 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_40 = SUB(op_NEG_39, cast_41);
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_ut64_30, op_SUB_40);
	RzILOpPure *op_LSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_42, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos16", DUP(const_pos16), MUL(cast_45, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *cast_48 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_ut16_49 = CAST(16, IL_FALSE, op_AND_47);
	RzILOpPure *cast_ut16_50 = CAST(16, IL_FALSE, cast_ut16_49);
	RzILOpPure *cast_ut64_51 = CAST(64, IL_FALSE, cast_ut16_50);
	RzILOpPure *op_NE_52 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_54 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_55 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_56 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_59 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_52, VARL("h_tmp2074"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(cast_ut64_51, cond_59);
	RzILOpPure *cond_61 = ITE(op_LT_21, op_LSHIFT_43, op_RSHIFT_60);
	RzILOpPure *cast_63 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, IL_FALSE, VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_62 = LOGAND(cond_61, cast_63);
	RzILOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_62);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos16", DUP(const_pos16), MUL(cast_66, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_11, op_LSHIFT_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2071", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2072", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_32 = HEX_SEXTRACT64(arg_cast_33, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp2073", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2074", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *op_ASSIGN_69 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *seq_70 = SEQN(4, seq_19, seq_37, seq_58, op_ASSIGN_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, seq_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2075;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2076;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2077;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2078;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2076"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_ut32_28 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut32_28);
	RzILOpPure *cast_ut32_30 = CAST(32, IL_FALSE, cast_ut64_29);
	RzILOpPure *cast_ut64_31 = CAST(64, IL_FALSE, cast_ut32_30);
	RzILOpPure *op_NE_32 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp2077"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_40 = NEG(cond_39);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_41 = SUB(op_NEG_40, cast_42);
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_31, op_SUB_41);
	RzILOpPure *op_LSHIFT_44 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_43, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_ut32_50 = CAST(32, IL_FALSE, op_AND_48);
	RzILOpPure *cast_ut64_51 = CAST(64, IL_FALSE, cast_ut32_50);
	RzILOpPure *cast_ut32_52 = CAST(32, IL_FALSE, cast_ut64_51);
	RzILOpPure *cast_ut64_53 = CAST(64, IL_FALSE, cast_ut32_52);
	RzILOpPure *op_NE_54 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_57 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_58 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_61 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_54, VARL("h_tmp2078"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(cast_ut64_53, cond_61);
	RzILOpPure *cond_63 = ITE(op_LT_21, op_LSHIFT_44, op_RSHIFT_62);
	RzILOpPure *cast_65 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_64 = LOGAND(cond_63, cast_65);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_66 = LET("const_pos32", DUP(const_pos32), MUL(cast_67, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_68 = SHIFTL0(op_AND_64, op_MUL_66);
	RzILOpPure *op_OR_69 = LOGOR(op_AND_11, op_LSHIFT_68);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2075", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2076", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp2077", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_55 = HEX_SEXTRACT64(arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2078", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_69);
	RzILOpEffect *seq_71 = SEQN(4, seq_19, seq_38, seq_60, op_ASSIGN_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

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
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_2 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_4 = SHIFTL0(op_SUB_2, VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, op_LSHIFT_4);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_packhl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
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
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st16_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *op_OR_14 = LOGOR(op_AND_3, op_LSHIFT_13);
	RzILOpPure *op_MUL_17 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_17));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, IL_FALSE, op_NOT_19);
	RzILOpPure *op_AND_20 = LOGAND(VARG(Rdd_assoc_tmp), cast_21);
	RzILOpPure *op_MUL_22 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rs, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st16_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *op_MUL_29 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *op_OR_31 = LOGOR(op_AND_20, op_LSHIFT_30);
	RzILOpPure *op_MUL_34 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_34));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, op_NOT_36);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Rdd_assoc_tmp), cast_38);
	RzILOpPure *op_MUL_39 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_41)), op_AND_41);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cast_st16_42);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_44, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(cast_ut64_45, op_MUL_46);
	RzILOpPure *op_OR_48 = LOGOR(op_AND_37, op_LSHIFT_47);
	RzILOpPure *op_MUL_51 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_51));
	RzILOpPure *op_NOT_53 = LOGNOT(op_LSHIFT_52);
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, op_NOT_53);
	RzILOpPure *op_AND_54 = LOGAND(VARG(Rdd_assoc_tmp), cast_55);
	RzILOpPure *op_MUL_56 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cast_st16_59);
	RzILOpPure *op_AND_60 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_61, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_62 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *op_MUL_63 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_62, op_MUL_63);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_54, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *op_ASSIGN_15 = SETG(Rdd_assoc_tmp, op_OR_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *op_ASSIGN_32 = SETG(Rdd_assoc_tmp, op_OR_31);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, op_OR_48);
	RzILOpEffect *empty_50 = EMPTY();
	RzILOpEffect *op_ASSIGN_66 = SETG(Rdd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_15, empty_16, op_ASSIGN_32, empty_33, op_ASSIGN_49, empty_50, op_ASSIGN_66, empty_67);

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
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, op_LSHIFT_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	// Declare: st64 h_tmp2079;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2080;
	// Declare: st64 h_tmp2081;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2079"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_8 = SLT(cond_7, cast_9);
	RzILOpPure *cast_ut32_10 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp2080"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_20 = NEG(cond_19);
	RzILOpPure *cast_22 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_21 = SUB(op_NEG_20, cast_22);
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_11, op_SUB_21);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_25 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_NE_27 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_29 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_31 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_34 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp2081"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_26, cond_34);
	RzILOpPure *cond_36 = ITE(op_LT_8, op_RSHIFT_24, op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_OR_37 = LOGOR(cast_38, cond_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_OR_37);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2079", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2080", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(arg_cast_29, arg_cast_30, arg_cast_31);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2081", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *op_ASSIGN_39 = SETG(Rd_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(4, seq_6, seq_18, seq_33, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2082;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(op_MUL_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_NOT_11);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), cast_13);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos2", DUP(const_pos2), MUL(cast_15, VARLP("const_pos2")));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(cast_st8_20)), cast_st8_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_22, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos2", DUP(const_pos2), MUL(cast_25, VARLP("const_pos2")));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_27 = SHIFTL0(cast_ut64_23, op_MUL_26);
	RzILOpPure *op_OR_28 = LOGOR(op_AND_12, op_LSHIFT_27);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos2", DUP(const_pos2), MUL(cast_32, VARLP("const_pos2")));
	RzILOpPure *op_ADD_33 = LET("const_pos1", const_pos1, ADD(op_MUL_31, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_33, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_34));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, op_NOT_36);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Rdd_assoc_tmp), cast_38);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos2", DUP(const_pos2), MUL(cast_40, VARLP("const_pos2")));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_39, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(Rss, op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st8_45 = CAST(8, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(cast_st8_45)), cast_st8_45);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_47, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), MUL(cast_50, VARLP("const_pos2")));
	RzILOpPure *op_ADD_51 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_49, VARLP("const_pos1")));
	RzILOpPure *op_MUL_52 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_51, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_53 = SHIFTL0(cast_ut64_48, op_MUL_52);
	RzILOpPure *op_OR_54 = LOGOR(op_AND_37, op_LSHIFT_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2082", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_29 = SETG(Rdd_assoc_tmp, op_OR_28);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *op_ASSIGN_55 = SETG(Rdd_assoc_tmp, op_OR_54);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *seq_57 = SEQN(4, op_ASSIGN_29, empty_30, op_ASSIGN_55, empty_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_6, seq_57);
	RzILOpEffect *for_60 = REPEAT(op_LT_2, seq_58);
	RzILOpEffect *seq_59 = SEQN(2, op_ASSIGN_0, for_60);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2083;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", DUP(const_pos2), MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(op_MUL_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_NOT_11);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), cast_13);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos2", DUP(const_pos2), MUL(cast_15, VARLP("const_pos2")));
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, cast_st16_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos2", DUP(const_pos2), MUL(cast_25, VARLP("const_pos2")));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_24, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_27 = SHIFTL0(cast_ut64_23, op_MUL_26);
	RzILOpPure *op_OR_28 = LOGOR(op_AND_12, op_LSHIFT_27);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos2", DUP(const_pos2), MUL(cast_32, VARLP("const_pos2")));
	RzILOpPure *op_ADD_33 = LET("const_pos1", const_pos1, ADD(op_MUL_31, VARLP("const_pos1")));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_33, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_34));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, op_NOT_36);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Rdd_assoc_tmp), cast_38);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos2", DUP(const_pos2), MUL(cast_40, VARLP("const_pos2")));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_39, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(Rss, op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, cast_st16_45);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_47, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), MUL(cast_50, VARLP("const_pos2")));
	RzILOpPure *op_ADD_51 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_49, VARLP("const_pos1")));
	RzILOpPure *op_MUL_52 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_51, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_53 = SHIFTL0(cast_ut64_48, op_MUL_52);
	RzILOpPure *op_OR_54 = LOGOR(op_AND_37, op_LSHIFT_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2083", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_29 = SETG(Rdd_assoc_tmp, op_OR_28);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *op_ASSIGN_55 = SETG(Rdd_assoc_tmp, op_OR_54);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *seq_57 = SEQN(4, op_ASSIGN_29, empty_30, op_ASSIGN_55, empty_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_6, seq_57);
	RzILOpEffect *for_60 = REPEAT(op_LT_2, seq_58);
	RzILOpEffect *seq_59 = SEQN(2, op_ASSIGN_0, for_60);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffob(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2084;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(op_MUL_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_NOT_11);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), cast_13);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos2", DUP(const_pos2), MUL(cast_15, VARLP("const_pos2")));
	RzILOpPure *op_ADD_16 = LET("const_pos1", const_pos1, ADD(op_MUL_14, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_16, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st8_21 = CAST(8, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(cast_st8_21)), cast_st8_21);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_23, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos2", DUP(const_pos2), MUL(cast_26, VARLP("const_pos2")));
	RzILOpPure *op_MUL_27 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_25, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(cast_ut64_24, op_MUL_27);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_12, op_LSHIFT_28);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos2", DUP(const_pos2), MUL(cast_33, VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_35 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_34, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_36 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_35));
	RzILOpPure *op_NOT_37 = LOGNOT(op_LSHIFT_36);
	RzILOpPure *cast_39 = CAST(64, IL_FALSE, op_NOT_37);
	RzILOpPure *op_AND_38 = LOGAND(VARG(Rdd_assoc_tmp), cast_39);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), MUL(cast_41, VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_40, VARLP("const_pos1")));
	RzILOpPure *op_MUL_43 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(Rtt, op_MUL_43);
	RzILOpPure *cast_46 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st8_47 = CAST(8, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_49 = CAST(64, MSB(DUP(cast_st8_47)), cast_st8_47);
	RzILOpPure *op_AND_48 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_49, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, op_AND_48);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos2", DUP(const_pos2), MUL(cast_52, VARLP("const_pos2")));
	RzILOpPure *op_ADD_53 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_51, VARLP("const_pos1")));
	RzILOpPure *op_MUL_54 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_53, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(cast_ut64_50, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_38, op_LSHIFT_55);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2084", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETG(Rdd_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *seq_59 = SEQN(4, op_ASSIGN_30, empty_31, op_ASSIGN_57, empty_58);
	RzILOpEffect *seq_60 = SEQN(2, seq_6, seq_59);
	RzILOpEffect *for_62 = REPEAT(op_LT_2, seq_60);
	RzILOpEffect *seq_61 = SEQN(2, op_ASSIGN_0, for_62);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffoh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2085;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", DUP(const_pos2), MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(op_MUL_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_NOT_11);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), cast_13);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos2", DUP(const_pos2), MUL(cast_15, VARLP("const_pos2")));
	RzILOpPure *op_ADD_16 = LET("const_pos1", const_pos1, ADD(op_MUL_14, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_16, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st16_21 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, cast_st16_21);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_23, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos2", DUP(const_pos2), MUL(cast_26, VARLP("const_pos2")));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_25, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(cast_ut64_24, op_MUL_27);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_12, op_LSHIFT_28);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos2", DUP(const_pos2), MUL(cast_33, VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_34, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_36 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_35));
	RzILOpPure *op_NOT_37 = LOGNOT(op_LSHIFT_36);
	RzILOpPure *cast_39 = CAST(64, IL_FALSE, op_NOT_37);
	RzILOpPure *op_AND_38 = LOGAND(VARG(Rdd_assoc_tmp), cast_39);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), MUL(cast_41, VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_40, VARLP("const_pos1")));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(Rtt, op_MUL_43);
	RzILOpPure *cast_46 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st16_47 = CAST(16, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, cast_st16_47);
	RzILOpPure *op_AND_48 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_49, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, op_AND_48);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos2", DUP(const_pos2), MUL(cast_52, VARLP("const_pos2")));
	RzILOpPure *op_ADD_53 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_51, VARLP("const_pos1")));
	RzILOpPure *op_MUL_54 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_53, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(cast_ut64_50, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_38, op_LSHIFT_55);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2085", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETG(Rdd_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *seq_59 = SEQN(4, op_ASSIGN_30, empty_31, op_ASSIGN_57, empty_58);
	RzILOpEffect *seq_60 = SEQN(2, seq_6, seq_59);
	RzILOpEffect *for_62 = REPEAT(op_LT_2, seq_60);
	RzILOpEffect *seq_61 = SEQN(2, op_ASSIGN_0, for_62);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_61);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, cast_st8_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_11_12);

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
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_8 = CAST(8, IL_FALSE, cast_st8_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_8_9);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Nt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, cast_st8_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_11_12);

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
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_8 = CAST(8, IL_FALSE, cast_st8_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_8_9);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_5 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_7 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_7_8);

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
	RzILOpPure *op_5 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_4 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_11_12);

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
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_8_9);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_11_12);

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
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_8_9);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Nt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_11_12);

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
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_8_9);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_7 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_7_8);

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
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_4 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rx, cast_4);
	RzILOpPure *op_7 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_2, op_ASSIGN_0, empty_1, op_ASSIGN_5, empty_6, ms_op_7_8);

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
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_4 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

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
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2094;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2095;
	// Declare: ut32 h_tmp2096;
	// Declare: ut32 h_tmp2097;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2098;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp2099;
	// Declare: ut32 h_tmp2100;
	// Declare: ut32 h_tmp2101;
	// Declare: ut32 h_tmp2102;
	// Declare: ut64 h_tmp2103;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_NE_5 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, cast_st16_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2094"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rs), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(cast_st16_20)), cast_st16_20);
	RzILOpPure *op_EQ_21 = EQ(cond_16, cast_22);
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rs), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_38 = CAST(64, MSB(DUP(VARL("h_tmp2096"))), VARL("h_tmp2096"));
	RzILOpPure *arg_cast_39 = CAST(64, MSB(DUP(VARL("h_tmp2097"))), VARL("h_tmp2097"));
	RzILOpPure *arg_cast_40 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_44 = ITE(NON_ZERO(VARL("h_tmp2095")), VARL("h_tmp2098"), cast_45);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, cond_44);
	RzILOpPure *op_MUL_49 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_51)), op_AND_51);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, cast_st16_52);
	RzILOpPure *op_LT_53 = LET("const_pos0", DUP(const_pos0), ULT(cast_54, VARLP("const_pos0")));
	RzILOpPure *op_SUB_55 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_56 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_55));
	RzILOpPure *op_NEG_57 = NEG(op_LSHIFT_56);
	RzILOpPure *op_SUB_58 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_59 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_58));
	RzILOpPure *cast_61 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_60 = SUB(op_LSHIFT_59, cast_61);
	RzILOpPure *cond_62 = ITE(op_LT_53, op_NEG_57, op_SUB_60);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(cast_st16_26)), cast_st16_26);
	RzILOpPure *cond_63 = ITE(op_EQ_21, cast_64, cond_62);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_63, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_66 = CAST(64, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_68 = SHIFTL0(cast_ut64_66, op_MUL_67);
	RzILOpPure *cast_70 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_69 = LOGOR(cast_70, op_LSHIFT_68);
	RzILOpPure *cast_72 = CAST(32, IL_FALSE, op_OR_69);
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_76 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_75));
	RzILOpPure *op_NOT_77 = LOGNOT(op_LSHIFT_76);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_78 = LOGAND(cast_79, op_NOT_77);
	RzILOpPure *op_NE_80 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_81 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_82 = SHIFTR0(DUP(Rs), op_MUL_81);
	RzILOpPure *op_AND_83 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_82, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_84 = CAST(16, MSB(DUP(op_AND_83)), op_AND_83);
	RzILOpPure *arg_cast_86 = CAST(64, IL_FALSE, cast_st16_84);
	RzILOpPure *arg_cast_87 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_88 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_91 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_80, VARL("h_tmp2099"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_92 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rs), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(16, MSB(DUP(op_AND_94)), op_AND_94);
	RzILOpPure *cast_97 = CAST(64, MSB(DUP(cast_st16_95)), cast_st16_95);
	RzILOpPure *op_EQ_96 = EQ(cond_91, cast_97);
	RzILOpPure *op_MUL_98 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rs), op_MUL_98);
	RzILOpPure *op_AND_100 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_99, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_101 = CAST(16, MSB(DUP(op_AND_100)), op_AND_100);
	RzILOpPure *arg_cast_112 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_113 = CAST(64, MSB(DUP(VARL("h_tmp2101"))), VARL("h_tmp2101"));
	RzILOpPure *arg_cast_114 = CAST(64, MSB(DUP(VARL("h_tmp2102"))), VARL("h_tmp2102"));
	RzILOpPure *arg_cast_115 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_120 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_119 = ITE(NON_ZERO(VARL("h_tmp2100")), VARL("h_tmp2103"), cast_120);
	RzILOpPure *cast_122 = CAST(32, IL_FALSE, cond_119);
	RzILOpPure *op_MUL_124 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rs), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_125, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_127 = CAST(16, MSB(DUP(op_AND_126)), op_AND_126);
	RzILOpPure *cast_129 = CAST(32, IL_FALSE, cast_st16_127);
	RzILOpPure *op_LT_128 = LET("const_pos0", DUP(const_pos0), ULT(cast_129, VARLP("const_pos0")));
	RzILOpPure *op_SUB_130 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_131 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_130));
	RzILOpPure *op_NEG_132 = NEG(op_LSHIFT_131);
	RzILOpPure *op_SUB_133 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *cast_136 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_135 = SUB(op_LSHIFT_134, cast_136);
	RzILOpPure *cond_137 = ITE(op_LT_128, op_NEG_132, op_SUB_135);
	RzILOpPure *cast_139 = CAST(64, MSB(DUP(cast_st16_101)), cast_st16_101);
	RzILOpPure *cond_138 = ITE(op_EQ_96, cast_139, cond_137);
	RzILOpPure *op_AND_140 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_138, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_141 = CAST(64, IL_FALSE, op_AND_140);
	RzILOpPure *op_MUL_142 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_143 = SHIFTL0(cast_ut64_141, op_MUL_142);
	RzILOpPure *cast_145 = CAST(64, IL_FALSE, op_AND_78);
	RzILOpPure *op_OR_144 = LOGOR(cast_145, op_LSHIFT_143);
	RzILOpPure *cast_147 = CAST(32, IL_FALSE, op_OR_144);
	RzILOpPure *op_MUL_150 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_151 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_150));
	RzILOpPure *op_NOT_152 = LOGNOT(op_LSHIFT_151);
	RzILOpPure *cast_154 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_153 = LOGAND(cast_154, op_NOT_152);
	RzILOpPure *cast_156 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_155 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_156, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_157 = CAST(64, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_158 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_159 = SHIFTL0(cast_ut64_157, op_MUL_158);
	RzILOpPure *cast_161 = CAST(64, IL_FALSE, op_AND_153);
	RzILOpPure *op_OR_160 = LOGOR(cast_161, op_LSHIFT_159);
	RzILOpPure *cast_163 = CAST(32, IL_FALSE, op_OR_160);
	RzILOpPure *op_MUL_165 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_166 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_165));
	RzILOpPure *op_NOT_167 = LOGNOT(op_LSHIFT_166);
	RzILOpPure *cast_169 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_168 = LOGAND(cast_169, op_NOT_167);
	RzILOpPure *cast_171 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_170 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_171, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_172 = CAST(64, IL_FALSE, op_AND_170);
	RzILOpPure *op_MUL_173 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_174 = SHIFTL0(cast_ut64_172, op_MUL_173);
	RzILOpPure *cast_176 = CAST(64, IL_FALSE, op_AND_168);
	RzILOpPure *op_OR_175 = LOGOR(cast_176, op_LSHIFT_174);
	RzILOpPure *cast_178 = CAST(32, IL_FALSE, op_OR_175);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp2094", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_27 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2095", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp2096", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp2097", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *c_call_36 = HEX_DEPOSIT64(arg_cast_37, arg_cast_38, arg_cast_39, arg_cast_40);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp2098", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(3, seq_32, seq_35, seq_42);
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc_tmp, cast_47);
	RzILOpEffect *seq_48 = SEQN(3, seq_29, seq_43, op_ASSIGN_46);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, cast_72);
	RzILOpEffect *seq_73 = SEQN(2, seq_15, op_ASSIGN_71);
	RzILOpEffect *empty_74 = EMPTY();
	RzILOpEffect *c_call_85 = HEX_SEXTRACT64(arg_cast_86, arg_cast_87, arg_cast_88);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_89 = SETL("h_tmp2099", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_90 = SEQN(2, c_call_85, op_ASSIGN_hybrid_tmp_89);
	RzILOpEffect *c_call_102 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_103 = SETL("h_tmp2100", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_104 = SEQN(2, c_call_102, op_ASSIGN_hybrid_tmp_103);
	RzILOpEffect *c_call_105 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_106 = SETL("h_tmp2101", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_107 = SEQN(2, c_call_105, op_ASSIGN_hybrid_tmp_106);
	RzILOpEffect *c_call_108 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_109 = SETL("h_tmp2102", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_110 = SEQN(2, c_call_108, op_ASSIGN_hybrid_tmp_109);
	RzILOpEffect *c_call_111 = HEX_DEPOSIT64(arg_cast_112, arg_cast_113, arg_cast_114, arg_cast_115);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_116 = SETL("h_tmp2103", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_117 = SEQN(2, c_call_111, op_ASSIGN_hybrid_tmp_116);
	RzILOpEffect *seq_118 = SEQN(3, seq_107, seq_110, seq_117);
	RzILOpEffect *op_ASSIGN_121 = SETG(usr_assoc_tmp, cast_122);
	RzILOpEffect *seq_123 = SEQN(3, seq_104, seq_118, op_ASSIGN_121);
	RzILOpEffect *op_ASSIGN_146 = SETG(Rd_assoc_tmp, cast_147);
	RzILOpEffect *seq_148 = SEQN(2, seq_90, op_ASSIGN_146);
	RzILOpEffect *empty_149 = EMPTY();
	RzILOpEffect *op_ASSIGN_162 = SETG(Rd_assoc_tmp, cast_163);
	RzILOpEffect *empty_164 = EMPTY();
	RzILOpEffect *op_ASSIGN_177 = SETG(Rd_assoc_tmp, cast_178);
	RzILOpEffect *empty_179 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, seq_73, empty_74, seq_148, empty_149, op_ASSIGN_162, empty_164, op_ASSIGN_177, empty_179, seq_48, seq_123);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_svsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut64 h_tmp2104;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2105;
	// Declare: ut32 h_tmp2106;
	// Declare: ut32 h_tmp2107;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2108;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut64 h_tmp2109;
	// Declare: ut32 h_tmp2110;
	// Declare: ut32 h_tmp2111;
	// Declare: ut32 h_tmp2112;
	// Declare: ut64 h_tmp2113;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_NE_5 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, cast_st16_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_17 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_16 = ITE(op_NE_5, VARL("h_tmp2104"), cast_17);
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, cast_st16_21);
	RzILOpPure *op_EQ_22 = EQ(cond_16, cast_23);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *arg_cast_38 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_39 = CAST(64, MSB(DUP(VARL("h_tmp2106"))), VARL("h_tmp2106"));
	RzILOpPure *arg_cast_40 = CAST(64, MSB(DUP(VARL("h_tmp2107"))), VARL("h_tmp2107"));
	RzILOpPure *arg_cast_41 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_45 = ITE(NON_ZERO(VARL("h_tmp2105")), VARL("h_tmp2108"), cast_46);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, cond_45);
	RzILOpPure *op_MUL_50 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rs), op_MUL_50);
	RzILOpPure *op_AND_52 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_51, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_53 = CAST(16, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, cast_st16_53);
	RzILOpPure *op_LT_54 = LET("const_pos0", DUP(const_pos0), ULT(cast_55, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_56 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_58 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_57 = SUB(op_LSHIFT_56, cast_58);
	RzILOpPure *cast_60 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_59 = ITE(op_LT_54, cast_60, op_SUB_57);
	RzILOpPure *cast_62 = CAST(64, MSB(DUP(cast_st16_27)), cast_st16_27);
	RzILOpPure *cond_61 = ITE(op_EQ_22, cast_62, cond_59);
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_61, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_63);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzILOpPure *cast_68 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_67 = LOGOR(cast_68, op_LSHIFT_66);
	RzILOpPure *cast_70 = CAST(32, IL_FALSE, op_OR_67);
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_73));
	RzILOpPure *op_NOT_75 = LOGNOT(op_LSHIFT_74);
	RzILOpPure *cast_77 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_76 = LOGAND(cast_77, op_NOT_75);
	RzILOpPure *op_NE_78 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_79 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rs), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(16, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *arg_cast_84 = CAST(64, IL_FALSE, cast_st16_82);
	RzILOpPure *arg_cast_85 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_86 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_90 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_89 = ITE(op_NE_78, VARL("h_tmp2109"), cast_90);
	RzILOpPure *op_MUL_91 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rs), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_92, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_94 = CAST(16, MSB(DUP(op_AND_93)), op_AND_93);
	RzILOpPure *cast_96 = CAST(64, IL_FALSE, cast_st16_94);
	RzILOpPure *op_EQ_95 = EQ(cond_89, cast_96);
	RzILOpPure *op_MUL_97 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_98 = SHIFTR0(DUP(Rs), op_MUL_97);
	RzILOpPure *op_AND_99 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_98, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_100 = CAST(16, MSB(DUP(op_AND_99)), op_AND_99);
	RzILOpPure *arg_cast_111 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_112 = CAST(64, MSB(DUP(VARL("h_tmp2111"))), VARL("h_tmp2111"));
	RzILOpPure *arg_cast_113 = CAST(64, MSB(DUP(VARL("h_tmp2112"))), VARL("h_tmp2112"));
	RzILOpPure *arg_cast_114 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_119 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_118 = ITE(NON_ZERO(VARL("h_tmp2110")), VARL("h_tmp2113"), cast_119);
	RzILOpPure *cast_121 = CAST(32, IL_FALSE, cond_118);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rs), op_MUL_123);
	RzILOpPure *op_AND_125 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_124, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_126 = CAST(16, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_128 = CAST(32, IL_FALSE, cast_st16_126);
	RzILOpPure *op_LT_127 = LET("const_pos0", DUP(const_pos0), ULT(cast_128, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_129 = LET("const_pos1LL", DUP(const_pos1LL), LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_131 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_130 = SUB(op_LSHIFT_129, cast_131);
	RzILOpPure *cast_133 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_132 = ITE(op_LT_127, cast_133, op_SUB_130);
	RzILOpPure *cast_135 = CAST(64, MSB(DUP(cast_st16_100)), cast_st16_100);
	RzILOpPure *cond_134 = ITE(op_EQ_95, cast_135, cond_132);
	RzILOpPure *op_AND_136 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_134, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_137 = CAST(64, IL_FALSE, op_AND_136);
	RzILOpPure *op_MUL_138 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_139 = SHIFTL0(cast_ut64_137, op_MUL_138);
	RzILOpPure *cast_141 = CAST(64, IL_FALSE, op_AND_76);
	RzILOpPure *op_OR_140 = LOGOR(cast_141, op_LSHIFT_139);
	RzILOpPure *cast_143 = CAST(32, IL_FALSE, op_OR_140);
	RzILOpPure *op_MUL_146 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_146));
	RzILOpPure *op_NOT_148 = LOGNOT(op_LSHIFT_147);
	RzILOpPure *cast_150 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_149 = LOGAND(cast_150, op_NOT_148);
	RzILOpPure *cast_152 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_151 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_152, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_153 = CAST(64, IL_FALSE, op_AND_151);
	RzILOpPure *op_MUL_154 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_155 = SHIFTL0(cast_ut64_153, op_MUL_154);
	RzILOpPure *cast_157 = CAST(64, IL_FALSE, op_AND_149);
	RzILOpPure *op_OR_156 = LOGOR(cast_157, op_LSHIFT_155);
	RzILOpPure *cast_159 = CAST(32, IL_FALSE, op_OR_156);
	RzILOpPure *op_MUL_161 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_162 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_161));
	RzILOpPure *op_NOT_163 = LOGNOT(op_LSHIFT_162);
	RzILOpPure *cast_165 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_164 = LOGAND(cast_165, op_NOT_163);
	RzILOpPure *cast_167 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_166 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_167, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_168 = CAST(64, IL_FALSE, op_AND_166);
	RzILOpPure *op_MUL_169 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_170 = SHIFTL0(cast_ut64_168, op_MUL_169);
	RzILOpPure *cast_172 = CAST(64, IL_FALSE, op_AND_164);
	RzILOpPure *op_OR_171 = LOGOR(cast_172, op_LSHIFT_170);
	RzILOpPure *cast_174 = CAST(32, IL_FALSE, op_OR_171);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_EXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp2104", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_28 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp2105", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *c_call_31 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2106", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *c_call_34 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2107", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_37 = HEX_DEPOSIT64(arg_cast_38, arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2108", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(3, seq_33, seq_36, seq_43);
	RzILOpEffect *op_ASSIGN_47 = SETG(usr_assoc_tmp, cast_48);
	RzILOpEffect *seq_49 = SEQN(3, seq_30, seq_44, op_ASSIGN_47);
	RzILOpEffect *op_ASSIGN_69 = SETG(Rd_assoc_tmp, cast_70);
	RzILOpEffect *seq_71 = SEQN(2, seq_15, op_ASSIGN_69);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *c_call_83 = HEX_EXTRACT64(arg_cast_84, arg_cast_85, arg_cast_86);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_87 = SETL("h_tmp2109", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_88 = SEQN(2, c_call_83, op_ASSIGN_hybrid_tmp_87);
	RzILOpEffect *c_call_101 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_102 = SETL("h_tmp2110", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_103 = SEQN(2, c_call_101, op_ASSIGN_hybrid_tmp_102);
	RzILOpEffect *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_105 = SETL("h_tmp2111", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_106 = SEQN(2, c_call_104, op_ASSIGN_hybrid_tmp_105);
	RzILOpEffect *c_call_107 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_108 = SETL("h_tmp2112", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_109 = SEQN(2, c_call_107, op_ASSIGN_hybrid_tmp_108);
	RzILOpEffect *c_call_110 = HEX_DEPOSIT64(arg_cast_111, arg_cast_112, arg_cast_113, arg_cast_114);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_115 = SETL("h_tmp2113", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_116 = SEQN(2, c_call_110, op_ASSIGN_hybrid_tmp_115);
	RzILOpEffect *seq_117 = SEQN(3, seq_106, seq_109, seq_116);
	RzILOpEffect *op_ASSIGN_120 = SETG(usr_assoc_tmp, cast_121);
	RzILOpEffect *seq_122 = SEQN(3, seq_103, seq_117, op_ASSIGN_120);
	RzILOpEffect *op_ASSIGN_142 = SETG(Rd_assoc_tmp, cast_143);
	RzILOpEffect *seq_144 = SEQN(2, seq_88, op_ASSIGN_142);
	RzILOpEffect *empty_145 = EMPTY();
	RzILOpEffect *op_ASSIGN_158 = SETG(Rd_assoc_tmp, cast_159);
	RzILOpEffect *empty_160 = EMPTY();
	RzILOpEffect *op_ASSIGN_173 = SETG(Rd_assoc_tmp, cast_174);
	RzILOpEffect *empty_175 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, seq_71, empty_72, seq_144, empty_145, op_ASSIGN_158, empty_160, op_ASSIGN_173, empty_175, seq_49, seq_122);

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
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, op_LSHIFT_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_XOR_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	// Declare: st64 h_tmp2118;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2119;
	// Declare: st64 h_tmp2120;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2118"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_8 = SLT(cond_7, cast_9);
	RzILOpPure *cast_ut32_10 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp2119"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_20 = NEG(cond_19);
	RzILOpPure *cast_22 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_21 = SUB(op_NEG_20, cast_22);
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_11, op_SUB_21);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_25 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_NE_27 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_29 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_31 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_34 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp2120"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_26, cond_34);
	RzILOpPure *cond_36 = ITE(op_LT_8, op_RSHIFT_24, op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_XOR_37 = LOGXOR(cast_38, cond_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_XOR_37);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2118", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2119", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(arg_cast_29, arg_cast_30, arg_cast_31);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2120", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *op_ASSIGN_39 = SETG(Rd_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(4, seq_6, seq_18, seq_33, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

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
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, op_LSHIFT_1);
	RzILOpPure *op_NE_3 = LET("const_pos0", const_pos0, INV(EQ(op_AND_2, VARLP("const_pos0"))));
	RzILOpPure *cond_4 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_3, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_6 = CAST(8, IL_FALSE, cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

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
	// Declare: st64 h_tmp2121;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2122;
	// Declare: st64 h_tmp2123;
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp2121"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_10 = SLT(cond_9, cast_11);
	RzILOpPure *cast_ut32_12 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NE_14 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_16 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_17 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_18 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_21 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_14, VARL("h_tmp2122"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *cast_24 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_23 = SUB(op_NEG_22, cast_24);
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(cast_ut64_13, op_SUB_23);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_25, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_27 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzILOpPure *op_NE_29 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_36 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp2123"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(cast_ut64_28, cond_36);
	RzILOpPure *cond_38 = ITE(op_LT_10, op_RSHIFT_26, op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(cast_ut64_1, cond_38);
	RzILOpPure *cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_NE_40 = INV(EQ(op_AND_39, cast_41));
	RzILOpPure *cond_42 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_40, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_44 = CAST(8, IL_FALSE, cond_42);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp2121", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_15 = HEX_SEXTRACT64(arg_cast_16, arg_cast_17, arg_cast_18);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp2122", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp2123", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *op_ASSIGN_43 = SETG(Pd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(4, seq_8, seq_20, seq_35, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_45);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2124;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2125;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2126;
	// Declare: ut32 h_tmp2127;
	// Declare: ut32 h_tmp2128;
	// Declare: ut64 h_tmp2129;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *op_AND_8 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_7, VARLP("const_pos1")));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(cast_10, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, op_NOT_12);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), cast_14);
	RzILOpPure *op_NE_15 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_20 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st16_21 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_NEG_22 = NEG(cast_st16_21);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, op_NEG_22);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_15, VARL("h_tmp2125"), VARLP("const_pos0LL")));
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *op_NEG_36 = NEG(cast_st16_35);
	RzILOpPure *cast_38 = CAST(64, MSB(DUP(op_NEG_36)), op_NEG_36);
	RzILOpPure *op_EQ_37 = EQ(cond_29, cast_38);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos16", DUP(const_pos16), MUL(cast_40, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st16_44 = CAST(16, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *op_NEG_45 = NEG(cast_st16_44);
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2127"))), VARL("h_tmp2127"));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2128"))), VARL("h_tmp2128"));
	RzILOpPure *arg_cast_59 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_63 = ITE(NON_ZERO(VARL("h_tmp2126")), VARL("h_tmp2129"), cast_64);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, cond_63);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos16", DUP(const_pos16), MUL(cast_69, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *cast_72 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st16_73 = CAST(16, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *op_NEG_74 = NEG(cast_st16_73);
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, op_NEG_74);
	RzILOpPure *op_LT_75 = LET("const_pos0", DUP(const_pos0), ULT(cast_76, VARLP("const_pos0")));
	RzILOpPure *op_SUB_77 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_NEG_79 = NEG(op_LSHIFT_78);
	RzILOpPure *op_SUB_80 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_81 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_80));
	RzILOpPure *cast_83 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_82 = SUB(op_LSHIFT_81, cast_83);
	RzILOpPure *cond_84 = ITE(op_LT_75, op_NEG_79, op_SUB_82);
	RzILOpPure *cast_86 = CAST(64, MSB(DUP(op_NEG_45)), op_NEG_45);
	RzILOpPure *cond_85 = ITE(op_EQ_37, cast_86, cond_84);
	RzILOpPure *cast_88 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_87 = LOGAND(cond_85, cast_88);
	RzILOpPure *cast_ut64_89 = CAST(64, IL_FALSE, op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_92 = SHIFTL0(cast_ut64_89, op_MUL_90);
	RzILOpPure *op_OR_93 = LOGOR(op_AND_13, op_LSHIFT_92);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_97 = LET("const_pos16", DUP(const_pos16), MUL(cast_98, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_97));
	RzILOpPure *op_NOT_100 = LOGNOT(op_LSHIFT_99);
	RzILOpPure *cast_102 = CAST(64, IL_FALSE, op_NOT_100);
	RzILOpPure *op_AND_101 = LOGAND(VARG(Rdd_assoc_tmp), cast_102);
	RzILOpPure *cast_104 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_103 = LET("const_pos16", DUP(const_pos16), MUL(cast_104, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_105 = SHIFTR0(DUP(Rss), op_MUL_103);
	RzILOpPure *cast_107 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_106 = LOGAND(op_RSHIFT_105, cast_107);
	RzILOpPure *cast_st16_108 = CAST(16, MSB(DUP(op_AND_106)), op_AND_106);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, cast_st16_108);
	RzILOpPure *op_AND_109 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_110, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_111 = CAST(64, IL_FALSE, op_AND_109);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_112 = LET("const_pos16", DUP(const_pos16), MUL(cast_113, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_114 = SHIFTL0(cast_ut64_111, op_MUL_112);
	RzILOpPure *op_OR_115 = LOGOR(op_AND_101, op_LSHIFT_114);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2124", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2125", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2126", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2127", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2128", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(arg_cast_56, arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2129", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *seq_62 = SEQN(3, seq_51, seq_54, seq_61);
	RzILOpEffect *op_ASSIGN_65 = SETG(usr_assoc_tmp, cast_66);
	RzILOpEffect *seq_67 = SEQN(3, seq_48, seq_62, op_ASSIGN_65);
	RzILOpEffect *op_ASSIGN_94 = SETG(Rdd_assoc_tmp, op_OR_93);
	RzILOpEffect *seq_95 = SEQN(2, seq_28, op_ASSIGN_94);
	RzILOpEffect *empty_96 = EMPTY();
	RzILOpEffect *op_ASSIGN_116 = SETG(Rdd_assoc_tmp, op_OR_115);
	RzILOpEffect *empty_117 = EMPTY();
	RzILOpEffect *seq_then_118 = SEQN(2, seq_95, empty_96);
	RzILOpEffect *seq_else_120 = SEQN(2, op_ASSIGN_116, empty_117);
	RzILOpEffect *branch_119 = BRANCH(NON_ZERO(op_AND_8), seq_then_118, seq_else_120);
	RzILOpEffect *seq_121 = SEQN(1, branch_119);
	RzILOpEffect *seq_122 = SEQN(2, seq_6, seq_121);
	RzILOpEffect *for_124 = REPEAT(op_LT_2, seq_122);
	RzILOpEffect *seq_123 = SEQN(2, op_ASSIGN_0, for_124);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_123, seq_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vcrotate(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vrcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2130;
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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *op_AND_8 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_7, VARLP("const_pos1")));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(cast_10, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *cast_13 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st16_14 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *op_NEG_15 = NEG(cast_st16_14);
	RzILOpPure *cast_17 = CAST(64, IL_FALSE, op_NEG_15);
	RzILOpPure *addop_NEG_15Rxx = ADD(cast_17, Rxx);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, cast_st16_23);
	RzILOpPure *addcast_st16_23Rxx = ADD(cast_25, DUP(Rxx));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2130", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_ADD_16 = SETG(Rxx_assoc_tmp, addop_NEG_15Rxx);
	RzILOpEffect *op_ASSIGN_ADD_24 = SETG(Rxx_assoc_tmp, addcast_st16_23Rxx);
	RzILOpEffect *seq_then_26 = SEQN(1, op_ASSIGN_ADD_16);
	RzILOpEffect *seq_else_28 = SEQN(1, op_ASSIGN_ADD_24);
	RzILOpEffect *branch_27 = BRANCH(NON_ZERO(op_AND_8), seq_then_26, seq_else_28);
	RzILOpEffect *seq_29 = SEQN(1, branch_27);
	RzILOpEffect *seq_30 = SEQN(2, seq_6, seq_29);
	RzILOpEffect *for_32 = REPEAT(op_LT_2, seq_30);
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_0, for_32);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2131;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = LET("const_pos0x08000", const_pos0x08000, CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_20 = ADD(cast_st64_19, cast_21);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(op_ADD_20, op_MUL_22);
	RzILOpPure *cast_25 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, cast_st16_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2131", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = SETG(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2132;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	// Declare: st64 h_tmp2133;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2134;
	// Declare: ut32 h_tmp2135;
	// Declare: ut32 h_tmp2136;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2137;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos32", const_pos32, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = LET("const_pos0x08000", const_pos0x08000, CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_21 = ADD(cast_st64_20, cast_22);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, op_ADD_21);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2133"), VARLP("const_pos0LL")));
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos32", DUP(const_pos32), MUL(cast_31, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *cast_38 = LET("const_pos0x08000", DUP(const_pos0x08000), CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_37 = ADD(cast_st64_36, cast_38);
	RzILOpPure *op_EQ_39 = EQ(cond_29, op_ADD_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos32", DUP(const_pos32), MUL(cast_41, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st32_45 = CAST(32, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(cast_st32_45)), cast_st32_45);
	RzILOpPure *cast_48 = LET("const_pos0x08000", DUP(const_pos0x08000), CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_47 = ADD(cast_st64_46, cast_48);
	RzILOpPure *arg_cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_60 = CAST(64, MSB(DUP(VARL("h_tmp2135"))), VARL("h_tmp2135"));
	RzILOpPure *arg_cast_61 = CAST(64, MSB(DUP(VARL("h_tmp2136"))), VARL("h_tmp2136"));
	RzILOpPure *arg_cast_62 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_66 = ITE(NON_ZERO(VARL("h_tmp2134")), VARL("h_tmp2137"), cast_67);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, cond_66);
	RzILOpPure *cast_72 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_71 = LET("const_pos32", DUP(const_pos32), MUL(cast_72, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_73 = SHIFTR0(DUP(Rss), op_MUL_71);
	RzILOpPure *cast_75 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_74 = LOGAND(op_RSHIFT_73, cast_75);
	RzILOpPure *cast_st32_76 = CAST(32, MSB(DUP(op_AND_74)), op_AND_74);
	RzILOpPure *cast_st64_77 = CAST(64, MSB(DUP(cast_st32_76)), cast_st32_76);
	RzILOpPure *cast_79 = LET("const_pos0x08000", DUP(const_pos0x08000), CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_78 = ADD(cast_st64_77, cast_79);
	RzILOpPure *cast_81 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_80 = SLT(op_ADD_78, cast_81);
	RzILOpPure *op_SUB_82 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_83 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_82));
	RzILOpPure *op_NEG_84 = NEG(op_LSHIFT_83);
	RzILOpPure *op_SUB_85 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_86 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_85));
	RzILOpPure *cast_88 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_87 = SUB(op_LSHIFT_86, cast_88);
	RzILOpPure *cond_89 = ITE(op_LT_80, op_NEG_84, op_SUB_87);
	RzILOpPure *cond_90 = ITE(op_EQ_39, op_ADD_47, cond_89);
	RzILOpPure *op_MUL_91 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(cond_90, op_MUL_91);
	RzILOpPure *cast_94 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_st16_95 = CAST(16, MSB(DUP(op_AND_93)), op_AND_93);
	RzILOpPure *cast_97 = CAST(32, IL_FALSE, cast_st16_95);
	RzILOpPure *op_AND_96 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_97, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_98 = CAST(64, IL_FALSE, op_AND_96);
	RzILOpPure *cast_100 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_99 = LET("const_pos16", DUP(const_pos16), MUL(cast_100, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_101 = SHIFTL0(cast_ut64_98, op_MUL_99);
	RzILOpPure *cast_103 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_102 = LOGOR(cast_103, op_LSHIFT_101);
	RzILOpPure *cast_105 = CAST(32, IL_FALSE, op_OR_102);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2132", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2133", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2134", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2135", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2136", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *c_call_58 = HEX_DEPOSIT64(arg_cast_59, arg_cast_60, arg_cast_61, arg_cast_62);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp2137", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_58, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *seq_65 = SEQN(3, seq_54, seq_57, seq_64);
	RzILOpEffect *op_ASSIGN_68 = SETG(usr_assoc_tmp, cast_69);
	RzILOpEffect *seq_70 = SEQN(3, seq_51, seq_65, op_ASSIGN_68);
	RzILOpEffect *op_ASSIGN_104 = SETG(Rd_assoc_tmp, cast_105);
	RzILOpEffect *seq_106 = SEQN(2, seq_28, op_ASSIGN_104);
	RzILOpEffect *empty_107 = EMPTY();
	RzILOpEffect *seq_108 = SEQN(2, seq_106, empty_107);
	RzILOpEffect *seq_109 = SEQN(2, seq_6, seq_108);
	RzILOpEffect *for_111 = REPEAT(op_LT_2, seq_109);
	RzILOpEffect *seq_110 = SEQN(2, op_ASSIGN_0, for_111);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_110, seq_70);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2138;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2139;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2140;
	// Declare: ut32 h_tmp2141;
	// Declare: ut32 h_tmp2142;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2143;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st16_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2139"), VARLP("const_pos0LL")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(cast_st16_32)), cast_st16_32);
	RzILOpPure *op_EQ_33 = EQ(cond_26, cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *arg_cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2141"))), VARL("h_tmp2141"));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2142"))), VARL("h_tmp2142"));
	RzILOpPure *arg_cast_54 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_58 = ITE(NON_ZERO(VARL("h_tmp2140")), VARL("h_tmp2143"), cast_59);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cond_58);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos16", DUP(const_pos16), MUL(cast_64, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *cast_67 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_st16_68 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_70 = CAST(32, IL_FALSE, cast_st16_68);
	RzILOpPure *op_LT_69 = LET("const_pos0", DUP(const_pos0), ULT(cast_70, VARLP("const_pos0")));
	RzILOpPure *op_SUB_71 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_71));
	RzILOpPure *op_NEG_73 = NEG(op_LSHIFT_72);
	RzILOpPure *op_SUB_74 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *cast_77 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_76 = SUB(op_LSHIFT_75, cast_77);
	RzILOpPure *cond_78 = ITE(op_LT_69, op_NEG_73, op_SUB_76);
	RzILOpPure *cast_80 = CAST(64, MSB(DUP(cast_st16_40)), cast_st16_40);
	RzILOpPure *cond_79 = ITE(op_EQ_33, cast_80, cond_78);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_79, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos8", DUP(const_pos8), MUL(cast_84, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *cast_87 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_86 = LOGOR(cast_87, op_LSHIFT_85);
	RzILOpPure *cast_89 = CAST(32, IL_FALSE, op_OR_86);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2138", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2139", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2140", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2141", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2142", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(arg_cast_51, arg_cast_52, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2143", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(3, seq_46, seq_49, seq_56);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cast_61);
	RzILOpEffect *seq_62 = SEQN(3, seq_43, seq_57, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_88 = SETG(Rd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_25, op_ASSIGN_88);
	RzILOpEffect *empty_91 = EMPTY();
	RzILOpEffect *seq_92 = SEQN(2, seq_90, empty_91);
	RzILOpEffect *seq_93 = SEQN(2, seq_6, seq_92);
	RzILOpEffect *for_95 = REPEAT(op_LT_2, seq_93);
	RzILOpEffect *seq_94 = SEQN(2, op_ASSIGN_0, for_95);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_94, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2144;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2145;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2146;
	// Declare: ut32 h_tmp2147;
	// Declare: ut32 h_tmp2148;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2149;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos8", const_pos8, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st16_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2145"), VARLP("const_pos0LL")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(cast_st16_32)), cast_st16_32);
	RzILOpPure *op_EQ_33 = EQ(cond_26, cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *arg_cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2147"))), VARL("h_tmp2147"));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2148"))), VARL("h_tmp2148"));
	RzILOpPure *arg_cast_54 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_58 = ITE(NON_ZERO(VARL("h_tmp2146")), VARL("h_tmp2149"), cast_59);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cond_58);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos16", DUP(const_pos16), MUL(cast_64, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *cast_67 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_st16_68 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_70 = CAST(32, IL_FALSE, cast_st16_68);
	RzILOpPure *op_LT_69 = LET("const_pos0", DUP(const_pos0), ULT(cast_70, VARLP("const_pos0")));
	RzILOpPure *op_SUB_71 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_71));
	RzILOpPure *op_NEG_73 = NEG(op_LSHIFT_72);
	RzILOpPure *op_SUB_74 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *cast_77 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_76 = SUB(op_LSHIFT_75, cast_77);
	RzILOpPure *cond_78 = ITE(op_LT_69, op_NEG_73, op_SUB_76);
	RzILOpPure *cast_80 = CAST(64, MSB(DUP(cast_st16_40)), cast_st16_40);
	RzILOpPure *cond_79 = ITE(op_EQ_33, cast_80, cond_78);
	RzILOpPure *cast_82 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_81 = LOGAND(cond_79, cast_82);
	RzILOpPure *cast_ut64_83 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_86 = SHIFTL0(cast_ut64_83, op_MUL_84);
	RzILOpPure *op_OR_87 = LOGOR(op_AND_11, op_LSHIFT_86);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2144", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2145", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2146", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2147", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2148", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(arg_cast_51, arg_cast_52, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2149", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(3, seq_46, seq_49, seq_56);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cast_61);
	RzILOpEffect *seq_62 = SEQN(3, seq_43, seq_57, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_88 = SETG(Rdd_assoc_tmp, op_OR_87);
	RzILOpEffect *seq_89 = SEQN(2, seq_25, op_ASSIGN_88);
	RzILOpEffect *empty_90 = EMPTY();
	RzILOpEffect *seq_91 = SEQN(2, seq_89, empty_90);
	RzILOpEffect *seq_92 = SEQN(2, seq_6, seq_91);
	RzILOpEffect *for_94 = REPEAT(op_LT_2, seq_92);
	RzILOpEffect *seq_93 = SEQN(2, op_ASSIGN_0, for_94);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_93, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2150;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut64 h_tmp2151;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2152;
	// Declare: ut32 h_tmp2153;
	// Declare: ut32 h_tmp2154;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2155;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st16_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_27 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_26 = ITE(op_NE_13, VARL("h_tmp2151"), cast_27);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, cast_st16_33);
	RzILOpPure *op_EQ_34 = EQ(cond_26, cast_35);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos16", DUP(const_pos16), MUL(cast_37, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *arg_cast_52 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2153"))), VARL("h_tmp2153"));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp2154"))), VARL("h_tmp2154"));
	RzILOpPure *arg_cast_55 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_59 = ITE(NON_ZERO(VARL("h_tmp2152")), VARL("h_tmp2155"), cast_60);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, cond_59);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_64);
	RzILOpPure *cast_68 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_67 = LOGAND(op_RSHIFT_66, cast_68);
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *cast_71 = CAST(32, IL_FALSE, cast_st16_69);
	RzILOpPure *op_LT_70 = LET("const_pos0", DUP(const_pos0), ULT(cast_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_74 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_73 = SUB(op_LSHIFT_72, cast_74);
	RzILOpPure *cast_76 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_75 = ITE(op_LT_70, cast_76, op_SUB_73);
	RzILOpPure *cast_78 = CAST(64, MSB(DUP(cast_st16_41)), cast_st16_41);
	RzILOpPure *cond_77 = ITE(op_EQ_34, cast_78, cond_75);
	RzILOpPure *op_AND_79 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_77, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_80 = CAST(64, IL_FALSE, op_AND_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_81 = LET("const_pos8", DUP(const_pos8), MUL(cast_82, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_83 = SHIFTL0(cast_ut64_80, op_MUL_81);
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_84 = LOGOR(cast_85, op_LSHIFT_83);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, op_OR_84);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2150", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2151", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp2152", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2153", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2154", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_DEPOSIT64(arg_cast_52, arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2155", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(3, seq_47, seq_50, seq_57);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cast_62);
	RzILOpEffect *seq_63 = SEQN(3, seq_44, seq_58, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rd_assoc_tmp, cast_87);
	RzILOpEffect *seq_88 = SEQN(2, seq_25, op_ASSIGN_86);
	RzILOpEffect *empty_89 = EMPTY();
	RzILOpEffect *seq_90 = SEQN(2, seq_88, empty_89);
	RzILOpEffect *seq_91 = SEQN(2, seq_6, seq_90);
	RzILOpEffect *for_93 = REPEAT(op_LT_2, seq_91);
	RzILOpEffect *seq_92 = SEQN(2, op_ASSIGN_0, for_93);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_92, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2156;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut64 h_tmp2157;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2158;
	// Declare: ut32 h_tmp2159;
	// Declare: ut32 h_tmp2160;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2161;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos8", const_pos8, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st16_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_27 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_26 = ITE(op_NE_13, VARL("h_tmp2157"), cast_27);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, cast_st16_33);
	RzILOpPure *op_EQ_34 = EQ(cond_26, cast_35);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos16", DUP(const_pos16), MUL(cast_37, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *arg_cast_52 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2159"))), VARL("h_tmp2159"));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp2160"))), VARL("h_tmp2160"));
	RzILOpPure *arg_cast_55 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_59 = ITE(NON_ZERO(VARL("h_tmp2158")), VARL("h_tmp2161"), cast_60);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, cond_59);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_64);
	RzILOpPure *cast_68 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_67 = LOGAND(op_RSHIFT_66, cast_68);
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *cast_71 = CAST(32, IL_FALSE, cast_st16_69);
	RzILOpPure *op_LT_70 = LET("const_pos0", DUP(const_pos0), ULT(cast_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_74 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_73 = SUB(op_LSHIFT_72, cast_74);
	RzILOpPure *cast_76 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_75 = ITE(op_LT_70, cast_76, op_SUB_73);
	RzILOpPure *cast_78 = CAST(64, MSB(DUP(cast_st16_41)), cast_st16_41);
	RzILOpPure *cond_77 = ITE(op_EQ_34, cast_78, cond_75);
	RzILOpPure *cast_80 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_79 = LOGAND(cond_77, cast_80);
	RzILOpPure *cast_ut64_81 = CAST(64, IL_FALSE, op_AND_79);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_82 = LET("const_pos16", DUP(const_pos16), MUL(cast_83, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(cast_ut64_81, op_MUL_82);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_11, op_LSHIFT_84);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2156", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2157", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp2158", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2159", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2160", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_DEPOSIT64(arg_cast_52, arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2161", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(3, seq_47, seq_50, seq_57);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cast_62);
	RzILOpEffect *seq_63 = SEQN(3, seq_44, seq_58, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc_tmp, op_OR_85);
	RzILOpEffect *seq_87 = SEQN(2, seq_25, op_ASSIGN_86);
	RzILOpEffect *empty_88 = EMPTY();
	RzILOpEffect *seq_89 = SEQN(2, seq_87, empty_88);
	RzILOpEffect *seq_90 = SEQN(2, seq_6, seq_89);
	RzILOpEffect *for_92 = REPEAT(op_LT_2, seq_90);
	RzILOpEffect *seq_91 = SEQN(2, op_ASSIGN_0, for_92);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2162;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: st64 h_tmp2163;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2164;
	// Declare: ut32 h_tmp2165;
	// Declare: ut32 h_tmp2166;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2167;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2163"), VARLP("const_pos0LL")));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *op_EQ_35 = EQ(cond_27, cast_st64_34);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos32", DUP(const_pos32), MUL(cast_37, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_st64_42 = CAST(64, MSB(DUP(cast_st32_41)), cast_st32_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp2165"))), VARL("h_tmp2165"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp2166"))), VARL("h_tmp2166"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp2164")), VARL("h_tmp2167"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos32", DUP(const_pos32), MUL(cast_66, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rss), op_MUL_65);
	RzILOpPure *cast_69 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_68 = LOGAND(op_RSHIFT_67, cast_69);
	RzILOpPure *cast_st32_70 = CAST(32, MSB(DUP(op_AND_68)), op_AND_68);
	RzILOpPure *cast_st64_71 = CAST(64, MSB(DUP(cast_st32_70)), cast_st32_70);
	RzILOpPure *cast_73 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_72 = SLT(cast_st64_71, cast_73);
	RzILOpPure *op_SUB_74 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *op_NEG_76 = NEG(op_LSHIFT_75);
	RzILOpPure *op_SUB_77 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *cast_80 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_79 = SUB(op_LSHIFT_78, cast_80);
	RzILOpPure *cond_81 = ITE(op_LT_72, op_NEG_76, op_SUB_79);
	RzILOpPure *cond_82 = ITE(op_EQ_35, cast_st64_42, cond_81);
	RzILOpPure *cast_84 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_83 = LOGAND(cond_82, cast_84);
	RzILOpPure *cast_ut64_85 = CAST(64, IL_FALSE, op_AND_83);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_86 = LET("const_pos16", DUP(const_pos16), MUL(cast_87, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_88 = SHIFTL0(cast_ut64_85, op_MUL_86);
	RzILOpPure *cast_90 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_89 = LOGOR(cast_90, op_LSHIFT_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, op_OR_89);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2162", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2163", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp2164", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2165", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2166", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2167", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = SETG(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_91 = SETG(Rd_assoc_tmp, cast_92);
	RzILOpEffect *seq_93 = SEQN(2, seq_26, op_ASSIGN_91);
	RzILOpEffect *empty_94 = EMPTY();
	RzILOpEffect *seq_95 = SEQN(2, seq_93, empty_94);
	RzILOpEffect *seq_96 = SEQN(2, seq_6, seq_95);
	RzILOpEffect *for_98 = REPEAT(op_LT_2, seq_96);
	RzILOpEffect *seq_97 = SEQN(2, op_ASSIGN_0, for_98);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_97, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2168;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2169;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2170;
	// Declare: ut32 h_tmp2171;
	// Declare: ut32 h_tmp2172;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2173;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2169"), VARLP("const_pos0LL")));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *op_EQ_35 = EQ(cond_27, cast_st64_34);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos32", DUP(const_pos32), MUL(cast_37, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_st64_42 = CAST(64, MSB(DUP(cast_st32_41)), cast_st32_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp2171"))), VARL("h_tmp2171"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp2172"))), VARL("h_tmp2172"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp2170")), VARL("h_tmp2173"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos32", DUP(const_pos32), MUL(cast_66, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rss), op_MUL_65);
	RzILOpPure *cast_69 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_68 = LOGAND(op_RSHIFT_67, cast_69);
	RzILOpPure *cast_st32_70 = CAST(32, MSB(DUP(op_AND_68)), op_AND_68);
	RzILOpPure *cast_st64_71 = CAST(64, MSB(DUP(cast_st32_70)), cast_st32_70);
	RzILOpPure *cast_73 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_72 = SLT(cast_st64_71, cast_73);
	RzILOpPure *op_SUB_74 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *op_NEG_76 = NEG(op_LSHIFT_75);
	RzILOpPure *op_SUB_77 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *cast_80 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_79 = SUB(op_LSHIFT_78, cast_80);
	RzILOpPure *cond_81 = ITE(op_LT_72, op_NEG_76, op_SUB_79);
	RzILOpPure *cond_82 = ITE(op_EQ_35, cast_st64_42, cond_81);
	RzILOpPure *op_AND_83 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_82, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos32", DUP(const_pos32), MUL(cast_85, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_86 = SHIFTL0(op_AND_83, op_MUL_84);
	RzILOpPure *cast_88 = CAST(64, IL_FALSE, op_LSHIFT_86);
	RzILOpPure *op_OR_87 = LOGOR(op_AND_11, cast_88);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2168", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2169", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp2170", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2171", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2172", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2173", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = SETG(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = SETG(Rdd_assoc_tmp, op_OR_87);
	RzILOpEffect *seq_90 = SEQN(2, seq_26, op_ASSIGN_89);
	RzILOpEffect *empty_91 = EMPTY();
	RzILOpEffect *seq_92 = SEQN(2, seq_90, empty_91);
	RzILOpEffect *seq_93 = SEQN(2, seq_6, seq_92);
	RzILOpEffect *for_95 = REPEAT(op_LT_2, seq_93);
	RzILOpEffect *seq_94 = SEQN(2, op_ASSIGN_0, for_95);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_94, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2174;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp2175;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2176;
	// Declare: ut32 h_tmp2177;
	// Declare: ut32 h_tmp2178;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2179;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_28 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_27 = ITE(op_NE_13, VARL("h_tmp2175"), cast_28);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st32_34 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_35 = CAST(64, MSB(DUP(cast_st32_34)), cast_st32_34);
	RzILOpPure *cast_37 = CAST(64, IL_FALSE, cast_st64_35);
	RzILOpPure *op_EQ_36 = EQ(cond_27, cast_37);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_38 = LET("const_pos32", DUP(const_pos32), MUL(cast_39, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzILOpPure *cast_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_41 = LOGAND(op_RSHIFT_40, cast_42);
	RzILOpPure *cast_st32_43 = CAST(32, MSB(DUP(op_AND_41)), op_AND_41);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(cast_st32_43)), cast_st32_43);
	RzILOpPure *arg_cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_56 = CAST(64, MSB(DUP(VARL("h_tmp2177"))), VARL("h_tmp2177"));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2178"))), VARL("h_tmp2178"));
	RzILOpPure *arg_cast_58 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_63 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_62 = ITE(NON_ZERO(VARL("h_tmp2176")), VARL("h_tmp2179"), cast_63);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, cond_62);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_67 = LET("const_pos32", DUP(const_pos32), MUL(cast_68, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_67);
	RzILOpPure *cast_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_70 = LOGAND(op_RSHIFT_69, cast_71);
	RzILOpPure *cast_st32_72 = CAST(32, MSB(DUP(op_AND_70)), op_AND_70);
	RzILOpPure *cast_st64_73 = CAST(64, MSB(DUP(cast_st32_72)), cast_st32_72);
	RzILOpPure *cast_75 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_74 = SLT(cast_st64_73, cast_75);
	RzILOpPure *op_LSHIFT_76 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_78 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_77 = SUB(op_LSHIFT_76, cast_78);
	RzILOpPure *cast_80 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_79 = ITE(op_LT_74, cast_80, op_SUB_77);
	RzILOpPure *cond_81 = ITE(op_EQ_36, cast_st64_44, cond_79);
	RzILOpPure *cast_83 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_82 = LOGAND(cond_81, cast_83);
	RzILOpPure *cast_ut64_84 = CAST(64, IL_FALSE, op_AND_82);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos16", DUP(const_pos16), MUL(cast_86, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_87 = SHIFTL0(cast_ut64_84, op_MUL_85);
	RzILOpPure *cast_89 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_88 = LOGOR(cast_89, op_LSHIFT_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, op_OR_88);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2174", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_EXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2175", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2176", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2177", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp2178", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *c_call_54 = HEX_DEPOSIT64(arg_cast_55, arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2179", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *seq_61 = SEQN(3, seq_50, seq_53, seq_60);
	RzILOpEffect *op_ASSIGN_64 = SETG(usr_assoc_tmp, cast_65);
	RzILOpEffect *seq_66 = SEQN(3, seq_47, seq_61, op_ASSIGN_64);
	RzILOpEffect *op_ASSIGN_90 = SETG(Rd_assoc_tmp, cast_91);
	RzILOpEffect *seq_92 = SEQN(2, seq_26, op_ASSIGN_90);
	RzILOpEffect *empty_93 = EMPTY();
	RzILOpEffect *seq_94 = SEQN(2, seq_92, empty_93);
	RzILOpEffect *seq_95 = SEQN(2, seq_6, seq_94);
	RzILOpEffect *for_97 = REPEAT(op_LT_2, seq_95);
	RzILOpEffect *seq_96 = SEQN(2, op_ASSIGN_0, for_97);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_96, seq_66);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2180;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp2181;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2182;
	// Declare: ut32 h_tmp2183;
	// Declare: ut32 h_tmp2184;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2185;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_28 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_27 = ITE(op_NE_13, VARL("h_tmp2181"), cast_28);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st32_34 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_35 = CAST(64, MSB(DUP(cast_st32_34)), cast_st32_34);
	RzILOpPure *cast_37 = CAST(64, IL_FALSE, cast_st64_35);
	RzILOpPure *op_EQ_36 = EQ(cond_27, cast_37);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_38 = LET("const_pos32", DUP(const_pos32), MUL(cast_39, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzILOpPure *cast_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_41 = LOGAND(op_RSHIFT_40, cast_42);
	RzILOpPure *cast_st32_43 = CAST(32, MSB(DUP(op_AND_41)), op_AND_41);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(cast_st32_43)), cast_st32_43);
	RzILOpPure *arg_cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_56 = CAST(64, MSB(DUP(VARL("h_tmp2183"))), VARL("h_tmp2183"));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2184"))), VARL("h_tmp2184"));
	RzILOpPure *arg_cast_58 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_63 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_62 = ITE(NON_ZERO(VARL("h_tmp2182")), VARL("h_tmp2185"), cast_63);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, cond_62);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_67 = LET("const_pos32", DUP(const_pos32), MUL(cast_68, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_67);
	RzILOpPure *cast_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_70 = LOGAND(op_RSHIFT_69, cast_71);
	RzILOpPure *cast_st32_72 = CAST(32, MSB(DUP(op_AND_70)), op_AND_70);
	RzILOpPure *cast_st64_73 = CAST(64, MSB(DUP(cast_st32_72)), cast_st32_72);
	RzILOpPure *cast_75 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_74 = SLT(cast_st64_73, cast_75);
	RzILOpPure *op_LSHIFT_76 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_78 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_77 = SUB(op_LSHIFT_76, cast_78);
	RzILOpPure *cast_80 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_79 = ITE(op_LT_74, cast_80, op_SUB_77);
	RzILOpPure *cond_81 = ITE(op_EQ_36, cast_st64_44, cond_79);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_81, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos32", DUP(const_pos32), MUL(cast_84, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(op_AND_82, op_MUL_83);
	RzILOpPure *cast_87 = CAST(64, IL_FALSE, op_LSHIFT_85);
	RzILOpPure *op_OR_86 = LOGOR(op_AND_11, cast_87);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2180", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_EXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2181", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2182", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2183", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp2184", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *c_call_54 = HEX_DEPOSIT64(arg_cast_55, arg_cast_56, arg_cast_57, arg_cast_58);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2185", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *seq_61 = SEQN(3, seq_50, seq_53, seq_60);
	RzILOpEffect *op_ASSIGN_64 = SETG(usr_assoc_tmp, cast_65);
	RzILOpEffect *seq_66 = SEQN(3, seq_47, seq_61, op_ASSIGN_64);
	RzILOpEffect *op_ASSIGN_88 = SETG(Rdd_assoc_tmp, op_OR_86);
	RzILOpEffect *seq_89 = SEQN(2, seq_26, op_ASSIGN_88);
	RzILOpEffect *empty_90 = EMPTY();
	RzILOpEffect *seq_91 = SEQN(2, seq_89, empty_90);
	RzILOpEffect *seq_92 = SEQN(2, seq_6, seq_91);
	RzILOpEffect *for_94 = REPEAT(op_LT_2, seq_92);
	RzILOpEffect *seq_93 = SEQN(2, op_ASSIGN_0, for_94);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_93, seq_66);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2186;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
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
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_23 = LOGOR(cast_24, op_LSHIFT_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_OR_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2186", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, cast_26);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_25, empty_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_6, seq_28);
	RzILOpEffect *for_31 = REPEAT(op_LT_2, seq_29);
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_0, for_31);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2187;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cast_st16_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2187", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_24, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_28);

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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2188;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_st8_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_11, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2188", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_25, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2189;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(cast_st16_17)), cast_st16_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, cast_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2189", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_25, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunehb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2190;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", const_pos2, MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st8_19 = CAST(8, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(cast_st8_19)), cast_st8_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_21, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos8", DUP(const_pos8), MUL(cast_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_26 = LOGOR(cast_27, op_LSHIFT_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2190", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_28 = SETG(Rd_assoc_tmp, cast_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_28, empty_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_6, seq_31);
	RzILOpEffect *for_34 = REPEAT(op_LT_2, seq_32);
	RzILOpEffect *seq_33 = SEQN(2, op_ASSIGN_0, for_34);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunewh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
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
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rtt, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cast_st16_9);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_11, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_AND_10);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_12, op_MUL_13);
	RzILOpPure *op_OR_15 = LOGOR(op_AND_3, op_LSHIFT_14);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_19 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_18));
	RzILOpPure *op_NOT_20 = LOGNOT(op_LSHIFT_19);
	RzILOpPure *cast_22 = CAST(64, IL_FALSE, op_NOT_20);
	RzILOpPure *op_AND_21 = LOGAND(VARG(Rdd_assoc_tmp), cast_22);
	RzILOpPure *op_MUL_23 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st16_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *op_OR_33 = LOGOR(op_AND_21, op_LSHIFT_32);
	RzILOpPure *op_MUL_36 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, op_NOT_38);
	RzILOpPure *op_AND_39 = LOGAND(VARG(Rdd_assoc_tmp), cast_40);
	RzILOpPure *op_MUL_41 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(Rss, op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, cast_st16_45);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_47, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_39, op_LSHIFT_50);
	RzILOpPure *op_MUL_54 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_54));
	RzILOpPure *op_NOT_56 = LOGNOT(op_LSHIFT_55);
	RzILOpPure *cast_58 = CAST(64, IL_FALSE, op_NOT_56);
	RzILOpPure *op_AND_57 = LOGAND(VARG(Rdd_assoc_tmp), cast_58);
	RzILOpPure *op_MUL_59 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rss), op_MUL_59);
	RzILOpPure *cast_62 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_61 = LOGAND(op_RSHIFT_60, cast_62);
	RzILOpPure *cast_st16_63 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, cast_st16_63);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_65, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_66 = CAST(64, IL_FALSE, op_AND_64);
	RzILOpPure *op_MUL_67 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_68 = SHIFTL0(cast_ut64_66, op_MUL_67);
	RzILOpPure *op_OR_69 = LOGOR(op_AND_57, op_LSHIFT_68);

	// WRITE
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc_tmp, op_OR_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *op_ASSIGN_52 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_16, empty_17, op_ASSIGN_34, empty_35, op_ASSIGN_52, empty_53, op_ASSIGN_70, empty_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunohb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2191;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", const_pos2, MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_ADD_15 = LET("const_pos1", const_pos1, ADD(op_MUL_13, VARLP("const_pos1")));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_15, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(cast_st8_20)), cast_st8_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_22, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_27 = LOGOR(cast_28, op_LSHIFT_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, op_OR_27);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2191", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_29 = SETG(Rd_assoc_tmp, cast_30);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_29, empty_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_6, seq_32);
	RzILOpEffect *for_35 = REPEAT(op_LT_2, seq_33);
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_0, for_35);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunowh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
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
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rtt, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cast_st16_9);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_11, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_AND_10);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_12, op_MUL_13);
	RzILOpPure *op_OR_15 = LOGOR(op_AND_3, op_LSHIFT_14);
	RzILOpPure *op_MUL_18 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_19 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_18));
	RzILOpPure *op_NOT_20 = LOGNOT(op_LSHIFT_19);
	RzILOpPure *cast_22 = CAST(64, IL_FALSE, op_NOT_20);
	RzILOpPure *op_AND_21 = LOGAND(VARG(Rdd_assoc_tmp), cast_22);
	RzILOpPure *op_MUL_23 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st16_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *op_OR_33 = LOGOR(op_AND_21, op_LSHIFT_32);
	RzILOpPure *op_MUL_36 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, op_NOT_38);
	RzILOpPure *op_AND_39 = LOGAND(VARG(Rdd_assoc_tmp), cast_40);
	RzILOpPure *op_MUL_41 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(Rss, op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, cast_st16_45);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_47, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_48, op_MUL_49);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_39, op_LSHIFT_50);
	RzILOpPure *op_MUL_54 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_54));
	RzILOpPure *op_NOT_56 = LOGNOT(op_LSHIFT_55);
	RzILOpPure *cast_58 = CAST(64, IL_FALSE, op_NOT_56);
	RzILOpPure *op_AND_57 = LOGAND(VARG(Rdd_assoc_tmp), cast_58);
	RzILOpPure *op_MUL_59 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rss), op_MUL_59);
	RzILOpPure *cast_62 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_61 = LOGAND(op_RSHIFT_60, cast_62);
	RzILOpPure *cast_st16_63 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, cast_st16_63);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_65, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_66 = CAST(64, IL_FALSE, op_AND_64);
	RzILOpPure *op_MUL_67 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_68 = SHIFTL0(cast_ut64_66, op_MUL_67);
	RzILOpPure *op_OR_69 = LOGOR(op_AND_57, op_LSHIFT_68);

	// WRITE
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc_tmp, op_OR_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *op_ASSIGN_52 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_69);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_16, empty_17, op_ASSIGN_34, empty_35, op_ASSIGN_52, empty_53, op_ASSIGN_70, empty_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vzxtbh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2192;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_ut8_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_11, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2192", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_25, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vzxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2193;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(cast_ut16_17)), cast_ut16_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, cast_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2193", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_25, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_29);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>