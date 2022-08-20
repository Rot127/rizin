// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:38:03-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:04:30-04:00
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
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *op_XOR_7 = LOGXOR(VARL("tmp"), op_LSHIFT_6);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(VARL("tmp"), op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmp"), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *op_ADD_23 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_8 = SETL("tmp", op_XOR_7);
	RzILOpEffect *op_ASSIGN_14 = SETG(lr_assoc_tmp, cast_st64_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *op_ASSIGN_21 = SETG(fp_assoc_tmp, cast_st64_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(sp_assoc_tmp, op_ADD_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_8, op_ASSIGN_14, empty_15, op_ASSIGN_21, empty_22, op_ASSIGN_24, empty_25);

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
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_fnew(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_t(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *seq_then_3 = SEQN(2, jump_lr, empty_2);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *branch_4 = BRANCH(op_AND_1, seq_then_3, empty_5);
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_jumpr31_tnew(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *jump_lr = JMP(lr);
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
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrd_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(sp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadri_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(sp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *op_XOR_7 = LOGXOR(VARL("tmp"), op_LSHIFT_6);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(VARL("tmp"), op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmp"), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *op_ADD_23 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(VARL("tmp"), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st32_29), cast_st32_29);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_8 = SETL("tmp", op_XOR_7);
	RzILOpEffect *op_ASSIGN_14 = SETG(lr_assoc_tmp, cast_st64_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *op_ASSIGN_21 = SETG(fp_assoc_tmp, cast_st64_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(sp_assoc_tmp, op_ADD_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *jump_cast_st64_30 = JMP(cast_st64_30);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_8, op_ASSIGN_14, empty_15, op_ASSIGN_21, empty_22, op_ASSIGN_24, empty_25, jump_cast_st64_30, empty_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_f(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *op_XOR_10 = LOGXOR(VARL("tmp"), op_LSHIFT_9);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmp"), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(VARL("tmp"), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_ADD_26 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_29 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(VARL("tmp"), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(op_AND_31), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(64, MSB(cast_st32_32), cast_st32_32);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_11 = SETL("tmp", op_XOR_10);
	RzILOpEffect *op_ASSIGN_17 = SETG(lr_assoc_tmp, cast_st64_16);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(fp_assoc_tmp, cast_st64_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_27 = SETG(sp_assoc_tmp, op_ADD_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *jump_cast_st64_33 = JMP(cast_st64_33);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *nop_35 = NOP();
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_then_37 = SEQN(10, op_ASSIGN_7, op_ASSIGN_11, op_ASSIGN_17, empty_18, op_ASSIGN_24, empty_25, op_ASSIGN_27, empty_28, jump_cast_st64_33, empty_34);
	RzILOpEffect *seq_else_39 = SEQN(2, nop_35, empty_36);
	RzILOpEffect *branch_38 = BRANCH(op_AND_4, seq_then_37, seq_else_39);
	RzILOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_fnew(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
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
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETL("tmp", op_XOR_9);
	RzILOpEffect *op_ASSIGN_16 = SETG(lr_assoc_tmp, cast_st64_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = SETG(fp_assoc_tmp, cast_st64_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(sp_assoc_tmp, op_ADD_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *jump_cast_st64_32 = JMP(cast_st64_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *nop_34 = NOP();
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_then_36 = SEQN(10, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_16, empty_17, op_ASSIGN_23, empty_24, op_ASSIGN_26, empty_27, jump_cast_st64_32, empty_33);
	RzILOpEffect *seq_else_38 = SEQN(2, nop_34, empty_35);
	RzILOpEffect *branch_37 = BRANCH(op_AND_3, seq_then_36, seq_else_38);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_t(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *op_XOR_10 = LOGXOR(VARL("tmp"), op_LSHIFT_9);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmp"), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(VARL("tmp"), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_ADD_26 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_29 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(VARL("tmp"), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(op_AND_31), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(64, MSB(cast_st32_32), cast_st32_32);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_11 = SETL("tmp", op_XOR_10);
	RzILOpEffect *op_ASSIGN_17 = SETG(lr_assoc_tmp, cast_st64_16);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(fp_assoc_tmp, cast_st64_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_27 = SETG(sp_assoc_tmp, op_ADD_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *jump_cast_st64_33 = JMP(cast_st64_33);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *nop_35 = NOP();
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_then_37 = SEQN(10, op_ASSIGN_7, op_ASSIGN_11, op_ASSIGN_17, empty_18, op_ASSIGN_24, empty_25, op_ASSIGN_27, empty_28, jump_cast_st64_33, empty_34);
	RzILOpEffect *seq_else_39 = SEQN(2, nop_35, empty_36);
	RzILOpEffect *branch_38 = BRANCH(op_AND_4, seq_then_37, seq_else_39);
	RzILOpEffect *instruction_sequence = SEQN(5, empty_0, empty_1, op_ASSIGN_2, empty_3, branch_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl2_return_tnew(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *lr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LR, true);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
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
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARG(fp_assoc_tmp));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETL("tmp", op_XOR_9);
	RzILOpEffect *op_ASSIGN_16 = SETG(lr_assoc_tmp, cast_st64_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *op_ASSIGN_23 = SETG(fp_assoc_tmp, cast_st64_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(sp_assoc_tmp, op_ADD_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *jump_cast_st64_32 = JMP(cast_st64_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *nop_34 = NOP();
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_then_36 = SEQN(10, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_16, empty_17, op_ASSIGN_23, empty_24, op_ASSIGN_26, empty_27, jump_cast_st64_32, empty_33);
	RzILOpEffect *seq_else_38 = SEQN(2, nop_34, empty_35);
	RzILOpEffect *branch_37 = BRANCH(op_AND_3, seq_then_36, seq_else_38);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_37);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>