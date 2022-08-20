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

RzILOpEffect *hex_il_op_j2_call(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_callf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_callr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp0"), VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *op_ASSIGN_4 = SETG(lr_assoc_tmp, op_AND_3);
	RzILOpEffect *seq_5 = SEQN(2, seq_2, op_ASSIGN_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, seq_5, empty_6, jump_Rs, empty_7, empty_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callrf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_AND_5 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp0"), VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *c_call_2 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(lr_assoc_tmp, op_AND_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(5, seq_7, empty_8, jump_Rs, empty_9, empty_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *branch_12 = BRANCH(op_AND_1, seq_then_11, empty_13);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callrt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_AND_5 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp0"), VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *c_call_2 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_6 = SETG(lr_assoc_tmp, op_AND_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_4, op_ASSIGN_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(5, seq_7, empty_8, jump_Rs, empty_9, empty_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *branch_12 = BRANCH(op_AND_1, seq_then_11, empty_13);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jump(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfnew(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfnewpt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfpt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, jump_Rs, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtez(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtezpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltez(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltezpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnzpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprzpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzILOpPure *op_ADD_1 = LET("r", r, ADD(pc, VARLP("r")));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptnew(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptnewpt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptpt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_loop0i(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_loop0r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_loop1i(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_loop1r(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_pause(HexInsnPktBundle *bundle) {
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop1si(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_ploop1sr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_ploop2si(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_ploop2sr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_ploop3si(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_ploop3sr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_trap0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_trap1(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>