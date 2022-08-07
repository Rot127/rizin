// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-06 11:05:56-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_j2_call(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 4294967294);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *c_call_4 = HEX_HEX_GET_NPC(pkt);
	RzIlOpPure *op_AND_5 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_4, VARLP("const_pos0xfffffffe")));
	RzIlOpPure *op_ADD_8 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_6 = SETG(lr_assoc, op_AND_5);
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *jump_op_ADD_8 = JUMP(op_ADD_8);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_6, empty_7, jump_op_ADD_8, empty_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 4294967294);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *c_call_6 = HEX_HEX_GET_NPC(pkt);
	RzIlOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_6, VARLP("const_pos0xfffffffe")));
	RzIlOpPure *op_ADD_10 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_8 = SETG(lr_assoc, op_AND_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *jump_op_ADD_10 = JUMP(op_ADD_10);
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *seq_then_13 = SEQN(5, op_ASSIGN_8, empty_9, jump_op_ADD_10, empty_11, empty_12);
	RzIlOpEffect *empty_15 = EMPTY();
	RzIlOpEffect *branch_14 = BRANCH(op_AND_5, seq_then_13, empty_15);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 4294967294);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *c_call_0 = HEX_HEX_GET_NPC(pkt);
	RzIlOpPure *op_AND_1 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_0, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(lr_assoc, op_AND_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_2, empty_3, jump_Rs, empty_4, empty_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callrf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 4294967294);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *c_call_2 = HEX_HEX_GET_NPC(pkt);
	RzIlOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_2, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(lr_assoc, op_AND_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(5, op_ASSIGN_4, empty_5, jump_Rs, empty_6, empty_7);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *branch_9 = BRANCH(op_AND_1, seq_then_8, empty_10);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callrt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 4294967294);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *c_call_2 = HEX_HEX_GET_NPC(pkt);
	RzIlOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_2, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(lr_assoc, op_AND_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(5, op_ASSIGN_4, empty_5, jump_Rs, empty_6, empty_7);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *branch_9 = BRANCH(op_AND_1, seq_then_8, empty_10);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 4294967294);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *c_call_6 = HEX_HEX_GET_NPC(pkt);
	RzIlOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_6, VARLP("const_pos0xfffffffe")));
	RzIlOpPure *op_ADD_10 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_8 = SETG(lr_assoc, op_AND_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *jump_op_ADD_10 = JUMP(op_ADD_10);
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *seq_then_13 = SEQN(5, op_ASSIGN_8, empty_9, jump_op_ADD_10, empty_11, empty_12);
	RzIlOpEffect *empty_15 = EMPTY();
	RzIlOpEffect *branch_14 = BRANCH(op_AND_5, seq_then_13, empty_15);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jump(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_4 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *jump_op_ADD_4 = JUMP(op_ADD_4);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, jump_op_ADD_4, empty_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(2, jump_Rs, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtez(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtezpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltez(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltezpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnzpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_Rs = JUMP(Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprzpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzIlOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_loop0i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos0", const_pos0, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos0")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop0r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos0", const_pos0, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos0")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop1i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc1_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC1);
	RzIlOpPure *lc1 = VARG(lc1_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa1_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA1);
	RzIlOpPure *sa1 = VARG(sa1_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc1_assoc, U);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa1_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop1r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc1_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC1);
	RzIlOpPure *lc1 = VARG(lc1_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *sa1_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA1);
	RzIlOpPure *sa1 = VARG(sa1_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc1_assoc, Rs);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa1_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_pause(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ

	// EXEC

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop1si(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	const char *p3_assoc = ALIAS2REG(, HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop1sr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	const char *p3_assoc = ALIAS2REG(, HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop2si(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *p3_assoc = ALIAS2REG(, HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos2", const_pos2, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos2")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop2sr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *p3_assoc = ALIAS2REG(, HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos2", const_pos2, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos2")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop3si(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos3 = UN(32, 3);
	const char *p3_assoc = ALIAS2REG(, HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos3", const_pos3, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos3")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop3sr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lc0_assoc = ALIAS2REG(, HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(, HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos3 = UN(32, 3);
	const char *p3_assoc = ALIAS2REG(, HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzIlOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzIlOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzIlOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = LET("const_pos3", const_pos3, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos3")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_trap0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_trap1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>