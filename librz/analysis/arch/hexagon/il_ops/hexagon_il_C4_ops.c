// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 12:19:10-04:00
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
	const HexPkt *pkt = bundle->pkt;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *pc = U32(pkt->pkt_addr);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(pc, VARL("u"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

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
	RzILOpPure *cast_3 = CAST(8, IL_FALSE, cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cast_3);
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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_LE_1 = ULE(Rs, cast_2);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

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
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
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
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *op_LE_3 = ULE(cast_ut32_1, cast_ut32_2);
	RzILOpPure *cond_4 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_LE_3, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_6 = CAST(8, IL_FALSE, cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

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
	RzILOpPure *cast_3 = CAST(8, IL_FALSE, cond_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc_tmp, cast_3);
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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_NE_1 = INV(EQ(Rs, cast_2));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_fastcorner9(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut4 tmp;
	// Declare: ut4 i;
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos9 = UN(32, 0x9);
	// Declare: ut4 h_tmp436;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(4, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_MUL_2 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_2));
	RzILOpPure *op_NOT_4 = LOGNOT(op_LSHIFT_3);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos8", const_pos8, SHIFTL0(Ps, VARLP("const_pos8")));
	RzILOpPure *op_OR_8 = LOGOR(op_LSHIFT_7, Pt);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_OR_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_AND_5);
	RzILOpPure *op_OR_14 = LOGOR(cast_15, op_LSHIFT_13);
	RzILOpPure *cast_17 = CAST(4, IL_FALSE, op_OR_14);
	RzILOpPure *op_MUL_19 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_19));
	RzILOpPure *op_NOT_21 = LOGNOT(op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_22 = LOGAND(cast_23, op_NOT_21);
	RzILOpPure *op_LSHIFT_24 = LET("const_pos8", DUP(const_pos8), SHIFTL0(DUP(Ps), VARLP("const_pos8")));
	RzILOpPure *op_OR_25 = LOGOR(op_LSHIFT_24, DUP(Pt));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_OR_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *op_MUL_29 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(4, IL_FALSE, op_OR_31);
	RzILOpPure *cast_37 = LET("const_pos1", DUP(const_pos1), CAST(4, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_38 = LET("const_pos9", const_pos9, ULT(cast_39, VARLP("const_pos9")));
	RzILOpPure *op_RSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTR0(VARL("tmp"), VARLP("const_pos1")));
	RzILOpPure *andop_RSHIFT_43tmp = LOGAND(op_RSHIFT_43, VARL("tmp"));
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_NE_49 = LET("const_pos0", DUP(const_pos0), INV(EQ(cast_50, VARLP("const_pos0"))));
	RzILOpPure *cond_51 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_49, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_53 = CAST(8, IL_FALSE, cond_51);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("tmp", cast_1);
	RzILOpEffect *op_ASSIGN_16 = SETL("tmp", cast_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_33 = SETL("tmp", cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *op_ASSIGN_36 = SETL("i", cast_37);
	RzILOpEffect *op_INC_40 = SETL("i", INC(VARL("i"), 4));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp436", VARL("i"));
	RzILOpEffect *seq_42 = SEQN(2, op_ASSIGN_hybrid_tmp_41, op_INC_40);
	RzILOpEffect *op_ASSIGN_AND_44 = SETL("tmp", andop_RSHIFT_43tmp);
	RzILOpEffect *seq_45 = SEQN(1, op_ASSIGN_AND_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_42, seq_45);
	RzILOpEffect *for_48 = REPEAT(op_LT_38, seq_46);
	RzILOpEffect *seq_47 = SEQN(2, op_ASSIGN_36, for_48);
	RzILOpEffect *op_ASSIGN_52 = SETG(Pd_assoc_tmp, cast_53);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, op_ASSIGN_16, empty_18, op_ASSIGN_33, empty_35, seq_47, op_ASSIGN_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c4_fastcorner9_not(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut4 tmp;
	// Declare: ut4 i;
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos9 = UN(32, 0x9);
	// Declare: ut4 h_tmp437;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(4, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_MUL_2 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_2));
	RzILOpPure *op_NOT_4 = LOGNOT(op_LSHIFT_3);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_5 = LOGAND(cast_6, op_NOT_4);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos8", const_pos8, SHIFTL0(Ps, VARLP("const_pos8")));
	RzILOpPure *op_OR_8 = LOGOR(op_LSHIFT_7, Pt);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_OR_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_AND_5);
	RzILOpPure *op_OR_14 = LOGOR(cast_15, op_LSHIFT_13);
	RzILOpPure *cast_17 = CAST(4, IL_FALSE, op_OR_14);
	RzILOpPure *op_MUL_19 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_19));
	RzILOpPure *op_NOT_21 = LOGNOT(op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_AND_22 = LOGAND(cast_23, op_NOT_21);
	RzILOpPure *op_LSHIFT_24 = LET("const_pos8", DUP(const_pos8), SHIFTL0(DUP(Ps), VARLP("const_pos8")));
	RzILOpPure *op_OR_25 = LOGOR(op_LSHIFT_24, DUP(Pt));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_OR_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *op_MUL_29 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(4, IL_FALSE, op_OR_31);
	RzILOpPure *cast_37 = LET("const_pos1", DUP(const_pos1), CAST(4, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_38 = LET("const_pos9", const_pos9, ULT(cast_39, VARLP("const_pos9")));
	RzILOpPure *op_RSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTR0(VARL("tmp"), VARLP("const_pos1")));
	RzILOpPure *andop_RSHIFT_43tmp = LOGAND(op_RSHIFT_43, VARL("tmp"));
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_EQ_49 = LET("const_pos0", DUP(const_pos0), EQ(cast_50, VARLP("const_pos0")));
	RzILOpPure *cond_51 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_49, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_53 = CAST(8, IL_FALSE, cond_51);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("tmp", cast_1);
	RzILOpEffect *op_ASSIGN_16 = SETL("tmp", cast_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_33 = SETL("tmp", cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *op_ASSIGN_36 = SETL("i", cast_37);
	RzILOpEffect *op_INC_40 = SETL("i", INC(VARL("i"), 4));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp437", VARL("i"));
	RzILOpEffect *seq_42 = SEQN(2, op_ASSIGN_hybrid_tmp_41, op_INC_40);
	RzILOpEffect *op_ASSIGN_AND_44 = SETL("tmp", andop_RSHIFT_43tmp);
	RzILOpEffect *seq_45 = SEQN(1, op_ASSIGN_AND_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_42, seq_45);
	RzILOpEffect *for_48 = REPEAT(op_LT_38, seq_46);
	RzILOpEffect *seq_47 = SEQN(2, op_ASSIGN_36, for_48);
	RzILOpEffect *op_ASSIGN_52 = SETG(Pd_assoc_tmp, cast_53);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, op_ASSIGN_16, empty_18, op_ASSIGN_33, empty_35, seq_47, op_ASSIGN_52);

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
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cast_4);
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
	RzILOpPure *op_AND_1 = LOGAND(Rs, VARL("u"));
	RzILOpPure *op_NE_2 = LET("const_pos0", const_pos0, INV(EQ(op_AND_1, VARLP("const_pos0"))));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_5 = CAST(8, IL_FALSE, cond_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

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
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, cond_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc_tmp, cast_4);
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