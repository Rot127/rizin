// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_s6_rol_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_5 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut64_2, VARL("u"));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_7 = LET("op_sizeof_Rss_5", op_sizeof_Rss_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(64, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_5 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut64_2, VARL("u"));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_7 = LET("op_sizeof_Rss_5", op_sizeof_Rss_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_ADD_13 = ADD(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_ADD_13)), op_ADD_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_5 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut64_2, VARL("u"));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_7 = LET("op_sizeof_Rss_5", op_sizeof_Rss_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_AND_13 = LOGAND(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_AND_13)), op_AND_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_5 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut64_2, VARL("u"));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_7 = LET("op_sizeof_Rss_5", op_sizeof_Rss_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_SUB_13 = SUB(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_SUB_13)), op_SUB_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_5 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut64_2, VARL("u"));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_7 = LET("op_sizeof_Rss_5", op_sizeof_Rss_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_OR_13 = LOGOR(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_OR_13)), op_OR_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_p_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_5 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut64_2, VARL("u"));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_7 = LET("op_sizeof_Rss_5", op_sizeof_Rss_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_XOR_13 = LOGXOR(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_XOR_13)), op_XOR_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_5 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut32_2, VARL("u"));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_7 = LET("op_sizeof_Rs_5", op_sizeof_Rs_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(32, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_14);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_5 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut32_2, VARL("u"));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_7 = LET("op_sizeof_Rs_5", op_sizeof_Rs_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_13 = ADD(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(op_ADD_13)), op_ADD_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_5 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut32_2, VARL("u"));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_7 = LET("op_sizeof_Rs_5", op_sizeof_Rs_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_AND_13 = LOGAND(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_5 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut32_2, VARL("u"));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_7 = LET("op_sizeof_Rs_5", op_sizeof_Rs_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_SUB_13 = SUB(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(op_SUB_13)), op_SUB_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_5 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut32_2, VARL("u"));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_7 = LET("op_sizeof_Rs_5", op_sizeof_Rs_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_OR_13 = LOGOR(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(op_OR_13)), op_OR_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_rol_i_r_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_5 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(cast_ut32_2, VARL("u"));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_7 = LET("op_sizeof_Rs_5", op_sizeof_Rs_5, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_5")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(cast_7, VARLP("const_pos8")));
	RzILOpPure *op_SUB_8 = SUB(op_MUL_6, VARL("u"));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_4, op_SUB_8);
	RzILOpPure *op_OR_10 = LOGOR(op_LSHIFT_3, op_RSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_11 = ITE(op_EQ_1, cast_12, op_OR_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_XOR_13 = LOGXOR(cast_14, cond_11);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(op_XOR_13)), op_XOR_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vsplatrbp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp2281;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rs, op_MUL_12);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, op_RSHIFT_13);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(cast_st8_16)), cast_st8_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_18, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_23 = LOGOR(cast_24, op_LSHIFT_22);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_OR_23)), op_OR_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2281", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_26);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_25, empty_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_6, seq_28);
	RzILOpEffect *for_31 = REPEAT(op_LT_2, seq_29);
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_0, for_31);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunehb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2282;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos2", const_pos2, MUL(cast_13, VARLP("const_pos2")));
	RzILOpPure *op_MUL_14 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st8_18 = CAST(8, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(64, MSB(DUP(cast_st8_18)), cast_st8_18);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_20, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", DUP(const_pos8), MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *cast_26 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_25 = LOGOR(cast_26, op_LSHIFT_24);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(op_OR_25)), op_OR_25);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_30 = LET("const_pos4", DUP(const_pos4), ADD(cast_31, VARLP("const_pos4")));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_30, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *op_AND_35 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_34);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos2", DUP(const_pos2), MUL(cast_37, VARLP("const_pos2")));
	RzILOpPure *op_MUL_38 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_36, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(Rss, op_MUL_38);
	RzILOpPure *cast_41 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st8_42 = CAST(8, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(64, MSB(DUP(cast_st8_42)), cast_st8_42);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_44, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_46 = LET("const_pos4", DUP(const_pos4), ADD(cast_47, VARLP("const_pos4")));
	RzILOpPure *op_MUL_48 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_46, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_MUL_48);
	RzILOpPure *cast_51 = CAST(64, IL_FALSE, op_AND_35);
	RzILOpPure *op_OR_50 = LOGOR(cast_51, op_LSHIFT_49);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(op_OR_50)), op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2282", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_52 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_53);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_52, empty_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_6, seq_55);
	RzILOpEffect *for_58 = REPEAT(op_LT_2, seq_56);
	RzILOpEffect *seq_57 = SEQN(2, op_ASSIGN_0, for_58);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s6_vtrunohb_ppp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2283;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos2", const_pos2, MUL(cast_13, VARLP("const_pos2")));
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_MUL_12, VARLP("const_pos1")));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st8_19 = CAST(8, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(cast_st8_19)), cast_st8_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_21, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos8", DUP(const_pos8), MUL(cast_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_26 = LOGOR(cast_27, op_LSHIFT_25);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(op_OR_26)), op_OR_26);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_31 = LET("const_pos4", DUP(const_pos4), ADD(cast_32, VARLP("const_pos4")));
	RzILOpPure *op_MUL_33 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_31, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_33));
	RzILOpPure *op_NOT_35 = LOGNOT(op_LSHIFT_34);
	RzILOpPure *op_AND_36 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_35);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos2", DUP(const_pos2), MUL(cast_38, VARLP("const_pos2")));
	RzILOpPure *op_ADD_39 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_37, VARLP("const_pos1")));
	RzILOpPure *op_MUL_40 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_39, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(Rss, op_MUL_40);
	RzILOpPure *cast_43 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st8_44 = CAST(8, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_46 = CAST(64, MSB(DUP(cast_st8_44)), cast_st8_44);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_46, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_ADD_48 = LET("const_pos4", DUP(const_pos4), ADD(cast_49, VARLP("const_pos4")));
	RzILOpPure *op_MUL_50 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_48, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_47, op_MUL_50);
	RzILOpPure *cast_53 = CAST(64, IL_FALSE, op_AND_36);
	RzILOpPure *op_OR_52 = LOGOR(cast_53, op_LSHIFT_51);
	RzILOpPure *cast_55 = CAST(64, MSB(DUP(op_OR_52)), op_OR_52);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2283", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_55);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *seq_57 = SEQN(4, op_ASSIGN_28, empty_30, op_ASSIGN_54, empty_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_6, seq_57);
	RzILOpEffect *for_60 = REPEAT(op_LT_2, seq_58);
	RzILOpEffect *seq_59 = SEQN(2, op_ASSIGN_0, for_60);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_59);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>