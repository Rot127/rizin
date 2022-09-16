// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 17:23:53-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 15:29:15-04:00
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
	RzILOpPure *const_neg8 = SN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_neg8", const_neg8, CAST(32, IL_FALSE, VARLP("const_neg8")));
	RzILOpPure *op_ADD_0 = ADD(VARG(sp_assoc_tmp), cast_1);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_6 = CAST(32, IL_FALSE, VARG(fp_assoc_tmp));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_OR_7 = LOGOR(op_LSHIFT_5, cast_8);
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos32", DUP(const_pos32), SHIFTL0(cast_ut64_9, VARLP("const_pos32")));
	RzILOpPure *op_XOR_11 = LOGXOR(op_OR_7, op_LSHIFT_10);
	RzILOpPure *op_12 = CAST(64, IL_FALSE, op_XOR_11);
	RzILOpPure *op_SUB_18 = SUB(VARL("EA"), VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(fp_assoc_tmp, VARL("EA"));
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_SUB_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(9, imm_assign_17, op_ASSIGN_2, empty_3, ms_op_12_13, op_ASSIGN_14, empty_15, empty_16, op_ASSIGN_19, empty_20);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_4 = LET("const_pos0", const_pos0, CAST(8, IL_FALSE, VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_4 = LET("const_pos1", const_pos1, CAST(8, IL_FALSE, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss2_stored_sp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(sp, cast_2);
	RzILOpPure *op_5 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_8_9);

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
	RzILOpPure *op_ADD_1 = ADD(sp, VARL("u"));
	RzILOpPure *op_4 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_4 = LET("const_pos0", const_pos0, CAST(32, IL_FALSE, VARLP("const_pos0")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_4 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>