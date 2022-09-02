// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-21 16:48:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_ss2_allocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_neg8 = UN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(VARG(sp_assoc_tmp), VARLP("const_neg8")));
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_3, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, VARG(fp_assoc_tmp));
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_4, cast_ut32_5);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(op_OR_6, op_LSHIFT_8);
	RzILOpPure *op_SUB_14 = LET("u", u, SUB(VARL("EA"), VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_XOR_9_10 = STOREW(VARL("EA"), op_XOR_9);
	RzILOpEffect *op_ASSIGN_11 = SETG(fp_assoc_tmp, VARL("EA"));
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_15 = SETG(sp_assoc_tmp, op_SUB_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_1, empty_2, ms_op_XOR_9_10, op_ASSIGN_11, empty_12, empty_13, op_ASSIGN_15, empty_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storebi0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storebi1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_stored_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(sp, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rtt_3 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rtt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storeh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st16_6_7 = STOREW(VARL("EA"), cast_st16_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st16_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storew_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(sp, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt_3 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storewi0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_const_pos0_3 = STOREW(VARL("EA"), VARLP("const_pos0"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos0_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_storewi1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_const_pos1_3 = STOREW(VARL("EA"), VARLP("const_pos1"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_const_pos1_3);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>