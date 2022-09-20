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

RzILOpEffect *hex_il_op_sl2_deallocframe(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_7 = LOGXOR(cast_8, op_LSHIFT_6);
	RzILOpPure *cast_10 = CAST(8, IL_FALSE, op_XOR_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(VARL("tmp"), op_MUL_11);
	RzILOpPure *cast_14 = CAST(64, MSB(DUP(op_RSHIFT_12)), op_RSHIFT_12);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cast_st64_16);
	RzILOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(VARL("tmp"), op_MUL_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(op_RSHIFT_21)), op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(DUP(cast_st32_24)), cast_st32_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st64_25);
	RzILOpPure *op_ADD_29 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_9 = SETL("tmp", cast_10);
	RzILOpEffect *op_ASSIGN_17 = HEX_WRITE_GLOBAL(lr_assoc_tmp, cast_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(fp_assoc_tmp, cast_27);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_9, op_ASSIGN_17, empty_19, op_ASSIGN_26, empty_28, op_ASSIGN_30, empty_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31(HexInsnPktBundle *bundle) {
	// READ
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, jump_lr, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_f(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(2, jump_lr, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(op_INV_3, seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_fnew(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));
	RzILOpPure *op_INV_3 = INV(NON_ZERO(op_AND_1));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(2, jump_lr, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(op_INV_3, seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_t(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(2, jump_lr, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(NON_ZERO(op_AND_1), seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_tnew(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(cast_2, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *seq_then_4 = SEQN(2, jump_lr, empty_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *branch_5 = BRANCH(NON_ZERO(op_AND_1), seq_then_4, empty_6);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_st1_6)), cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrd_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(sp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(cast_ut8_5)), cast_ut8_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_st2_6)), cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadri_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(sp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_ut4_5)), cast_ut4_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_ut2_6)), cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_7 = LOGXOR(cast_8, op_LSHIFT_6);
	RzILOpPure *cast_10 = CAST(8, IL_FALSE, op_XOR_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(VARL("tmp"), op_MUL_11);
	RzILOpPure *cast_14 = CAST(64, MSB(DUP(op_RSHIFT_12)), op_RSHIFT_12);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cast_st64_16);
	RzILOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(VARL("tmp"), op_MUL_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(op_RSHIFT_21)), op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(DUP(cast_st32_24)), cast_st32_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st64_25);
	RzILOpPure *op_ADD_29 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(VARL("tmp"), op_MUL_32);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_RSHIFT_33)), op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_36 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(DUP(cast_st32_36)), cast_st32_36);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_9 = SETL("tmp", cast_10);
	RzILOpEffect *op_ASSIGN_17 = HEX_WRITE_GLOBAL(lr_assoc_tmp, cast_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(fp_assoc_tmp, cast_27);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *jump_cast_st64_37 = JMP(cast_st64_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_9, op_ASSIGN_17, empty_19, op_ASSIGN_26, empty_28, op_ASSIGN_30, empty_31, jump_cast_st64_37, empty_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_f(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(cast_5, VARLP("const_pos1")));
	RzILOpPure *op_INV_6 = INV(NON_ZERO(op_AND_4));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_10, VARLP("const_pos32")));
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_12 = LOGXOR(cast_13, op_LSHIFT_11);
	RzILOpPure *cast_15 = CAST(8, IL_FALSE, op_XOR_12);
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmp"), op_MUL_16);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(op_RSHIFT_17)), op_RSHIFT_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, cast_st64_21);
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(VARL("tmp"), op_MUL_25);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(op_RSHIFT_26)), op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, cast_st64_30);
	RzILOpPure *op_ADD_34 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(VARL("tmp"), op_MUL_37);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(op_RSHIFT_38)), op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_40, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_st64_42 = CAST(64, MSB(DUP(cast_st32_41)), cast_st32_41);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmp", cast_ut8_8);
	RzILOpEffect *op_ASSIGN_14 = SETL("tmp", cast_15);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(lr_assoc_tmp, cast_23);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_31 = HEX_WRITE_GLOBAL(fp_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_34);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *jump_cast_st64_42 = JMP(cast_st64_42);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *nop_44 = NOP();
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *seq_then_46 = SEQN(10, op_ASSIGN_9, op_ASSIGN_14, op_ASSIGN_22, empty_24, op_ASSIGN_31, empty_33, op_ASSIGN_35, empty_36, jump_cast_st64_42, empty_43);
	RzILOpEffect *seq_else_48 = SEQN(2, nop_44, empty_45);
	RzILOpEffect *branch_47 = BRANCH(op_INV_6, seq_then_46, seq_else_48);
	RzILOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_fnew(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_9, VARLP("const_pos32")));
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_11 = LOGXOR(cast_12, op_LSHIFT_10);
	RzILOpPure *cast_14 = CAST(8, IL_FALSE, op_XOR_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmp"), op_MUL_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(op_RSHIFT_16)), op_RSHIFT_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, cast_st64_20);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(VARL("tmp"), op_MUL_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_RSHIFT_25)), op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, cast_st64_29);
	RzILOpPure *op_ADD_33 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_36 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(VARL("tmp"), op_MUL_36);
	RzILOpPure *cast_39 = CAST(64, MSB(DUP(op_RSHIFT_37)), op_RSHIFT_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_39, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(DUP(cast_st32_40)), cast_st32_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmp", cast_ut8_7);
	RzILOpEffect *op_ASSIGN_13 = SETL("tmp", cast_14);
	RzILOpEffect *op_ASSIGN_21 = HEX_WRITE_GLOBAL(lr_assoc_tmp, cast_22);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(fp_assoc_tmp, cast_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *jump_cast_st64_41 = JMP(cast_st64_41);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *nop_43 = NOP();
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_then_45 = SEQN(10, op_ASSIGN_8, op_ASSIGN_13, op_ASSIGN_21, empty_23, op_ASSIGN_30, empty_32, op_ASSIGN_34, empty_35, jump_cast_st64_41, empty_42);
	RzILOpEffect *seq_else_47 = SEQN(2, nop_43, empty_44);
	RzILOpEffect *branch_46 = BRANCH(op_INV_5, seq_then_45, seq_else_47);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_46);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_t(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(cast_5, VARLP("const_pos1")));
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_9, VARLP("const_pos32")));
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_11 = LOGXOR(cast_12, op_LSHIFT_10);
	RzILOpPure *cast_14 = CAST(8, IL_FALSE, op_XOR_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmp"), op_MUL_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(op_RSHIFT_16)), op_RSHIFT_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, cast_st64_20);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(VARL("tmp"), op_MUL_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_RSHIFT_25)), op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, cast_st64_29);
	RzILOpPure *op_ADD_33 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_36 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(VARL("tmp"), op_MUL_36);
	RzILOpPure *cast_39 = CAST(64, MSB(DUP(op_RSHIFT_37)), op_RSHIFT_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_39, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(DUP(cast_st32_40)), cast_st32_40);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmp", cast_ut8_7);
	RzILOpEffect *op_ASSIGN_13 = SETL("tmp", cast_14);
	RzILOpEffect *op_ASSIGN_21 = HEX_WRITE_GLOBAL(lr_assoc_tmp, cast_22);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(fp_assoc_tmp, cast_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *jump_cast_st64_41 = JMP(cast_st64_41);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *nop_43 = NOP();
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_then_45 = SEQN(10, op_ASSIGN_8, op_ASSIGN_13, op_ASSIGN_21, empty_23, op_ASSIGN_30, empty_32, op_ASSIGN_34, empty_35, jump_cast_st64_41, empty_42);
	RzILOpEffect *seq_else_47 = SEQN(2, nop_43, empty_44);
	RzILOpEffect *branch_46 = BRANCH(NON_ZERO(op_AND_4), seq_then_45, seq_else_47);
	RzILOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_46);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_tnew(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0_tmp");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *cast_13 = CAST(8, IL_FALSE, op_XOR_10);
	RzILOpPure *op_MUL_14 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmp"), op_MUL_14);
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(op_RSHIFT_15)), op_RSHIFT_15);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, cast_st64_19);
	RzILOpPure *op_MUL_23 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmp"), op_MUL_23);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_RSHIFT_24)), op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, cast_st64_28);
	RzILOpPure *op_ADD_32 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_35 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(VARL("tmp"), op_MUL_35);
	RzILOpPure *cast_38 = CAST(64, MSB(DUP(op_RSHIFT_36)), op_RSHIFT_36);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_38, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(DUP(cast_st32_39)), cast_st32_39);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("tmp", cast_13);
	RzILOpEffect *op_ASSIGN_20 = HEX_WRITE_GLOBAL(lr_assoc_tmp, cast_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *op_ASSIGN_29 = HEX_WRITE_GLOBAL(fp_assoc_tmp, cast_30);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_32);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *jump_cast_st64_40 = JMP(cast_st64_40);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *nop_42 = NOP();
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_then_44 = SEQN(10, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_20, empty_22, op_ASSIGN_29, empty_31, op_ASSIGN_33, empty_34, jump_cast_st64_40, empty_41);
	RzILOpEffect *seq_else_46 = SEQN(2, nop_42, empty_43);
	RzILOpEffect *branch_45 = BRANCH(NON_ZERO(op_AND_3), seq_then_44, seq_else_46);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_45);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>