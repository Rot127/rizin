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

RzILOpEffect *hex_il_op_ss2_allocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_neg8 = UN(32, -8);
	const char *lr_assoc = ALIAS2REG(, HEX_REG_ALIAS_LR);
	RzIlOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *fp_assoc = ALIAS2REG(, HEX_REG_ALIAS_FP);
	RzIlOpPure *fp = VARG(fp_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzIlOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(sp, VARLP("const_neg8")));
	RzIlOpPure *cast_ut64_3 = CAST(64, IL_FALSE, lr);
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_3, VARLP("const_pos32")));
	RzIlOpPure *cast_ut32_5 = CAST(32, IL_FALSE, fp);
	RzIlOpPure *op_OR_6 = LOGOR(op_LSHIFT_4, cast_ut32_5);
	RzIlOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_9 = LOGXOR(op_OR_6, op_LSHIFT_8);
	RzIlOpPure *op_SUB_13 = SUB(VARL("EA"), VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_op_XOR_9 = STOREW(VARL("EA"), op_XOR_9);
	RzIlOpEffect *op_ASSIGN_10 = SETG(fp_assoc, EA);
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *op_ASSIGN_14 = SETG(sp_assoc, op_SUB_13);
	RzIlOpEffect *empty_15 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_1, empty_2, ms_op_XOR_9, op_ASSIGN_10, empty_11, empty_12, op_ASSIGN_14, empty_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storebi0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storebi1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_stored_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(sp, VARL("s"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storeh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzIlOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_cast_st16_6 = STOREW(VARL("EA"), cast_st16_6);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storew_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(sp, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storewi0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_const_pos0 = STOREW(VARL("EA"), VARLP("const_pos0"));
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storewi1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *ms_const_pos1 = STOREW(VARL("EA"), VARLP("const_pos1"));
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>