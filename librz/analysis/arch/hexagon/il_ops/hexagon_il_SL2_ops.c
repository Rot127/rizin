// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-15 11:57:41-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_sl2_deallocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(VARL("tmp"), op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_MUL_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmp"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_ADD_22 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", fp);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", op_XOR_6);
	RzILOpEffect *op_ASSIGN_13 = SETG(lr_assoc, cast_st64_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_20 = SETG(fp_assoc, cast_st64_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = SETG(sp_assoc, op_ADD_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_13, empty_14, op_ASSIGN_20, empty_21, op_ASSIGN_23, empty_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *jump_lr = JUMP(lr);
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, jump_lr, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_assoc = ISA2REG(hi, '0', false);
	RzILOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JUMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_fnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_tmp_assoc = ISA2REG(hi, '0', true);
	RzILOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JUMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_assoc = ISA2REG(hi, '0', false);
	RzILOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JUMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_tnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_tmp_assoc = ISA2REG(hi, '0', true);
	RzILOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JUMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrd_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(sp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadri_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(sp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(VARL("tmp"), op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzILOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzILOpPure *op_MUL_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmp"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_ADD_22 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(VARL("tmp"), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(op_AND_27), op_AND_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", fp);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", op_XOR_6);
	RzILOpEffect *op_ASSIGN_13 = SETG(lr_assoc, cast_st64_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_20 = SETG(fp_assoc, cast_st64_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = SETG(sp_assoc, op_ADD_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *jump_cast_st64_29 = JUMP(cast_st64_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_13, empty_14, op_ASSIGN_20, empty_21, op_ASSIGN_23, empty_24, jump_cast_st64_29, empty_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *P0P0_assoc = ISA2REG(hi, '0', false);
	RzILOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(VARL("tmp"), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmp"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_ADD_25 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(VARL("tmp"), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(op_AND_30), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", fp);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETL("tmp", op_XOR_9);
	RzILOpEffect *op_ASSIGN_16 = SETG(lr_assoc, cast_st64_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = SETG(fp_assoc, cast_st64_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(sp_assoc, op_ADD_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *jump_cast_st64_32 = JUMP(cast_st64_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *nop_34 = NOP;
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_then_36 = SEQN(10, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_16, empty_17, op_ASSIGN_23, empty_24, op_ASSIGN_26, empty_27, jump_cast_st64_32, empty_33);
	RzILOpEffect *seq_else_38 = SEQN(2, nop_34, empty_35);
	RzILOpEffect *branch_37 = BRANCH(op_AND_4, seq_then_36, seq_else_38);
	RzILOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_fnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *P0P0_tmp_assoc = ISA2REG(hi, '0', true);
	RzILOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(VARL("tmp"), op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(VARL("tmp"), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_ADD_24 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(VARL("tmp"), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", fp);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETL("tmp", op_XOR_8);
	RzILOpEffect *op_ASSIGN_15 = SETG(lr_assoc, cast_st64_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *op_ASSIGN_22 = SETG(fp_assoc, cast_st64_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(sp_assoc, op_ADD_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *jump_cast_st64_31 = JUMP(cast_st64_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *nop_33 = NOP;
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_then_35 = SEQN(10, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_15, empty_16, op_ASSIGN_22, empty_23, op_ASSIGN_25, empty_26, jump_cast_st64_31, empty_32);
	RzILOpEffect *seq_else_37 = SEQN(2, nop_33, empty_34);
	RzILOpEffect *branch_36 = BRANCH(op_AND_3, seq_then_35, seq_else_37);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *P0P0_assoc = ISA2REG(hi, '0', false);
	RzILOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(VARL("tmp"), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmp"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_ADD_25 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(VARL("tmp"), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(op_AND_30), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", fp);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETL("tmp", op_XOR_9);
	RzILOpEffect *op_ASSIGN_16 = SETG(lr_assoc, cast_st64_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = SETG(fp_assoc, cast_st64_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(sp_assoc, op_ADD_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *jump_cast_st64_32 = JUMP(cast_st64_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *nop_34 = NOP;
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_then_36 = SEQN(10, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_16, empty_17, op_ASSIGN_23, empty_24, op_ASSIGN_26, empty_27, jump_cast_st64_32, empty_33);
	RzILOpEffect *seq_else_38 = SEQN(2, nop_34, empty_35);
	RzILOpEffect *branch_37 = BRANCH(op_AND_4, seq_then_36, seq_else_38);
	RzILOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_tnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *P0P0_tmp_assoc = ISA2REG(hi, '0', true);
	RzILOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(VARL("tmp"), op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(VARL("tmp"), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_ADD_24 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(VARL("tmp"), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", fp);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETL("tmp", op_XOR_8);
	RzILOpEffect *op_ASSIGN_15 = SETG(lr_assoc, cast_st64_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *op_ASSIGN_22 = SETG(fp_assoc, cast_st64_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(sp_assoc, op_ADD_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *jump_cast_st64_31 = JUMP(cast_st64_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *nop_33 = NOP;
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_then_35 = SEQN(10, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_15, empty_16, op_ASSIGN_22, empty_23, op_ASSIGN_25, empty_26, jump_cast_st64_31, empty_32);
	RzILOpEffect *seq_else_37 = SEQN(2, nop_33, empty_34);
	RzILOpEffect *branch_36 = BRANCH(op_AND_3, seq_then_35, seq_else_37);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_36);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>