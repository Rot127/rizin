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

RzILOpEffect *hex_il_op_j4_cmpeq_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_NE_2 = INV(EQ(cast_st32_1, Rt));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_NE_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_NE_2 = INV(EQ(cast_st32_1, Rt));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_NE_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_EQ_2 = EQ(cast_st32_1, Rt);
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_EQ_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_EQ_2 = EQ(cast_st32_1, Rt);
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_EQ_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeq_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_NE_3 = INV(EQ(cast_4, VARL("U")));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_NE_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_NE_3 = INV(EQ(cast_4, VARL("U")));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_NE_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_EQ_3 = EQ(cast_4, VARL("U"));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_EQ_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_EQ_3 = EQ(cast_4, VARL("U"));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_EQ_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_1 = EQ(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqi_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_NE_2 = LET("const_neg1", const_neg1, INV(EQ(cast_st32_1, VARLP("const_neg1"))));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_NE_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_NE_2 = LET("const_neg1", const_neg1, INV(EQ(cast_st32_1, VARLP("const_neg1"))));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_NE_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_EQ_2 = LET("const_neg1", const_neg1, EQ(cast_st32_1, VARLP("const_neg1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_EQ_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_EQ_2 = LET("const_neg1", const_neg1, EQ(cast_st32_1, VARLP("const_neg1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_EQ_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_neg1", const_neg1, EQ(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpeqn1_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(cast_st32_1, Rt);
	RzILOpPure *op_INV_3 = INV(op_GT_2);
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(op_INV_3, seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(cast_st32_1, Rt);
	RzILOpPure *op_INV_3 = INV(op_GT_2);
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(op_INV_3, seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(cast_st32_1, Rt);
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_GT_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(cast_st32_1, Rt);
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_GT_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
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
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgt_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_3 = UGT(cast_4, VARL("U"));
	RzILOpPure *op_INV_5 = INV(op_GT_3);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_3 = UGT(cast_4, VARL("U"));
	RzILOpPure *op_INV_5 = INV(op_GT_3);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_3 = UGT(cast_4, VARL("U"));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_3 = UGT(cast_4, VARL("U"));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_2 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_2, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_1 = UGT(cast_2, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgti_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = LET("const_neg1", const_neg1, SGT(cast_st32_1, VARLP("const_neg1")));
	RzILOpPure *op_INV_3 = INV(op_GT_2);
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(op_INV_3, seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = LET("const_neg1", const_neg1, SGT(cast_st32_1, VARLP("const_neg1")));
	RzILOpPure *op_INV_3 = INV(op_GT_2);
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(op_INV_3, seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = LET("const_neg1", const_neg1, SGT(cast_st32_1, VARLP("const_neg1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_GT_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = LET("const_neg1", const_neg1, SGT(cast_st32_1, VARLP("const_neg1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_GT_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P0_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_neg1 = SN(32, -0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_neg1", const_neg1, SGT(Rs, VARLP("const_neg1")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_3 = CAST(8, MSB(DUP(cond_1)), cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL("P1_tmp", cast_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtn1_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, cast_ut32_3);
	RzILOpPure *op_INV_5 = INV(op_GT_4);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, cast_ut32_3);
	RzILOpPure *op_INV_5 = INV(op_GT_4);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, cast_ut32_3);
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, cast_ut32_3);
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_1 = UGT(cast_ut32_0, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtu_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, VARL("U"));
	RzILOpPure *op_INV_5 = INV(op_GT_4);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_3, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, VARL("U"));
	RzILOpPure *op_INV_5 = INV(op_GT_4);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_3, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, VARL("U"));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_2, VARL("U"));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P0_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, VARL("U"));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, MSB(DUP(cond_3)), cond_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL("P1_tmp", cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpgtui_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmplt_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(Rt, cast_st32_1);
	RzILOpPure *op_INV_3 = INV(op_GT_2);
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(op_INV_3, seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmplt_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(Rt, cast_st32_1);
	RzILOpPure *op_INV_3 = INV(op_GT_2);
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(op_INV_3, seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmplt_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(Rt, cast_st32_1);
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_GT_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmplt_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *op_GT_2 = SGT(Rt, cast_st32_1);
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_GT_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpltu_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_st32_2 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, cast_st32_2);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_1, cast_ut32_3);
	RzILOpPure *op_INV_5 = INV(op_GT_4);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpltu_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_st32_2 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, cast_st32_2);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_1, cast_ut32_3);
	RzILOpPure *op_INV_5 = INV(op_GT_4);
	RzILOpPure *op_SUB_7 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_8 = LOGNOT(op_SUB_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_13 = ADD(pc, cast_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_11 = SETL("r", cast_12);
	RzILOpEffect *jump_op_ADD_13 = JMP(op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_11, jump_op_ADD_13, empty_15);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, empty_18);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_6, empty_0, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpltu_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_st32_2 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, cast_st32_2);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_1, cast_ut32_3);
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_cmpltu_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_st32_2 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, cast_st32_2);
	RzILOpPure *op_GT_4 = UGT(cast_ut32_1, cast_ut32_3);
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_GT_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_hintjumpr(HexInsnPktBundle *bundle) {
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, empty_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_jumpseti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_7, op_ASSIGN_5, op_ASSIGN_8, jump_op_ADD_10, empty_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_jumpsetr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_8 = ADD(pc, cast_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, Rs);
	RzILOpEffect *jump_op_ADD_8 = JMP(op_ADD_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_5, op_ASSIGN_7, jump_op_ADD_8, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_f_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(cast_3, VARLP("const_pos1")));
	RzILOpPure *op_INV_4 = INV(NON_ZERO(op_AND_2));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_INV_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_f_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(cast_3, VARLP("const_pos1")));
	RzILOpPure *op_INV_4 = INV(NON_ZERO(op_AND_2));
	RzILOpPure *op_SUB_6 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_SUB_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_8 = LOGAND(cast_9, op_NOT_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_12 = ADD(pc, cast_13);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_10 = SETL("r", cast_11);
	RzILOpEffect *jump_op_ADD_12 = JMP(op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_10, jump_op_ADD_12, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_INV_4, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P0_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P0_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P1_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P1_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_fp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_5 = LOGNOT(op_SUB_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_6 = LOGAND(cast_7, op_NOT_5);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_8 = SETL("r", cast_9);
	RzILOpEffect *jump_op_ADD_10 = JMP(op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(3, op_ASSIGN_8, jump_op_ADD_10, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_2, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_t_jumpnv_nt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(cast_3, VARLP("const_pos1")));
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_2), seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_t_jumpnv_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Ns_tmp_assoc = ISA2REG(hi, 's', true);
	RzILOpPure *Ns = VARG(Ns_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Ns)), DUP(Ns));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(cast_3, VARLP("const_pos1")));
	RzILOpPure *op_SUB_5 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_6 = LOGNOT(op_SUB_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_7 = LOGAND(cast_8, op_NOT_6);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_11 = ADD(pc, cast_12);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_9 = SETL("r", cast_10);
	RzILOpEffect *jump_op_ADD_11 = JMP(op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(3, op_ASSIGN_9, jump_op_ADD_11, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_2), seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp0_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P0_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp0_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp0_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P0
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P0_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp0_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp1_jump_nt_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P1_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp1_jump_nt_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp1_jump_t_part0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Write only explicit: P1
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(NON_ZERO(op_AND_0), VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_4 = CAST(8, MSB(DUP(cond_2)), cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL("P1_tmp", cast_4);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j4_tstbit0_tp1_jump_t_part1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *P1 = VARG("P1_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P1);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_3 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_4 = LOGNOT(op_SUB_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_9 = ADD(pc, cast_10);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_7 = SETL("r", cast_8);
	RzILOpEffect *jump_op_ADD_9 = JMP(op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(3, op_ASSIGN_7, jump_op_ADD_9, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_0), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_13);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>