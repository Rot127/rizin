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

RzILOpEffect *hex_il_op_j2_call(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp440;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_AND_10 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp440"), VARLP("const_pos0xfffffffe")));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_14 = ADD(pc, cast_15);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *c_call_7 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp440", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_7, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(lr_assoc_tmp, op_AND_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_9, op_ASSIGN_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_op_ADD_14 = JMP(op_ADD_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, op_ASSIGN_5, seq_12, empty_13, jump_op_ADD_14, empty_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp441;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_8 = LET("const_pos1", DUP(const_pos1), LOGAND(cast_9, VARLP("const_pos1")));
	RzILOpPure *op_INV_10 = INV(NON_ZERO(op_AND_8));
	RzILOpPure *op_AND_14 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp441"), VARLP("const_pos0xfffffffe")));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_18 = ADD(pc, cast_19);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *c_call_11 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp441", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(lr_assoc_tmp, op_AND_14);
	RzILOpEffect *seq_16 = SEQN(2, seq_13, op_ASSIGN_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *jump_op_ADD_18 = JMP(op_ADD_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(5, seq_16, empty_17, jump_op_ADD_18, empty_20, empty_21);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *branch_23 = BRANCH(op_INV_10, seq_then_22, empty_24);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_5, empty_7, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp442;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp442"), VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp442", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(lr_assoc_tmp, op_AND_3);
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
	// Declare: ut32 h_tmp443;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));
	RzILOpPure *op_AND_7 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp443"), VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *c_call_4 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp443", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(lr_assoc_tmp, op_AND_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(5, seq_9, empty_10, jump_Rs, empty_11, empty_12);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *branch_14 = BRANCH(op_INV_3, seq_then_13, empty_15);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_14);

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
	// Declare: ut32 h_tmp444;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_AND_6 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp444"), VARLP("const_pos0xfffffffe")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *c_call_3 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp444", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(lr_assoc_tmp, op_AND_6);
	RzILOpEffect *seq_8 = SEQN(2, seq_5, op_ASSIGN_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *seq_then_12 = SEQN(5, seq_8, empty_9, jump_Rs, empty_10, empty_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *branch_13 = BRANCH(NON_ZERO(op_AND_1), seq_then_12, empty_14);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_callt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	// Declare: ut32 h_tmp445;
	RzILOpPure *const_pos0xfffffffe = UN(32, 0xfffffffe);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_8 = LET("const_pos1", DUP(const_pos1), LOGAND(cast_9, VARLP("const_pos1")));
	RzILOpPure *op_AND_13 = LET("const_pos0xfffffffe", const_pos0xfffffffe, LOGAND(VARL("h_tmp445"), VARLP("const_pos0xfffffffe")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_17 = ADD(pc, cast_18);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *c_call_10 = HEX_GET_NPC(pkt);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp445", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(lr_assoc_tmp, op_AND_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_12, op_ASSIGN_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *jump_op_ADD_17 = JMP(op_ADD_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(5, seq_15, empty_16, jump_op_ADD_17, empty_19, empty_20);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *branch_22 = BRANCH(NON_ZERO(op_AND_8), seq_then_21, empty_23);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_5, empty_7, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jump(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_7 = ADD(pc, cast_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *jump_op_ADD_7 = JMP(op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_5, jump_op_ADD_7, empty_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));
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
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(4, op_ASSIGN_9, jump_op_ADD_11, empty_13, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_INV_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));
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
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(4, op_ASSIGN_9, jump_op_ADD_11, empty_13, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_INV_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpfnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));
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
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(4, op_ASSIGN_9, jump_op_ADD_11, empty_13, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_INV_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpfpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));
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
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(4, op_ASSIGN_9, jump_op_ADD_11, empty_13, empty_14);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *branch_16 = BRANCH(op_INV_3, seq_then_15, empty_17);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, empty_0, branch_16);

	return instruction_sequence;
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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(3, jump_Rs, empty_4, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_INV_3, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_7);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(3, jump_Rs, empty_4, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_INV_3, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_7);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(3, jump_Rs, empty_4, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_INV_3, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_7);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(3, jump_Rs, empty_4, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_INV_3, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtez(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_GE_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprgtezpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_GE_0 = LET("const_pos0", const_pos0, UGE(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_GE_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltez(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_LE_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprltezpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LE_0 = LET("const_pos0", const_pos0, ULE(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_LE_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_EQ_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprnzpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_EQ_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(3, jump_Rs, empty_3, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_1), seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_6);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(3, jump_Rs, empty_3, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_1), seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_6);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(3, jump_Rs, empty_3, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_1), seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_6);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_Rs = JMP(Rs);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(3, jump_Rs, empty_3, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_1), seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(cast_1, VARLP("const_pos0"))));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_NE_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumprzpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_NE_0 = LET("const_pos0", const_pos0, INV(EQ(cast_1, VARLP("const_pos0"))));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_3 = ADD(pc, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("r", r);
	RzILOpEffect *jump_op_ADD_3 = JMP(op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *seq_then_6 = SEQN(2, jump_op_ADD_3, empty_5);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *branch_7 = BRANCH(op_NE_0, seq_then_6, empty_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
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
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(4, op_ASSIGN_8, jump_op_ADD_10, empty_12, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_1), seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumptnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
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
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(4, op_ASSIGN_8, jump_op_ADD_10, empty_12, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_1), seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumptnewpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
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
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(4, op_ASSIGN_8, jump_op_ADD_10, empty_12, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_1), seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_jumptpt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_SUB_4 = LET("const_pos4", const_pos4, LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
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
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(4, op_ASSIGN_8, jump_op_ADD_10, empty_12, empty_13);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_1), seq_then_14, empty_16);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, empty_0, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop0i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp446;
	// Declare: ut32 h_tmp447;
	// Declare: ut32 h_tmp448;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut64 h_tmp449;

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp447"))), VARL("h_tmp447"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp448"))), VARL("h_tmp448"));
	RzILOpPure *arg_cast_28 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp446")), VARL("h_tmp449"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, VARL("U"));
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp446", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp447", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp448", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp449", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *instruction_sequence = SEQN(9, imm_assign_0, imm_assign_7, op_ASSIGN_5, op_ASSIGN_8, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop0r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp450;
	// Declare: ut32 h_tmp451;
	// Declare: ut32 h_tmp452;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut64 h_tmp453;

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp451"))), VARL("h_tmp451"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp452"))), VARL("h_tmp452"));
	RzILOpPure *arg_cast_28 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp450")), VARL("h_tmp453"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, cast_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp450", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp451", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp452", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp453", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *instruction_sequence = SEQN(8, imm_assign_0, op_ASSIGN_5, op_ASSIGN_7, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop1i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC1, true);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *sa1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA1, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(lc1_assoc_tmp, VARL("U"));
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa1_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, imm_assign_0, imm_assign_7, op_ASSIGN_5, op_ASSIGN_8, empty_9, op_ASSIGN_12, empty_13, empty_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_loop1r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC1, true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA1, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(lc1_assoc_tmp, cast_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa1_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, op_ASSIGN_5, op_ASSIGN_7, empty_9, op_ASSIGN_12, empty_13, empty_14);

	return instruction_sequence;
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
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp454;
	// Declare: ut32 h_tmp455;
	// Declare: ut32 h_tmp456;
	// Declare: ut64 h_tmp457;
	// Write only explicit: P3
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp455"))), VARL("h_tmp455"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp456"))), VARL("h_tmp456"));
	RzILOpPure *arg_cast_28 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp454")), VARL("h_tmp457"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_38 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, VARL("U"));
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp454", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp455", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp456", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp457", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL("P3_tmp", cast_38);
	RzILOpEffect *instruction_sequence = SEQN(10, imm_assign_0, imm_assign_7, op_ASSIGN_5, op_ASSIGN_8, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36, op_ASSIGN_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop1sr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp458;
	// Declare: ut32 h_tmp459;
	// Declare: ut32 h_tmp460;
	// Declare: ut64 h_tmp461;
	// Write only explicit: P3
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp459"))), VARL("h_tmp459"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp460"))), VARL("h_tmp460"));
	RzILOpPure *arg_cast_28 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp458")), VARL("h_tmp461"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_38 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, cast_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp458", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp459", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp460", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp461", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL("P3_tmp", cast_38);
	RzILOpEffect *instruction_sequence = SEQN(9, imm_assign_0, op_ASSIGN_5, op_ASSIGN_7, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36, op_ASSIGN_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop2si(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp462;
	// Declare: ut32 h_tmp463;
	// Declare: ut32 h_tmp464;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut64 h_tmp465;
	// Write only explicit: P3
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp463"))), VARL("h_tmp463"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp464"))), VARL("h_tmp464"));
	RzILOpPure *arg_cast_28 = LET("const_pos2", const_pos2, CAST(64, IL_FALSE, VARLP("const_pos2")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp462")), VARL("h_tmp465"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_38 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, VARL("U"));
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp462", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp463", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp464", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp465", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL("P3_tmp", cast_38);
	RzILOpEffect *instruction_sequence = SEQN(10, imm_assign_0, imm_assign_7, op_ASSIGN_5, op_ASSIGN_8, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36, op_ASSIGN_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop2sr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp466;
	// Declare: ut32 h_tmp467;
	// Declare: ut32 h_tmp468;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut64 h_tmp469;
	// Write only explicit: P3
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp467"))), VARL("h_tmp467"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp468"))), VARL("h_tmp468"));
	RzILOpPure *arg_cast_28 = LET("const_pos2", const_pos2, CAST(64, IL_FALSE, VARLP("const_pos2")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp466")), VARL("h_tmp469"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_38 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, cast_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp466", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp467", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp468", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp469", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL("P3_tmp", cast_38);
	RzILOpEffect *instruction_sequence = SEQN(9, imm_assign_0, op_ASSIGN_5, op_ASSIGN_7, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36, op_ASSIGN_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop3si(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp470;
	// Declare: ut32 h_tmp471;
	// Declare: ut32 h_tmp472;
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut64 h_tmp473;
	// Write only explicit: P3
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp471"))), VARL("h_tmp471"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp472"))), VARL("h_tmp472"));
	RzILOpPure *arg_cast_28 = LET("const_pos3", const_pos3, CAST(64, IL_FALSE, VARLP("const_pos3")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp470")), VARL("h_tmp473"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_38 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, VARL("U"));
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp470", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp471", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp472", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp473", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL("P3_tmp", cast_38);
	RzILOpEffect *instruction_sequence = SEQN(10, imm_assign_0, imm_assign_7, op_ASSIGN_5, op_ASSIGN_8, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36, op_ASSIGN_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_ploop3sr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	const HexPkt *pkt = bundle->pkt;
	// READ
	RzILOpPure *r = SN(32, (st32)ISA2IMM(hi, 'r'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *sa0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SA0, true);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp474;
	// Declare: ut32 h_tmp475;
	// Declare: ut32 h_tmp476;
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut64 h_tmp477;
	// Write only explicit: P3
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_SUB_1 = LET("const_pos4", const_pos4, LET("const_pos1", const_pos1, SUB(VARLP("const_pos4"), VARLP("const_pos1"))));
	RzILOpPure *op_NOT_2 = LOGNOT(op_SUB_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("r"));
	RzILOpPure *op_ADD_10 = ADD(pc, cast_11);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp475"))), VARL("h_tmp475"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp476"))), VARL("h_tmp476"));
	RzILOpPure *arg_cast_28 = LET("const_pos3", const_pos3, CAST(64, IL_FALSE, VARLP("const_pos3")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp474")), VARL("h_tmp477"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_38 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("r", r);
	RzILOpEffect *op_ASSIGN_5 = SETL("r", cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, cast_8);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(sa0_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp474", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp475", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp476", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp477", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL("P3_tmp", cast_38);
	RzILOpEffect *instruction_sequence = SEQN(9, imm_assign_0, op_ASSIGN_5, op_ASSIGN_7, empty_9, op_ASSIGN_12, empty_13, empty_14, seq_36, op_ASSIGN_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_trap0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_j2_trap1(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>