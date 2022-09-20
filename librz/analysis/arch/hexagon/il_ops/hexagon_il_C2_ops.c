// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 00:30:08-04:00
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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Ps);
	RzILOpPure *op_EQ_0 = LET("const_pos0xff", const_pos0xff, EQ(cast_1, VARLP("const_pos0xff")));
	RzILOpPure *cond_2 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);
	RzILOpPure *op_AND_1 = LOGAND(Pt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_any8(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cond_0 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(Ps), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_2 = CAST(8, MSB(DUP(cond_0)), cond_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsclr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, op_AND_0);
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(cast_2, VARLP("const_pos0")));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsclri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_1 = LOGAND(cast_2, VARL("u"));
	RzILOpPure *op_EQ_3 = LET("const_pos0", const_pos0, EQ(op_AND_1, VARLP("const_pos0")));
	RzILOpPure *cond_4 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_3, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cond_4)), cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsset(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_3));
	RzILOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzILOpPure *op_AND_6 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_5);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_6, op_LSHIFT_10);
	RzILOpPure *op_MUL_14 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_20 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_17, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *nop_25 = NOP();
	RzILOpEffect *seq_then_26 = SEQN(4, op_ASSIGN_12, empty_13, op_ASSIGN_23, empty_24);
	RzILOpEffect *seq_else_28 = SEQN(1, nop_25);
	RzILOpEffect *branch_27 = BRANCH(op_INV_2, seq_then_26, seq_else_28);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewnewf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_3));
	RzILOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzILOpPure *op_AND_6 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_5);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_6, op_LSHIFT_10);
	RzILOpPure *op_MUL_14 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_20 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_17, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *nop_25 = NOP();
	RzILOpEffect *seq_then_26 = SEQN(4, op_ASSIGN_12, empty_13, op_ASSIGN_23, empty_24);
	RzILOpEffect *seq_else_28 = SEQN(1, nop_25);
	RzILOpEffect *branch_27 = BRANCH(op_INV_2, seq_then_26, seq_else_28);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewnewt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_5 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_5, op_LSHIFT_9);
	RzILOpPure *op_MUL_13 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(op_AND_17, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_16, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *nop_24 = NOP();
	RzILOpEffect *seq_then_25 = SEQN(4, op_ASSIGN_11, empty_12, op_ASSIGN_22, empty_23);
	RzILOpEffect *seq_else_27 = SEQN(1, nop_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_0), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_5 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_5, op_LSHIFT_9);
	RzILOpPure *op_MUL_13 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(op_AND_17, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_16, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *nop_24 = NOP();
	RzILOpEffect *seq_then_25 = SEQN(4, op_ASSIGN_11, empty_12, op_ASSIGN_22, empty_23);
	RzILOpEffect *seq_else_27 = SEQN(1, nop_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_0), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmoveif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("s"));
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_3, seq_then_6, seq_else_8);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("s"));
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_1), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmovenewif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("s"));
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_3, seq_then_6, seq_else_8);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("s"));
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_1), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_1 = EQ(Rs, VARL("s"));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeqp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rss, Rtt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = SGT(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_1 = SGT(Rs, VARL("s"));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_4);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = SGT(Rss, Rtt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *op_GT_3 = UGT(cast_ut32_1, cast_ut32_2);
	RzILOpPure *cond_4 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_3, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cond_4)), cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_mask(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp434;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Pt, VARL("i"));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, op_RSHIFT_12);
	RzILOpPure *op_AND_13 = LET("const_pos1", const_pos1, LOGAND(cast_14, VARLP("const_pos1")));
	RzILOpPure *cond_15 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_13), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(cond_15)), cond_15);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_17, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_22 = LOGOR(cast_23, op_LSHIFT_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp434", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_25);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_24, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_mux(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cond_4 = ITE(NON_ZERO(op_AND_1), VARL("s"), VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *imm_assign_3 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_4);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cond_3 = ITE(NON_ZERO(op_AND_1), Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *cond_3 = ITE(NON_ZERO(op_AND_1), VARL("s"), Rs);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_not(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_NOT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);
	RzILOpPure *op_OR_1 = LOGOR(Pt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_tfrpr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	// Declare: ut64 h_tmp435;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Ps);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp435"), cast_8);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp435", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *seq_11 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_tfrrp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut8_4)), cast_ut8_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_vitpack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_OR_4)), op_OR_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_vmux(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp436;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Pu, VARL("i"));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, op_RSHIFT_12);
	RzILOpPure *op_AND_13 = LET("const_pos1", const_pos1, LOGAND(cast_14, VARLP("const_pos1")));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(cast_16, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos8", DUP(const_pos8), MUL(cast_22, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st8_26 = CAST(8, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cond_27 = ITE(NON_ZERO(op_AND_13), cast_st8_20, cast_st8_26);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(cond_27)), cond_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_29, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(64, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp436", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_6, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_2, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_0, for_42);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>