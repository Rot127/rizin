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

RzILOpEffect *hex_il_op_ss2_allocframe_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_neg8 = UN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(sp, VARLP("const_neg8")));
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_3, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, fp);
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_4, cast_ut32_5);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(op_OR_6, op_LSHIFT_8);
	RzILOpPure *op_SUB_13 = SUB(VARL("EA"), VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_XOR_9 = STOREW(VARL("EA"), op_XOR_9);
	RzILOpEffect *op_ASSIGN_10 = SETG(fp_assoc, EA);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_14 = SETG(sp_assoc, op_SUB_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_1, empty_2, ms_op_XOR_9, op_ASSIGN_10, empty_11, empty_12, op_ASSIGN_14, empty_15);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_neg8 = UN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *fp_assoc = ALIAS2REG(HEX_REG_ALIAS_FP);
	RzILOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(sp, VARLP("const_neg8")));
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_3, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, fp);
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_4, cast_ut32_5);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(op_OR_6, op_LSHIFT_8);
	RzILOpPure *op_SUB_13 = SUB(VARL("EA"), VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_XOR_9 = STOREW(VARL("EA"), op_XOR_9);
	RzILOpEffect *op_ASSIGN_10 = SETG(fp_assoc, EA);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_14 = SETG(sp_assoc, op_SUB_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_1, empty_2, ms_op_XOR_9, op_ASSIGN_10, empty_11, empty_12, op_ASSIGN_14, empty_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storebi0_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storebi1_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_stored_sp_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(sp, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(sp, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storeh_io_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storew_sp_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(sp, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(sp, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storewi0_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_const_pos0 = STOREW(VARL("EA"), VARLP("const_pos0"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos0);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_const_pos0 = STOREW(VARL("EA"), VARLP("const_pos0"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storewi1_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_const_pos1 = STOREW(VARL("EA"), VARLP("const_pos1"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_const_pos1 = STOREW(VARL("EA"), VARLP("const_pos1"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>