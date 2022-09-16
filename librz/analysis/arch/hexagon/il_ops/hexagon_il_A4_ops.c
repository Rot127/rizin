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

RzILOpEffect *hex_il_op_a4_addp_c(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *op_AND_1 = LOGAND(Rt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_andnp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rss);
	RzILOpPure *op_AND_1 = LOGAND(Rtt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_bitsplit(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_bitspliti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut64 h_tmp355;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(op_RSHIFT_7)), op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_10 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(op_AND_8, op_MUL_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_LSHIFT_11);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, cast_13);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_18 = LOGNOT(op_LSHIFT_17);
	RzILOpPure *cast_20 = CAST(64, IL_FALSE, op_NOT_18);
	RzILOpPure *op_AND_19 = LOGAND(VARG(Rdd_assoc_tmp), cast_20);
	RzILOpPure *op_NE_21 = LET("const_pos0", DUP(const_pos0), INV(EQ(VARL("u"), VARLP("const_pos0"))));
	RzILOpPure *arg_cast_23 = CAST(64, IL_FALSE, DUP(Rs));
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = CAST(64, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_29 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_28 = ITE(op_NE_21, VARL("h_tmp355"), cast_29);
	RzILOpPure *cast_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_30 = LOGAND(cond_28, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(op_AND_30, op_MUL_32);
	RzILOpPure *op_OR_34 = LOGOR(op_AND_19, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *imm_assign_6 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rdd_assoc_tmp, op_OR_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *c_call_22 = HEX_EXTRACT64(arg_cast_23, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp355", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, op_OR_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_27, op_ASSIGN_35);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_6, op_ASSIGN_14, empty_15, seq_36, empty_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_boundscheck_hi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_boundscheck_lo(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_cmpbeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_3 = CAST(8, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_EQ_8 = EQ(cast_st8_3, cast_st8_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_EQ_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, op_AND_2);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cast_ut8_3);
	RzILOpPure *op_EQ_5 = EQ(cast_6, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_EQ_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_4 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_8 = SETG(Pd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_4, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_3 = CAST(8, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_GT_8 = SGT(cast_st8_3, cast_st8_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_3 = CAST(8, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(cast_st8_3)), cast_st8_3);
	RzILOpPure *op_GT_5 = SGT(cast_6, VARL("s"));
	RzILOpPure *cond_7 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_4 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = SETG(Pd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_4, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, op_AND_6);
	RzILOpPure *op_GT_8 = UGT(cast_ut8_3, cast_ut8_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, op_AND_3);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, cast_ut8_4);
	RzILOpPure *op_GT_6 = UGT(cast_7, cast_ut32_5);
	RzILOpPure *cond_8 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_6, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_10 = CAST(8, IL_FALSE, cond_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_9 = SETG(Pd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpheq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_EQ_8 = EQ(cast_st16_3, cast_st16_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(cast_st16_4)), cast_st16_4);
	RzILOpPure *op_EQ_5 = EQ(cast_6, VARL("s"));
	RzILOpPure *cond_7 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = SETG(Pd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_GT_8 = SGT(cast_st16_3, cast_st16_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(cast_st16_4)), cast_st16_4);
	RzILOpPure *op_GT_5 = SGT(cast_6, VARL("s"));
	RzILOpPure *cond_7 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = SETG(Pd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_7 = CAST(16, IL_FALSE, op_AND_6);
	RzILOpPure *op_GT_8 = UGT(cast_ut16_3, cast_ut16_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_3);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, cast_ut16_4);
	RzILOpPure *op_GT_6 = UGT(cast_7, cast_ut32_5);
	RzILOpPure *cond_8 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_6, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_10 = CAST(8, IL_FALSE, cond_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_9 = SETG(Pd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *cast_5 = CAST(64, IL_FALSE, op_NOT_3);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), cast_5);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_4, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_LSHIFT_23);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_17, cast_25);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *imm_assign_19 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_19, op_ASSIGN_12, empty_13, op_ASSIGN_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *cast_5 = CAST(64, IL_FALSE, op_NOT_3);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), cast_5);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_4, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_19, op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_17, cast_24);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *cast_5 = CAST(64, IL_FALSE, op_NOT_3);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), cast_5);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_4, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_19, op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_17, cast_24);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cround_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_cround_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_ext(HexInsnPktBundle *bundle) {
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_modwrapu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(Rs, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_ADD_2 = ADD(DUP(Rs), cast_ut32_1);
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, DUP(Rt));
	RzILOpPure *op_GE_6 = UGE(cast_ut32_4, cast_ut32_5);
	RzILOpPure *cast_ut32_7 = CAST(32, IL_FALSE, DUP(Rt));
	RzILOpPure *op_SUB_8 = SUB(DUP(Rs), cast_ut32_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc_tmp, op_SUB_8);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, DUP(Rs));
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_13 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *branch_12 = BRANCH(op_GE_6, seq_then_11, seq_else_13);
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_16 = SEQN(1, branch_12);
	RzILOpEffect *branch_15 = BRANCH(op_LT_0, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *op_OR_1 = LOGOR(Rt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_ornp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rss);
	RzILOpPure *op_OR_1 = LOGOR(Rtt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_2 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_2 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_2 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_2 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp357;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp357"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp357", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp358;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp358"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp358", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp359;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp359"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp359", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp360;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp360"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp360", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp361;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp361"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp361", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp362;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp362"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp362", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp363;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp363"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp363", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp364;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp364"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp364", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp365;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp365"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp365", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp366;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp366"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp366", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp367;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp367"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp367", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp368;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp368"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp368", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp369;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp369"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp369", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp370;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp370"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp370", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp371;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp371"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp371", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp372;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp372"), cast_10);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp372", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_EQ_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_EQ_1 = EQ(Rs, cast_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_EQ_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpneq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NE_0 = INV(EQ(Rs, Rt));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_NE_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpneqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_NE_1 = INV(EQ(Rs, cast_2));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_NE_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_2 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_3 = CAST(64, MSB(DUP(cast_st32_2)), cast_st32_2);
	RzILOpPure *op_SUB_4 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_4));
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(op_LSHIFT_5)), op_LSHIFT_5);
	RzILOpPure *op_ADD_6 = ADD(cast_st64_3, cast_7);
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_8 = ITE(op_EQ_1, cast_9, op_ADD_6);
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(cond_8, VARL("u"));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, op_RSHIFT_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rd_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_ri_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp373;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp374;
	// Declare: ut32 h_tmp375;
	// Declare: ut32 h_tmp376;
	// Declare: ut64 h_tmp377;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_EQ_2 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *op_SUB_5 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_5));
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(op_LSHIFT_6)), op_LSHIFT_6);
	RzILOpPure *op_ADD_7 = ADD(cast_st64_4, cast_8);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_9 = ITE(op_EQ_2, cast_10, op_ADD_7);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, cond_9);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp373"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_18 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *op_SUB_21 = LET("const_pos1", DUP(const_pos1), SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_22 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_21));
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(op_LSHIFT_22)), op_LSHIFT_22);
	RzILOpPure *op_ADD_23 = ADD(cast_st64_20, cast_24);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_25 = ITE(op_EQ_18, cast_26, op_ADD_23);
	RzILOpPure *op_EQ_27 = EQ(cond_17, cond_25);
	RzILOpPure *op_EQ_28 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", DUP(const_pos1), SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_32 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_31));
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_LSHIFT_32)), op_LSHIFT_32);
	RzILOpPure *op_ADD_33 = ADD(cast_st64_30, cast_34);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_35 = ITE(op_EQ_28, cast_36, op_ADD_33);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp375"))), VARL("h_tmp375"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp376"))), VARL("h_tmp376"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp374")), VARL("h_tmp377"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_EQ_59 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_SUB_62 = LET("const_pos1", DUP(const_pos1), SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_62));
	RzILOpPure *cast_65 = CAST(64, MSB(DUP(op_LSHIFT_63)), op_LSHIFT_63);
	RzILOpPure *op_ADD_64 = ADD(cast_st64_61, cast_65);
	RzILOpPure *cast_67 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_66 = ITE(op_EQ_59, cast_67, op_ADD_64);
	RzILOpPure *cast_69 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_68 = SLT(cond_66, cast_69);
	RzILOpPure *op_SUB_70 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cond_78 = ITE(op_EQ_27, cond_35, cond_77);
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(cond_78, VARL("u"));
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, op_RSHIFT_79);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp373", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp374", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp375", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp376", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp377", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_80 = SETG(Rd_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(2, seq_16, op_ASSIGN_80);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_1, seq_82, seq_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos5 = UN(32, 0x5);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut64 h_tmp378;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp379;
	// Declare: ut64 h_tmp380;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp378"), cast_8);
	RzILOpPure *cast_10 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_9 = EQ(cond_7, cast_10);
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(DUP(cast_st32_11)), cast_st32_11);
	RzILOpPure *op_NE_13 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_21 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_20 = ITE(op_NE_13, VARL("h_tmp379"), cast_21);
	RzILOpPure *cast_23 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_22 = SUB(cond_20, cast_23);
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_22));
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_LSHIFT_24)), op_LSHIFT_24);
	RzILOpPure *op_ADD_25 = ADD(cast_st64_12, cast_26);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_27 = ITE(op_EQ_9, cast_28, op_ADD_25);
	RzILOpPure *op_NE_29 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_37 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_36 = ITE(op_NE_29, VARL("h_tmp380"), cast_37);
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(cond_27, cond_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp378", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_14 = HEX_EXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp379", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_30 = HEX_EXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp380", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *op_ASSIGN_39 = SETG(Rd_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(4, seq_6, seq_19, seq_35, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_rr_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos5 = UN(32, 0x5);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut64 h_tmp381;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp382;
	// Declare: st64 h_tmp383;
	// Declare: ut64 h_tmp384;
	// Declare: ut64 h_tmp385;
	// Declare: ut64 h_tmp386;
	// Declare: ut64 h_tmp387;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp388;
	// Declare: ut32 h_tmp389;
	// Declare: ut32 h_tmp390;
	// Declare: ut64 h_tmp391;
	// Declare: ut64 h_tmp392;
	// Declare: ut64 h_tmp393;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut64 h_tmp394;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_1 = LET("const_pos5", const_pos5, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_3 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_4 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_5 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_9 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_8 = ITE(op_NE_1, VARL("h_tmp381"), cast_9);
	RzILOpPure *cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_10 = EQ(cond_8, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *op_NE_14 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_16 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_17 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_18 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_22 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_21 = ITE(op_NE_14, VARL("h_tmp382"), cast_22);
	RzILOpPure *cast_24 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_23 = SUB(cond_21, cast_24);
	RzILOpPure *op_LSHIFT_25 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_23));
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_LSHIFT_25)), op_LSHIFT_25);
	RzILOpPure *op_ADD_26 = ADD(cast_st64_13, cast_27);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_28 = ITE(op_EQ_10, cast_29, op_ADD_26);
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, cond_28);
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp383"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_38 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_40 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_42 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_46 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_45 = ITE(op_NE_38, VARL("h_tmp384"), cast_46);
	RzILOpPure *cast_48 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_47 = EQ(cond_45, cast_48);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st32_49)), cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_59 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_58 = ITE(op_NE_51, VARL("h_tmp385"), cast_59);
	RzILOpPure *cast_61 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_60 = SUB(cond_58, cast_61);
	RzILOpPure *op_LSHIFT_62 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_60));
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(op_LSHIFT_62)), op_LSHIFT_62);
	RzILOpPure *op_ADD_63 = ADD(cast_st64_50, cast_64);
	RzILOpPure *cast_66 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_65 = ITE(op_EQ_47, cast_66, op_ADD_63);
	RzILOpPure *op_EQ_67 = EQ(cond_37, cond_65);
	RzILOpPure *op_NE_68 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_70 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_71 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_72 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_76 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_75 = ITE(op_NE_68, VARL("h_tmp386"), cast_76);
	RzILOpPure *cast_78 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_77 = EQ(cond_75, cast_78);
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *op_NE_81 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_83 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_84 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_85 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_89 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_88 = ITE(op_NE_81, VARL("h_tmp387"), cast_89);
	RzILOpPure *cast_91 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_90 = SUB(cond_88, cast_91);
	RzILOpPure *op_LSHIFT_92 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_90));
	RzILOpPure *cast_94 = CAST(64, MSB(DUP(op_LSHIFT_92)), op_LSHIFT_92);
	RzILOpPure *op_ADD_93 = ADD(cast_st64_80, cast_94);
	RzILOpPure *cast_96 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_95 = ITE(op_EQ_77, cast_96, op_ADD_93);
	RzILOpPure *arg_cast_107 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_108 = CAST(64, MSB(DUP(VARL("h_tmp389"))), VARL("h_tmp389"));
	RzILOpPure *arg_cast_109 = CAST(64, MSB(DUP(VARL("h_tmp390"))), VARL("h_tmp390"));
	RzILOpPure *arg_cast_110 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_115 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_114 = ITE(NON_ZERO(VARL("h_tmp388")), VARL("h_tmp391"), cast_115);
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, cond_114);
	RzILOpPure *op_NE_119 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_121 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_122 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_123 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_127 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_126 = ITE(op_NE_119, VARL("h_tmp392"), cast_127);
	RzILOpPure *cast_129 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_128 = EQ(cond_126, cast_129);
	RzILOpPure *cast_st32_130 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_131 = CAST(64, MSB(DUP(cast_st32_130)), cast_st32_130);
	RzILOpPure *op_NE_132 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_134 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_135 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_136 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_140 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_139 = ITE(op_NE_132, VARL("h_tmp393"), cast_140);
	RzILOpPure *cast_142 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_141 = SUB(cond_139, cast_142);
	RzILOpPure *op_LSHIFT_143 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_141));
	RzILOpPure *cast_145 = CAST(64, MSB(DUP(op_LSHIFT_143)), op_LSHIFT_143);
	RzILOpPure *op_ADD_144 = ADD(cast_st64_131, cast_145);
	RzILOpPure *cast_147 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_146 = ITE(op_EQ_128, cast_147, op_ADD_144);
	RzILOpPure *cast_149 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_148 = SLT(cond_146, cast_149);
	RzILOpPure *op_SUB_150 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_151 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_150));
	RzILOpPure *op_NEG_152 = NEG(op_LSHIFT_151);
	RzILOpPure *op_SUB_153 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_154 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_153));
	RzILOpPure *cast_156 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_155 = SUB(op_LSHIFT_154, cast_156);
	RzILOpPure *cond_157 = ITE(op_LT_148, op_NEG_152, op_SUB_155);
	RzILOpPure *cond_158 = ITE(op_EQ_67, cond_95, cond_157);
	RzILOpPure *op_NE_159 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_161 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_162 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_163 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_167 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_166 = ITE(op_NE_159, VARL("h_tmp394"), cast_167);
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(cond_158, cond_166);
	RzILOpPure *cast_170 = CAST(32, IL_FALSE, op_RSHIFT_168);

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(arg_cast_3, arg_cast_4, arg_cast_5);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_6 = SETL("h_tmp381", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_7 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_6);
	RzILOpEffect *c_call_15 = HEX_EXTRACT64(arg_cast_16, arg_cast_17, arg_cast_18);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp382", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp383", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(3, seq_7, seq_20, seq_35);
	RzILOpEffect *c_call_39 = HEX_EXTRACT64(arg_cast_40, arg_cast_41, arg_cast_42);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp384", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_52 = HEX_EXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp385", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *c_call_69 = HEX_EXTRACT64(arg_cast_70, arg_cast_71, arg_cast_72);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_73 = SETL("h_tmp386", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_74 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_73);
	RzILOpEffect *c_call_82 = HEX_EXTRACT64(arg_cast_83, arg_cast_84, arg_cast_85);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_86 = SETL("h_tmp387", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_87 = SEQN(2, c_call_82, op_ASSIGN_hybrid_tmp_86);
	RzILOpEffect *c_call_97 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_98 = SETL("h_tmp388", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_99 = SEQN(2, c_call_97, op_ASSIGN_hybrid_tmp_98);
	RzILOpEffect *c_call_100 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_101 = SETL("h_tmp389", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_102 = SEQN(2, c_call_100, op_ASSIGN_hybrid_tmp_101);
	RzILOpEffect *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_104 = SETL("h_tmp390", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_105 = SEQN(2, c_call_103, op_ASSIGN_hybrid_tmp_104);
	RzILOpEffect *c_call_106 = HEX_DEPOSIT64(arg_cast_107, arg_cast_108, arg_cast_109, arg_cast_110);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_111 = SETL("h_tmp391", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_112 = SEQN(2, c_call_106, op_ASSIGN_hybrid_tmp_111);
	RzILOpEffect *seq_113 = SEQN(3, seq_102, seq_105, seq_112);
	RzILOpEffect *op_ASSIGN_116 = SETG(usr_assoc_tmp, cast_117);
	RzILOpEffect *seq_118 = SEQN(3, seq_99, seq_113, op_ASSIGN_116);
	RzILOpEffect *c_call_120 = HEX_EXTRACT64(arg_cast_121, arg_cast_122, arg_cast_123);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_124 = SETL("h_tmp392", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_125 = SEQN(2, c_call_120, op_ASSIGN_hybrid_tmp_124);
	RzILOpEffect *c_call_133 = HEX_EXTRACT64(arg_cast_134, arg_cast_135, arg_cast_136);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp393", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_160 = HEX_EXTRACT64(arg_cast_161, arg_cast_162, arg_cast_163);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp394", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_160, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *op_ASSIGN_169 = SETG(Rd_assoc_tmp, cast_170);
	RzILOpEffect *seq_171 = SEQN(9, seq_36, seq_44, seq_57, seq_74, seq_87, seq_125, seq_138, seq_165, op_ASSIGN_169);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_171, seq_118);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_subp_c(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_tfrcpp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Css_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Css = VARG(Css_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rdd_assoc_tmp, Css);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_tfrpcp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Cdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Cdd_assoc_tmp, Rss);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_tlbmatch(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_vcmpbeq_any(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp395;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(8, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos8", const_pos8, ULT(cast_5, VARLP("const_pos8")));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_9 = LET("const_pos8", DUP(const_pos8), MUL(cast_10, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *cast_13 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st8_14 = CAST(8, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(cast_16, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *op_EQ_21 = EQ(cast_st8_14, cast_st8_20);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(8, IL_FALSE, VARLP("const_pos0xff")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Pd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp395", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_22 = SETG(Pd_assoc_tmp, cast_23);
	RzILOpEffect *seq_then_24 = SEQN(1, op_ASSIGN_22);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *branch_25 = BRANCH(op_EQ_21, seq_then_24, empty_26);
	RzILOpEffect *seq_27 = SEQN(1, branch_25);
	RzILOpEffect *seq_28 = SEQN(2, seq_8, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_4, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_2, for_30);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_0, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp396;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_ut8_16);
	RzILOpPure *op_EQ_18 = EQ(cast_19, VARL("u"));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_EQ_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("i"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, IL_FALSE, op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp396", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_17, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp397;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_st8_22 = CAST(8, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *op_GT_23 = SGT(cast_st8_16, cast_st8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp397", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp398;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_19 = CAST(32, MSB(DUP(cast_st8_16)), cast_st8_16);
	RzILOpPure *op_GT_18 = SGT(cast_19, VARL("s"));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("i"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, IL_FALSE, op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp398", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_17, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp399;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_ut8_16);
	RzILOpPure *op_GT_18 = UGT(cast_19, VARL("u"));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("i"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, IL_FALSE, op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp399", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_17, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp400;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_21 = CAST(32, MSB(DUP(cast_st16_18)), cast_st16_18);
	RzILOpPure *op_EQ_20 = EQ(cast_21, VARL("s"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_EQ_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), MUL(cast_31, VARLP("const_pos2")));
	RzILOpPure *op_ADD_32 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_35 = LOGAND(cast_36, op_NOT_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(32, MSB(DUP(cast_st16_42)), cast_st16_42);
	RzILOpPure *op_EQ_43 = EQ(cast_44, VARL("s"));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_EQ_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), MUL(cast_47, VARLP("const_pos2")));
	RzILOpPure *op_ADD_48 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_46, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_ADD_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_35, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, IL_FALSE, op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp400", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = SETG(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp401;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_21 = CAST(32, MSB(DUP(cast_st16_18)), cast_st16_18);
	RzILOpPure *op_GT_20 = SGT(cast_21, VARL("s"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_GT_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), MUL(cast_31, VARLP("const_pos2")));
	RzILOpPure *op_ADD_32 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_35 = LOGAND(cast_36, op_NOT_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(32, MSB(DUP(cast_st16_42)), cast_st16_42);
	RzILOpPure *op_GT_43 = SGT(cast_44, VARL("s"));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_GT_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), MUL(cast_47, VARLP("const_pos2")));
	RzILOpPure *op_ADD_48 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_46, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_ADD_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_35, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, IL_FALSE, op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp401", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = SETG(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp402;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, cast_ut16_18);
	RzILOpPure *op_GT_20 = UGT(cast_21, VARL("u"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_GT_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), MUL(cast_31, VARLP("const_pos2")));
	RzILOpPure *op_ADD_32 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_35 = LOGAND(cast_36, op_NOT_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cast_ut16_42);
	RzILOpPure *op_GT_43 = UGT(cast_44, VARL("u"));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_GT_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), MUL(cast_47, VARLP("const_pos2")));
	RzILOpPure *op_ADD_48 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_46, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_ADD_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_35, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, IL_FALSE, op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp402", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = SETG(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpweqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp403;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp404;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_EQ_18 = EQ(cast_st64_16, cast_19);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_EQ_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("j"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, IL_FALSE, op_OR_22);
	RzILOpPure *cast_32 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_33 = LET("const_pos7", const_pos7, ULE(cast_34, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_39 = LOGNOT(op_LSHIFT_38);
	RzILOpPure *cast_41 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_40 = LOGAND(cast_41, op_NOT_39);
	RzILOpPure *op_MUL_42 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st32_46 = CAST(32, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_st64_47 = CAST(64, MSB(DUP(cast_st32_46)), cast_st32_46);
	RzILOpPure *cast_49 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_EQ_48 = EQ(cast_st64_47, cast_49);
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, op_EQ_48);
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_50, VARL("j"));
	RzILOpPure *op_OR_52 = LOGOR(op_AND_40, op_LSHIFT_51);
	RzILOpPure *cast_54 = CAST(8, IL_FALSE, op_OR_52);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp403", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LE_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *op_ASSIGN_31 = SETL("j", cast_32);
	RzILOpEffect *op_INC_35 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp404", VARL("j"));
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_hybrid_tmp_36, op_INC_35);
	RzILOpEffect *op_ASSIGN_53 = SETG(Pd_assoc_tmp, cast_54);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_53, empty_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_37, seq_56);
	RzILOpEffect *for_59 = REPEAT(op_LE_33, seq_57);
	RzILOpEffect *seq_58 = SEQN(2, op_ASSIGN_31, for_59);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_17, seq_28, empty_30, seq_58, empty_60);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp405;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp406;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_GT_18 = SGT(cast_st64_16, cast_19);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("j"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, IL_FALSE, op_OR_22);
	RzILOpPure *cast_31 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_32 = LET("const_pos7", const_pos7, ULE(cast_33, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st32_45 = CAST(32, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(cast_st32_45)), cast_st32_45);
	RzILOpPure *cast_48 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_GT_47 = SGT(cast_st64_46, cast_48);
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_GT_47);
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_49, VARL("j"));
	RzILOpPure *op_OR_51 = LOGOR(op_AND_39, op_LSHIFT_50);
	RzILOpPure *cast_53 = CAST(8, IL_FALSE, op_OR_51);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp405", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LE_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *op_ASSIGN_30 = SETL("j", cast_31);
	RzILOpEffect *op_INC_34 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp406", VARL("j"));
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_hybrid_tmp_35, op_INC_34);
	RzILOpEffect *op_ASSIGN_52 = SETG(Pd_assoc_tmp, cast_53);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, op_ASSIGN_52, empty_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_36, seq_55);
	RzILOpEffect *for_58 = REPEAT(op_LE_32, seq_56);
	RzILOpEffect *seq_57 = SEQN(2, op_ASSIGN_30, for_58);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_17, seq_28, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp407;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp408;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_ut32_15 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *cast_ut32_18 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_20 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_GT_19 = UGT(cast_ut64_16, cast_20);
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_GT_19);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_21, VARL("j"));
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(8, IL_FALSE, op_OR_23);
	RzILOpPure *cast_32 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_33 = LET("const_pos7", const_pos7, ULE(cast_34, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_39 = LOGNOT(op_LSHIFT_38);
	RzILOpPure *cast_41 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_40 = LOGAND(cast_41, op_NOT_39);
	RzILOpPure *op_MUL_42 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut32_46 = CAST(32, IL_FALSE, op_AND_44);
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, cast_ut32_46);
	RzILOpPure *cast_ut32_48 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, cast_ut32_48);
	RzILOpPure *op_GT_49 = UGT(cast_ut64_47, cast_50);
	RzILOpPure *cast_ut64_51 = CAST(64, IL_FALSE, op_GT_49);
	RzILOpPure *op_LSHIFT_52 = SHIFTL0(cast_ut64_51, VARL("j"));
	RzILOpPure *op_OR_53 = LOGOR(op_AND_40, op_LSHIFT_52);
	RzILOpPure *cast_55 = CAST(8, IL_FALSE, op_OR_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp407", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_24 = SETG(Pd_assoc_tmp, cast_25);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_24, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LE_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *op_ASSIGN_31 = SETL("j", cast_32);
	RzILOpEffect *op_INC_35 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp408", VARL("j"));
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_hybrid_tmp_36, op_INC_35);
	RzILOpEffect *op_ASSIGN_54 = SETG(Pd_assoc_tmp, cast_55);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *seq_57 = SEQN(2, op_ASSIGN_54, empty_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_37, seq_57);
	RzILOpEffect *for_60 = REPEAT(op_LE_33, seq_58);
	RzILOpEffect *seq_59 = SEQN(2, op_ASSIGN_31, for_60);
	RzILOpEffect *empty_61 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_17, seq_29, seq_59, empty_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp409;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_st16_4)), cast_st16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_9 = LOGAND(op_RSHIFT_8, cast_10);
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_12 = CAST(64, MSB(DUP(cast_st32_11)), cast_st32_11);
	RzILOpPure *cast_14 = CAST(4, MSB(DUP(cast_st64_12)), cast_st64_12);
	RzILOpPure *cast_16 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_17 = LET("const_pos4", const_pos4, ULT(cast_18, VARLP("const_pos4")));
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(16, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_LT_28 = SLT(cast_29, cast_st16_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_37 = CAST(8, MSB(DUP(cast_st16_35)), cast_st16_35);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_LSHIFT_38);
	RzILOpPure *op_OR_39 = LOGOR(Ru, cast_40);
	RzILOpPure *cast_42 = CAST(4, MSB(DUP(op_OR_39)), op_OR_39);
	RzILOpPure *op_MUL_50 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_50));
	RzILOpPure *op_NOT_52 = LOGNOT(op_LSHIFT_51);
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, op_NOT_52);
	RzILOpPure *op_AND_53 = LOGAND(DUP(Rxx), cast_54);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_57 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(op_AND_55, op_MUL_57);
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, op_LSHIFT_58);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_53, cast_60);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_63));
	RzILOpPure *op_NOT_65 = LOGNOT(op_LSHIFT_64);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_NOT_65);
	RzILOpPure *op_AND_66 = LOGAND(DUP(Rxx), cast_67);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_68 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_71 = SHIFTL0(op_AND_68, op_MUL_70);
	RzILOpPure *cast_73 = CAST(64, IL_FALSE, op_LSHIFT_71);
	RzILOpPure *op_OR_72 = LOGOR(op_AND_66, cast_73);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_6);
	RzILOpEffect *op_ASSIGN_13 = SETL("addr", cast_14);
	RzILOpEffect *op_ASSIGN_15 = SETL("i", cast_16);
	RzILOpEffect *op_INC_19 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp409", VARL("i"));
	RzILOpEffect *seq_21 = SEQN(2, op_ASSIGN_hybrid_tmp_20, op_INC_19);
	RzILOpEffect *op_ASSIGN_36 = SETL("max", cast_37);
	RzILOpEffect *op_ASSIGN_41 = SETL("addr", cast_42);
	RzILOpEffect *seq_then_43 = SEQN(2, op_ASSIGN_36, op_ASSIGN_41);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *branch_44 = BRANCH(op_LT_28, seq_then_43, empty_45);
	RzILOpEffect *seq_46 = SEQN(1, branch_44);
	RzILOpEffect *seq_47 = SEQN(2, seq_21, seq_46);
	RzILOpEffect *for_49 = REPEAT(op_LT_17, seq_47);
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_15, for_49);
	RzILOpEffect *op_ASSIGN_61 = SETG(Rxx_assoc_tmp, op_OR_59);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *op_ASSIGN_74 = SETG(Rxx_assoc_tmp, op_OR_72);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_13, seq_48, op_ASSIGN_61, empty_62, op_ASSIGN_74, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp410;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut16_4)), cast_ut16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_9 = LOGAND(op_RSHIFT_8, cast_10);
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_12 = CAST(64, MSB(DUP(cast_st32_11)), cast_st32_11);
	RzILOpPure *cast_14 = CAST(4, MSB(DUP(cast_st64_12)), cast_st64_12);
	RzILOpPure *cast_16 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_17 = LET("const_pos4", const_pos4, ULT(cast_18, VARLP("const_pos4")));
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(16, IL_FALSE, VARL("max"));
	RzILOpPure *op_LT_28 = ULT(cast_29, cast_ut16_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_ut16_35 = CAST(16, IL_FALSE, op_AND_33);
	RzILOpPure *cast_37 = CAST(8, MSB(DUP(cast_ut16_35)), cast_ut16_35);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_LSHIFT_38);
	RzILOpPure *op_OR_39 = LOGOR(Ru, cast_40);
	RzILOpPure *cast_42 = CAST(4, MSB(DUP(op_OR_39)), op_OR_39);
	RzILOpPure *op_MUL_50 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_50));
	RzILOpPure *op_NOT_52 = LOGNOT(op_LSHIFT_51);
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, op_NOT_52);
	RzILOpPure *op_AND_53 = LOGAND(DUP(Rxx), cast_54);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_57 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(op_AND_55, op_MUL_57);
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, op_LSHIFT_58);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_53, cast_60);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_63));
	RzILOpPure *op_NOT_65 = LOGNOT(op_LSHIFT_64);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_NOT_65);
	RzILOpPure *op_AND_66 = LOGAND(DUP(Rxx), cast_67);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_68 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_71 = SHIFTL0(op_AND_68, op_MUL_70);
	RzILOpPure *cast_73 = CAST(64, IL_FALSE, op_LSHIFT_71);
	RzILOpPure *op_OR_72 = LOGOR(op_AND_66, cast_73);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_6);
	RzILOpEffect *op_ASSIGN_13 = SETL("addr", cast_14);
	RzILOpEffect *op_ASSIGN_15 = SETL("i", cast_16);
	RzILOpEffect *op_INC_19 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp410", VARL("i"));
	RzILOpEffect *seq_21 = SEQN(2, op_ASSIGN_hybrid_tmp_20, op_INC_19);
	RzILOpEffect *op_ASSIGN_36 = SETL("max", cast_37);
	RzILOpEffect *op_ASSIGN_41 = SETL("addr", cast_42);
	RzILOpEffect *seq_then_43 = SEQN(2, op_ASSIGN_36, op_ASSIGN_41);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *branch_44 = BRANCH(op_LT_28, seq_then_43, empty_45);
	RzILOpEffect *seq_46 = SEQN(1, branch_44);
	RzILOpEffect *seq_47 = SEQN(2, seq_21, seq_46);
	RzILOpEffect *for_49 = REPEAT(op_LT_17, seq_47);
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_15, for_49);
	RzILOpEffect *op_ASSIGN_61 = SETG(Rxx_assoc_tmp, op_OR_59);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *op_ASSIGN_74 = SETG(Rxx_assoc_tmp, op_OR_72);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_13, seq_48, op_ASSIGN_61, empty_62, op_ASSIGN_74, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp411;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *cast_7 = CAST(8, MSB(DUP(cast_ut64_5)), cast_ut64_5);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(DUP(Rxx), op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_15 = CAST(4, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_17 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_18 = LET("const_pos2", const_pos2, ULT(cast_19, VARLP("const_pos2")));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_ut32_28 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut32_28);
	RzILOpPure *cast_31 = CAST(64, IL_FALSE, VARL("max"));
	RzILOpPure *op_LT_30 = ULT(cast_31, cast_ut64_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos32", DUP(const_pos32), MUL(cast_33, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_ut32_37 = CAST(32, IL_FALSE, op_AND_35);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut32_37);
	RzILOpPure *cast_40 = CAST(8, MSB(DUP(cast_ut64_38)), cast_ut64_38);
	RzILOpPure *op_LSHIFT_41 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_LSHIFT_41);
	RzILOpPure *op_OR_42 = LOGOR(Ru, cast_43);
	RzILOpPure *cast_45 = CAST(4, MSB(DUP(op_OR_42)), op_OR_42);
	RzILOpPure *op_MUL_53 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_53));
	RzILOpPure *op_NOT_55 = LOGNOT(op_LSHIFT_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_NOT_55);
	RzILOpPure *op_AND_56 = LOGAND(DUP(Rxx), cast_57);
	RzILOpPure *cast_59 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_59, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_60 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(op_AND_58, op_MUL_60);
	RzILOpPure *cast_63 = CAST(64, IL_FALSE, op_LSHIFT_61);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_56, cast_63);
	RzILOpPure *op_MUL_66 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *cast_70 = CAST(64, IL_FALSE, op_NOT_68);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rxx), cast_70);
	RzILOpPure *cast_72 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_72, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(op_AND_71, op_MUL_73);
	RzILOpPure *cast_76 = CAST(64, IL_FALSE, op_LSHIFT_74);
	RzILOpPure *op_OR_75 = LOGOR(op_AND_69, cast_76);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETL("max", cast_7);
	RzILOpEffect *op_ASSIGN_14 = SETL("addr", cast_15);
	RzILOpEffect *op_ASSIGN_16 = SETL("i", cast_17);
	RzILOpEffect *op_INC_20 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp411", VARL("i"));
	RzILOpEffect *seq_22 = SEQN(2, op_ASSIGN_hybrid_tmp_21, op_INC_20);
	RzILOpEffect *op_ASSIGN_39 = SETL("max", cast_40);
	RzILOpEffect *op_ASSIGN_44 = SETL("addr", cast_45);
	RzILOpEffect *seq_then_46 = SEQN(2, op_ASSIGN_39, op_ASSIGN_44);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *branch_47 = BRANCH(op_LT_30, seq_then_46, empty_48);
	RzILOpEffect *seq_49 = SEQN(1, branch_47);
	RzILOpEffect *seq_50 = SEQN(2, seq_22, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_18, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_16, for_52);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rxx_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_77 = SETG(Rxx_assoc_tmp, op_OR_75);
	RzILOpEffect *empty_78 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_6, op_ASSIGN_14, seq_51, op_ASSIGN_64, empty_65, op_ASSIGN_77, empty_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp412;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_7 = CAST(8, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(DUP(Rxx), op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_15 = CAST(4, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_17 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_18 = LET("const_pos2", const_pos2, ULT(cast_19, VARLP("const_pos2")));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_LT_30 = SLT(cast_31, cast_st64_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos32", DUP(const_pos32), MUL(cast_33, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(DUP(cast_st32_37)), cast_st32_37);
	RzILOpPure *cast_40 = CAST(8, MSB(DUP(cast_st64_38)), cast_st64_38);
	RzILOpPure *op_LSHIFT_41 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_LSHIFT_41);
	RzILOpPure *op_OR_42 = LOGOR(Ru, cast_43);
	RzILOpPure *cast_45 = CAST(4, MSB(DUP(op_OR_42)), op_OR_42);
	RzILOpPure *op_MUL_53 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_53));
	RzILOpPure *op_NOT_55 = LOGNOT(op_LSHIFT_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_NOT_55);
	RzILOpPure *op_AND_56 = LOGAND(DUP(Rxx), cast_57);
	RzILOpPure *cast_59 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_59, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_60 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(op_AND_58, op_MUL_60);
	RzILOpPure *cast_63 = CAST(64, IL_FALSE, op_LSHIFT_61);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_56, cast_63);
	RzILOpPure *op_MUL_66 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *cast_70 = CAST(64, IL_FALSE, op_NOT_68);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rxx), cast_70);
	RzILOpPure *cast_72 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_72, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(op_AND_71, op_MUL_73);
	RzILOpPure *cast_76 = CAST(64, IL_FALSE, op_LSHIFT_74);
	RzILOpPure *op_OR_75 = LOGOR(op_AND_69, cast_76);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETL("max", cast_7);
	RzILOpEffect *op_ASSIGN_14 = SETL("addr", cast_15);
	RzILOpEffect *op_ASSIGN_16 = SETL("i", cast_17);
	RzILOpEffect *op_INC_20 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp412", VARL("i"));
	RzILOpEffect *seq_22 = SEQN(2, op_ASSIGN_hybrid_tmp_21, op_INC_20);
	RzILOpEffect *op_ASSIGN_39 = SETL("max", cast_40);
	RzILOpEffect *op_ASSIGN_44 = SETL("addr", cast_45);
	RzILOpEffect *seq_then_46 = SEQN(2, op_ASSIGN_39, op_ASSIGN_44);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *branch_47 = BRANCH(op_LT_30, seq_then_46, empty_48);
	RzILOpEffect *seq_49 = SEQN(1, branch_47);
	RzILOpEffect *seq_50 = SEQN(2, seq_22, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_18, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_16, for_52);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rxx_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_77 = SETG(Rxx_assoc_tmp, op_OR_75);
	RzILOpEffect *empty_78 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_6, op_ASSIGN_14, seq_51, op_ASSIGN_64, empty_65, op_ASSIGN_77, empty_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp413;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_st16_4)), cast_st16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_9 = LOGAND(op_RSHIFT_8, cast_10);
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_12 = CAST(64, MSB(DUP(cast_st32_11)), cast_st32_11);
	RzILOpPure *cast_14 = CAST(4, MSB(DUP(cast_st64_12)), cast_st64_12);
	RzILOpPure *cast_16 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_17 = LET("const_pos4", const_pos4, ULT(cast_18, VARLP("const_pos4")));
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(16, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_GT_28 = SGT(cast_29, cast_st16_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_37 = CAST(8, MSB(DUP(cast_st16_35)), cast_st16_35);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_LSHIFT_38);
	RzILOpPure *op_OR_39 = LOGOR(Ru, cast_40);
	RzILOpPure *cast_42 = CAST(4, MSB(DUP(op_OR_39)), op_OR_39);
	RzILOpPure *op_MUL_50 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_50));
	RzILOpPure *op_NOT_52 = LOGNOT(op_LSHIFT_51);
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, op_NOT_52);
	RzILOpPure *op_AND_53 = LOGAND(DUP(Rxx), cast_54);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_57 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(op_AND_55, op_MUL_57);
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, op_LSHIFT_58);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_53, cast_60);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_63));
	RzILOpPure *op_NOT_65 = LOGNOT(op_LSHIFT_64);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_NOT_65);
	RzILOpPure *op_AND_66 = LOGAND(DUP(Rxx), cast_67);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_68 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_71 = SHIFTL0(op_AND_68, op_MUL_70);
	RzILOpPure *cast_73 = CAST(64, IL_FALSE, op_LSHIFT_71);
	RzILOpPure *op_OR_72 = LOGOR(op_AND_66, cast_73);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_6);
	RzILOpEffect *op_ASSIGN_13 = SETL("addr", cast_14);
	RzILOpEffect *op_ASSIGN_15 = SETL("i", cast_16);
	RzILOpEffect *op_INC_19 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp413", VARL("i"));
	RzILOpEffect *seq_21 = SEQN(2, op_ASSIGN_hybrid_tmp_20, op_INC_19);
	RzILOpEffect *op_ASSIGN_36 = SETL("min", cast_37);
	RzILOpEffect *op_ASSIGN_41 = SETL("addr", cast_42);
	RzILOpEffect *seq_then_43 = SEQN(2, op_ASSIGN_36, op_ASSIGN_41);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *branch_44 = BRANCH(op_GT_28, seq_then_43, empty_45);
	RzILOpEffect *seq_46 = SEQN(1, branch_44);
	RzILOpEffect *seq_47 = SEQN(2, seq_21, seq_46);
	RzILOpEffect *for_49 = REPEAT(op_LT_17, seq_47);
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_15, for_49);
	RzILOpEffect *op_ASSIGN_61 = SETG(Rxx_assoc_tmp, op_OR_59);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *op_ASSIGN_74 = SETG(Rxx_assoc_tmp, op_OR_72);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_13, seq_48, op_ASSIGN_61, empty_62, op_ASSIGN_74, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp414;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut16_4)), cast_ut16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_9 = LOGAND(op_RSHIFT_8, cast_10);
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_12 = CAST(64, MSB(DUP(cast_st32_11)), cast_st32_11);
	RzILOpPure *cast_14 = CAST(4, MSB(DUP(cast_st64_12)), cast_st64_12);
	RzILOpPure *cast_16 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_17 = LET("const_pos4", const_pos4, ULT(cast_18, VARLP("const_pos4")));
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(16, IL_FALSE, VARL("min"));
	RzILOpPure *op_GT_28 = UGT(cast_29, cast_ut16_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_ut16_35 = CAST(16, IL_FALSE, op_AND_33);
	RzILOpPure *cast_37 = CAST(8, MSB(DUP(cast_ut16_35)), cast_ut16_35);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_LSHIFT_38);
	RzILOpPure *op_OR_39 = LOGOR(Ru, cast_40);
	RzILOpPure *cast_42 = CAST(4, MSB(DUP(op_OR_39)), op_OR_39);
	RzILOpPure *op_MUL_50 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_50));
	RzILOpPure *op_NOT_52 = LOGNOT(op_LSHIFT_51);
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, op_NOT_52);
	RzILOpPure *op_AND_53 = LOGAND(DUP(Rxx), cast_54);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_57 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(op_AND_55, op_MUL_57);
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, op_LSHIFT_58);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_53, cast_60);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_63));
	RzILOpPure *op_NOT_65 = LOGNOT(op_LSHIFT_64);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_NOT_65);
	RzILOpPure *op_AND_66 = LOGAND(DUP(Rxx), cast_67);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_68 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_71 = SHIFTL0(op_AND_68, op_MUL_70);
	RzILOpPure *cast_73 = CAST(64, IL_FALSE, op_LSHIFT_71);
	RzILOpPure *op_OR_72 = LOGOR(op_AND_66, cast_73);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_6);
	RzILOpEffect *op_ASSIGN_13 = SETL("addr", cast_14);
	RzILOpEffect *op_ASSIGN_15 = SETL("i", cast_16);
	RzILOpEffect *op_INC_19 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp414", VARL("i"));
	RzILOpEffect *seq_21 = SEQN(2, op_ASSIGN_hybrid_tmp_20, op_INC_19);
	RzILOpEffect *op_ASSIGN_36 = SETL("min", cast_37);
	RzILOpEffect *op_ASSIGN_41 = SETL("addr", cast_42);
	RzILOpEffect *seq_then_43 = SEQN(2, op_ASSIGN_36, op_ASSIGN_41);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *branch_44 = BRANCH(op_GT_28, seq_then_43, empty_45);
	RzILOpEffect *seq_46 = SEQN(1, branch_44);
	RzILOpEffect *seq_47 = SEQN(2, seq_21, seq_46);
	RzILOpEffect *for_49 = REPEAT(op_LT_17, seq_47);
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_15, for_49);
	RzILOpEffect *op_ASSIGN_61 = SETG(Rxx_assoc_tmp, op_OR_59);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *op_ASSIGN_74 = SETG(Rxx_assoc_tmp, op_OR_72);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_13, seq_48, op_ASSIGN_61, empty_62, op_ASSIGN_74, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp415;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *cast_7 = CAST(8, MSB(DUP(cast_ut64_5)), cast_ut64_5);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(DUP(Rxx), op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_15 = CAST(4, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_17 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_18 = LET("const_pos2", const_pos2, ULT(cast_19, VARLP("const_pos2")));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_ut32_28 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut32_28);
	RzILOpPure *cast_31 = CAST(64, IL_FALSE, VARL("min"));
	RzILOpPure *op_GT_30 = UGT(cast_31, cast_ut64_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos32", DUP(const_pos32), MUL(cast_33, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_ut32_37 = CAST(32, IL_FALSE, op_AND_35);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut32_37);
	RzILOpPure *cast_40 = CAST(8, MSB(DUP(cast_ut64_38)), cast_ut64_38);
	RzILOpPure *op_LSHIFT_41 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_LSHIFT_41);
	RzILOpPure *op_OR_42 = LOGOR(Ru, cast_43);
	RzILOpPure *cast_45 = CAST(4, MSB(DUP(op_OR_42)), op_OR_42);
	RzILOpPure *op_MUL_53 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_53));
	RzILOpPure *op_NOT_55 = LOGNOT(op_LSHIFT_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_NOT_55);
	RzILOpPure *op_AND_56 = LOGAND(DUP(Rxx), cast_57);
	RzILOpPure *cast_59 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_59, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_60 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(op_AND_58, op_MUL_60);
	RzILOpPure *cast_63 = CAST(64, IL_FALSE, op_LSHIFT_61);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_56, cast_63);
	RzILOpPure *op_MUL_66 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *cast_70 = CAST(64, IL_FALSE, op_NOT_68);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rxx), cast_70);
	RzILOpPure *cast_72 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_72, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(op_AND_71, op_MUL_73);
	RzILOpPure *cast_76 = CAST(64, IL_FALSE, op_LSHIFT_74);
	RzILOpPure *op_OR_75 = LOGOR(op_AND_69, cast_76);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETL("min", cast_7);
	RzILOpEffect *op_ASSIGN_14 = SETL("addr", cast_15);
	RzILOpEffect *op_ASSIGN_16 = SETL("i", cast_17);
	RzILOpEffect *op_INC_20 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp415", VARL("i"));
	RzILOpEffect *seq_22 = SEQN(2, op_ASSIGN_hybrid_tmp_21, op_INC_20);
	RzILOpEffect *op_ASSIGN_39 = SETL("min", cast_40);
	RzILOpEffect *op_ASSIGN_44 = SETL("addr", cast_45);
	RzILOpEffect *seq_then_46 = SEQN(2, op_ASSIGN_39, op_ASSIGN_44);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *branch_47 = BRANCH(op_GT_30, seq_then_46, empty_48);
	RzILOpEffect *seq_49 = SEQN(1, branch_47);
	RzILOpEffect *seq_50 = SEQN(2, seq_22, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_18, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_16, for_52);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rxx_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_77 = SETG(Rxx_assoc_tmp, op_OR_75);
	RzILOpEffect *empty_78 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_6, op_ASSIGN_14, seq_51, op_ASSIGN_64, empty_65, op_ASSIGN_77, empty_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp416;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_7 = CAST(8, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(DUP(Rxx), op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_15 = CAST(4, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_17 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_18 = LET("const_pos2", const_pos2, ULT(cast_19, VARLP("const_pos2")));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_GT_30 = SGT(cast_31, cast_st64_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos32", DUP(const_pos32), MUL(cast_33, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(DUP(cast_st32_37)), cast_st32_37);
	RzILOpPure *cast_40 = CAST(8, MSB(DUP(cast_st64_38)), cast_st64_38);
	RzILOpPure *op_LSHIFT_41 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_LSHIFT_41);
	RzILOpPure *op_OR_42 = LOGOR(Ru, cast_43);
	RzILOpPure *cast_45 = CAST(4, MSB(DUP(op_OR_42)), op_OR_42);
	RzILOpPure *op_MUL_53 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_53));
	RzILOpPure *op_NOT_55 = LOGNOT(op_LSHIFT_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_NOT_55);
	RzILOpPure *op_AND_56 = LOGAND(DUP(Rxx), cast_57);
	RzILOpPure *cast_59 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_59, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_60 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(op_AND_58, op_MUL_60);
	RzILOpPure *cast_63 = CAST(64, IL_FALSE, op_LSHIFT_61);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_56, cast_63);
	RzILOpPure *op_MUL_66 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *cast_70 = CAST(64, IL_FALSE, op_NOT_68);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rxx), cast_70);
	RzILOpPure *cast_72 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_72, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(op_AND_71, op_MUL_73);
	RzILOpPure *cast_76 = CAST(64, IL_FALSE, op_LSHIFT_74);
	RzILOpPure *op_OR_75 = LOGOR(op_AND_69, cast_76);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETL("min", cast_7);
	RzILOpEffect *op_ASSIGN_14 = SETL("addr", cast_15);
	RzILOpEffect *op_ASSIGN_16 = SETL("i", cast_17);
	RzILOpEffect *op_INC_20 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp416", VARL("i"));
	RzILOpEffect *seq_22 = SEQN(2, op_ASSIGN_hybrid_tmp_21, op_INC_20);
	RzILOpEffect *op_ASSIGN_39 = SETL("min", cast_40);
	RzILOpEffect *op_ASSIGN_44 = SETL("addr", cast_45);
	RzILOpEffect *seq_then_46 = SEQN(2, op_ASSIGN_39, op_ASSIGN_44);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *branch_47 = BRANCH(op_GT_30, seq_then_46, empty_48);
	RzILOpEffect *seq_49 = SEQN(1, branch_47);
	RzILOpEffect *seq_50 = SEQN(2, seq_22, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_18, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_16, for_52);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rxx_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_77 = SETG(Rxx_assoc_tmp, op_OR_75);
	RzILOpEffect *empty_78 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_6, op_ASSIGN_14, seq_51, op_ASSIGN_64, empty_65, op_ASSIGN_77, empty_78);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>