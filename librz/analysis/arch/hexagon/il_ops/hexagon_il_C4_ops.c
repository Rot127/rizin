// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 15:53:51-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_c4_addipc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *pc_assoc = ALIAS2REG(, HEX_REG_ALIAS_PC);
	RzIlOpPure *pc = VARG(pc_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(pc, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Ps, Pt);
	RzIlOpPure *op_AND_1 = LOGAND(op_AND_0, Pu);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, op_AND_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Ps, Pt);
	RzIlOpPure *op_NOT_1 = LOGNOT(Pu);
	RzIlOpPure *op_AND_2 = LOGAND(op_AND_0, op_NOT_1);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, op_AND_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_OR_0 = LOGOR(Pt, Pu);
	RzIlOpPure *op_AND_1 = LOGAND(Ps, op_OR_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, op_AND_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Pu);
	RzIlOpPure *op_OR_1 = LOGOR(Pt, op_NOT_0);
	RzIlOpPure *op_AND_2 = LOGAND(Ps, op_OR_1);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, op_AND_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmplte(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_LE_0 = ULE(Rs, Rt);
	RzIlOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmpltei(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_LE_0 = ULE(Rs, VARL("s"));
	RzIlOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmplteu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzIlOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzIlOpPure *op_LE_2 = ULE(cast_ut32_0, cast_ut32_1);
	RzIlOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmplteui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzIlOpPure *cast_ut32_1 = CAST(32, IL_FALSE, VARL("u"));
	RzIlOpPure *op_LE_2 = ULE(cast_ut32_0, cast_ut32_1);
	RzIlOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmpneq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = INV(EQ(Rs, Rt));
	RzIlOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmpneqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = INV(EQ(Rs, VARL("s")));
	RzIlOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_fastcorner9(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos0 = UN(32, 0);
	// Declare: ut32 tmp;
	// Declare: ut32 i;
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos9 = UN(32, 9);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_1));
	RzIlOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzIlOpPure *op_AND_4 = LOGAND(VARL("tmp"), op_NOT_3);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos8", const_pos8, SHIFTL0(Ps, VARLP("const_pos8")));
	RzIlOpPure *op_OR_6 = LOGOR(op_LSHIFT_5, Pt);
	RzIlOpPure *op_AND_7 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_6, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_8 = CAST(64, IL_FALSE, op_AND_7);
	RzIlOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_10 = SHIFTL0(cast_ut64_8, op_MUL_9);
	RzIlOpPure *op_OR_11 = LOGOR(op_AND_4, op_LSHIFT_10);
	RzIlOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzIlOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzIlOpPure *op_AND_17 = LOGAND(VARL("tmp"), op_NOT_16);
	RzIlOpPure *op_LSHIFT_18 = LET("const_pos8", const_pos8, SHIFTL0(DUP(Ps), VARLP("const_pos8")));
	RzIlOpPure *op_OR_19 = LOGOR(op_LSHIFT_18, DUP(Pt));
	RzIlOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_19, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzIlOpPure *op_OR_24 = LOGOR(op_AND_17, op_LSHIFT_23);
	RzIlOpPure *op_LT_28 = LET("const_pos9", const_pos9, ULT(VARL("i"), VARLP("const_pos9")));
	RzIlOpPure *op_RSHIFT_30 = LET("const_pos1", const_pos1, SHIFTR0(VARL("tmp"), VARLP("const_pos1")));
	RzIlOpPure *andop_RSHIFT_30tmp = LOGAND(op_RSHIFT_30, VARL("tmp"));
	RzIlOpPure *op_NE_34 = LET("const_pos0", const_pos0, INV(EQ(VARL("tmp"), VARLP("const_pos0"))));
	RzIlOpPure *cond_35 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_34, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("tmp", const_pos0);
	RzIlOpEffect *op_ASSIGN_12 = SETL("tmp", op_OR_11);
	RzIlOpEffect *empty_13 = EMPTY();
	RzIlOpEffect *op_ASSIGN_25 = SETL("tmp", op_OR_24);
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *op_ASSIGN_27 = SETL("i", const_pos1);
	RzIlOpEffect *op_INC_29 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_AND_31 = SETL("tmp", andop_RSHIFT_30tmp);
	RzIlOpEffect *seq_32 = SEQN(2, op_ASSIGN_AND_31, op_INC_29);
	RzIlOpEffect *for_33 = SEQ2(SETL("i", const_pos1), REPEAT(op_LT_28, seq_32));
	RzIlOpEffect *op_ASSIGN_36 = SETG(Pd_assoc, cond_35);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26, for_33, op_ASSIGN_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_fastcorner9_not(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos0 = UN(32, 0);
	// Declare: ut32 tmp;
	// Declare: ut32 i;
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos9 = UN(32, 9);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_1));
	RzIlOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzIlOpPure *op_AND_4 = LOGAND(VARL("tmp"), op_NOT_3);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos8", const_pos8, SHIFTL0(Ps, VARLP("const_pos8")));
	RzIlOpPure *op_OR_6 = LOGOR(op_LSHIFT_5, Pt);
	RzIlOpPure *op_AND_7 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_6, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_8 = CAST(64, IL_FALSE, op_AND_7);
	RzIlOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_10 = SHIFTL0(cast_ut64_8, op_MUL_9);
	RzIlOpPure *op_OR_11 = LOGOR(op_AND_4, op_LSHIFT_10);
	RzIlOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzIlOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzIlOpPure *op_AND_17 = LOGAND(VARL("tmp"), op_NOT_16);
	RzIlOpPure *op_LSHIFT_18 = LET("const_pos8", const_pos8, SHIFTL0(DUP(Ps), VARLP("const_pos8")));
	RzIlOpPure *op_OR_19 = LOGOR(op_LSHIFT_18, DUP(Pt));
	RzIlOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_19, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzIlOpPure *op_OR_24 = LOGOR(op_AND_17, op_LSHIFT_23);
	RzIlOpPure *op_LT_28 = LET("const_pos9", const_pos9, ULT(VARL("i"), VARLP("const_pos9")));
	RzIlOpPure *op_RSHIFT_30 = LET("const_pos1", const_pos1, SHIFTR0(VARL("tmp"), VARLP("const_pos1")));
	RzIlOpPure *andop_RSHIFT_30tmp = LOGAND(op_RSHIFT_30, VARL("tmp"));
	RzIlOpPure *op_EQ_34 = LET("const_pos0", const_pos0, EQ(VARL("tmp"), VARLP("const_pos0")));
	RzIlOpPure *cond_35 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_34, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("tmp", const_pos0);
	RzIlOpEffect *op_ASSIGN_12 = SETL("tmp", op_OR_11);
	RzIlOpEffect *empty_13 = EMPTY();
	RzIlOpEffect *op_ASSIGN_25 = SETL("tmp", op_OR_24);
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *op_ASSIGN_27 = SETL("i", const_pos1);
	RzIlOpEffect *op_INC_29 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_AND_31 = SETL("tmp", andop_RSHIFT_30tmp);
	RzIlOpEffect *seq_32 = SEQN(2, op_ASSIGN_AND_31, op_INC_29);
	RzIlOpEffect *for_33 = SEQ2(SETL("i", const_pos1), REPEAT(op_LT_28, seq_32));
	RzIlOpEffect *op_ASSIGN_36 = SETG(Pd_assoc, cond_35);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26, for_33, op_ASSIGN_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_nbitsclr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzIlOpPure *op_NE_1 = LET("const_pos0", const_pos0, INV(EQ(op_AND_0, VARLP("const_pos0"))));
	RzIlOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_nbitsclri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Rs, VARL("u"));
	RzIlOpPure *op_NE_1 = LET("const_pos0", const_pos0, INV(EQ(op_AND_0, VARLP("const_pos0"))));
	RzIlOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_nbitsset(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzIlOpPure *op_NE_1 = INV(EQ(op_AND_0, DUP(Rt)));
	RzIlOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Pt, Pu);
	RzIlOpPure *op_OR_1 = LOGOR(Ps, op_AND_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, op_OR_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Pu);
	RzIlOpPure *op_AND_1 = LOGAND(Pt, op_NOT_0);
	RzIlOpPure *op_OR_2 = LOGOR(Ps, op_AND_1);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, op_OR_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_OR_0 = LOGOR(Ps, Pt);
	RzIlOpPure *op_OR_1 = LOGOR(op_OR_0, Pu);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, op_OR_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Ps_assoc = ISA2REG(hi, "Ps", false);
	RzIlOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzIlOpPure *op_OR_0 = LOGOR(Ps, Pt);
	RzIlOpPure *op_NOT_1 = LOGNOT(Pu);
	RzIlOpPure *op_OR_2 = LOGOR(op_OR_0, op_NOT_1);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, op_OR_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>