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

RzILOpEffect *hex_il_op_c2_all8(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Ps);
	RzILOpPure *op_EQ_0 = LET("const_pos0xff", const_pos0xff, EQ(cast_1, VARLP("const_pos0xff")));
	RzILOpPure *cond_2 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);
	RzILOpPure *op_AND_1 = LOGAND(Pt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_any8(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cond_0 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(Ps), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_2 = CAST(8, IL_FALSE, cond_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, cast_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsclr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(op_AND_0, VARLP("const_pos0")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsclri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_1 = LOGAND(Rs, VARL("u"));
	RzILOpPure *op_EQ_2 = LET("const_pos0", const_pos0, EQ(op_AND_1, VARLP("const_pos0")));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsset(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *op_EQ_1 = EQ(op_AND_0, DUP(Rt));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_2));
	RzILOpPure *op_NOT_4 = LOGNOT(op_LSHIFT_3);
	RzILOpPure *cast_6 = CAST(64, IL_FALSE, op_NOT_4);
	RzILOpPure *op_AND_5 = LOGAND(VARG(Rdd_assoc_tmp), cast_6);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_LSHIFT_10);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_5, cast_12);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *cast_19 = CAST(64, IL_FALSE, op_NOT_17);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), cast_19);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_LSHIFT_23);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_18, cast_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *nop_28 = NOP();
	RzILOpEffect *seq_then_29 = SEQN(4, op_ASSIGN_13, empty_14, op_ASSIGN_26, empty_27);
	RzILOpEffect *seq_else_31 = SEQN(1, nop_28);
	RzILOpEffect *branch_30 = BRANCH(NON_ZERO(op_AND_0), seq_then_29, seq_else_31);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewnewf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_2));
	RzILOpPure *op_NOT_4 = LOGNOT(op_LSHIFT_3);
	RzILOpPure *cast_6 = CAST(64, IL_FALSE, op_NOT_4);
	RzILOpPure *op_AND_5 = LOGAND(VARG(Rdd_assoc_tmp), cast_6);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_LSHIFT_10);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_5, cast_12);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *cast_19 = CAST(64, IL_FALSE, op_NOT_17);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), cast_19);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_LSHIFT_23);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_18, cast_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *nop_28 = NOP();
	RzILOpEffect *seq_then_29 = SEQN(4, op_ASSIGN_13, empty_14, op_ASSIGN_26, empty_27);
	RzILOpEffect *seq_else_31 = SEQN(1, nop_28);
	RzILOpEffect *branch_30 = BRANCH(NON_ZERO(op_AND_0), seq_then_29, seq_else_31);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewnewt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_2));
	RzILOpPure *op_NOT_4 = LOGNOT(op_LSHIFT_3);
	RzILOpPure *cast_6 = CAST(64, IL_FALSE, op_NOT_4);
	RzILOpPure *op_AND_5 = LOGAND(VARG(Rdd_assoc_tmp), cast_6);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_LSHIFT_10);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_5, cast_12);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *cast_19 = CAST(64, IL_FALSE, op_NOT_17);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), cast_19);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_LSHIFT_23);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_18, cast_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *nop_28 = NOP();
	RzILOpEffect *seq_then_29 = SEQN(4, op_ASSIGN_13, empty_14, op_ASSIGN_26, empty_27);
	RzILOpEffect *seq_else_31 = SEQN(1, nop_28);
	RzILOpEffect *branch_30 = BRANCH(NON_ZERO(op_AND_0), seq_then_29, seq_else_31);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_2));
	RzILOpPure *op_NOT_4 = LOGNOT(op_LSHIFT_3);
	RzILOpPure *cast_6 = CAST(64, IL_FALSE, op_NOT_4);
	RzILOpPure *op_AND_5 = LOGAND(VARG(Rdd_assoc_tmp), cast_6);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_LSHIFT_10);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_5, cast_12);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *cast_19 = CAST(64, IL_FALSE, op_NOT_17);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), cast_19);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_LSHIFT_23);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_18, cast_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *nop_28 = NOP();
	RzILOpEffect *seq_then_29 = SEQN(4, op_ASSIGN_13, empty_14, op_ASSIGN_26, empty_27);
	RzILOpEffect *seq_else_31 = SEQN(1, nop_28);
	RzILOpEffect *branch_30 = BRANCH(NON_ZERO(op_AND_0), seq_then_29, seq_else_31);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmoveif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cast_4);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(NON_ZERO(op_AND_1), seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmoveit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cast_4);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(NON_ZERO(op_AND_1), seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmovenewif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cast_4);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(NON_ZERO(op_AND_1), seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmovenewit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cast_4);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(NON_ZERO(op_AND_1), seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, IL_FALSE, cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_EQ_1 = EQ(Rs, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeqp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rss, Rtt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, IL_FALSE, cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, IL_FALSE, cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_GT_1 = UGT(Rs, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rss, Rtt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, IL_FALSE, cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *op_GT_3 = UGT(cast_ut32_1, cast_ut32_2);
	RzILOpPure *cond_4 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_3, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_6 = CAST(8, IL_FALSE, cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, Rtt);
	RzILOpPure *op_GT_2 = UGT(cast_ut64_0, cast_ut64_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_mask(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp433;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

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
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Pt, VARL("i"));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, op_RSHIFT_13);
	RzILOpPure *op_AND_14 = LET("const_pos1", const_pos1, LOGAND(cast_15, VARLP("const_pos1")));
	RzILOpPure *cond_16 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_14), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(cond_16)), cond_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_18, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp433", VARL("i"));
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

RzILOpEffect *hex_il_op_c2_mux(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = ITE(NON_ZERO(op_AND_0), Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cond_4 = ITE(NON_ZERO(op_AND_1), VARL("s"), VARL("S"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *imm_assign_3 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cond_3 = ITE(NON_ZERO(op_AND_1), Rs, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cond_3 = ITE(NON_ZERO(op_AND_1), cast_4, Rs);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_not(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, op_NOT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);
	RzILOpPure *op_OR_1 = LOGOR(Pt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_tfrpr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	// Declare: ut64 h_tmp434;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Ps);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp434"), cast_8);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp434", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc_tmp, cast_10);
	RzILOpEffect *seq_11 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_tfrrp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, op_AND_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_vitpack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0x55 = UN(32, 0x55);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0xAA = UN(32, 0xaa);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Ps);
	RzILOpPure *op_AND_0 = LET("const_pos0x55", const_pos0x55, LOGAND(cast_1, VARLP("const_pos0x55")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_2 = LET("const_pos0xAA", const_pos0xAA, LOGAND(cast_3, VARLP("const_pos0xAA")));
	RzILOpPure *op_OR_4 = LOGOR(op_AND_0, op_AND_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, op_OR_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_vmux(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp435;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

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
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Pu, VARL("i"));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, op_RSHIFT_13);
	RzILOpPure *op_AND_14 = LET("const_pos1", const_pos1, LOGAND(cast_15, VARLP("const_pos1")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(cast_17, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_20 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st8_21 = CAST(8, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", DUP(const_pos8), MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st8_27 = CAST(8, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cond_28 = ITE(NON_ZERO(op_AND_14), cast_st8_21, cast_st8_27);
	RzILOpPure *cast_30 = CAST(64, MSB(DUP(cond_28)), cond_28);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_30, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_31 = CAST(64, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(cast_33, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_31, op_MUL_32);
	RzILOpPure *op_OR_35 = LOGOR(op_AND_11, op_LSHIFT_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp435", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc_tmp, op_OR_35);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_36, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>