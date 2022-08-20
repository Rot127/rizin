// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:38:03-04:00
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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *cast_ut32_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_5 = LET("u", u, SHIFTR0(cast_ut32_4, VARLP("u")));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_5, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_6, op_MUL_7);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_3, op_LSHIFT_8);
	RzILOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *op_NE_16 = LET("u", u, LET("const_pos0", const_pos0, INV(EQ(VARLP("u"), VARLP("const_pos0")))));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_15, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *c_call_17 = HEX_EXTRACT64(DUP(Rs), VARLP("const_pos0"), VARLP("u"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_19, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_10, empty_11, seq_26, empty_27);

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
	RzILOpPure *cast_st8_3 = CAST(8, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_EQ_8 = EQ(cast_st8_3, cast_st8_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cond_9);
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
	RzILOpPure *cast_ut8_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *op_EQ_4 = LET("u", u, EQ(cast_ut8_3, VARLP("u")));
	RzILOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Pd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

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
	RzILOpPure *cast_st8_3 = CAST(8, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_GT_8 = SGT(cast_st8_3, cast_st8_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cond_9);
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
	RzILOpPure *cast_st8_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_GT_4 = LET("s", s, SGT(cast_st8_3, VARLP("s")));
	RzILOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Pd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

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
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, op_AND_6);
	RzILOpPure *op_GT_8 = UGT(cast_ut8_3, cast_ut8_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cond_9);
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
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut32_4 = LET("u", u, CAST(32, IL_FALSE, VARLP("u")));
	RzILOpPure *op_GT_5 = UGT(cast_ut8_3, cast_ut32_4);
	RzILOpPure *cond_6 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_7 = SETG(Pd_assoc_tmp, cond_6);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_7);

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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_EQ_8 = EQ(cast_st16_3, cast_st16_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cond_9);
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
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_EQ_4 = LET("s", s, EQ(cast_st16_3, VARLP("s")));
	RzILOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Pd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_GT_8 = SGT(cast_st16_3, cast_st16_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cond_9);
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
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_GT_4 = LET("s", s, SGT(cast_st16_3, VARLP("s")));
	RzILOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Pd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

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
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_7 = CAST(16, IL_FALSE, op_AND_6);
	RzILOpPure *op_GT_8 = UGT(cast_ut16_3, cast_ut16_7);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Pd_assoc_tmp, cond_9);
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
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut32_4 = LET("u", u, CAST(32, IL_FALSE, VARLP("u")));
	RzILOpPure *op_GT_5 = UGT(cast_ut16_3, cast_ut32_4);
	RzILOpPure *cond_6 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_7 = SETG(Pd_assoc_tmp, cond_6);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(64, (ut64)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("U", U, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("U"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("s", s, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("s"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("s", s, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("s"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("s", s, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("s"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_RSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_RSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_RSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_RSHIFT_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *seq_then_9 = SEQN(1, seq_7);
	RzILOpEffect *seq_else_11 = SEQN(1, nop_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_0, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_10);

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
	RzILOpPure *op_EQ_0 = LET("s", s, EQ(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_EQ_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

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
	RzILOpPure *op_NE_0 = LET("s", s, INV(EQ(Rs, VARLP("s"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_NE_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

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
	RzILOpPure *op_EQ_0 = LET("u", u, LET("const_pos0", const_pos0, EQ(VARLP("u"), VARLP("const_pos0"))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_SUB_3 = LET("u", u, LET("const_pos1", const_pos1, SUB(VARLP("u"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_3));
	RzILOpPure *op_ADD_5 = ADD(cast_st64_2, op_LSHIFT_4);
	RzILOpPure *cond_6 = ITE(op_EQ_0, DUP(Rs), op_ADD_5);
	RzILOpPure *op_RSHIFT_7 = LET("u", u, SHIFTR0(cond_6, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, op_RSHIFT_7);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_8);

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
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_EQ_1 = LET("u", u, LET("const_pos0", const_pos0, EQ(VARLP("u"), VARLP("const_pos0"))));
	RzILOpPure *cast_st32_2 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_3 = CAST(32, IL_FALSE, cast_st32_2);
	RzILOpPure *op_SUB_4 = LET("u", u, LET("const_pos1", const_pos1, SUB(VARLP("u"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_4));
	RzILOpPure *op_ADD_6 = ADD(cast_st64_3, op_LSHIFT_5);
	RzILOpPure *cond_7 = ITE(op_EQ_1, DUP(Rs), op_ADD_6);
	RzILOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_12 = LET("u", u, LET("const_pos0", const_pos0, EQ(VARLP("u"), VARLP("const_pos0"))));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(32, IL_FALSE, cast_st32_13);
	RzILOpPure *op_SUB_15 = LET("u", u, LET("const_pos1", const_pos1, SUB(VARLP("u"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_15));
	RzILOpPure *op_ADD_17 = ADD(cast_st64_14, op_LSHIFT_16);
	RzILOpPure *cond_18 = ITE(op_EQ_12, DUP(Rs), op_ADD_17);
	RzILOpPure *op_EQ_19 = EQ(cond_11, cond_18);
	RzILOpPure *op_EQ_20 = LET("u", u, LET("const_pos0", const_pos0, EQ(VARLP("u"), VARLP("const_pos0"))));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_22 = CAST(32, IL_FALSE, cast_st32_21);
	RzILOpPure *op_SUB_23 = LET("u", u, LET("const_pos1", const_pos1, SUB(VARLP("u"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_23));
	RzILOpPure *op_ADD_25 = ADD(cast_st64_22, op_LSHIFT_24);
	RzILOpPure *cond_26 = ITE(op_EQ_20, DUP(Rs), op_ADD_25);
	RzILOpPure *cond_43 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_EQ_46 = LET("u", u, LET("const_pos0", const_pos0, EQ(VARLP("u"), VARLP("const_pos0"))));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_48 = CAST(32, IL_FALSE, cast_st32_47);
	RzILOpPure *op_SUB_49 = LET("u", u, LET("const_pos1", const_pos1, SUB(VARLP("u"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_49));
	RzILOpPure *op_ADD_51 = ADD(cast_st64_48, op_LSHIFT_50);
	RzILOpPure *cond_52 = ITE(op_EQ_46, DUP(Rs), op_ADD_51);
	RzILOpPure *op_LT_53 = LET("const_pos0", const_pos0, ULT(cond_52, VARLP("const_pos0")));
	RzILOpPure *op_SUB_54 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_54));
	RzILOpPure *op_NEG_56 = NEG(op_LSHIFT_55);
	RzILOpPure *op_SUB_57 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_57));
	RzILOpPure *op_SUB_59 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_58, VARLP("const_pos1")));
	RzILOpPure *cond_60 = ITE(op_LT_53, op_NEG_56, op_SUB_59);
	RzILOpPure *cond_61 = ITE(op_EQ_19, cond_26, cond_60);
	RzILOpPure *op_RSHIFT_62 = LET("u", u, SHIFTR0(cond_61, VARLP("u")));

	// WRITE
	RzILOpEffect *c_call_8 = HEX_SEXTRACT64(cond_7, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_9 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_10 = SEQN(2, c_call_8, op_ASSIGN_hybrid_tmp_9);
	RzILOpEffect *c_call_27 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_10, seq_29);
	RzILOpEffect *c_call_31 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_30, seq_33);
	RzILOpEffect *c_call_35 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_34, seq_37);
	RzILOpEffect *c_call_39 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_38, seq_41);
	RzILOpEffect *op_ASSIGN_44 = SETG(usr_assoc_tmp, cond_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_42, op_ASSIGN_44);
	RzILOpEffect *op_ASSIGN_63 = SETG(Rd_assoc_tmp, op_RSHIFT_62);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_63, seq_45);

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
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: ut64 h_tmp2;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_5 = LET("const_pos0", const_pos0, EQ(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_st32_6 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_14 = LET("const_pos1", const_pos1, SUB(cond_13, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_14));
	RzILOpPure *op_ADD_16 = ADD(cast_st64_7, op_LSHIFT_15);
	RzILOpPure *cond_17 = ITE(op_EQ_5, DUP(Rs), op_ADD_16);
	RzILOpPure *op_NE_18 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_18, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(cond_17, cond_23);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_9 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_3, seq_11);
	RzILOpEffect *c_call_19 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp2", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_12, seq_21);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_RSHIFT_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_22, op_ASSIGN_25);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_26);

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
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	// Declare: ut32 h_tmp5;
	// Declare: ut32 h_tmp6;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut64 h_tmp10;
	// Declare: ut32 h_tmp11;
	// Declare: ut32 h_tmp12;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut64 h_tmp13;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_1 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_5 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_6 = LET("const_pos0", const_pos0, EQ(cond_5, VARLP("const_pos0")));
	RzILOpPure *cast_st32_7 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_8 = CAST(32, IL_FALSE, cast_st32_7);
	RzILOpPure *op_NE_9 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cond_14, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_15));
	RzILOpPure *op_ADD_17 = ADD(cast_st64_8, op_LSHIFT_16);
	RzILOpPure *cond_18 = ITE(op_EQ_6, DUP(Rs), op_ADD_17);
	RzILOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_24 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_30 = LET("const_pos0", const_pos0, EQ(cond_29, VARLP("const_pos0")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_32 = CAST(32, IL_FALSE, cast_st32_31);
	RzILOpPure *op_NE_33 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_38 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_33, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_39 = LET("const_pos1", const_pos1, SUB(cond_38, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_39));
	RzILOpPure *op_ADD_41 = ADD(cast_st64_32, op_LSHIFT_40);
	RzILOpPure *cond_42 = ITE(op_EQ_30, DUP(Rs), op_ADD_41);
	RzILOpPure *op_EQ_43 = EQ(cond_23, cond_42);
	RzILOpPure *op_NE_44 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_44, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_50 = LET("const_pos0", const_pos0, EQ(cond_49, VARLP("const_pos0")));
	RzILOpPure *cast_st32_51 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_52 = CAST(32, IL_FALSE, cast_st32_51);
	RzILOpPure *op_NE_53 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_58 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_53, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_59 = LET("const_pos1", const_pos1, SUB(cond_58, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_59));
	RzILOpPure *op_ADD_61 = ADD(cast_st64_52, op_LSHIFT_60);
	RzILOpPure *cond_62 = ITE(op_EQ_50, DUP(Rs), op_ADD_61);
	RzILOpPure *cond_79 = ITE(VARL("h_tmp7"), VARL("h_tmp10"), VARG(usr_assoc_tmp));
	RzILOpPure *op_NE_82 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_86 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_82, VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_87 = LET("const_pos0", const_pos0, EQ(cond_86, VARLP("const_pos0")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_89 = CAST(32, IL_FALSE, cast_st32_88);
	RzILOpPure *op_NE_90 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_95 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_90, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_96 = LET("const_pos1", const_pos1, SUB(cond_95, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_97 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_96));
	RzILOpPure *op_ADD_98 = ADD(cast_st64_89, op_LSHIFT_97);
	RzILOpPure *cond_99 = ITE(op_EQ_87, DUP(Rs), op_ADD_98);
	RzILOpPure *op_LT_100 = LET("const_pos0", const_pos0, ULT(cond_99, VARLP("const_pos0")));
	RzILOpPure *op_SUB_101 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_102 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_101));
	RzILOpPure *op_NEG_103 = NEG(op_LSHIFT_102);
	RzILOpPure *op_SUB_104 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_105 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_104));
	RzILOpPure *op_SUB_106 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(op_LT_100, op_NEG_103, op_SUB_106);
	RzILOpPure *cond_109 = ITE(op_EQ_43, cond_62, cond_107);
	RzILOpPure *op_NE_110 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *cond_114 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_110, VARL("h_tmp13"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_115 = SHIFTR0(cond_109, cond_114);

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *c_call_10 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *seq_13 = SEQN(2, seq_4, seq_12);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(cond_18, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_13, seq_21);
	RzILOpEffect *c_call_25 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_22, seq_27);
	RzILOpEffect *c_call_34 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_28, seq_36);
	RzILOpEffect *c_call_45 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_37, seq_47);
	RzILOpEffect *c_call_54 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_48, seq_56);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *seq_66 = SEQN(2, seq_57, seq_65);
	RzILOpEffect *c_call_67 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_68 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_69 = SEQN(2, c_call_67, op_ASSIGN_hybrid_tmp_68);
	RzILOpEffect *seq_70 = SEQN(2, seq_66, seq_69);
	RzILOpEffect *c_call_71 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_70, seq_73);
	RzILOpEffect *c_call_75 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp8"), VARL("h_tmp9"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp10", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_75, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(2, seq_74, seq_77);
	RzILOpEffect *op_ASSIGN_80 = SETG(usr_assoc_tmp, cond_79);
	RzILOpEffect *seq_81 = SEQN(2, seq_78, op_ASSIGN_80);
	RzILOpEffect *c_call_83 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_84 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_85 = SEQN(2, c_call_83, op_ASSIGN_hybrid_tmp_84);
	RzILOpEffect *c_call_91 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_92 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_93 = SEQN(2, c_call_91, op_ASSIGN_hybrid_tmp_92);
	RzILOpEffect *seq_94 = SEQN(2, seq_85, seq_93);
	RzILOpEffect *seq_108 = SEQN(2, seq_94, seq_81);
	RzILOpEffect *c_call_111 = HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_112 = SETL("h_tmp13", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_113 = SEQN(2, c_call_111, op_ASSIGN_hybrid_tmp_112);
	RzILOpEffect *op_ASSIGN_116 = SETG(Rd_assoc_tmp, op_RSHIFT_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_113, op_ASSIGN_116);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_117, seq_108);

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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut32 i;
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_3 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(op_AND_9), op_AND_9);
	RzILOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_14 = CAST(8, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_EQ_15 = EQ(cast_st8_10, cast_st8_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_ASSIGN_2 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_16 = SETG(Pd_assoc_tmp, LET("const_pos0xff", const_pos0xff, VARLP("const_pos0xff")));
	RzILOpEffect *seq_17 = SEQN(2, seq_6, op_ASSIGN_16);
	RzILOpEffect *seq_then_18 = SEQN(1, seq_17);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *branch_19 = BRANCH(op_EQ_15, seq_then_18, empty_20);
	RzILOpEffect *seq_21 = SEQN(1, branch_19);
	RzILOpEffect *for_22 = SEQ2(op_ASSIGN_2, REPEAT(op_LT_3, seq_21));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, op_ASSIGN_1, for_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_12 = CAST(32, IL_FALSE, op_AND_11);
	RzILOpPure *op_EQ_13 = LET("u", u, EQ(cast_ut8_12, VARLP("u")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_EQ_13);
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_14, VARL("i"));
	RzILOpPure *op_OR_16 = LOGOR(op_AND_8, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_17 = SETG(Pd_assoc_tmp, op_OR_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, op_ASSIGN_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(2, seq_18, empty_19);
	RzILOpEffect *for_21 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_12 = CAST(8, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(8, MSB(op_AND_15), op_AND_15);
	RzILOpPure *op_GT_17 = SGT(cast_st8_12, cast_st8_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_GT_17);
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("i"));
	RzILOpPure *op_OR_20 = LOGOR(op_AND_8, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_21 = SETG(Pd_assoc_tmp, op_OR_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_5, op_ASSIGN_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(2, seq_22, empty_23);
	RzILOpEffect *for_25 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_24));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_GT_13 = LET("s", s, SGT(cast_st8_12, VARLP("s")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_GT_13);
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_14, VARL("i"));
	RzILOpPure *op_OR_16 = LOGOR(op_AND_8, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_17 = SETG(Pd_assoc_tmp, op_OR_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, op_ASSIGN_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(2, seq_18, empty_19);
	RzILOpEffect *for_21 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_12 = CAST(32, IL_FALSE, op_AND_11);
	RzILOpPure *op_GT_13 = LET("u", u, UGT(cast_ut8_12, VARLP("u")));
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_GT_13);
	RzILOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_14, VARL("i"));
	RzILOpPure *op_OR_16 = LOGOR(op_AND_8, op_LSHIFT_15);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_17 = SETG(Pd_assoc_tmp, op_OR_16);
	RzILOpEffect *seq_18 = SEQN(2, seq_5, op_ASSIGN_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *seq_20 = SEQN(2, seq_18, empty_19);
	RzILOpEffect *for_21 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_20));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
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
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_EQ_14 = LET("s", s, EQ(cast_st16_13, VARLP("s")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_EQ_14);
	RzILOpPure *op_MUL_16 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_9, op_LSHIFT_17);
	RzILOpPure *op_MUL_22 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_23 = LET("const_pos1", const_pos1, ADD(op_MUL_22, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_23));
	RzILOpPure *op_NOT_25 = LOGNOT(op_LSHIFT_24);
	RzILOpPure *op_AND_26 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_25);
	RzILOpPure *op_MUL_27 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *op_EQ_31 = LET("s", s, EQ(cast_st16_30, VARLP("s")));
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, op_EQ_31);
	RzILOpPure *op_MUL_33 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", const_pos1, ADD(op_MUL_33, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_32, op_ADD_34);
	RzILOpPure *op_OR_36 = LOGOR(op_AND_26, op_LSHIFT_35);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_19 = SETG(Pd_assoc_tmp, op_OR_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, op_ASSIGN_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_37 = SETG(Pd_assoc_tmp, op_OR_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(4, seq_20, empty_21, op_ASSIGN_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
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
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_GT_14 = LET("s", s, SGT(cast_st16_13, VARLP("s")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_GT_14);
	RzILOpPure *op_MUL_16 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_9, op_LSHIFT_17);
	RzILOpPure *op_MUL_22 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_23 = LET("const_pos1", const_pos1, ADD(op_MUL_22, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_23));
	RzILOpPure *op_NOT_25 = LOGNOT(op_LSHIFT_24);
	RzILOpPure *op_AND_26 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_25);
	RzILOpPure *op_MUL_27 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *op_GT_31 = LET("s", s, SGT(cast_st16_30, VARLP("s")));
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, op_GT_31);
	RzILOpPure *op_MUL_33 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", const_pos1, ADD(op_MUL_33, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_32, op_ADD_34);
	RzILOpPure *op_OR_36 = LOGOR(op_AND_26, op_LSHIFT_35);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_19 = SETG(Pd_assoc_tmp, op_OR_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, op_ASSIGN_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_37 = SETG(Pd_assoc_tmp, op_OR_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(4, seq_20, empty_21, op_ASSIGN_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
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
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_GT_14 = LET("u", u, UGT(cast_ut16_13, VARLP("u")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_GT_14);
	RzILOpPure *op_MUL_16 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_9, op_LSHIFT_17);
	RzILOpPure *op_MUL_22 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_23 = LET("const_pos1", const_pos1, ADD(op_MUL_22, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_23));
	RzILOpPure *op_NOT_25 = LOGNOT(op_LSHIFT_24);
	RzILOpPure *op_AND_26 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_25);
	RzILOpPure *op_MUL_27 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_30 = CAST(32, IL_FALSE, op_AND_29);
	RzILOpPure *op_GT_31 = LET("u", u, UGT(cast_ut16_30, VARLP("u")));
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, op_GT_31);
	RzILOpPure *op_MUL_33 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", const_pos1, ADD(op_MUL_33, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_32, op_ADD_34);
	RzILOpPure *op_OR_36 = LOGOR(op_AND_26, op_LSHIFT_35);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_19 = SETG(Pd_assoc_tmp, op_OR_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, op_ASSIGN_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_37 = SETG(Pd_assoc_tmp, op_OR_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(4, seq_20, empty_21, op_ASSIGN_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpweqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(32, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_EQ_14 = LET("s", s, EQ(cast_st64_13, VARLP("s")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_EQ_14);
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_15, VARL("j"));
	RzILOpPure *op_OR_17 = LOGOR(op_AND_8, op_LSHIFT_16);
	RzILOpPure *op_LE_25 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_29 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzILOpPure *op_AND_31 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(32, MSB(cast_st32_35), cast_st32_35);
	RzILOpPure *op_EQ_37 = LET("s", s, EQ(cast_st64_36, VARLP("s")));
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, op_EQ_37);
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_38, VARL("j"));
	RzILOpPure *op_OR_40 = LOGOR(op_AND_31, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("j", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("j"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_18 = SETG(Pd_assoc_tmp, op_OR_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, op_ASSIGN_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_21 = SEQN(1, empty_20);
	RzILOpEffect *for_22 = SEQ2(op_ASSIGN_1, REPEAT(op_LE_2, seq_21));
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETL("j", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_26 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1", VARL("j"));
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_hybrid_tmp_27, op_INC_26);
	RzILOpEffect *op_ASSIGN_41 = SETG(Pd_assoc_tmp, op_OR_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_28, op_ASSIGN_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(1, empty_43);
	RzILOpEffect *for_45 = SEQ2(op_ASSIGN_24, REPEAT(op_LE_25, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(6, empty_0, for_22, empty_23, for_45, seq_19, seq_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(32, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_GT_14 = LET("s", s, SGT(cast_st64_13, VARLP("s")));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, op_GT_14);
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(cast_ut64_15, VARL("j"));
	RzILOpPure *op_OR_17 = LOGOR(op_AND_8, op_LSHIFT_16);
	RzILOpPure *op_LE_25 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_29 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzILOpPure *op_AND_31 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(32, MSB(cast_st32_35), cast_st32_35);
	RzILOpPure *op_GT_37 = LET("s", s, SGT(cast_st64_36, VARLP("s")));
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, op_GT_37);
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_38, VARL("j"));
	RzILOpPure *op_OR_40 = LOGOR(op_AND_31, op_LSHIFT_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("j", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("j"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_18 = SETG(Pd_assoc_tmp, op_OR_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, op_ASSIGN_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_21 = SEQN(1, empty_20);
	RzILOpEffect *for_22 = SEQ2(op_ASSIGN_1, REPEAT(op_LE_2, seq_21));
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETL("j", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_26 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1", VARL("j"));
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_hybrid_tmp_27, op_INC_26);
	RzILOpEffect *op_ASSIGN_41 = SETG(Pd_assoc_tmp, op_OR_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_28, op_ASSIGN_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(1, empty_43);
	RzILOpEffect *for_45 = SEQ2(op_ASSIGN_24, REPEAT(op_LE_25, seq_44));
	RzILOpEffect *instruction_sequence = SEQN(6, empty_0, for_22, empty_23, for_45, seq_19, seq_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, op_AND_11);
	RzILOpPure *cast_ut64_13 = CAST(32, IL_FALSE, cast_ut32_12);
	RzILOpPure *cast_ut32_14 = LET("u", u, CAST(32, IL_FALSE, VARLP("u")));
	RzILOpPure *op_GT_15 = UGT(cast_ut64_13, cast_ut32_14);
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_GT_15);
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_16, VARL("j"));
	RzILOpPure *op_OR_18 = LOGOR(op_AND_8, op_LSHIFT_17);
	RzILOpPure *op_LE_27 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *cast_ut64_38 = CAST(32, IL_FALSE, cast_ut32_37);
	RzILOpPure *cast_ut32_39 = LET("u", u, CAST(32, IL_FALSE, VARLP("u")));
	RzILOpPure *op_GT_40 = UGT(cast_ut64_38, cast_ut32_39);
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_GT_40);
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_ut64_41, VARL("j"));
	RzILOpPure *op_OR_43 = LOGOR(op_AND_33, op_LSHIFT_42);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("j", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("j"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_19 = SETG(Pd_assoc_tmp, op_OR_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, op_ASSIGN_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_22 = SEQN(2, seq_20, empty_21);
	RzILOpEffect *for_23 = SEQ2(op_ASSIGN_1, REPEAT(op_LE_2, seq_22));
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETL("j", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_28 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp1", VARL("j"));
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_hybrid_tmp_29, op_INC_28);
	RzILOpEffect *op_ASSIGN_44 = SETG(Pd_assoc_tmp, op_OR_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_30, op_ASSIGN_44);
	RzILOpEffect *empty_46 = EMPTY();
	RzILOpEffect *seq_47 = SEQN(2, seq_45, empty_46);
	RzILOpEffect *for_48 = SEQ2(op_ASSIGN_26, REPEAT(op_LE_27, seq_47));
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, empty_0, for_23, empty_24, empty_25, for_48, empty_49);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzILOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzILOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(op_AND_19), op_AND_19);
	RzILOpPure *op_LT_21 = ULT(VARL("max"), cast_st16_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzILOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzILOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzILOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_st16_4);
	RzILOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzILOpEffect *op_ASSIGN_12 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_26 = SETL("max", cast_st16_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_16, op_ASSIGN_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzILOpEffect *seq_then_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *branch_32 = BRANCH(op_LT_21, seq_then_31, empty_33);
	RzILOpEffect *seq_34 = SEQN(1, branch_32);
	RzILOpEffect *for_35 = SEQ2(op_ASSIGN_12, REPEAT(op_LT_13, seq_34));
	RzILOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc_tmp, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc_tmp, op_OR_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzILOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzILOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_20 = CAST(16, IL_FALSE, op_AND_19);
	RzILOpPure *op_LT_21 = ULT(VARL("max"), cast_ut16_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_25 = CAST(16, IL_FALSE, op_AND_24);
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzILOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzILOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzILOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_ut16_4);
	RzILOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzILOpEffect *op_ASSIGN_12 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_26 = SETL("max", cast_ut16_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_16, op_ASSIGN_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzILOpEffect *seq_then_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *branch_32 = BRANCH(op_LT_21, seq_then_31, empty_33);
	RzILOpEffect *seq_34 = SEQN(1, branch_32);
	RzILOpEffect *for_35 = SEQ2(op_ASSIGN_12, REPEAT(op_LT_13, seq_34));
	RzILOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc_tmp, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc_tmp, op_OR_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_3);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_18 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, cast_ut32_21);
	RzILOpPure *op_LT_23 = ULT(VARL("max"), cast_ut64_22);
	RzILOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_27 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzILOpPure *op_LSHIFT_31 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_32 = LOGOR(Ru, op_LSHIFT_31);
	RzILOpPure *op_MUL_39 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_39));
	RzILOpPure *op_NOT_41 = LOGNOT(op_LSHIFT_40);
	RzILOpPure *op_AND_42 = LOGAND(DUP(Rxx), op_NOT_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_42, op_LSHIFT_45);
	RzILOpPure *op_MUL_49 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_49));
	RzILOpPure *op_NOT_51 = LOGNOT(op_LSHIFT_50);
	RzILOpPure *op_AND_52 = LOGAND(DUP(Rxx), op_NOT_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_53, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_52, op_LSHIFT_55);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("max", cast_ut64_5);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzILOpEffect *op_ASSIGN_13 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_15 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_17 = SEQN(2, op_ASSIGN_hybrid_tmp_16, op_INC_15);
	RzILOpEffect *op_ASSIGN_29 = SETL("max", cast_ut64_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_17, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_33 = SETL("addr", op_OR_32);
	RzILOpEffect *seq_then_34 = SEQN(2, seq_30, op_ASSIGN_33);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *branch_35 = BRANCH(op_LT_23, seq_then_34, empty_36);
	RzILOpEffect *seq_37 = SEQN(1, branch_35);
	RzILOpEffect *for_38 = SEQ2(op_ASSIGN_13, REPEAT(op_LT_14, seq_37));
	RzILOpEffect *op_ASSIGN_47 = SETG(Rxx_assoc_tmp, op_OR_46);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETG(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_38, op_ASSIGN_47, empty_48, op_ASSIGN_57, empty_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_18 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_LT_23 = ULT(VARL("max"), cast_st64_22);
	RzILOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_LSHIFT_31 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_32 = LOGOR(Ru, op_LSHIFT_31);
	RzILOpPure *op_MUL_39 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_39));
	RzILOpPure *op_NOT_41 = LOGNOT(op_LSHIFT_40);
	RzILOpPure *op_AND_42 = LOGAND(DUP(Rxx), op_NOT_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_42, op_LSHIFT_45);
	RzILOpPure *op_MUL_49 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_49));
	RzILOpPure *op_NOT_51 = LOGNOT(op_LSHIFT_50);
	RzILOpPure *op_AND_52 = LOGAND(DUP(Rxx), op_NOT_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_53, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_52, op_LSHIFT_55);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("max", cast_st64_5);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzILOpEffect *op_ASSIGN_13 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_15 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_17 = SEQN(2, op_ASSIGN_hybrid_tmp_16, op_INC_15);
	RzILOpEffect *op_ASSIGN_29 = SETL("max", cast_st64_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_17, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_33 = SETL("addr", op_OR_32);
	RzILOpEffect *seq_then_34 = SEQN(2, seq_30, op_ASSIGN_33);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *branch_35 = BRANCH(op_LT_23, seq_then_34, empty_36);
	RzILOpEffect *seq_37 = SEQN(1, branch_35);
	RzILOpEffect *for_38 = SEQ2(op_ASSIGN_13, REPEAT(op_LT_14, seq_37));
	RzILOpEffect *op_ASSIGN_47 = SETG(Rxx_assoc_tmp, op_OR_46);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETG(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_38, op_ASSIGN_47, empty_48, op_ASSIGN_57, empty_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzILOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzILOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(op_AND_19), op_AND_19);
	RzILOpPure *op_GT_21 = UGT(VARL("min"), cast_st16_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzILOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzILOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzILOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_st16_4);
	RzILOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzILOpEffect *op_ASSIGN_12 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_26 = SETL("min", cast_st16_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_16, op_ASSIGN_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzILOpEffect *seq_then_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *branch_32 = BRANCH(op_GT_21, seq_then_31, empty_33);
	RzILOpEffect *seq_34 = SEQN(1, branch_32);
	RzILOpEffect *for_35 = SEQ2(op_ASSIGN_12, REPEAT(op_LT_13, seq_34));
	RzILOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc_tmp, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc_tmp, op_OR_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzILOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzILOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_20 = CAST(16, IL_FALSE, op_AND_19);
	RzILOpPure *op_GT_21 = UGT(VARL("min"), cast_ut16_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_25 = CAST(16, IL_FALSE, op_AND_24);
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzILOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzILOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzILOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzILOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzILOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_ut16_4);
	RzILOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzILOpEffect *op_ASSIGN_12 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_26 = SETL("min", cast_ut16_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_16, op_ASSIGN_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzILOpEffect *seq_then_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *branch_32 = BRANCH(op_GT_21, seq_then_31, empty_33);
	RzILOpEffect *seq_34 = SEQN(1, branch_32);
	RzILOpEffect *for_35 = SEQ2(op_ASSIGN_12, REPEAT(op_LT_13, seq_34));
	RzILOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc_tmp, op_OR_43);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc_tmp, op_OR_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_3);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_18 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, cast_ut32_21);
	RzILOpPure *op_GT_23 = UGT(VARL("min"), cast_ut64_22);
	RzILOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_27 = CAST(32, IL_FALSE, op_AND_26);
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzILOpPure *op_LSHIFT_31 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_32 = LOGOR(Ru, op_LSHIFT_31);
	RzILOpPure *op_MUL_39 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_39));
	RzILOpPure *op_NOT_41 = LOGNOT(op_LSHIFT_40);
	RzILOpPure *op_AND_42 = LOGAND(DUP(Rxx), op_NOT_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_42, op_LSHIFT_45);
	RzILOpPure *op_MUL_49 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_49));
	RzILOpPure *op_NOT_51 = LOGNOT(op_LSHIFT_50);
	RzILOpPure *op_AND_52 = LOGAND(DUP(Rxx), op_NOT_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_53, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_52, op_LSHIFT_55);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("min", cast_ut64_5);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzILOpEffect *op_ASSIGN_13 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_15 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_17 = SEQN(2, op_ASSIGN_hybrid_tmp_16, op_INC_15);
	RzILOpEffect *op_ASSIGN_29 = SETL("min", cast_ut64_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_17, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_33 = SETL("addr", op_OR_32);
	RzILOpEffect *seq_then_34 = SEQN(2, seq_30, op_ASSIGN_33);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *branch_35 = BRANCH(op_GT_23, seq_then_34, empty_36);
	RzILOpEffect *seq_37 = SEQN(1, branch_35);
	RzILOpEffect *for_38 = SEQ2(op_ASSIGN_13, REPEAT(op_LT_14, seq_37));
	RzILOpEffect *op_ASSIGN_47 = SETG(Rxx_assoc_tmp, op_OR_46);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETG(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_38, op_ASSIGN_47, empty_48, op_ASSIGN_57, empty_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_18 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_GT_23 = UGT(VARL("min"), cast_st64_22);
	RzILOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_LSHIFT_31 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_32 = LOGOR(Ru, op_LSHIFT_31);
	RzILOpPure *op_MUL_39 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_39));
	RzILOpPure *op_NOT_41 = LOGNOT(op_LSHIFT_40);
	RzILOpPure *op_AND_42 = LOGAND(DUP(Rxx), op_NOT_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_42, op_LSHIFT_45);
	RzILOpPure *op_MUL_49 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_49));
	RzILOpPure *op_NOT_51 = LOGNOT(op_LSHIFT_50);
	RzILOpPure *op_AND_52 = LOGAND(DUP(Rxx), op_NOT_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_53, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_52, op_LSHIFT_55);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("min", cast_st64_5);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzILOpEffect *op_ASSIGN_13 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_15 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_17 = SEQN(2, op_ASSIGN_hybrid_tmp_16, op_INC_15);
	RzILOpEffect *op_ASSIGN_29 = SETL("min", cast_st64_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_17, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_33 = SETL("addr", op_OR_32);
	RzILOpEffect *seq_then_34 = SEQN(2, seq_30, op_ASSIGN_33);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *branch_35 = BRANCH(op_GT_23, seq_then_34, empty_36);
	RzILOpEffect *seq_37 = SEQN(1, branch_35);
	RzILOpEffect *for_38 = SEQ2(op_ASSIGN_13, REPEAT(op_LT_14, seq_37));
	RzILOpEffect *op_ASSIGN_47 = SETG(Rxx_assoc_tmp, op_OR_46);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = SETG(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_38, op_ASSIGN_47, empty_48, op_ASSIGN_57, empty_58);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>