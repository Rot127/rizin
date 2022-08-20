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

RzILOpEffect *hex_il_op_c4_addipc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *pc_assoc = ALIAS2REG(HEX_REG_ALIAS_PC, false);
	RzILOpPure *pc = VARG(pc_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(pc, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Ps, Pt);
	RzILOpPure *op_AND_1 = LOGAND(op_AND_0, Pu);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Ps, Pt);
	RzILOpPure *op_NOT_1 = LOGNOT(Pu);
	RzILOpPure *op_AND_2 = LOGAND(op_AND_0, op_NOT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Pt, Pu);
	RzILOpPure *op_AND_1 = LOGAND(Ps, op_OR_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_and_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Pu);
	RzILOpPure *op_OR_1 = LOGOR(Pt, op_NOT_0);
	RzILOpPure *op_AND_2 = LOGAND(Ps, op_OR_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, op_AND_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmplte(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LE_0 = ULE(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmpltei(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LE_0 = LET("s", s, ULE(Rs, VARLP("s")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmplteu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_LE_2 = ULE(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmplteui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_1 = LET("u", u, CAST(32, IL_FALSE, VARLP("u")));
	RzILOpPure *op_LE_2 = ULE(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmpneq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = INV(EQ(Rs, Rt));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_cmpneqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("s", s, INV(EQ(Rs, VARLP("s"))));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_fastcorner9(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut32 tmp;
	// Declare: ut32 i;
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos9 = UN(32, 0x9);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(VARL("tmp"), op_NOT_3);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos8", const_pos8, SHIFTL0(Ps, VARLP("const_pos8")));
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_5, Pt);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_6, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(cast_ut64_8, op_MUL_9);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_4, op_LSHIFT_10);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARL("tmp"), op_NOT_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos8", const_pos8, SHIFTL0(DUP(Ps), VARLP("const_pos8")));
	RzILOpPure *op_OR_19 = LOGOR(op_LSHIFT_18, DUP(Pt));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_17, op_LSHIFT_23);
	RzILOpPure *op_LT_28 = LET("const_pos9", const_pos9, ULT(VARL("i"), VARLP("const_pos9")));
	RzILOpPure *op_RSHIFT_32 = LET("const_pos1", const_pos1, SHIFTR0(VARL("tmp"), VARLP("const_pos1")));
	RzILOpPure *andop_RSHIFT_32tmp = LOGAND(op_RSHIFT_32, VARL("tmp"));
	RzILOpPure *op_NE_37 = LET("const_pos0", const_pos0, INV(EQ(VARL("tmp"), VARLP("const_pos0"))));
	RzILOpPure *cond_38 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_37, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("tmp", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_ASSIGN_12 = SETL("tmp", op_OR_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETL("tmp", op_OR_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *op_ASSIGN_27 = SETL("i", LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_INC_29 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_hybrid_tmp_30, op_INC_29);
	RzILOpEffect *op_ASSIGN_AND_33 = SETL("tmp", andop_RSHIFT_32tmp);
	RzILOpEffect *seq_34 = SEQN(2, seq_31, op_ASSIGN_AND_33);
	RzILOpEffect *seq_35 = SEQN(1, seq_34);
	RzILOpEffect *for_36 = SEQ2(op_ASSIGN_27, REPEAT(op_LT_28, seq_35));
	RzILOpEffect *op_ASSIGN_39 = SETG(Pd_assoc_tmp, cond_38);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26, for_36, op_ASSIGN_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_fastcorner9_not(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut32 tmp;
	// Declare: ut32 i;
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos9 = UN(32, 0x9);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(VARL("tmp"), op_NOT_3);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos8", const_pos8, SHIFTL0(Ps, VARLP("const_pos8")));
	RzILOpPure *op_OR_6 = LOGOR(op_LSHIFT_5, Pt);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_6, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(cast_ut64_8, op_MUL_9);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_4, op_LSHIFT_10);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARL("tmp"), op_NOT_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos8", const_pos8, SHIFTL0(DUP(Ps), VARLP("const_pos8")));
	RzILOpPure *op_OR_19 = LOGOR(op_LSHIFT_18, DUP(Pt));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_OR_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_17, op_LSHIFT_23);
	RzILOpPure *op_LT_28 = LET("const_pos9", const_pos9, ULT(VARL("i"), VARLP("const_pos9")));
	RzILOpPure *op_RSHIFT_32 = LET("const_pos1", const_pos1, SHIFTR0(VARL("tmp"), VARLP("const_pos1")));
	RzILOpPure *andop_RSHIFT_32tmp = LOGAND(op_RSHIFT_32, VARL("tmp"));
	RzILOpPure *op_EQ_37 = LET("const_pos0", const_pos0, EQ(VARL("tmp"), VARLP("const_pos0")));
	RzILOpPure *cond_38 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_37, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("tmp", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_ASSIGN_12 = SETL("tmp", op_OR_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETL("tmp", op_OR_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *op_ASSIGN_27 = SETL("i", LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_INC_29 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_hybrid_tmp_30, op_INC_29);
	RzILOpEffect *op_ASSIGN_AND_33 = SETL("tmp", andop_RSHIFT_32tmp);
	RzILOpEffect *seq_34 = SEQN(2, seq_31, op_ASSIGN_AND_33);
	RzILOpEffect *seq_35 = SEQN(1, seq_34);
	RzILOpEffect *for_36 = SEQ2(op_ASSIGN_27, REPEAT(op_LT_28, seq_35));
	RzILOpEffect *op_ASSIGN_39 = SETG(Pd_assoc_tmp, cond_38);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26, for_36, op_ASSIGN_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_nbitsclr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *op_NE_1 = LET("const_pos0", const_pos0, INV(EQ(op_AND_0, VARLP("const_pos0"))));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_nbitsclri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("u", u, LOGAND(Rs, VARLP("u")));
	RzILOpPure *op_NE_1 = LET("const_pos0", const_pos0, INV(EQ(op_AND_0, VARLP("const_pos0"))));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_nbitsset(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *op_NE_1 = INV(EQ(op_AND_0, DUP(Rt)));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Pt, Pu);
	RzILOpPure *op_OR_1 = LOGOR(Ps, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Pu);
	RzILOpPure *op_AND_1 = LOGAND(Pt, op_NOT_0);
	RzILOpPure *op_OR_2 = LOGOR(Ps, op_AND_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Ps, Pt);
	RzILOpPure *op_OR_1 = LOGOR(op_OR_0, Pu);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_or_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Ps, Pt);
	RzILOpPure *op_NOT_1 = LOGNOT(Pu);
	RzILOpPure *op_OR_2 = LOGOR(op_OR_0, op_NOT_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>