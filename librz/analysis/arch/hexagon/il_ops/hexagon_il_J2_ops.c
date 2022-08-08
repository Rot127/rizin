// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 19:19:30-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_j2_call_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *c_call_4 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_5 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_4, VARLP("const_pos0xfffffffe")));
	RzILOpPure *op_ADD_8 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_6 = SETG(lr_assoc, op_AND_5);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *jump_op_ADD_8 = JUMP(op_ADD_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_6, empty_7, jump_op_ADD_8, empty_9, empty_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *c_call_4 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_5 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_4, VARLP("const_pos0xfffffffe")));
	RzILOpPure *op_ADD_8 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_6 = SETG(lr_assoc, op_AND_5);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *jump_op_ADD_8 = JUMP(op_ADD_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_6, empty_7, jump_op_ADD_8, empty_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callf_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_6 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_6, VARLP("const_pos0xfffffffe")));
	RzILOpPure *op_ADD_10 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(lr_assoc, op_AND_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *jump_op_ADD_10 = JUMP(op_ADD_10);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(5, op_ASSIGN_8, empty_9, jump_op_ADD_10, empty_11, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_AND_5, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_6 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_6, VARLP("const_pos0xfffffffe")));
	RzILOpPure *op_ADD_10 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(lr_assoc, op_AND_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *jump_op_ADD_10 = JUMP(op_ADD_10);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(5, op_ASSIGN_8, empty_9, jump_op_ADD_10, empty_11, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_AND_5, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callr_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *c_call_0 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_1 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_0, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(lr_assoc, op_AND_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_2, empty_3, jump_Rs, empty_4, empty_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *c_call_0 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_1 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_0, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(lr_assoc, op_AND_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_2, empty_3, jump_Rs, empty_4, empty_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callrf_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_2 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_2, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(lr_assoc, op_AND_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(5, op_ASSIGN_4, empty_5, jump_Rs, empty_6, empty_7);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *branch_9 = BRANCH(op_AND_1, seq_then_8, empty_10);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_2 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_2, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(lr_assoc, op_AND_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(5, op_ASSIGN_4, empty_5, jump_Rs, empty_6, empty_7);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *branch_9 = BRANCH(op_AND_1, seq_then_8, empty_10);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callrt_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_2 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_2, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(lr_assoc, op_AND_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(5, op_ASSIGN_4, empty_5, jump_Rs, empty_6, empty_7);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *branch_9 = BRANCH(op_AND_1, seq_then_8, empty_10);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_2 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_2, VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(lr_assoc, op_AND_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(5, op_ASSIGN_4, empty_5, jump_Rs, empty_6, empty_7);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *branch_9 = BRANCH(op_AND_1, seq_then_8, empty_10);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callt_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_6 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_6, VARLP("const_pos0xfffffffe")));
	RzILOpPure *op_ADD_10 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(lr_assoc, op_AND_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *jump_op_ADD_10 = JUMP(op_ADD_10);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(5, op_ASSIGN_8, empty_9, jump_op_ADD_10, empty_11, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_AND_5, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *c_call_6 = HEX_HEX_GET_NPC(pkt);
	RzILOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(c_call_6, VARLP("const_pos0xfffffffe")));
	RzILOpPure *op_ADD_10 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(lr_assoc, op_AND_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *jump_op_ADD_10 = JUMP(op_ADD_10);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(5, op_ASSIGN_8, empty_9, jump_op_ADD_10, empty_11, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_AND_5, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jump_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_4 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *jump_op_ADD_4 = JUMP(op_ADD_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, jump_op_ADD_4, empty_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_4 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *jump_op_ADD_4 = JUMP(op_ADD_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_3, jump_op_ADD_4, empty_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpf_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfnew_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfnewpt_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpfpt_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumpr_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, jump_Rs, empty_0);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, jump_Rs, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprf_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfnew_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfnewpt_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprfpt_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtez_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtezpt_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_GE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltez_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltezpt_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_LE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnz_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnzpt_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(Rs, VARLP("const_pos0")));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_EQ_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprt_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtnew_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtnewpt_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprtpt_part0(HexInsnPktBundle *bundle) {
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
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
	RzILOpEffect *jump_Rs = JUMP(Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(3, jump_Rs, empty_2, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(op_AND_1, seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprz_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprzpt_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *r = UN(32, (ut32)ISA2IMM(hi, "r"));

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(Rs, VARLP("const_pos0"))));
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *jump_op_ADD_1 = JUMP(op_ADD_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_op_ADD_1, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_NE_0, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpt_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptnew_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptnewpt_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_jumptpt_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_loop0i_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos0")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos0")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop0r_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos0")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos0")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop1i_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc1_assoc = ALIAS2REG(HEX_REG_ALIAS_LC1);
	RzILOpPure *lc1 = VARG(lc1_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1);
	RzILOpPure *sa1 = VARG(sa1_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc1_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa1_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc1_assoc = ALIAS2REG(HEX_REG_ALIAS_LC1);
	RzILOpPure *lc1 = VARG(lc1_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1);
	RzILOpPure *sa1 = VARG(sa1_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc1_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa1_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop1r_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc1_assoc = ALIAS2REG(HEX_REG_ALIAS_LC1);
	RzILOpPure *lc1 = VARG(lc1_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1);
	RzILOpPure *sa1 = VARG(sa1_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc1_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa1_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc1_assoc = ALIAS2REG(HEX_REG_ALIAS_LC1);
	RzILOpPure *lc1 = VARG(lc1_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1);
	RzILOpPure *sa1 = VARG(sa1_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc1_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa1_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_pause_part0(HexInsnPktBundle *bundle) {
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop1si_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop1sr_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop2si_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos2", const_pos2, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos2")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos2", const_pos2, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos2")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop2sr_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos2", const_pos2, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos2")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos2", const_pos2, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos2")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop3si_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos3", const_pos3, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos3")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos3", const_pos3, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos3")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, U);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop3sr_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos3", const_pos3, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos3")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, "r"));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzILOpPure *lc0 = VARG(lc0_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC);
	RzILOpPure *pc = VARG(pc_assoc);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzILOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_1 = LOGNOT(op_SUB_0);
	RzILOpPure *op_AND_2 = LOGAND(VARL("r"), op_NOT_1);
	RzILOpPure *op_ADD_6 = ADD(pc, VARL("r"));
	RzILOpPure *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_11 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpPure *c_call_13 = LET("const_pos3", const_pos3, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos3")));
	RzILOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("r", op_AND_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(lc0_assoc, Rs);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(sa0_assoc, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzILOpEffect *op_PRED_WRITE_16 = write_pred(p3, const_pos0);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, op_ASSIGN_3, op_ASSIGN_4, empty_5, op_ASSIGN_7, empty_8, empty_9, op_ASSIGN_15, op_PRED_WRITE_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_trap0_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_trap1_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>