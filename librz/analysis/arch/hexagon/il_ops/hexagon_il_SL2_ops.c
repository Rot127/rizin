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

RzILOpEffect *hex_il_op_sl2_deallocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzIlOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(VARL("tmp"), op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzIlOpPure *op_MUL_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmp"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzIlOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzIlOpPure *op_ADD_22 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", fp);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmp", op_XOR_6);
	RzIlOpEffect *op_ASSIGN_13 = SETG(lr_assoc, cast_st64_12);
	RzIlOpEffect *empty_14 = EMPTY();
	RzIlOpEffect *op_ASSIGN_20 = SETG(fp_assoc, cast_st64_19);
	RzIlOpEffect *empty_21 = EMPTY();
	RzIlOpEffect *op_ASSIGN_23 = SETG(sp_assoc, op_ADD_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_13, empty_14, op_ASSIGN_20, empty_21, op_ASSIGN_23, empty_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *jump_lr = JUMP(lr);
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(2, jump_lr, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_assoc = ISA2REG(hi, "P0P0", false);
	RzIlOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_lr = JUMP(lr);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_fnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_tmp_assoc = ISA2REG(hi, "P0P0", true);
	RzIlOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_lr = JUMP(lr);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_assoc = ISA2REG(hi, "P0P0", false);
	RzIlOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_lr = JUMP(lr);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_tnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_tmp_assoc = ISA2REG(hi, "P0P0", true);
	RzIlOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzIlOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *jump_lr = JUMP(lr);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrd_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(sp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadri_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(sp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzIlOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(VARL("tmp"), op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzIlOpPure *op_MUL_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmp"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzIlOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzIlOpPure *op_ADD_22 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_26 = SHIFTR0(VARL("tmp"), op_MUL_25);
	RzIlOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_28 = CAST(32, MSB(op_AND_27), op_AND_27);
	RzIlOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", fp);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmp", op_XOR_6);
	RzIlOpEffect *op_ASSIGN_13 = SETG(lr_assoc, cast_st64_12);
	RzIlOpEffect *empty_14 = EMPTY();
	RzIlOpEffect *op_ASSIGN_20 = SETG(fp_assoc, cast_st64_19);
	RzIlOpEffect *empty_21 = EMPTY();
	RzIlOpEffect *op_ASSIGN_23 = SETG(sp_assoc, op_ADD_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *jump_cast_st64_29 = JUMP(cast_st64_29);
	RzIlOpEffect *empty_30 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_13, empty_14, op_ASSIGN_20, empty_21, op_ASSIGN_23, empty_24, jump_cast_st64_29, empty_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *P0P0_assoc = ISA2REG(hi, "P0P0", false);
	RzIlOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzIlOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(VARL("tmp"), op_MUL_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzIlOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzIlOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmp"), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzIlOpPure *op_ADD_25 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(VARL("tmp"), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_31 = CAST(32, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", fp);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzIlOpEffect *op_ASSIGN_10 = SETL("tmp", op_XOR_9);
	RzIlOpEffect *op_ASSIGN_16 = SETG(lr_assoc, cast_st64_15);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *op_ASSIGN_23 = SETG(fp_assoc, cast_st64_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETG(sp_assoc, op_ADD_25);
	RzIlOpEffect *empty_27 = EMPTY();
	RzIlOpEffect *jump_cast_st64_32 = JUMP(cast_st64_32);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *nop_34 = NOP;
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_then_36 = SEQN(10, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_16, empty_17, op_ASSIGN_23, empty_24, op_ASSIGN_26, empty_27, jump_cast_st64_32, empty_33);
	RzIlOpEffect *seq_else_38 = SEQN(2, nop_34, empty_35);
	RzIlOpEffect *branch_37 = BRANCH(op_AND_4, seq_then_36, seq_else_38);
	RzIlOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_fnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *P0P0_tmp_assoc = ISA2REG(hi, "P0P0", true);
	RzIlOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_11 = SHIFTR0(VARL("tmp"), op_MUL_10);
	RzIlOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzIlOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzIlOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(VARL("tmp"), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzIlOpPure *op_ADD_24 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_28 = SHIFTR0(VARL("tmp"), op_MUL_27);
	RzIlOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzIlOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", fp);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETL("tmp", op_XOR_8);
	RzIlOpEffect *op_ASSIGN_15 = SETG(lr_assoc, cast_st64_14);
	RzIlOpEffect *empty_16 = EMPTY();
	RzIlOpEffect *op_ASSIGN_22 = SETG(fp_assoc, cast_st64_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *op_ASSIGN_25 = SETG(sp_assoc, op_ADD_24);
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *jump_cast_st64_31 = JUMP(cast_st64_31);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *nop_33 = NOP;
	RzIlOpEffect *empty_34 = EMPTY();
	RzIlOpEffect *seq_then_35 = SEQN(10, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_15, empty_16, op_ASSIGN_22, empty_23, op_ASSIGN_25, empty_26, jump_cast_st64_31, empty_32);
	RzIlOpEffect *seq_else_37 = SEQN(2, nop_33, empty_34);
	RzIlOpEffect *branch_36 = BRANCH(op_AND_3, seq_then_35, seq_else_37);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *P0P0_assoc = ISA2REG(hi, "P0P0", false);
	RzIlOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzIlOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(VARL("tmp"), op_MUL_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzIlOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzIlOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmp"), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzIlOpPure *op_ADD_25 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(VARL("tmp"), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_31 = CAST(32, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", fp);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzIlOpEffect *op_ASSIGN_10 = SETL("tmp", op_XOR_9);
	RzIlOpEffect *op_ASSIGN_16 = SETG(lr_assoc, cast_st64_15);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *op_ASSIGN_23 = SETG(fp_assoc, cast_st64_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETG(sp_assoc, op_ADD_25);
	RzIlOpEffect *empty_27 = EMPTY();
	RzIlOpEffect *jump_cast_st64_32 = JUMP(cast_st64_32);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *nop_34 = NOP;
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_then_36 = SEQN(10, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_16, empty_17, op_ASSIGN_23, empty_24, op_ASSIGN_26, empty_27, jump_cast_st64_32, empty_33);
	RzIlOpEffect *seq_else_38 = SEQN(2, nop_34, empty_35);
	RzIlOpEffect *branch_37 = BRANCH(op_AND_4, seq_then_36, seq_else_38);
	RzIlOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_tnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *P0P0_tmp_assoc = ISA2REG(hi, "P0P0", true);
	RzIlOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_11 = SHIFTR0(VARL("tmp"), op_MUL_10);
	RzIlOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzIlOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzIlOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(VARL("tmp"), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzIlOpPure *op_ADD_24 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_28 = SHIFTR0(VARL("tmp"), op_MUL_27);
	RzIlOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzIlOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", fp);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETL("tmp", op_XOR_8);
	RzIlOpEffect *op_ASSIGN_15 = SETG(lr_assoc, cast_st64_14);
	RzIlOpEffect *empty_16 = EMPTY();
	RzIlOpEffect *op_ASSIGN_22 = SETG(fp_assoc, cast_st64_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *op_ASSIGN_25 = SETG(sp_assoc, op_ADD_24);
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *jump_cast_st64_31 = JUMP(cast_st64_31);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *nop_33 = NOP;
	RzIlOpEffect *empty_34 = EMPTY();
	RzIlOpEffect *seq_then_35 = SEQN(10, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_15, empty_16, op_ASSIGN_22, empty_23, op_ASSIGN_25, empty_26, jump_cast_st64_31, empty_32);
	RzIlOpEffect *seq_else_37 = SEQN(2, nop_33, empty_34);
	RzIlOpEffect *branch_36 = BRANCH(op_AND_3, seq_then_35, seq_else_37);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_36);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>