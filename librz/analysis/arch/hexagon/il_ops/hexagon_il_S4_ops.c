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

RzILOpEffect *hex_il_op_s4_addaddi_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Ru);
	RzILOpPure *op_ADD_1 = ADD(op_ADD_0, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Ru);
	RzILOpPure *op_ADD_1 = ADD(op_ADD_0, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_addi_asl_ri_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_ADD_1 = ADD(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_ADD_1 = ADD(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_addi_lsr_ri_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_andi_asl_ri_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_AND_1 = LOGAND(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_AND_1 = LOGAND(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_andi_lsr_ri_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_clbaddi_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *c_call_0 = HEX_CLO32(Rs);
	RzILOpPure *op_NOT_1 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_2 = HEX_CLO32(op_NOT_1);
	RzILOpPure *op_GT_3 = UGT(c_call_0, c_call_2);
	RzILOpPure *c_call_4 = HEX_CLO32(DUP(Rs));
	RzILOpPure *op_NOT_5 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_6 = HEX_CLO32(op_NOT_5);
	RzILOpPure *cond_7 = ITE(op_GT_3, c_call_4, c_call_6);
	RzILOpPure *op_ADD_8 = ADD(cond_7, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc, op_ADD_8);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *c_call_0 = HEX_CLO32(Rs);
	RzILOpPure *op_NOT_1 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_2 = HEX_CLO32(op_NOT_1);
	RzILOpPure *op_GT_3 = UGT(c_call_0, c_call_2);
	RzILOpPure *c_call_4 = HEX_CLO32(DUP(Rs));
	RzILOpPure *op_NOT_5 = LOGNOT(DUP(Rs));
	RzILOpPure *c_call_6 = HEX_CLO32(op_NOT_5);
	RzILOpPure *cond_7 = ITE(op_GT_3, c_call_4, c_call_6);
	RzILOpPure *op_ADD_8 = ADD(cond_7, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc, op_ADD_8);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_clbpaddi_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_clbpnorm_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extract_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extract_rp_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extractp_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extractp_rp_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_lsli_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_15);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 shamt;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_4 = LET("const_pos0", const_pos0, ULT(VARL("shamt"), VARLP("const_pos0")));
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_NEG_7 = NEG(VARL("shamt"));
	RzILOpPure *op_SUB_8 = LET("const_pos1", const_pos1, SUB(op_NEG_7, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_6, op_SUB_8);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_9, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("shamt"));
	RzILOpPure *cond_14 = ITE(op_LT_4, op_RSHIFT_10, op_LSHIFT_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzILOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_3, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ntstbit_i_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_LSHIFT_0);
	RzILOpPure *op_EQ_2 = LET("const_pos0", const_pos0, EQ(op_AND_1, VARLP("const_pos0")));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_LSHIFT_0);
	RzILOpPure *op_EQ_2 = LET("const_pos0", const_pos0, EQ(op_AND_1, VARLP("const_pos0")));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ntstbit_r_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(32, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_3 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, c_call_3, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_5 = LET("const_pos0", const_pos0, ULT(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_6 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_11 = NEG(cond_10);
	RzILOpPure *op_SUB_12 = LET("const_pos1", const_pos1, SUB(op_NEG_11, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_7, op_SUB_12);
	RzILOpPure *op_RSHIFT_14 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_13, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_15 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_17, c_call_18, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_16, cond_19);
	RzILOpPure *cond_21 = ITE(op_LT_5, op_RSHIFT_14, op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(cast_ut64_1, cond_21);
	RzILOpPure *op_EQ_23 = LET("const_pos0", const_pos0, EQ(op_AND_22, VARLP("const_pos0")));
	RzILOpPure *cond_24 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_23, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_25 = SETG(Pd_assoc, cond_24);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_25);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(32, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_3 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, c_call_3, VARLP("const_pos0LL")));
	RzILOpPure *op_LT_5 = LET("const_pos0", const_pos0, ULT(cond_4, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_6 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_NE_8 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_9 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_9, VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_11 = NEG(cond_10);
	RzILOpPure *op_SUB_12 = LET("const_pos1", const_pos1, SUB(op_NEG_11, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(cast_ut64_7, op_SUB_12);
	RzILOpPure *op_RSHIFT_14 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_13, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_15 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos7", const_pos7, HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"))));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_17, c_call_18, VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_16, cond_19);
	RzILOpPure *cond_21 = ITE(op_LT_5, op_RSHIFT_14, op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(cast_ut64_1, cond_21);
	RzILOpPure *op_EQ_23 = LET("const_pos0", const_pos0, EQ(op_AND_22, VARLP("const_pos0")));
	RzILOpPure *cond_24 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_23, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_25 = SETG(Pd_assoc, cond_24);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_andi_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Rx, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Rx, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_andix_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rx, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Ru, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rx, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Ru, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_ori_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Rx, op_OR_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Rx, op_OR_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ori_asl_ri_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_OR_1 = LOGOR(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_OR_1 = LOGOR(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ori_lsr_ri_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_parity_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbf_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbf_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbfnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbfnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewf_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewf_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewt_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewt_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbt_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbt_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbtnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbtnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdf_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdf_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdfnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdfnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdt_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdt_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdtnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdtnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerff_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerff_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerffnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerffnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerffnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerft_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerft_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerftnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerftnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerftnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhf_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhf_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhfnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhfnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewf_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewf_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewt_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewt_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerht_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerht_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhtnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhtnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerif_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerif_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerifnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerifnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerifnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewf_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewf_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewfnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewfnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewt_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewt_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewtnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewtnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerit_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerit_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstoreritnew_abs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstoreritnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstoreritnew_rr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_stored_locked_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_stored_rl_at_vi_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_stored_rl_st_vi_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

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
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

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

RzILOpEffect *hex_il_op_s4_storeirbf_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirbfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirbt_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirbtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirh_io_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_3 = CAST(16, IL_FALSE, VARL("EA"));

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
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_3 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeirhf_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirhfnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirht_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirhtnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeiri_io_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_S = STOREW(VARL("EA"), VARL("S"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_S);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_S = STOREW(VARL("EA"), VARL("S"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_S);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeirif_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirifnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirit_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeiritnew_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storerb_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_5 = CAST(8, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st8_5 = STOREW(VARL("EA"), cast_st8_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st8_5, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_5 = CAST(8, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st8_5 = STOREW(VARL("EA"), cast_st8_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st8_5, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerb_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerb_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerbnew_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Nt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_5 = CAST(8, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st8_5 = STOREW(VARL("EA"), cast_st8_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st8_5, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Nt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_5 = CAST(8, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st8_5 = STOREW(VARL("EA"), cast_st8_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st8_5, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerbnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerbnew_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *op_ASSIGN_2 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Rtt, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *op_ASSIGN_2 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Rtt, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rtt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rtt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rtt = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rtt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerf_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerf_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerf_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerh_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerh_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerh_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerhnew_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Nt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Nt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_6 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerhnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerhnew_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *op_ASSIGN_2 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Rt, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *op_ASSIGN_2 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Rt, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *op_ASSIGN_2 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Nt, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *op_ASSIGN_2 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Nt, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Nt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Nt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Nt);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Nt = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Nt);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subaddi_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rs, Ru);
	RzILOpPure *op_ADD_1 = ADD(op_SUB_0, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rs, Ru);
	RzILOpPure *op_ADD_1 = ADD(op_SUB_0, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subi_asl_ri_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_SUB_1 = SUB(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_SUB_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_SUB_1 = SUB(VARL("u"), op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc, op_SUB_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subi_lsr_ri_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_vrcrotate_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_vrcrotate_acc_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_vxaddsubh_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_ADD_13 = ADD(cast_st16_8, cast_st16_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_19, cast_st16_23);
	RzILOpPure *op_EQ_25 = EQ(cond_15, op_ADD_24);
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(16, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_ADD_34 = ADD(cast_st16_29, cast_st16_33);
	RzILOpPure *c_call_35 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_38 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_36, c_call_37, VARLP("const_pos1")));
	RzILOpPure *cond_39 = ITE(c_call_35, c_call_38, usr);
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzILOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_48 = CAST(16, MSB(op_AND_47), op_AND_47);
	RzILOpPure *op_ADD_49 = ADD(cast_st16_44, cast_st16_48);
	RzILOpPure *op_LT_50 = LET("const_pos0", const_pos0, ULT(op_ADD_49, VARLP("const_pos0")));
	RzILOpPure *op_SUB_51 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_51));
	RzILOpPure *op_NEG_53 = NEG(op_LSHIFT_52);
	RzILOpPure *op_SUB_54 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_54));
	RzILOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cond_57 = ITE(op_LT_50, op_NEG_53, op_SUB_56);
	RzILOpPure *cond_58 = ITE(op_EQ_25, op_ADD_34, cond_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *op_MUL_61 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_3, op_LSHIFT_62);
	RzILOpPure *op_MUL_66 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rdd), op_NOT_68);
	RzILOpPure *op_NE_70 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_71 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_72 = SHIFTR0(DUP(Rss), op_MUL_71);
	RzILOpPure *op_AND_73 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_72, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(op_AND_73), op_AND_73);
	RzILOpPure *op_MUL_75 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rtt), op_MUL_75);
	RzILOpPure *op_AND_77 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_76, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_78 = CAST(16, MSB(op_AND_77), op_AND_77);
	RzILOpPure *op_SUB_79 = SUB(cast_st16_74, cast_st16_78);
	RzILOpPure *c_call_80 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_79, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_81 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_70, c_call_80, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_82 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *op_AND_84 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_83, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_85 = CAST(16, MSB(op_AND_84), op_AND_84);
	RzILOpPure *op_MUL_86 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rtt), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(op_AND_88), op_AND_88);
	RzILOpPure *op_SUB_90 = SUB(cast_st16_85, cast_st16_89);
	RzILOpPure *op_EQ_91 = EQ(cond_81, op_SUB_90);
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_SUB_100 = SUB(cast_st16_95, cast_st16_99);
	RzILOpPure *c_call_101 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_102 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_102, c_call_103, VARLP("const_pos1")));
	RzILOpPure *cond_105 = ITE(c_call_101, c_call_104, usr);
	RzILOpPure *op_MUL_107 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *op_AND_109 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_108, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_110 = CAST(32, IL_FALSE, op_AND_109);
	RzILOpPure *op_MUL_111 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rtt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(op_AND_113), op_AND_113);
	RzILOpPure *op_SUB_115 = SUB(cast_st16_110, cast_st16_114);
	RzILOpPure *op_LT_116 = LET("const_pos0", const_pos0, ULT(op_SUB_115, VARLP("const_pos0")));
	RzILOpPure *op_SUB_117 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_118 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_117));
	RzILOpPure *op_NEG_119 = NEG(op_LSHIFT_118);
	RzILOpPure *op_SUB_120 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_121 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_120));
	RzILOpPure *op_SUB_122 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_121, VARLP("const_pos1")));
	RzILOpPure *cond_123 = ITE(op_LT_116, op_NEG_119, op_SUB_122);
	RzILOpPure *cond_124 = ITE(op_EQ_91, op_SUB_100, cond_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_124, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_126 = CAST(64, IL_FALSE, op_AND_125);
	RzILOpPure *op_MUL_127 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_128 = SHIFTL0(cast_ut64_126, op_MUL_127);
	RzILOpPure *op_OR_129 = LOGOR(op_AND_69, op_LSHIFT_128);
	RzILOpPure *op_MUL_132 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_132));
	RzILOpPure *op_NOT_134 = LOGNOT(op_LSHIFT_133);
	RzILOpPure *op_AND_135 = LOGAND(DUP(Rdd), op_NOT_134);
	RzILOpPure *op_NE_136 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_137 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_138, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_140 = CAST(16, MSB(op_AND_139), op_AND_139);
	RzILOpPure *op_MUL_141 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_142 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_143 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_142, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_144 = CAST(16, MSB(op_AND_143), op_AND_143);
	RzILOpPure *op_ADD_145 = ADD(cast_st16_140, cast_st16_144);
	RzILOpPure *c_call_146 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_145, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_147 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_136, c_call_146, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_149 = SHIFTR0(DUP(Rss), op_MUL_148);
	RzILOpPure *op_AND_150 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_149, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_151 = CAST(16, MSB(op_AND_150), op_AND_150);
	RzILOpPure *op_MUL_152 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_153 = SHIFTR0(DUP(Rtt), op_MUL_152);
	RzILOpPure *op_AND_154 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_153, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_155 = CAST(16, MSB(op_AND_154), op_AND_154);
	RzILOpPure *op_ADD_156 = ADD(cast_st16_151, cast_st16_155);
	RzILOpPure *op_EQ_157 = EQ(cond_147, op_ADD_156);
	RzILOpPure *op_MUL_158 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_159 = SHIFTR0(DUP(Rss), op_MUL_158);
	RzILOpPure *op_AND_160 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_159, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_161 = CAST(32, IL_FALSE, op_AND_160);
	RzILOpPure *op_MUL_162 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_163 = SHIFTR0(DUP(Rtt), op_MUL_162);
	RzILOpPure *op_AND_164 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_163, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_165 = CAST(16, MSB(op_AND_164), op_AND_164);
	RzILOpPure *op_ADD_166 = ADD(cast_st16_161, cast_st16_165);
	RzILOpPure *c_call_167 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_168 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_169 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_170 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_168, c_call_169, VARLP("const_pos1")));
	RzILOpPure *cond_171 = ITE(c_call_167, c_call_170, usr);
	RzILOpPure *op_MUL_173 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_174 = SHIFTR0(DUP(Rss), op_MUL_173);
	RzILOpPure *op_AND_175 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_174, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_176 = CAST(32, IL_FALSE, op_AND_175);
	RzILOpPure *op_MUL_177 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *op_AND_179 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_178, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_180 = CAST(16, MSB(op_AND_179), op_AND_179);
	RzILOpPure *op_ADD_181 = ADD(cast_st16_176, cast_st16_180);
	RzILOpPure *op_LT_182 = LET("const_pos0", const_pos0, ULT(op_ADD_181, VARLP("const_pos0")));
	RzILOpPure *op_SUB_183 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_184 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_183));
	RzILOpPure *op_NEG_185 = NEG(op_LSHIFT_184);
	RzILOpPure *op_SUB_186 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_187 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_186));
	RzILOpPure *op_SUB_188 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_187, VARLP("const_pos1")));
	RzILOpPure *cond_189 = ITE(op_LT_182, op_NEG_185, op_SUB_188);
	RzILOpPure *cond_190 = ITE(op_EQ_157, op_ADD_166, cond_189);
	RzILOpPure *op_AND_191 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_190, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_192 = CAST(64, IL_FALSE, op_AND_191);
	RzILOpPure *op_MUL_193 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_194 = SHIFTL0(cast_ut64_192, op_MUL_193);
	RzILOpPure *op_OR_195 = LOGOR(op_AND_135, op_LSHIFT_194);
	RzILOpPure *op_MUL_198 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_199 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_198));
	RzILOpPure *op_NOT_200 = LOGNOT(op_LSHIFT_199);
	RzILOpPure *op_AND_201 = LOGAND(DUP(Rdd), op_NOT_200);
	RzILOpPure *op_NE_202 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_203 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_204 = SHIFTR0(DUP(Rss), op_MUL_203);
	RzILOpPure *op_AND_205 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_204, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_206 = CAST(16, MSB(op_AND_205), op_AND_205);
	RzILOpPure *op_MUL_207 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_208 = SHIFTR0(DUP(Rtt), op_MUL_207);
	RzILOpPure *op_AND_209 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_208, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_210 = CAST(16, MSB(op_AND_209), op_AND_209);
	RzILOpPure *op_SUB_211 = SUB(cast_st16_206, cast_st16_210);
	RzILOpPure *c_call_212 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_211, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_213 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_202, c_call_212, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_214 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rss), op_MUL_214);
	RzILOpPure *op_AND_216 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_215, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_217 = CAST(16, MSB(op_AND_216), op_AND_216);
	RzILOpPure *op_MUL_218 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rtt), op_MUL_218);
	RzILOpPure *op_AND_220 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_219, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_221 = CAST(16, MSB(op_AND_220), op_AND_220);
	RzILOpPure *op_SUB_222 = SUB(cast_st16_217, cast_st16_221);
	RzILOpPure *op_EQ_223 = EQ(cond_213, op_SUB_222);
	RzILOpPure *op_MUL_224 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_225 = SHIFTR0(DUP(Rss), op_MUL_224);
	RzILOpPure *op_AND_226 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_225, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_227 = CAST(32, IL_FALSE, op_AND_226);
	RzILOpPure *op_MUL_228 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rtt), op_MUL_228);
	RzILOpPure *op_AND_230 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_229, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_231 = CAST(16, MSB(op_AND_230), op_AND_230);
	RzILOpPure *op_SUB_232 = SUB(cast_st16_227, cast_st16_231);
	RzILOpPure *c_call_233 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_234 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_235 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_236 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_234, c_call_235, VARLP("const_pos1")));
	RzILOpPure *cond_237 = ITE(c_call_233, c_call_236, usr);
	RzILOpPure *op_MUL_239 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_240 = SHIFTR0(DUP(Rss), op_MUL_239);
	RzILOpPure *op_AND_241 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_240, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_242 = CAST(32, IL_FALSE, op_AND_241);
	RzILOpPure *op_MUL_243 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_244 = SHIFTR0(DUP(Rtt), op_MUL_243);
	RzILOpPure *op_AND_245 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_244, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_246 = CAST(16, MSB(op_AND_245), op_AND_245);
	RzILOpPure *op_SUB_247 = SUB(cast_st16_242, cast_st16_246);
	RzILOpPure *op_LT_248 = LET("const_pos0", const_pos0, ULT(op_SUB_247, VARLP("const_pos0")));
	RzILOpPure *op_SUB_249 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_250 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_249));
	RzILOpPure *op_NEG_251 = NEG(op_LSHIFT_250);
	RzILOpPure *op_SUB_252 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_253 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_252));
	RzILOpPure *op_SUB_254 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_253, VARLP("const_pos1")));
	RzILOpPure *cond_255 = ITE(op_LT_248, op_NEG_251, op_SUB_254);
	RzILOpPure *cond_256 = ITE(op_EQ_223, op_SUB_232, cond_255);
	RzILOpPure *op_AND_257 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_256, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_258 = CAST(64, IL_FALSE, op_AND_257);
	RzILOpPure *op_MUL_259 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_260 = SHIFTL0(cast_ut64_258, op_MUL_259);
	RzILOpPure *op_OR_261 = LOGOR(op_AND_201, op_LSHIFT_260);

	// WRITE
	RzILOpEffect *op_ASSIGN_40 = SETG(usr_assoc, cond_39);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_106 = SETG(usr_assoc, cond_105);
	RzILOpEffect *op_ASSIGN_130 = SETG(Rdd_assoc, op_OR_129);
	RzILOpEffect *empty_131 = EMPTY();
	RzILOpEffect *op_ASSIGN_172 = SETG(usr_assoc, cond_171);
	RzILOpEffect *op_ASSIGN_196 = SETG(Rdd_assoc, op_OR_195);
	RzILOpEffect *empty_197 = EMPTY();
	RzILOpEffect *op_ASSIGN_238 = SETG(usr_assoc, cond_237);
	RzILOpEffect *op_ASSIGN_262 = SETG(Rdd_assoc, op_OR_261);
	RzILOpEffect *empty_263 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_64, empty_65, op_ASSIGN_130, empty_131, op_ASSIGN_196, empty_197, op_ASSIGN_262, empty_263);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_ADD_13 = ADD(cast_st16_8, cast_st16_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_19, cast_st16_23);
	RzILOpPure *op_EQ_25 = EQ(cond_15, op_ADD_24);
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(16, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_ADD_34 = ADD(cast_st16_29, cast_st16_33);
	RzILOpPure *c_call_35 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_38 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_36, c_call_37, VARLP("const_pos1")));
	RzILOpPure *cond_39 = ITE(c_call_35, c_call_38, usr);
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzILOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_48 = CAST(16, MSB(op_AND_47), op_AND_47);
	RzILOpPure *op_ADD_49 = ADD(cast_st16_44, cast_st16_48);
	RzILOpPure *op_LT_50 = LET("const_pos0", const_pos0, ULT(op_ADD_49, VARLP("const_pos0")));
	RzILOpPure *op_SUB_51 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_51));
	RzILOpPure *op_NEG_53 = NEG(op_LSHIFT_52);
	RzILOpPure *op_SUB_54 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_54));
	RzILOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cond_57 = ITE(op_LT_50, op_NEG_53, op_SUB_56);
	RzILOpPure *cond_58 = ITE(op_EQ_25, op_ADD_34, cond_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *op_MUL_61 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_3, op_LSHIFT_62);
	RzILOpPure *op_MUL_66 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rdd), op_NOT_68);
	RzILOpPure *op_NE_70 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_71 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_72 = SHIFTR0(DUP(Rss), op_MUL_71);
	RzILOpPure *op_AND_73 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_72, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(op_AND_73), op_AND_73);
	RzILOpPure *op_MUL_75 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rtt), op_MUL_75);
	RzILOpPure *op_AND_77 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_76, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_78 = CAST(16, MSB(op_AND_77), op_AND_77);
	RzILOpPure *op_SUB_79 = SUB(cast_st16_74, cast_st16_78);
	RzILOpPure *c_call_80 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_79, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_81 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_70, c_call_80, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_82 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *op_AND_84 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_83, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_85 = CAST(16, MSB(op_AND_84), op_AND_84);
	RzILOpPure *op_MUL_86 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rtt), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(op_AND_88), op_AND_88);
	RzILOpPure *op_SUB_90 = SUB(cast_st16_85, cast_st16_89);
	RzILOpPure *op_EQ_91 = EQ(cond_81, op_SUB_90);
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_SUB_100 = SUB(cast_st16_95, cast_st16_99);
	RzILOpPure *c_call_101 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_102 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_102, c_call_103, VARLP("const_pos1")));
	RzILOpPure *cond_105 = ITE(c_call_101, c_call_104, usr);
	RzILOpPure *op_MUL_107 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *op_AND_109 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_108, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_110 = CAST(32, IL_FALSE, op_AND_109);
	RzILOpPure *op_MUL_111 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rtt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(op_AND_113), op_AND_113);
	RzILOpPure *op_SUB_115 = SUB(cast_st16_110, cast_st16_114);
	RzILOpPure *op_LT_116 = LET("const_pos0", const_pos0, ULT(op_SUB_115, VARLP("const_pos0")));
	RzILOpPure *op_SUB_117 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_118 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_117));
	RzILOpPure *op_NEG_119 = NEG(op_LSHIFT_118);
	RzILOpPure *op_SUB_120 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_121 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_120));
	RzILOpPure *op_SUB_122 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_121, VARLP("const_pos1")));
	RzILOpPure *cond_123 = ITE(op_LT_116, op_NEG_119, op_SUB_122);
	RzILOpPure *cond_124 = ITE(op_EQ_91, op_SUB_100, cond_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_124, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_126 = CAST(64, IL_FALSE, op_AND_125);
	RzILOpPure *op_MUL_127 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_128 = SHIFTL0(cast_ut64_126, op_MUL_127);
	RzILOpPure *op_OR_129 = LOGOR(op_AND_69, op_LSHIFT_128);
	RzILOpPure *op_MUL_132 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_132));
	RzILOpPure *op_NOT_134 = LOGNOT(op_LSHIFT_133);
	RzILOpPure *op_AND_135 = LOGAND(DUP(Rdd), op_NOT_134);
	RzILOpPure *op_NE_136 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_137 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_138, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_140 = CAST(16, MSB(op_AND_139), op_AND_139);
	RzILOpPure *op_MUL_141 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_142 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_143 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_142, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_144 = CAST(16, MSB(op_AND_143), op_AND_143);
	RzILOpPure *op_ADD_145 = ADD(cast_st16_140, cast_st16_144);
	RzILOpPure *c_call_146 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_145, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_147 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_136, c_call_146, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_149 = SHIFTR0(DUP(Rss), op_MUL_148);
	RzILOpPure *op_AND_150 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_149, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_151 = CAST(16, MSB(op_AND_150), op_AND_150);
	RzILOpPure *op_MUL_152 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_153 = SHIFTR0(DUP(Rtt), op_MUL_152);
	RzILOpPure *op_AND_154 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_153, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_155 = CAST(16, MSB(op_AND_154), op_AND_154);
	RzILOpPure *op_ADD_156 = ADD(cast_st16_151, cast_st16_155);
	RzILOpPure *op_EQ_157 = EQ(cond_147, op_ADD_156);
	RzILOpPure *op_MUL_158 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_159 = SHIFTR0(DUP(Rss), op_MUL_158);
	RzILOpPure *op_AND_160 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_159, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_161 = CAST(32, IL_FALSE, op_AND_160);
	RzILOpPure *op_MUL_162 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_163 = SHIFTR0(DUP(Rtt), op_MUL_162);
	RzILOpPure *op_AND_164 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_163, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_165 = CAST(16, MSB(op_AND_164), op_AND_164);
	RzILOpPure *op_ADD_166 = ADD(cast_st16_161, cast_st16_165);
	RzILOpPure *c_call_167 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_168 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_169 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_170 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_168, c_call_169, VARLP("const_pos1")));
	RzILOpPure *cond_171 = ITE(c_call_167, c_call_170, usr);
	RzILOpPure *op_MUL_173 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_174 = SHIFTR0(DUP(Rss), op_MUL_173);
	RzILOpPure *op_AND_175 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_174, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_176 = CAST(32, IL_FALSE, op_AND_175);
	RzILOpPure *op_MUL_177 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *op_AND_179 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_178, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_180 = CAST(16, MSB(op_AND_179), op_AND_179);
	RzILOpPure *op_ADD_181 = ADD(cast_st16_176, cast_st16_180);
	RzILOpPure *op_LT_182 = LET("const_pos0", const_pos0, ULT(op_ADD_181, VARLP("const_pos0")));
	RzILOpPure *op_SUB_183 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_184 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_183));
	RzILOpPure *op_NEG_185 = NEG(op_LSHIFT_184);
	RzILOpPure *op_SUB_186 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_187 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_186));
	RzILOpPure *op_SUB_188 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_187, VARLP("const_pos1")));
	RzILOpPure *cond_189 = ITE(op_LT_182, op_NEG_185, op_SUB_188);
	RzILOpPure *cond_190 = ITE(op_EQ_157, op_ADD_166, cond_189);
	RzILOpPure *op_AND_191 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_190, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_192 = CAST(64, IL_FALSE, op_AND_191);
	RzILOpPure *op_MUL_193 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_194 = SHIFTL0(cast_ut64_192, op_MUL_193);
	RzILOpPure *op_OR_195 = LOGOR(op_AND_135, op_LSHIFT_194);
	RzILOpPure *op_MUL_198 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_199 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_198));
	RzILOpPure *op_NOT_200 = LOGNOT(op_LSHIFT_199);
	RzILOpPure *op_AND_201 = LOGAND(DUP(Rdd), op_NOT_200);
	RzILOpPure *op_NE_202 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_203 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_204 = SHIFTR0(DUP(Rss), op_MUL_203);
	RzILOpPure *op_AND_205 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_204, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_206 = CAST(16, MSB(op_AND_205), op_AND_205);
	RzILOpPure *op_MUL_207 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_208 = SHIFTR0(DUP(Rtt), op_MUL_207);
	RzILOpPure *op_AND_209 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_208, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_210 = CAST(16, MSB(op_AND_209), op_AND_209);
	RzILOpPure *op_SUB_211 = SUB(cast_st16_206, cast_st16_210);
	RzILOpPure *c_call_212 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_211, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_213 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_202, c_call_212, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_214 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rss), op_MUL_214);
	RzILOpPure *op_AND_216 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_215, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_217 = CAST(16, MSB(op_AND_216), op_AND_216);
	RzILOpPure *op_MUL_218 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rtt), op_MUL_218);
	RzILOpPure *op_AND_220 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_219, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_221 = CAST(16, MSB(op_AND_220), op_AND_220);
	RzILOpPure *op_SUB_222 = SUB(cast_st16_217, cast_st16_221);
	RzILOpPure *op_EQ_223 = EQ(cond_213, op_SUB_222);
	RzILOpPure *op_MUL_224 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_225 = SHIFTR0(DUP(Rss), op_MUL_224);
	RzILOpPure *op_AND_226 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_225, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_227 = CAST(32, IL_FALSE, op_AND_226);
	RzILOpPure *op_MUL_228 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rtt), op_MUL_228);
	RzILOpPure *op_AND_230 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_229, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_231 = CAST(16, MSB(op_AND_230), op_AND_230);
	RzILOpPure *op_SUB_232 = SUB(cast_st16_227, cast_st16_231);
	RzILOpPure *c_call_233 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_234 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_235 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_236 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_234, c_call_235, VARLP("const_pos1")));
	RzILOpPure *cond_237 = ITE(c_call_233, c_call_236, usr);
	RzILOpPure *op_MUL_239 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_240 = SHIFTR0(DUP(Rss), op_MUL_239);
	RzILOpPure *op_AND_241 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_240, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_242 = CAST(32, IL_FALSE, op_AND_241);
	RzILOpPure *op_MUL_243 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_244 = SHIFTR0(DUP(Rtt), op_MUL_243);
	RzILOpPure *op_AND_245 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_244, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_246 = CAST(16, MSB(op_AND_245), op_AND_245);
	RzILOpPure *op_SUB_247 = SUB(cast_st16_242, cast_st16_246);
	RzILOpPure *op_LT_248 = LET("const_pos0", const_pos0, ULT(op_SUB_247, VARLP("const_pos0")));
	RzILOpPure *op_SUB_249 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_250 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_249));
	RzILOpPure *op_NEG_251 = NEG(op_LSHIFT_250);
	RzILOpPure *op_SUB_252 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_253 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_252));
	RzILOpPure *op_SUB_254 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_253, VARLP("const_pos1")));
	RzILOpPure *cond_255 = ITE(op_LT_248, op_NEG_251, op_SUB_254);
	RzILOpPure *cond_256 = ITE(op_EQ_223, op_SUB_232, cond_255);
	RzILOpPure *op_AND_257 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_256, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_258 = CAST(64, IL_FALSE, op_AND_257);
	RzILOpPure *op_MUL_259 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_260 = SHIFTL0(cast_ut64_258, op_MUL_259);
	RzILOpPure *op_OR_261 = LOGOR(op_AND_201, op_LSHIFT_260);

	// WRITE
	RzILOpEffect *op_ASSIGN_40 = SETG(usr_assoc, cond_39);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_106 = SETG(usr_assoc, cond_105);
	RzILOpEffect *op_ASSIGN_130 = SETG(Rdd_assoc, op_OR_129);
	RzILOpEffect *empty_131 = EMPTY();
	RzILOpEffect *op_ASSIGN_172 = SETG(usr_assoc, cond_171);
	RzILOpEffect *op_ASSIGN_196 = SETG(Rdd_assoc, op_OR_195);
	RzILOpEffect *empty_197 = EMPTY();
	RzILOpEffect *op_ASSIGN_238 = SETG(usr_assoc, cond_237);
	RzILOpEffect *op_ASSIGN_262 = SETG(Rdd_assoc, op_OR_261);
	RzILOpEffect *empty_263 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_64, empty_65, op_ASSIGN_130, empty_131, op_ASSIGN_196, empty_197, op_ASSIGN_262, empty_263);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubhr_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(32, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_ADD_13 = ADD(cast_st16_8, cast_st16_12);
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_ADD_13, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_ADD_26 = ADD(cast_st16_21, cast_st16_25);
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_ADD_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_27, VARLP("const_pos1")));
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_RSHIFT_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzILOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_ADD_38, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_40 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_39, VARLP("const_pos1")));
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_50 = CAST(32, IL_FALSE, op_AND_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(op_AND_53), op_AND_53);
	RzILOpPure *op_ADD_55 = ADD(cast_st16_50, cast_st16_54);
	RzILOpPure *op_ADD_56 = LET("const_pos1", const_pos1, ADD(op_ADD_55, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_57 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_56, VARLP("const_pos1")));
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_RSHIFT_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_66, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *op_MUL_69 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *op_OR_71 = LOGOR(op_AND_3, op_LSHIFT_70);
	RzILOpPure *op_MUL_74 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_74));
	RzILOpPure *op_NOT_76 = LOGNOT(op_LSHIFT_75);
	RzILOpPure *op_AND_77 = LOGAND(DUP(Rdd), op_NOT_76);
	RzILOpPure *op_NE_78 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_79 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(32, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_84, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_86 = CAST(16, MSB(op_AND_85), op_AND_85);
	RzILOpPure *op_SUB_87 = SUB(cast_st16_82, cast_st16_86);
	RzILOpPure *op_ADD_88 = LET("const_pos1", const_pos1, ADD(op_SUB_87, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_89 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_88, VARLP("const_pos1")));
	RzILOpPure *c_call_90 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_89, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_91 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_78, c_call_90, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_SUB_100 = SUB(cast_st16_95, cast_st16_99);
	RzILOpPure *op_ADD_101 = LET("const_pos1", const_pos1, ADD(op_SUB_100, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_101, VARLP("const_pos1")));
	RzILOpPure *op_EQ_103 = EQ(cond_91, op_RSHIFT_102);
	RzILOpPure *op_MUL_104 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_105 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *op_AND_106 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_105, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_107 = CAST(32, IL_FALSE, op_AND_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_109, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_111 = CAST(16, MSB(op_AND_110), op_AND_110);
	RzILOpPure *op_SUB_112 = SUB(cast_st16_107, cast_st16_111);
	RzILOpPure *op_ADD_113 = LET("const_pos1", const_pos1, ADD(op_SUB_112, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_114 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_113, VARLP("const_pos1")));
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_118 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_116, c_call_117, VARLP("const_pos1")));
	RzILOpPure *cond_119 = ITE(c_call_115, c_call_118, usr);
	RzILOpPure *op_MUL_121 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_122 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *op_AND_123 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_122, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_124 = CAST(32, IL_FALSE, op_AND_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_128 = CAST(16, MSB(op_AND_127), op_AND_127);
	RzILOpPure *op_SUB_129 = SUB(cast_st16_124, cast_st16_128);
	RzILOpPure *op_ADD_130 = LET("const_pos1", const_pos1, ADD(op_SUB_129, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_131 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *op_LT_132 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_131, VARLP("const_pos0")));
	RzILOpPure *op_SUB_133 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *op_NEG_135 = NEG(op_LSHIFT_134);
	RzILOpPure *op_SUB_136 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_136));
	RzILOpPure *op_SUB_138 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_137, VARLP("const_pos1")));
	RzILOpPure *cond_139 = ITE(op_LT_132, op_NEG_135, op_SUB_138);
	RzILOpPure *cond_140 = ITE(op_EQ_103, op_RSHIFT_114, cond_139);
	RzILOpPure *op_AND_141 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_140, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_142 = CAST(64, IL_FALSE, op_AND_141);
	RzILOpPure *op_MUL_143 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_144 = SHIFTL0(cast_ut64_142, op_MUL_143);
	RzILOpPure *op_OR_145 = LOGOR(op_AND_77, op_LSHIFT_144);
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_149 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_148));
	RzILOpPure *op_NOT_150 = LOGNOT(op_LSHIFT_149);
	RzILOpPure *op_AND_151 = LOGAND(DUP(Rdd), op_NOT_150);
	RzILOpPure *op_NE_152 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_153 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rss), op_MUL_153);
	RzILOpPure *op_AND_155 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_154, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_156 = CAST(32, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_158 = SHIFTR0(DUP(Rtt), op_MUL_157);
	RzILOpPure *op_AND_159 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_158, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_160 = CAST(16, MSB(op_AND_159), op_AND_159);
	RzILOpPure *op_ADD_161 = ADD(cast_st16_156, cast_st16_160);
	RzILOpPure *op_ADD_162 = LET("const_pos1", const_pos1, ADD(op_ADD_161, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_162, VARLP("const_pos1")));
	RzILOpPure *c_call_164 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_163, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_165 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_152, c_call_164, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_166 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_167 = SHIFTR0(DUP(Rss), op_MUL_166);
	RzILOpPure *op_AND_168 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_167, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_169 = CAST(32, IL_FALSE, op_AND_168);
	RzILOpPure *op_MUL_170 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rtt), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_171, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_173 = CAST(16, MSB(op_AND_172), op_AND_172);
	RzILOpPure *op_ADD_174 = ADD(cast_st16_169, cast_st16_173);
	RzILOpPure *op_ADD_175 = LET("const_pos1", const_pos1, ADD(op_ADD_174, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_176 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_175, VARLP("const_pos1")));
	RzILOpPure *op_EQ_177 = EQ(cond_165, op_RSHIFT_176);
	RzILOpPure *op_MUL_178 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rss), op_MUL_178);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_179, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_181 = CAST(32, IL_FALSE, op_AND_180);
	RzILOpPure *op_MUL_182 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rtt), op_MUL_182);
	RzILOpPure *op_AND_184 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_183, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_185 = CAST(16, MSB(op_AND_184), op_AND_184);
	RzILOpPure *op_ADD_186 = ADD(cast_st16_181, cast_st16_185);
	RzILOpPure *op_ADD_187 = LET("const_pos1", const_pos1, ADD(op_ADD_186, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_188 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_187, VARLP("const_pos1")));
	RzILOpPure *c_call_189 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_190 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_191 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_192 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_190, c_call_191, VARLP("const_pos1")));
	RzILOpPure *cond_193 = ITE(c_call_189, c_call_192, usr);
	RzILOpPure *op_MUL_195 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_196 = SHIFTR0(DUP(Rss), op_MUL_195);
	RzILOpPure *op_AND_197 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_196, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_198 = CAST(32, IL_FALSE, op_AND_197);
	RzILOpPure *op_MUL_199 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rtt), op_MUL_199);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_200, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_202 = CAST(16, MSB(op_AND_201), op_AND_201);
	RzILOpPure *op_ADD_203 = ADD(cast_st16_198, cast_st16_202);
	RzILOpPure *op_ADD_204 = LET("const_pos1", const_pos1, ADD(op_ADD_203, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_205 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_204, VARLP("const_pos1")));
	RzILOpPure *op_LT_206 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_205, VARLP("const_pos0")));
	RzILOpPure *op_SUB_207 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_208 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_207));
	RzILOpPure *op_NEG_209 = NEG(op_LSHIFT_208);
	RzILOpPure *op_SUB_210 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_211 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_210));
	RzILOpPure *op_SUB_212 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_211, VARLP("const_pos1")));
	RzILOpPure *cond_213 = ITE(op_LT_206, op_NEG_209, op_SUB_212);
	RzILOpPure *cond_214 = ITE(op_EQ_177, op_RSHIFT_188, cond_213);
	RzILOpPure *op_AND_215 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_214, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_216 = CAST(64, IL_FALSE, op_AND_215);
	RzILOpPure *op_MUL_217 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_218 = SHIFTL0(cast_ut64_216, op_MUL_217);
	RzILOpPure *op_OR_219 = LOGOR(op_AND_151, op_LSHIFT_218);
	RzILOpPure *op_MUL_222 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_223 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_222));
	RzILOpPure *op_NOT_224 = LOGNOT(op_LSHIFT_223);
	RzILOpPure *op_AND_225 = LOGAND(DUP(Rdd), op_NOT_224);
	RzILOpPure *op_NE_226 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_227 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_228 = SHIFTR0(DUP(Rss), op_MUL_227);
	RzILOpPure *op_AND_229 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_228, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_230 = CAST(32, IL_FALSE, op_AND_229);
	RzILOpPure *op_MUL_231 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_232 = SHIFTR0(DUP(Rtt), op_MUL_231);
	RzILOpPure *op_AND_233 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_232, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_234 = CAST(16, MSB(op_AND_233), op_AND_233);
	RzILOpPure *op_SUB_235 = SUB(cast_st16_230, cast_st16_234);
	RzILOpPure *op_ADD_236 = LET("const_pos1", const_pos1, ADD(op_SUB_235, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_237 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_236, VARLP("const_pos1")));
	RzILOpPure *c_call_238 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_237, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_239 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_226, c_call_238, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_240 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_241 = SHIFTR0(DUP(Rss), op_MUL_240);
	RzILOpPure *op_AND_242 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_241, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_243 = CAST(32, IL_FALSE, op_AND_242);
	RzILOpPure *op_MUL_244 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_245 = SHIFTR0(DUP(Rtt), op_MUL_244);
	RzILOpPure *op_AND_246 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_245, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_247 = CAST(16, MSB(op_AND_246), op_AND_246);
	RzILOpPure *op_SUB_248 = SUB(cast_st16_243, cast_st16_247);
	RzILOpPure *op_ADD_249 = LET("const_pos1", const_pos1, ADD(op_SUB_248, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_250 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_249, VARLP("const_pos1")));
	RzILOpPure *op_EQ_251 = EQ(cond_239, op_RSHIFT_250);
	RzILOpPure *op_MUL_252 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_253 = SHIFTR0(DUP(Rss), op_MUL_252);
	RzILOpPure *op_AND_254 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_253, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_255 = CAST(32, IL_FALSE, op_AND_254);
	RzILOpPure *op_MUL_256 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_257 = SHIFTR0(DUP(Rtt), op_MUL_256);
	RzILOpPure *op_AND_258 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_257, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_259 = CAST(16, MSB(op_AND_258), op_AND_258);
	RzILOpPure *op_SUB_260 = SUB(cast_st16_255, cast_st16_259);
	RzILOpPure *op_ADD_261 = LET("const_pos1", const_pos1, ADD(op_SUB_260, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_262 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_261, VARLP("const_pos1")));
	RzILOpPure *c_call_263 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_264 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_265 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_266 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_264, c_call_265, VARLP("const_pos1")));
	RzILOpPure *cond_267 = ITE(c_call_263, c_call_266, usr);
	RzILOpPure *op_MUL_269 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *op_AND_271 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_270, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_272 = CAST(32, IL_FALSE, op_AND_271);
	RzILOpPure *op_MUL_273 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_274 = SHIFTR0(DUP(Rtt), op_MUL_273);
	RzILOpPure *op_AND_275 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_274, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_276 = CAST(16, MSB(op_AND_275), op_AND_275);
	RzILOpPure *op_SUB_277 = SUB(cast_st16_272, cast_st16_276);
	RzILOpPure *op_ADD_278 = LET("const_pos1", const_pos1, ADD(op_SUB_277, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_279 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_278, VARLP("const_pos1")));
	RzILOpPure *op_LT_280 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_279, VARLP("const_pos0")));
	RzILOpPure *op_SUB_281 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_282 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_281));
	RzILOpPure *op_NEG_283 = NEG(op_LSHIFT_282);
	RzILOpPure *op_SUB_284 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_285 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_284));
	RzILOpPure *op_SUB_286 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_285, VARLP("const_pos1")));
	RzILOpPure *cond_287 = ITE(op_LT_280, op_NEG_283, op_SUB_286);
	RzILOpPure *cond_288 = ITE(op_EQ_251, op_RSHIFT_262, cond_287);
	RzILOpPure *op_AND_289 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_288, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_290 = CAST(64, IL_FALSE, op_AND_289);
	RzILOpPure *op_MUL_291 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_292 = SHIFTL0(cast_ut64_290, op_MUL_291);
	RzILOpPure *op_OR_293 = LOGOR(op_AND_225, op_LSHIFT_292);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_72 = SETG(Rdd_assoc, op_OR_71);
	RzILOpEffect *empty_73 = EMPTY();
	RzILOpEffect *op_ASSIGN_120 = SETG(usr_assoc, cond_119);
	RzILOpEffect *op_ASSIGN_146 = SETG(Rdd_assoc, op_OR_145);
	RzILOpEffect *empty_147 = EMPTY();
	RzILOpEffect *op_ASSIGN_194 = SETG(usr_assoc, cond_193);
	RzILOpEffect *op_ASSIGN_220 = SETG(Rdd_assoc, op_OR_219);
	RzILOpEffect *empty_221 = EMPTY();
	RzILOpEffect *op_ASSIGN_268 = SETG(usr_assoc, cond_267);
	RzILOpEffect *op_ASSIGN_294 = SETG(Rdd_assoc, op_OR_293);
	RzILOpEffect *empty_295 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_72, empty_73, op_ASSIGN_146, empty_147, op_ASSIGN_220, empty_221, op_ASSIGN_294, empty_295);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(32, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_ADD_13 = ADD(cast_st16_8, cast_st16_12);
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_ADD_13, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_ADD_26 = ADD(cast_st16_21, cast_st16_25);
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_ADD_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_27, VARLP("const_pos1")));
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_RSHIFT_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzILOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_ADD_38, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_40 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_39, VARLP("const_pos1")));
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_50 = CAST(32, IL_FALSE, op_AND_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(op_AND_53), op_AND_53);
	RzILOpPure *op_ADD_55 = ADD(cast_st16_50, cast_st16_54);
	RzILOpPure *op_ADD_56 = LET("const_pos1", const_pos1, ADD(op_ADD_55, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_57 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_56, VARLP("const_pos1")));
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_RSHIFT_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_66, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *op_MUL_69 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *op_OR_71 = LOGOR(op_AND_3, op_LSHIFT_70);
	RzILOpPure *op_MUL_74 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_74));
	RzILOpPure *op_NOT_76 = LOGNOT(op_LSHIFT_75);
	RzILOpPure *op_AND_77 = LOGAND(DUP(Rdd), op_NOT_76);
	RzILOpPure *op_NE_78 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_79 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(32, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_84, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_86 = CAST(16, MSB(op_AND_85), op_AND_85);
	RzILOpPure *op_SUB_87 = SUB(cast_st16_82, cast_st16_86);
	RzILOpPure *op_ADD_88 = LET("const_pos1", const_pos1, ADD(op_SUB_87, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_89 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_88, VARLP("const_pos1")));
	RzILOpPure *c_call_90 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_89, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_91 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_78, c_call_90, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_SUB_100 = SUB(cast_st16_95, cast_st16_99);
	RzILOpPure *op_ADD_101 = LET("const_pos1", const_pos1, ADD(op_SUB_100, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_101, VARLP("const_pos1")));
	RzILOpPure *op_EQ_103 = EQ(cond_91, op_RSHIFT_102);
	RzILOpPure *op_MUL_104 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_105 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *op_AND_106 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_105, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_107 = CAST(32, IL_FALSE, op_AND_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_109, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_111 = CAST(16, MSB(op_AND_110), op_AND_110);
	RzILOpPure *op_SUB_112 = SUB(cast_st16_107, cast_st16_111);
	RzILOpPure *op_ADD_113 = LET("const_pos1", const_pos1, ADD(op_SUB_112, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_114 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_113, VARLP("const_pos1")));
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_118 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_116, c_call_117, VARLP("const_pos1")));
	RzILOpPure *cond_119 = ITE(c_call_115, c_call_118, usr);
	RzILOpPure *op_MUL_121 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_122 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *op_AND_123 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_122, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_124 = CAST(32, IL_FALSE, op_AND_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_128 = CAST(16, MSB(op_AND_127), op_AND_127);
	RzILOpPure *op_SUB_129 = SUB(cast_st16_124, cast_st16_128);
	RzILOpPure *op_ADD_130 = LET("const_pos1", const_pos1, ADD(op_SUB_129, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_131 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *op_LT_132 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_131, VARLP("const_pos0")));
	RzILOpPure *op_SUB_133 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *op_NEG_135 = NEG(op_LSHIFT_134);
	RzILOpPure *op_SUB_136 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_136));
	RzILOpPure *op_SUB_138 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_137, VARLP("const_pos1")));
	RzILOpPure *cond_139 = ITE(op_LT_132, op_NEG_135, op_SUB_138);
	RzILOpPure *cond_140 = ITE(op_EQ_103, op_RSHIFT_114, cond_139);
	RzILOpPure *op_AND_141 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_140, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_142 = CAST(64, IL_FALSE, op_AND_141);
	RzILOpPure *op_MUL_143 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_144 = SHIFTL0(cast_ut64_142, op_MUL_143);
	RzILOpPure *op_OR_145 = LOGOR(op_AND_77, op_LSHIFT_144);
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_149 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_148));
	RzILOpPure *op_NOT_150 = LOGNOT(op_LSHIFT_149);
	RzILOpPure *op_AND_151 = LOGAND(DUP(Rdd), op_NOT_150);
	RzILOpPure *op_NE_152 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_153 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rss), op_MUL_153);
	RzILOpPure *op_AND_155 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_154, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_156 = CAST(32, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_158 = SHIFTR0(DUP(Rtt), op_MUL_157);
	RzILOpPure *op_AND_159 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_158, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_160 = CAST(16, MSB(op_AND_159), op_AND_159);
	RzILOpPure *op_ADD_161 = ADD(cast_st16_156, cast_st16_160);
	RzILOpPure *op_ADD_162 = LET("const_pos1", const_pos1, ADD(op_ADD_161, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_162, VARLP("const_pos1")));
	RzILOpPure *c_call_164 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_163, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_165 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_152, c_call_164, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_166 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_167 = SHIFTR0(DUP(Rss), op_MUL_166);
	RzILOpPure *op_AND_168 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_167, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_169 = CAST(32, IL_FALSE, op_AND_168);
	RzILOpPure *op_MUL_170 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rtt), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_171, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_173 = CAST(16, MSB(op_AND_172), op_AND_172);
	RzILOpPure *op_ADD_174 = ADD(cast_st16_169, cast_st16_173);
	RzILOpPure *op_ADD_175 = LET("const_pos1", const_pos1, ADD(op_ADD_174, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_176 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_175, VARLP("const_pos1")));
	RzILOpPure *op_EQ_177 = EQ(cond_165, op_RSHIFT_176);
	RzILOpPure *op_MUL_178 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rss), op_MUL_178);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_179, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_181 = CAST(32, IL_FALSE, op_AND_180);
	RzILOpPure *op_MUL_182 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rtt), op_MUL_182);
	RzILOpPure *op_AND_184 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_183, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_185 = CAST(16, MSB(op_AND_184), op_AND_184);
	RzILOpPure *op_ADD_186 = ADD(cast_st16_181, cast_st16_185);
	RzILOpPure *op_ADD_187 = LET("const_pos1", const_pos1, ADD(op_ADD_186, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_188 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_187, VARLP("const_pos1")));
	RzILOpPure *c_call_189 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_190 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_191 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_192 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_190, c_call_191, VARLP("const_pos1")));
	RzILOpPure *cond_193 = ITE(c_call_189, c_call_192, usr);
	RzILOpPure *op_MUL_195 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_196 = SHIFTR0(DUP(Rss), op_MUL_195);
	RzILOpPure *op_AND_197 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_196, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_198 = CAST(32, IL_FALSE, op_AND_197);
	RzILOpPure *op_MUL_199 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rtt), op_MUL_199);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_200, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_202 = CAST(16, MSB(op_AND_201), op_AND_201);
	RzILOpPure *op_ADD_203 = ADD(cast_st16_198, cast_st16_202);
	RzILOpPure *op_ADD_204 = LET("const_pos1", const_pos1, ADD(op_ADD_203, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_205 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_204, VARLP("const_pos1")));
	RzILOpPure *op_LT_206 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_205, VARLP("const_pos0")));
	RzILOpPure *op_SUB_207 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_208 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_207));
	RzILOpPure *op_NEG_209 = NEG(op_LSHIFT_208);
	RzILOpPure *op_SUB_210 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_211 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_210));
	RzILOpPure *op_SUB_212 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_211, VARLP("const_pos1")));
	RzILOpPure *cond_213 = ITE(op_LT_206, op_NEG_209, op_SUB_212);
	RzILOpPure *cond_214 = ITE(op_EQ_177, op_RSHIFT_188, cond_213);
	RzILOpPure *op_AND_215 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_214, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_216 = CAST(64, IL_FALSE, op_AND_215);
	RzILOpPure *op_MUL_217 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_218 = SHIFTL0(cast_ut64_216, op_MUL_217);
	RzILOpPure *op_OR_219 = LOGOR(op_AND_151, op_LSHIFT_218);
	RzILOpPure *op_MUL_222 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_223 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_222));
	RzILOpPure *op_NOT_224 = LOGNOT(op_LSHIFT_223);
	RzILOpPure *op_AND_225 = LOGAND(DUP(Rdd), op_NOT_224);
	RzILOpPure *op_NE_226 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_227 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_228 = SHIFTR0(DUP(Rss), op_MUL_227);
	RzILOpPure *op_AND_229 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_228, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_230 = CAST(32, IL_FALSE, op_AND_229);
	RzILOpPure *op_MUL_231 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_232 = SHIFTR0(DUP(Rtt), op_MUL_231);
	RzILOpPure *op_AND_233 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_232, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_234 = CAST(16, MSB(op_AND_233), op_AND_233);
	RzILOpPure *op_SUB_235 = SUB(cast_st16_230, cast_st16_234);
	RzILOpPure *op_ADD_236 = LET("const_pos1", const_pos1, ADD(op_SUB_235, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_237 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_236, VARLP("const_pos1")));
	RzILOpPure *c_call_238 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_237, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_239 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_226, c_call_238, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_240 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_241 = SHIFTR0(DUP(Rss), op_MUL_240);
	RzILOpPure *op_AND_242 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_241, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_243 = CAST(32, IL_FALSE, op_AND_242);
	RzILOpPure *op_MUL_244 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_245 = SHIFTR0(DUP(Rtt), op_MUL_244);
	RzILOpPure *op_AND_246 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_245, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_247 = CAST(16, MSB(op_AND_246), op_AND_246);
	RzILOpPure *op_SUB_248 = SUB(cast_st16_243, cast_st16_247);
	RzILOpPure *op_ADD_249 = LET("const_pos1", const_pos1, ADD(op_SUB_248, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_250 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_249, VARLP("const_pos1")));
	RzILOpPure *op_EQ_251 = EQ(cond_239, op_RSHIFT_250);
	RzILOpPure *op_MUL_252 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_253 = SHIFTR0(DUP(Rss), op_MUL_252);
	RzILOpPure *op_AND_254 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_253, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_255 = CAST(32, IL_FALSE, op_AND_254);
	RzILOpPure *op_MUL_256 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_257 = SHIFTR0(DUP(Rtt), op_MUL_256);
	RzILOpPure *op_AND_258 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_257, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_259 = CAST(16, MSB(op_AND_258), op_AND_258);
	RzILOpPure *op_SUB_260 = SUB(cast_st16_255, cast_st16_259);
	RzILOpPure *op_ADD_261 = LET("const_pos1", const_pos1, ADD(op_SUB_260, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_262 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_261, VARLP("const_pos1")));
	RzILOpPure *c_call_263 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_264 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_265 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_266 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_264, c_call_265, VARLP("const_pos1")));
	RzILOpPure *cond_267 = ITE(c_call_263, c_call_266, usr);
	RzILOpPure *op_MUL_269 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *op_AND_271 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_270, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_272 = CAST(32, IL_FALSE, op_AND_271);
	RzILOpPure *op_MUL_273 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_274 = SHIFTR0(DUP(Rtt), op_MUL_273);
	RzILOpPure *op_AND_275 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_274, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_276 = CAST(16, MSB(op_AND_275), op_AND_275);
	RzILOpPure *op_SUB_277 = SUB(cast_st16_272, cast_st16_276);
	RzILOpPure *op_ADD_278 = LET("const_pos1", const_pos1, ADD(op_SUB_277, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_279 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_278, VARLP("const_pos1")));
	RzILOpPure *op_LT_280 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_279, VARLP("const_pos0")));
	RzILOpPure *op_SUB_281 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_282 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_281));
	RzILOpPure *op_NEG_283 = NEG(op_LSHIFT_282);
	RzILOpPure *op_SUB_284 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_285 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_284));
	RzILOpPure *op_SUB_286 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_285, VARLP("const_pos1")));
	RzILOpPure *cond_287 = ITE(op_LT_280, op_NEG_283, op_SUB_286);
	RzILOpPure *cond_288 = ITE(op_EQ_251, op_RSHIFT_262, cond_287);
	RzILOpPure *op_AND_289 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_288, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_290 = CAST(64, IL_FALSE, op_AND_289);
	RzILOpPure *op_MUL_291 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_292 = SHIFTL0(cast_ut64_290, op_MUL_291);
	RzILOpPure *op_OR_293 = LOGOR(op_AND_225, op_LSHIFT_292);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_72 = SETG(Rdd_assoc, op_OR_71);
	RzILOpEffect *empty_73 = EMPTY();
	RzILOpEffect *op_ASSIGN_120 = SETG(usr_assoc, cond_119);
	RzILOpEffect *op_ASSIGN_146 = SETG(Rdd_assoc, op_OR_145);
	RzILOpEffect *empty_147 = EMPTY();
	RzILOpEffect *op_ASSIGN_194 = SETG(usr_assoc, cond_193);
	RzILOpEffect *op_ASSIGN_220 = SETG(Rdd_assoc, op_OR_219);
	RzILOpEffect *empty_221 = EMPTY();
	RzILOpEffect *op_ASSIGN_268 = SETG(usr_assoc, cond_267);
	RzILOpEffect *op_ASSIGN_294 = SETG(Rdd_assoc, op_OR_293);
	RzILOpEffect *empty_295 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_72, empty_73, op_ASSIGN_146, empty_147, op_ASSIGN_220, empty_221, op_ASSIGN_294, empty_295);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubw_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_ADD_15 = ADD(cast_st64_9, cast_st64_14);
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_15, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_MUL_23 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_ADD_28 = ADD(cast_st64_22, cast_st64_27);
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_ADD_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(op_AND_32), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, IL_FALSE, cast_st32_33);
	RzILOpPure *op_MUL_35 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(op_AND_37), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(cast_st32_38), cast_st32_38);
	RzILOpPure *op_ADD_40 = ADD(cast_st64_34, cast_st64_39);
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_50 = CAST(32, MSB(op_AND_49), op_AND_49);
	RzILOpPure *cast_st64_51 = CAST(32, IL_FALSE, cast_st32_50);
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_55 = CAST(32, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(cast_st32_55), cast_st32_55);
	RzILOpPure *op_ADD_57 = ADD(cast_st64_51, cast_st64_56);
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_ADD_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_ADD_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_68 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_69 = SHIFTL0(op_AND_67, op_MUL_68);
	RzILOpPure *op_OR_70 = LOGOR(op_AND_3, op_LSHIFT_69);
	RzILOpPure *op_MUL_73 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_73));
	RzILOpPure *op_NOT_75 = LOGNOT(op_LSHIFT_74);
	RzILOpPure *op_AND_76 = LOGAND(DUP(Rdd), op_NOT_75);
	RzILOpPure *op_NE_77 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_79, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_81 = CAST(32, MSB(op_AND_80), op_AND_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(cast_st32_81), cast_st32_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_84, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_86 = CAST(32, MSB(op_AND_85), op_AND_85);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(cast_st32_86), cast_st32_86);
	RzILOpPure *op_SUB_88 = SUB(cast_st64_82, cast_st64_87);
	RzILOpPure *c_call_89 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_88, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_90 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_89, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_91 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_92, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_94 = CAST(32, MSB(op_AND_93), op_AND_93);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(cast_st32_94), cast_st32_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_97, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_99 = CAST(32, MSB(op_AND_98), op_AND_98);
	RzILOpPure *cast_st64_100 = CAST(64, MSB(cast_st32_99), cast_st32_99);
	RzILOpPure *op_SUB_101 = SUB(cast_st64_95, cast_st64_100);
	RzILOpPure *op_EQ_102 = EQ(cond_90, op_SUB_101);
	RzILOpPure *op_MUL_103 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rss), op_MUL_103);
	RzILOpPure *op_AND_105 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_104, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_106 = CAST(32, MSB(op_AND_105), op_AND_105);
	RzILOpPure *cast_st64_107 = CAST(64, IL_FALSE, cast_st32_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_109, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_111 = CAST(32, MSB(op_AND_110), op_AND_110);
	RzILOpPure *cast_st64_112 = CAST(64, MSB(cast_st32_111), cast_st32_111);
	RzILOpPure *op_SUB_113 = SUB(cast_st64_107, cast_st64_112);
	RzILOpPure *c_call_114 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_115, c_call_116, VARLP("const_pos1")));
	RzILOpPure *cond_118 = ITE(c_call_114, c_call_117, usr);
	RzILOpPure *op_MUL_120 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(op_AND_122), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(32, IL_FALSE, cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzILOpPure *op_SUB_130 = SUB(cast_st64_124, cast_st64_129);
	RzILOpPure *op_LT_131 = LET("const_pos0", const_pos0, ULT(op_SUB_130, VARLP("const_pos0")));
	RzILOpPure *op_SUB_132 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_132));
	RzILOpPure *op_NEG_134 = NEG(op_LSHIFT_133);
	RzILOpPure *op_SUB_135 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_136 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_135));
	RzILOpPure *op_SUB_137 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_136, VARLP("const_pos1")));
	RzILOpPure *cond_138 = ITE(op_LT_131, op_NEG_134, op_SUB_137);
	RzILOpPure *cond_139 = ITE(op_EQ_102, op_SUB_113, cond_138);
	RzILOpPure *op_AND_140 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_139, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_141 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_142 = SHIFTL0(op_AND_140, op_MUL_141);
	RzILOpPure *op_OR_143 = LOGOR(op_AND_76, op_LSHIFT_142);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rdd_assoc, op_OR_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *op_ASSIGN_119 = SETG(usr_assoc, cond_118);
	RzILOpEffect *op_ASSIGN_144 = SETG(Rdd_assoc, op_OR_143);
	RzILOpEffect *empty_145 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_71, empty_72, op_ASSIGN_144, empty_145);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_ADD_15 = ADD(cast_st64_9, cast_st64_14);
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_15, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_MUL_23 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_ADD_28 = ADD(cast_st64_22, cast_st64_27);
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_ADD_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(op_AND_32), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, IL_FALSE, cast_st32_33);
	RzILOpPure *op_MUL_35 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(op_AND_37), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(cast_st32_38), cast_st32_38);
	RzILOpPure *op_ADD_40 = ADD(cast_st64_34, cast_st64_39);
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_50 = CAST(32, MSB(op_AND_49), op_AND_49);
	RzILOpPure *cast_st64_51 = CAST(32, IL_FALSE, cast_st32_50);
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_55 = CAST(32, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(cast_st32_55), cast_st32_55);
	RzILOpPure *op_ADD_57 = ADD(cast_st64_51, cast_st64_56);
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_ADD_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_ADD_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_68 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_69 = SHIFTL0(op_AND_67, op_MUL_68);
	RzILOpPure *op_OR_70 = LOGOR(op_AND_3, op_LSHIFT_69);
	RzILOpPure *op_MUL_73 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_73));
	RzILOpPure *op_NOT_75 = LOGNOT(op_LSHIFT_74);
	RzILOpPure *op_AND_76 = LOGAND(DUP(Rdd), op_NOT_75);
	RzILOpPure *op_NE_77 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_79, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_81 = CAST(32, MSB(op_AND_80), op_AND_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(cast_st32_81), cast_st32_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_84, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_86 = CAST(32, MSB(op_AND_85), op_AND_85);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(cast_st32_86), cast_st32_86);
	RzILOpPure *op_SUB_88 = SUB(cast_st64_82, cast_st64_87);
	RzILOpPure *c_call_89 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_88, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_90 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_89, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_91 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_92, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_94 = CAST(32, MSB(op_AND_93), op_AND_93);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(cast_st32_94), cast_st32_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_97, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_99 = CAST(32, MSB(op_AND_98), op_AND_98);
	RzILOpPure *cast_st64_100 = CAST(64, MSB(cast_st32_99), cast_st32_99);
	RzILOpPure *op_SUB_101 = SUB(cast_st64_95, cast_st64_100);
	RzILOpPure *op_EQ_102 = EQ(cond_90, op_SUB_101);
	RzILOpPure *op_MUL_103 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rss), op_MUL_103);
	RzILOpPure *op_AND_105 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_104, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_106 = CAST(32, MSB(op_AND_105), op_AND_105);
	RzILOpPure *cast_st64_107 = CAST(64, IL_FALSE, cast_st32_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_109, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_111 = CAST(32, MSB(op_AND_110), op_AND_110);
	RzILOpPure *cast_st64_112 = CAST(64, MSB(cast_st32_111), cast_st32_111);
	RzILOpPure *op_SUB_113 = SUB(cast_st64_107, cast_st64_112);
	RzILOpPure *c_call_114 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_115, c_call_116, VARLP("const_pos1")));
	RzILOpPure *cond_118 = ITE(c_call_114, c_call_117, usr);
	RzILOpPure *op_MUL_120 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(op_AND_122), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(32, IL_FALSE, cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzILOpPure *op_SUB_130 = SUB(cast_st64_124, cast_st64_129);
	RzILOpPure *op_LT_131 = LET("const_pos0", const_pos0, ULT(op_SUB_130, VARLP("const_pos0")));
	RzILOpPure *op_SUB_132 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_132));
	RzILOpPure *op_NEG_134 = NEG(op_LSHIFT_133);
	RzILOpPure *op_SUB_135 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_136 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_135));
	RzILOpPure *op_SUB_137 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_136, VARLP("const_pos1")));
	RzILOpPure *cond_138 = ITE(op_LT_131, op_NEG_134, op_SUB_137);
	RzILOpPure *cond_139 = ITE(op_EQ_102, op_SUB_113, cond_138);
	RzILOpPure *op_AND_140 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_139, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_141 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_142 = SHIFTL0(op_AND_140, op_MUL_141);
	RzILOpPure *op_OR_143 = LOGOR(op_AND_76, op_LSHIFT_142);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rdd_assoc, op_OR_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *op_ASSIGN_119 = SETG(usr_assoc, cond_118);
	RzILOpEffect *op_ASSIGN_144 = SETG(Rdd_assoc, op_OR_143);
	RzILOpEffect *empty_145 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_71, empty_72, op_ASSIGN_144, empty_145);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddh_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_SUB_13 = SUB(cast_st16_8, cast_st16_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_SUB_24 = SUB(cast_st16_19, cast_st16_23);
	RzILOpPure *op_EQ_25 = EQ(cond_15, op_SUB_24);
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(16, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_SUB_34 = SUB(cast_st16_29, cast_st16_33);
	RzILOpPure *c_call_35 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_38 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_36, c_call_37, VARLP("const_pos1")));
	RzILOpPure *cond_39 = ITE(c_call_35, c_call_38, usr);
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzILOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_48 = CAST(16, MSB(op_AND_47), op_AND_47);
	RzILOpPure *op_SUB_49 = SUB(cast_st16_44, cast_st16_48);
	RzILOpPure *op_LT_50 = LET("const_pos0", const_pos0, ULT(op_SUB_49, VARLP("const_pos0")));
	RzILOpPure *op_SUB_51 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_51));
	RzILOpPure *op_NEG_53 = NEG(op_LSHIFT_52);
	RzILOpPure *op_SUB_54 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_54));
	RzILOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cond_57 = ITE(op_LT_50, op_NEG_53, op_SUB_56);
	RzILOpPure *cond_58 = ITE(op_EQ_25, op_SUB_34, cond_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *op_MUL_61 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_3, op_LSHIFT_62);
	RzILOpPure *op_MUL_66 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rdd), op_NOT_68);
	RzILOpPure *op_NE_70 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_71 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_72 = SHIFTR0(DUP(Rss), op_MUL_71);
	RzILOpPure *op_AND_73 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_72, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(op_AND_73), op_AND_73);
	RzILOpPure *op_MUL_75 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rtt), op_MUL_75);
	RzILOpPure *op_AND_77 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_76, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_78 = CAST(16, MSB(op_AND_77), op_AND_77);
	RzILOpPure *op_ADD_79 = ADD(cast_st16_74, cast_st16_78);
	RzILOpPure *c_call_80 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_79, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_81 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_70, c_call_80, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_82 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *op_AND_84 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_83, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_85 = CAST(16, MSB(op_AND_84), op_AND_84);
	RzILOpPure *op_MUL_86 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rtt), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(op_AND_88), op_AND_88);
	RzILOpPure *op_ADD_90 = ADD(cast_st16_85, cast_st16_89);
	RzILOpPure *op_EQ_91 = EQ(cond_81, op_ADD_90);
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_ADD_100 = ADD(cast_st16_95, cast_st16_99);
	RzILOpPure *c_call_101 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_102 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_102, c_call_103, VARLP("const_pos1")));
	RzILOpPure *cond_105 = ITE(c_call_101, c_call_104, usr);
	RzILOpPure *op_MUL_107 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *op_AND_109 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_108, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_110 = CAST(32, IL_FALSE, op_AND_109);
	RzILOpPure *op_MUL_111 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rtt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(op_AND_113), op_AND_113);
	RzILOpPure *op_ADD_115 = ADD(cast_st16_110, cast_st16_114);
	RzILOpPure *op_LT_116 = LET("const_pos0", const_pos0, ULT(op_ADD_115, VARLP("const_pos0")));
	RzILOpPure *op_SUB_117 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_118 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_117));
	RzILOpPure *op_NEG_119 = NEG(op_LSHIFT_118);
	RzILOpPure *op_SUB_120 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_121 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_120));
	RzILOpPure *op_SUB_122 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_121, VARLP("const_pos1")));
	RzILOpPure *cond_123 = ITE(op_LT_116, op_NEG_119, op_SUB_122);
	RzILOpPure *cond_124 = ITE(op_EQ_91, op_ADD_100, cond_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_124, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_126 = CAST(64, IL_FALSE, op_AND_125);
	RzILOpPure *op_MUL_127 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_128 = SHIFTL0(cast_ut64_126, op_MUL_127);
	RzILOpPure *op_OR_129 = LOGOR(op_AND_69, op_LSHIFT_128);
	RzILOpPure *op_MUL_132 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_132));
	RzILOpPure *op_NOT_134 = LOGNOT(op_LSHIFT_133);
	RzILOpPure *op_AND_135 = LOGAND(DUP(Rdd), op_NOT_134);
	RzILOpPure *op_NE_136 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_137 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_138, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_140 = CAST(16, MSB(op_AND_139), op_AND_139);
	RzILOpPure *op_MUL_141 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_142 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_143 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_142, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_144 = CAST(16, MSB(op_AND_143), op_AND_143);
	RzILOpPure *op_SUB_145 = SUB(cast_st16_140, cast_st16_144);
	RzILOpPure *c_call_146 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_145, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_147 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_136, c_call_146, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_149 = SHIFTR0(DUP(Rss), op_MUL_148);
	RzILOpPure *op_AND_150 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_149, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_151 = CAST(16, MSB(op_AND_150), op_AND_150);
	RzILOpPure *op_MUL_152 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_153 = SHIFTR0(DUP(Rtt), op_MUL_152);
	RzILOpPure *op_AND_154 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_153, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_155 = CAST(16, MSB(op_AND_154), op_AND_154);
	RzILOpPure *op_SUB_156 = SUB(cast_st16_151, cast_st16_155);
	RzILOpPure *op_EQ_157 = EQ(cond_147, op_SUB_156);
	RzILOpPure *op_MUL_158 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_159 = SHIFTR0(DUP(Rss), op_MUL_158);
	RzILOpPure *op_AND_160 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_159, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_161 = CAST(32, IL_FALSE, op_AND_160);
	RzILOpPure *op_MUL_162 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_163 = SHIFTR0(DUP(Rtt), op_MUL_162);
	RzILOpPure *op_AND_164 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_163, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_165 = CAST(16, MSB(op_AND_164), op_AND_164);
	RzILOpPure *op_SUB_166 = SUB(cast_st16_161, cast_st16_165);
	RzILOpPure *c_call_167 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_168 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_169 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_170 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_168, c_call_169, VARLP("const_pos1")));
	RzILOpPure *cond_171 = ITE(c_call_167, c_call_170, usr);
	RzILOpPure *op_MUL_173 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_174 = SHIFTR0(DUP(Rss), op_MUL_173);
	RzILOpPure *op_AND_175 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_174, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_176 = CAST(32, IL_FALSE, op_AND_175);
	RzILOpPure *op_MUL_177 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *op_AND_179 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_178, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_180 = CAST(16, MSB(op_AND_179), op_AND_179);
	RzILOpPure *op_SUB_181 = SUB(cast_st16_176, cast_st16_180);
	RzILOpPure *op_LT_182 = LET("const_pos0", const_pos0, ULT(op_SUB_181, VARLP("const_pos0")));
	RzILOpPure *op_SUB_183 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_184 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_183));
	RzILOpPure *op_NEG_185 = NEG(op_LSHIFT_184);
	RzILOpPure *op_SUB_186 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_187 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_186));
	RzILOpPure *op_SUB_188 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_187, VARLP("const_pos1")));
	RzILOpPure *cond_189 = ITE(op_LT_182, op_NEG_185, op_SUB_188);
	RzILOpPure *cond_190 = ITE(op_EQ_157, op_SUB_166, cond_189);
	RzILOpPure *op_AND_191 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_190, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_192 = CAST(64, IL_FALSE, op_AND_191);
	RzILOpPure *op_MUL_193 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_194 = SHIFTL0(cast_ut64_192, op_MUL_193);
	RzILOpPure *op_OR_195 = LOGOR(op_AND_135, op_LSHIFT_194);
	RzILOpPure *op_MUL_198 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_199 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_198));
	RzILOpPure *op_NOT_200 = LOGNOT(op_LSHIFT_199);
	RzILOpPure *op_AND_201 = LOGAND(DUP(Rdd), op_NOT_200);
	RzILOpPure *op_NE_202 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_203 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_204 = SHIFTR0(DUP(Rss), op_MUL_203);
	RzILOpPure *op_AND_205 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_204, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_206 = CAST(16, MSB(op_AND_205), op_AND_205);
	RzILOpPure *op_MUL_207 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_208 = SHIFTR0(DUP(Rtt), op_MUL_207);
	RzILOpPure *op_AND_209 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_208, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_210 = CAST(16, MSB(op_AND_209), op_AND_209);
	RzILOpPure *op_ADD_211 = ADD(cast_st16_206, cast_st16_210);
	RzILOpPure *c_call_212 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_211, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_213 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_202, c_call_212, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_214 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rss), op_MUL_214);
	RzILOpPure *op_AND_216 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_215, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_217 = CAST(16, MSB(op_AND_216), op_AND_216);
	RzILOpPure *op_MUL_218 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rtt), op_MUL_218);
	RzILOpPure *op_AND_220 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_219, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_221 = CAST(16, MSB(op_AND_220), op_AND_220);
	RzILOpPure *op_ADD_222 = ADD(cast_st16_217, cast_st16_221);
	RzILOpPure *op_EQ_223 = EQ(cond_213, op_ADD_222);
	RzILOpPure *op_MUL_224 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_225 = SHIFTR0(DUP(Rss), op_MUL_224);
	RzILOpPure *op_AND_226 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_225, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_227 = CAST(32, IL_FALSE, op_AND_226);
	RzILOpPure *op_MUL_228 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rtt), op_MUL_228);
	RzILOpPure *op_AND_230 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_229, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_231 = CAST(16, MSB(op_AND_230), op_AND_230);
	RzILOpPure *op_ADD_232 = ADD(cast_st16_227, cast_st16_231);
	RzILOpPure *c_call_233 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_234 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_235 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_236 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_234, c_call_235, VARLP("const_pos1")));
	RzILOpPure *cond_237 = ITE(c_call_233, c_call_236, usr);
	RzILOpPure *op_MUL_239 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_240 = SHIFTR0(DUP(Rss), op_MUL_239);
	RzILOpPure *op_AND_241 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_240, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_242 = CAST(32, IL_FALSE, op_AND_241);
	RzILOpPure *op_MUL_243 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_244 = SHIFTR0(DUP(Rtt), op_MUL_243);
	RzILOpPure *op_AND_245 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_244, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_246 = CAST(16, MSB(op_AND_245), op_AND_245);
	RzILOpPure *op_ADD_247 = ADD(cast_st16_242, cast_st16_246);
	RzILOpPure *op_LT_248 = LET("const_pos0", const_pos0, ULT(op_ADD_247, VARLP("const_pos0")));
	RzILOpPure *op_SUB_249 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_250 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_249));
	RzILOpPure *op_NEG_251 = NEG(op_LSHIFT_250);
	RzILOpPure *op_SUB_252 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_253 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_252));
	RzILOpPure *op_SUB_254 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_253, VARLP("const_pos1")));
	RzILOpPure *cond_255 = ITE(op_LT_248, op_NEG_251, op_SUB_254);
	RzILOpPure *cond_256 = ITE(op_EQ_223, op_ADD_232, cond_255);
	RzILOpPure *op_AND_257 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_256, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_258 = CAST(64, IL_FALSE, op_AND_257);
	RzILOpPure *op_MUL_259 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_260 = SHIFTL0(cast_ut64_258, op_MUL_259);
	RzILOpPure *op_OR_261 = LOGOR(op_AND_201, op_LSHIFT_260);

	// WRITE
	RzILOpEffect *op_ASSIGN_40 = SETG(usr_assoc, cond_39);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_106 = SETG(usr_assoc, cond_105);
	RzILOpEffect *op_ASSIGN_130 = SETG(Rdd_assoc, op_OR_129);
	RzILOpEffect *empty_131 = EMPTY();
	RzILOpEffect *op_ASSIGN_172 = SETG(usr_assoc, cond_171);
	RzILOpEffect *op_ASSIGN_196 = SETG(Rdd_assoc, op_OR_195);
	RzILOpEffect *empty_197 = EMPTY();
	RzILOpEffect *op_ASSIGN_238 = SETG(usr_assoc, cond_237);
	RzILOpEffect *op_ASSIGN_262 = SETG(Rdd_assoc, op_OR_261);
	RzILOpEffect *empty_263 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_64, empty_65, op_ASSIGN_130, empty_131, op_ASSIGN_196, empty_197, op_ASSIGN_262, empty_263);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_SUB_13 = SUB(cast_st16_8, cast_st16_12);
	RzILOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_13, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_14, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_SUB_24 = SUB(cast_st16_19, cast_st16_23);
	RzILOpPure *op_EQ_25 = EQ(cond_15, op_SUB_24);
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(16, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_SUB_34 = SUB(cast_st16_29, cast_st16_33);
	RzILOpPure *c_call_35 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_38 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_36, c_call_37, VARLP("const_pos1")));
	RzILOpPure *cond_39 = ITE(c_call_35, c_call_38, usr);
	RzILOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzILOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_48 = CAST(16, MSB(op_AND_47), op_AND_47);
	RzILOpPure *op_SUB_49 = SUB(cast_st16_44, cast_st16_48);
	RzILOpPure *op_LT_50 = LET("const_pos0", const_pos0, ULT(op_SUB_49, VARLP("const_pos0")));
	RzILOpPure *op_SUB_51 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_51));
	RzILOpPure *op_NEG_53 = NEG(op_LSHIFT_52);
	RzILOpPure *op_SUB_54 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_54));
	RzILOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cond_57 = ITE(op_LT_50, op_NEG_53, op_SUB_56);
	RzILOpPure *cond_58 = ITE(op_EQ_25, op_SUB_34, cond_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *op_MUL_61 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_3, op_LSHIFT_62);
	RzILOpPure *op_MUL_66 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_66));
	RzILOpPure *op_NOT_68 = LOGNOT(op_LSHIFT_67);
	RzILOpPure *op_AND_69 = LOGAND(DUP(Rdd), op_NOT_68);
	RzILOpPure *op_NE_70 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_71 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_72 = SHIFTR0(DUP(Rss), op_MUL_71);
	RzILOpPure *op_AND_73 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_72, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(op_AND_73), op_AND_73);
	RzILOpPure *op_MUL_75 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rtt), op_MUL_75);
	RzILOpPure *op_AND_77 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_76, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_78 = CAST(16, MSB(op_AND_77), op_AND_77);
	RzILOpPure *op_ADD_79 = ADD(cast_st16_74, cast_st16_78);
	RzILOpPure *c_call_80 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_79, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_81 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_70, c_call_80, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_82 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *op_AND_84 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_83, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_85 = CAST(16, MSB(op_AND_84), op_AND_84);
	RzILOpPure *op_MUL_86 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rtt), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(op_AND_88), op_AND_88);
	RzILOpPure *op_ADD_90 = ADD(cast_st16_85, cast_st16_89);
	RzILOpPure *op_EQ_91 = EQ(cond_81, op_ADD_90);
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_ADD_100 = ADD(cast_st16_95, cast_st16_99);
	RzILOpPure *c_call_101 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_102 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_102, c_call_103, VARLP("const_pos1")));
	RzILOpPure *cond_105 = ITE(c_call_101, c_call_104, usr);
	RzILOpPure *op_MUL_107 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *op_AND_109 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_108, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_110 = CAST(32, IL_FALSE, op_AND_109);
	RzILOpPure *op_MUL_111 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rtt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(op_AND_113), op_AND_113);
	RzILOpPure *op_ADD_115 = ADD(cast_st16_110, cast_st16_114);
	RzILOpPure *op_LT_116 = LET("const_pos0", const_pos0, ULT(op_ADD_115, VARLP("const_pos0")));
	RzILOpPure *op_SUB_117 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_118 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_117));
	RzILOpPure *op_NEG_119 = NEG(op_LSHIFT_118);
	RzILOpPure *op_SUB_120 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_121 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_120));
	RzILOpPure *op_SUB_122 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_121, VARLP("const_pos1")));
	RzILOpPure *cond_123 = ITE(op_LT_116, op_NEG_119, op_SUB_122);
	RzILOpPure *cond_124 = ITE(op_EQ_91, op_ADD_100, cond_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_124, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_126 = CAST(64, IL_FALSE, op_AND_125);
	RzILOpPure *op_MUL_127 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_128 = SHIFTL0(cast_ut64_126, op_MUL_127);
	RzILOpPure *op_OR_129 = LOGOR(op_AND_69, op_LSHIFT_128);
	RzILOpPure *op_MUL_132 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_132));
	RzILOpPure *op_NOT_134 = LOGNOT(op_LSHIFT_133);
	RzILOpPure *op_AND_135 = LOGAND(DUP(Rdd), op_NOT_134);
	RzILOpPure *op_NE_136 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_137 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_138, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_140 = CAST(16, MSB(op_AND_139), op_AND_139);
	RzILOpPure *op_MUL_141 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_142 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_143 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_142, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_144 = CAST(16, MSB(op_AND_143), op_AND_143);
	RzILOpPure *op_SUB_145 = SUB(cast_st16_140, cast_st16_144);
	RzILOpPure *c_call_146 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_145, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_147 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_136, c_call_146, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_149 = SHIFTR0(DUP(Rss), op_MUL_148);
	RzILOpPure *op_AND_150 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_149, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_151 = CAST(16, MSB(op_AND_150), op_AND_150);
	RzILOpPure *op_MUL_152 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_153 = SHIFTR0(DUP(Rtt), op_MUL_152);
	RzILOpPure *op_AND_154 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_153, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_155 = CAST(16, MSB(op_AND_154), op_AND_154);
	RzILOpPure *op_SUB_156 = SUB(cast_st16_151, cast_st16_155);
	RzILOpPure *op_EQ_157 = EQ(cond_147, op_SUB_156);
	RzILOpPure *op_MUL_158 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_159 = SHIFTR0(DUP(Rss), op_MUL_158);
	RzILOpPure *op_AND_160 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_159, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_161 = CAST(32, IL_FALSE, op_AND_160);
	RzILOpPure *op_MUL_162 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_163 = SHIFTR0(DUP(Rtt), op_MUL_162);
	RzILOpPure *op_AND_164 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_163, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_165 = CAST(16, MSB(op_AND_164), op_AND_164);
	RzILOpPure *op_SUB_166 = SUB(cast_st16_161, cast_st16_165);
	RzILOpPure *c_call_167 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_168 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_169 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_170 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_168, c_call_169, VARLP("const_pos1")));
	RzILOpPure *cond_171 = ITE(c_call_167, c_call_170, usr);
	RzILOpPure *op_MUL_173 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_174 = SHIFTR0(DUP(Rss), op_MUL_173);
	RzILOpPure *op_AND_175 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_174, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_176 = CAST(32, IL_FALSE, op_AND_175);
	RzILOpPure *op_MUL_177 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *op_AND_179 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_178, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_180 = CAST(16, MSB(op_AND_179), op_AND_179);
	RzILOpPure *op_SUB_181 = SUB(cast_st16_176, cast_st16_180);
	RzILOpPure *op_LT_182 = LET("const_pos0", const_pos0, ULT(op_SUB_181, VARLP("const_pos0")));
	RzILOpPure *op_SUB_183 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_184 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_183));
	RzILOpPure *op_NEG_185 = NEG(op_LSHIFT_184);
	RzILOpPure *op_SUB_186 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_187 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_186));
	RzILOpPure *op_SUB_188 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_187, VARLP("const_pos1")));
	RzILOpPure *cond_189 = ITE(op_LT_182, op_NEG_185, op_SUB_188);
	RzILOpPure *cond_190 = ITE(op_EQ_157, op_SUB_166, cond_189);
	RzILOpPure *op_AND_191 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_190, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_192 = CAST(64, IL_FALSE, op_AND_191);
	RzILOpPure *op_MUL_193 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_194 = SHIFTL0(cast_ut64_192, op_MUL_193);
	RzILOpPure *op_OR_195 = LOGOR(op_AND_135, op_LSHIFT_194);
	RzILOpPure *op_MUL_198 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_199 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_198));
	RzILOpPure *op_NOT_200 = LOGNOT(op_LSHIFT_199);
	RzILOpPure *op_AND_201 = LOGAND(DUP(Rdd), op_NOT_200);
	RzILOpPure *op_NE_202 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_203 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_204 = SHIFTR0(DUP(Rss), op_MUL_203);
	RzILOpPure *op_AND_205 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_204, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_206 = CAST(16, MSB(op_AND_205), op_AND_205);
	RzILOpPure *op_MUL_207 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_208 = SHIFTR0(DUP(Rtt), op_MUL_207);
	RzILOpPure *op_AND_209 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_208, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_210 = CAST(16, MSB(op_AND_209), op_AND_209);
	RzILOpPure *op_ADD_211 = ADD(cast_st16_206, cast_st16_210);
	RzILOpPure *c_call_212 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_211, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_213 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_202, c_call_212, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_214 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rss), op_MUL_214);
	RzILOpPure *op_AND_216 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_215, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_217 = CAST(16, MSB(op_AND_216), op_AND_216);
	RzILOpPure *op_MUL_218 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rtt), op_MUL_218);
	RzILOpPure *op_AND_220 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_219, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_221 = CAST(16, MSB(op_AND_220), op_AND_220);
	RzILOpPure *op_ADD_222 = ADD(cast_st16_217, cast_st16_221);
	RzILOpPure *op_EQ_223 = EQ(cond_213, op_ADD_222);
	RzILOpPure *op_MUL_224 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_225 = SHIFTR0(DUP(Rss), op_MUL_224);
	RzILOpPure *op_AND_226 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_225, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_227 = CAST(32, IL_FALSE, op_AND_226);
	RzILOpPure *op_MUL_228 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rtt), op_MUL_228);
	RzILOpPure *op_AND_230 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_229, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_231 = CAST(16, MSB(op_AND_230), op_AND_230);
	RzILOpPure *op_ADD_232 = ADD(cast_st16_227, cast_st16_231);
	RzILOpPure *c_call_233 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_234 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_235 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_236 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_234, c_call_235, VARLP("const_pos1")));
	RzILOpPure *cond_237 = ITE(c_call_233, c_call_236, usr);
	RzILOpPure *op_MUL_239 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_240 = SHIFTR0(DUP(Rss), op_MUL_239);
	RzILOpPure *op_AND_241 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_240, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_242 = CAST(32, IL_FALSE, op_AND_241);
	RzILOpPure *op_MUL_243 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_244 = SHIFTR0(DUP(Rtt), op_MUL_243);
	RzILOpPure *op_AND_245 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_244, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_246 = CAST(16, MSB(op_AND_245), op_AND_245);
	RzILOpPure *op_ADD_247 = ADD(cast_st16_242, cast_st16_246);
	RzILOpPure *op_LT_248 = LET("const_pos0", const_pos0, ULT(op_ADD_247, VARLP("const_pos0")));
	RzILOpPure *op_SUB_249 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_250 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_249));
	RzILOpPure *op_NEG_251 = NEG(op_LSHIFT_250);
	RzILOpPure *op_SUB_252 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_253 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_252));
	RzILOpPure *op_SUB_254 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_253, VARLP("const_pos1")));
	RzILOpPure *cond_255 = ITE(op_LT_248, op_NEG_251, op_SUB_254);
	RzILOpPure *cond_256 = ITE(op_EQ_223, op_ADD_232, cond_255);
	RzILOpPure *op_AND_257 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_256, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_258 = CAST(64, IL_FALSE, op_AND_257);
	RzILOpPure *op_MUL_259 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_260 = SHIFTL0(cast_ut64_258, op_MUL_259);
	RzILOpPure *op_OR_261 = LOGOR(op_AND_201, op_LSHIFT_260);

	// WRITE
	RzILOpEffect *op_ASSIGN_40 = SETG(usr_assoc, cond_39);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *op_ASSIGN_106 = SETG(usr_assoc, cond_105);
	RzILOpEffect *op_ASSIGN_130 = SETG(Rdd_assoc, op_OR_129);
	RzILOpEffect *empty_131 = EMPTY();
	RzILOpEffect *op_ASSIGN_172 = SETG(usr_assoc, cond_171);
	RzILOpEffect *op_ASSIGN_196 = SETG(Rdd_assoc, op_OR_195);
	RzILOpEffect *empty_197 = EMPTY();
	RzILOpEffect *op_ASSIGN_238 = SETG(usr_assoc, cond_237);
	RzILOpEffect *op_ASSIGN_262 = SETG(Rdd_assoc, op_OR_261);
	RzILOpEffect *empty_263 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_64, empty_65, op_ASSIGN_130, empty_131, op_ASSIGN_196, empty_197, op_ASSIGN_262, empty_263);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddhr_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(32, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_SUB_13 = SUB(cast_st16_8, cast_st16_12);
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_SUB_13, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_21, cast_st16_25);
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_SUB_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_27, VARLP("const_pos1")));
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_RSHIFT_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_SUB_38 = SUB(cast_st16_33, cast_st16_37);
	RzILOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_SUB_38, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_40 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_39, VARLP("const_pos1")));
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_50 = CAST(32, IL_FALSE, op_AND_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(op_AND_53), op_AND_53);
	RzILOpPure *op_SUB_55 = SUB(cast_st16_50, cast_st16_54);
	RzILOpPure *op_ADD_56 = LET("const_pos1", const_pos1, ADD(op_SUB_55, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_57 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_56, VARLP("const_pos1")));
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_RSHIFT_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_66, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *op_MUL_69 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *op_OR_71 = LOGOR(op_AND_3, op_LSHIFT_70);
	RzILOpPure *op_MUL_74 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_74));
	RzILOpPure *op_NOT_76 = LOGNOT(op_LSHIFT_75);
	RzILOpPure *op_AND_77 = LOGAND(DUP(Rdd), op_NOT_76);
	RzILOpPure *op_NE_78 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_79 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(32, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_84, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_86 = CAST(16, MSB(op_AND_85), op_AND_85);
	RzILOpPure *op_ADD_87 = ADD(cast_st16_82, cast_st16_86);
	RzILOpPure *op_ADD_88 = LET("const_pos1", const_pos1, ADD(op_ADD_87, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_89 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_88, VARLP("const_pos1")));
	RzILOpPure *c_call_90 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_89, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_91 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_78, c_call_90, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_ADD_100 = ADD(cast_st16_95, cast_st16_99);
	RzILOpPure *op_ADD_101 = LET("const_pos1", const_pos1, ADD(op_ADD_100, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_101, VARLP("const_pos1")));
	RzILOpPure *op_EQ_103 = EQ(cond_91, op_RSHIFT_102);
	RzILOpPure *op_MUL_104 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_105 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *op_AND_106 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_105, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_107 = CAST(32, IL_FALSE, op_AND_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_109, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_111 = CAST(16, MSB(op_AND_110), op_AND_110);
	RzILOpPure *op_ADD_112 = ADD(cast_st16_107, cast_st16_111);
	RzILOpPure *op_ADD_113 = LET("const_pos1", const_pos1, ADD(op_ADD_112, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_114 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_113, VARLP("const_pos1")));
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_118 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_116, c_call_117, VARLP("const_pos1")));
	RzILOpPure *cond_119 = ITE(c_call_115, c_call_118, usr);
	RzILOpPure *op_MUL_121 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_122 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *op_AND_123 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_122, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_124 = CAST(32, IL_FALSE, op_AND_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_128 = CAST(16, MSB(op_AND_127), op_AND_127);
	RzILOpPure *op_ADD_129 = ADD(cast_st16_124, cast_st16_128);
	RzILOpPure *op_ADD_130 = LET("const_pos1", const_pos1, ADD(op_ADD_129, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_131 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *op_LT_132 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_131, VARLP("const_pos0")));
	RzILOpPure *op_SUB_133 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *op_NEG_135 = NEG(op_LSHIFT_134);
	RzILOpPure *op_SUB_136 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_136));
	RzILOpPure *op_SUB_138 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_137, VARLP("const_pos1")));
	RzILOpPure *cond_139 = ITE(op_LT_132, op_NEG_135, op_SUB_138);
	RzILOpPure *cond_140 = ITE(op_EQ_103, op_RSHIFT_114, cond_139);
	RzILOpPure *op_AND_141 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_140, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_142 = CAST(64, IL_FALSE, op_AND_141);
	RzILOpPure *op_MUL_143 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_144 = SHIFTL0(cast_ut64_142, op_MUL_143);
	RzILOpPure *op_OR_145 = LOGOR(op_AND_77, op_LSHIFT_144);
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_149 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_148));
	RzILOpPure *op_NOT_150 = LOGNOT(op_LSHIFT_149);
	RzILOpPure *op_AND_151 = LOGAND(DUP(Rdd), op_NOT_150);
	RzILOpPure *op_NE_152 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_153 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rss), op_MUL_153);
	RzILOpPure *op_AND_155 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_154, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_156 = CAST(32, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_158 = SHIFTR0(DUP(Rtt), op_MUL_157);
	RzILOpPure *op_AND_159 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_158, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_160 = CAST(16, MSB(op_AND_159), op_AND_159);
	RzILOpPure *op_SUB_161 = SUB(cast_st16_156, cast_st16_160);
	RzILOpPure *op_ADD_162 = LET("const_pos1", const_pos1, ADD(op_SUB_161, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_162, VARLP("const_pos1")));
	RzILOpPure *c_call_164 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_163, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_165 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_152, c_call_164, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_166 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_167 = SHIFTR0(DUP(Rss), op_MUL_166);
	RzILOpPure *op_AND_168 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_167, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_169 = CAST(32, IL_FALSE, op_AND_168);
	RzILOpPure *op_MUL_170 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rtt), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_171, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_173 = CAST(16, MSB(op_AND_172), op_AND_172);
	RzILOpPure *op_SUB_174 = SUB(cast_st16_169, cast_st16_173);
	RzILOpPure *op_ADD_175 = LET("const_pos1", const_pos1, ADD(op_SUB_174, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_176 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_175, VARLP("const_pos1")));
	RzILOpPure *op_EQ_177 = EQ(cond_165, op_RSHIFT_176);
	RzILOpPure *op_MUL_178 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rss), op_MUL_178);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_179, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_181 = CAST(32, IL_FALSE, op_AND_180);
	RzILOpPure *op_MUL_182 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rtt), op_MUL_182);
	RzILOpPure *op_AND_184 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_183, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_185 = CAST(16, MSB(op_AND_184), op_AND_184);
	RzILOpPure *op_SUB_186 = SUB(cast_st16_181, cast_st16_185);
	RzILOpPure *op_ADD_187 = LET("const_pos1", const_pos1, ADD(op_SUB_186, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_188 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_187, VARLP("const_pos1")));
	RzILOpPure *c_call_189 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_190 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_191 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_192 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_190, c_call_191, VARLP("const_pos1")));
	RzILOpPure *cond_193 = ITE(c_call_189, c_call_192, usr);
	RzILOpPure *op_MUL_195 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_196 = SHIFTR0(DUP(Rss), op_MUL_195);
	RzILOpPure *op_AND_197 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_196, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_198 = CAST(32, IL_FALSE, op_AND_197);
	RzILOpPure *op_MUL_199 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rtt), op_MUL_199);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_200, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_202 = CAST(16, MSB(op_AND_201), op_AND_201);
	RzILOpPure *op_SUB_203 = SUB(cast_st16_198, cast_st16_202);
	RzILOpPure *op_ADD_204 = LET("const_pos1", const_pos1, ADD(op_SUB_203, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_205 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_204, VARLP("const_pos1")));
	RzILOpPure *op_LT_206 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_205, VARLP("const_pos0")));
	RzILOpPure *op_SUB_207 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_208 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_207));
	RzILOpPure *op_NEG_209 = NEG(op_LSHIFT_208);
	RzILOpPure *op_SUB_210 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_211 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_210));
	RzILOpPure *op_SUB_212 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_211, VARLP("const_pos1")));
	RzILOpPure *cond_213 = ITE(op_LT_206, op_NEG_209, op_SUB_212);
	RzILOpPure *cond_214 = ITE(op_EQ_177, op_RSHIFT_188, cond_213);
	RzILOpPure *op_AND_215 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_214, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_216 = CAST(64, IL_FALSE, op_AND_215);
	RzILOpPure *op_MUL_217 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_218 = SHIFTL0(cast_ut64_216, op_MUL_217);
	RzILOpPure *op_OR_219 = LOGOR(op_AND_151, op_LSHIFT_218);
	RzILOpPure *op_MUL_222 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_223 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_222));
	RzILOpPure *op_NOT_224 = LOGNOT(op_LSHIFT_223);
	RzILOpPure *op_AND_225 = LOGAND(DUP(Rdd), op_NOT_224);
	RzILOpPure *op_NE_226 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_227 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_228 = SHIFTR0(DUP(Rss), op_MUL_227);
	RzILOpPure *op_AND_229 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_228, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_230 = CAST(32, IL_FALSE, op_AND_229);
	RzILOpPure *op_MUL_231 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_232 = SHIFTR0(DUP(Rtt), op_MUL_231);
	RzILOpPure *op_AND_233 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_232, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_234 = CAST(16, MSB(op_AND_233), op_AND_233);
	RzILOpPure *op_ADD_235 = ADD(cast_st16_230, cast_st16_234);
	RzILOpPure *op_ADD_236 = LET("const_pos1", const_pos1, ADD(op_ADD_235, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_237 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_236, VARLP("const_pos1")));
	RzILOpPure *c_call_238 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_237, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_239 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_226, c_call_238, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_240 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_241 = SHIFTR0(DUP(Rss), op_MUL_240);
	RzILOpPure *op_AND_242 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_241, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_243 = CAST(32, IL_FALSE, op_AND_242);
	RzILOpPure *op_MUL_244 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_245 = SHIFTR0(DUP(Rtt), op_MUL_244);
	RzILOpPure *op_AND_246 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_245, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_247 = CAST(16, MSB(op_AND_246), op_AND_246);
	RzILOpPure *op_ADD_248 = ADD(cast_st16_243, cast_st16_247);
	RzILOpPure *op_ADD_249 = LET("const_pos1", const_pos1, ADD(op_ADD_248, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_250 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_249, VARLP("const_pos1")));
	RzILOpPure *op_EQ_251 = EQ(cond_239, op_RSHIFT_250);
	RzILOpPure *op_MUL_252 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_253 = SHIFTR0(DUP(Rss), op_MUL_252);
	RzILOpPure *op_AND_254 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_253, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_255 = CAST(32, IL_FALSE, op_AND_254);
	RzILOpPure *op_MUL_256 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_257 = SHIFTR0(DUP(Rtt), op_MUL_256);
	RzILOpPure *op_AND_258 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_257, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_259 = CAST(16, MSB(op_AND_258), op_AND_258);
	RzILOpPure *op_ADD_260 = ADD(cast_st16_255, cast_st16_259);
	RzILOpPure *op_ADD_261 = LET("const_pos1", const_pos1, ADD(op_ADD_260, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_262 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_261, VARLP("const_pos1")));
	RzILOpPure *c_call_263 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_264 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_265 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_266 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_264, c_call_265, VARLP("const_pos1")));
	RzILOpPure *cond_267 = ITE(c_call_263, c_call_266, usr);
	RzILOpPure *op_MUL_269 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *op_AND_271 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_270, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_272 = CAST(32, IL_FALSE, op_AND_271);
	RzILOpPure *op_MUL_273 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_274 = SHIFTR0(DUP(Rtt), op_MUL_273);
	RzILOpPure *op_AND_275 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_274, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_276 = CAST(16, MSB(op_AND_275), op_AND_275);
	RzILOpPure *op_ADD_277 = ADD(cast_st16_272, cast_st16_276);
	RzILOpPure *op_ADD_278 = LET("const_pos1", const_pos1, ADD(op_ADD_277, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_279 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_278, VARLP("const_pos1")));
	RzILOpPure *op_LT_280 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_279, VARLP("const_pos0")));
	RzILOpPure *op_SUB_281 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_282 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_281));
	RzILOpPure *op_NEG_283 = NEG(op_LSHIFT_282);
	RzILOpPure *op_SUB_284 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_285 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_284));
	RzILOpPure *op_SUB_286 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_285, VARLP("const_pos1")));
	RzILOpPure *cond_287 = ITE(op_LT_280, op_NEG_283, op_SUB_286);
	RzILOpPure *cond_288 = ITE(op_EQ_251, op_RSHIFT_262, cond_287);
	RzILOpPure *op_AND_289 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_288, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_290 = CAST(64, IL_FALSE, op_AND_289);
	RzILOpPure *op_MUL_291 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_292 = SHIFTL0(cast_ut64_290, op_MUL_291);
	RzILOpPure *op_OR_293 = LOGOR(op_AND_225, op_LSHIFT_292);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_72 = SETG(Rdd_assoc, op_OR_71);
	RzILOpEffect *empty_73 = EMPTY();
	RzILOpEffect *op_ASSIGN_120 = SETG(usr_assoc, cond_119);
	RzILOpEffect *op_ASSIGN_146 = SETG(Rdd_assoc, op_OR_145);
	RzILOpEffect *empty_147 = EMPTY();
	RzILOpEffect *op_ASSIGN_194 = SETG(usr_assoc, cond_193);
	RzILOpEffect *op_ASSIGN_220 = SETG(Rdd_assoc, op_OR_219);
	RzILOpEffect *empty_221 = EMPTY();
	RzILOpEffect *op_ASSIGN_268 = SETG(usr_assoc, cond_267);
	RzILOpEffect *op_ASSIGN_294 = SETG(Rdd_assoc, op_OR_293);
	RzILOpEffect *empty_295 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_72, empty_73, op_ASSIGN_146, empty_147, op_ASSIGN_220, empty_221, op_ASSIGN_294, empty_295);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(32, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_SUB_13 = SUB(cast_st16_8, cast_st16_12);
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_SUB_13, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_21, cast_st16_25);
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_SUB_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_27, VARLP("const_pos1")));
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_RSHIFT_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_SUB_38 = SUB(cast_st16_33, cast_st16_37);
	RzILOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_SUB_38, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_40 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_39, VARLP("const_pos1")));
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_50 = CAST(32, IL_FALSE, op_AND_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(op_AND_53), op_AND_53);
	RzILOpPure *op_SUB_55 = SUB(cast_st16_50, cast_st16_54);
	RzILOpPure *op_ADD_56 = LET("const_pos1", const_pos1, ADD(op_SUB_55, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_57 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_56, VARLP("const_pos1")));
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_RSHIFT_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_66, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *op_MUL_69 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *op_OR_71 = LOGOR(op_AND_3, op_LSHIFT_70);
	RzILOpPure *op_MUL_74 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_74));
	RzILOpPure *op_NOT_76 = LOGNOT(op_LSHIFT_75);
	RzILOpPure *op_AND_77 = LOGAND(DUP(Rdd), op_NOT_76);
	RzILOpPure *op_NE_78 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_79 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(32, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_84, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_86 = CAST(16, MSB(op_AND_85), op_AND_85);
	RzILOpPure *op_ADD_87 = ADD(cast_st16_82, cast_st16_86);
	RzILOpPure *op_ADD_88 = LET("const_pos1", const_pos1, ADD(op_ADD_87, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_89 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_88, VARLP("const_pos1")));
	RzILOpPure *c_call_90 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_89, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_91 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_78, c_call_90, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_ADD_100 = ADD(cast_st16_95, cast_st16_99);
	RzILOpPure *op_ADD_101 = LET("const_pos1", const_pos1, ADD(op_ADD_100, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_101, VARLP("const_pos1")));
	RzILOpPure *op_EQ_103 = EQ(cond_91, op_RSHIFT_102);
	RzILOpPure *op_MUL_104 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_105 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *op_AND_106 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_105, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_107 = CAST(32, IL_FALSE, op_AND_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_109, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_111 = CAST(16, MSB(op_AND_110), op_AND_110);
	RzILOpPure *op_ADD_112 = ADD(cast_st16_107, cast_st16_111);
	RzILOpPure *op_ADD_113 = LET("const_pos1", const_pos1, ADD(op_ADD_112, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_114 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_113, VARLP("const_pos1")));
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_118 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_116, c_call_117, VARLP("const_pos1")));
	RzILOpPure *cond_119 = ITE(c_call_115, c_call_118, usr);
	RzILOpPure *op_MUL_121 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_122 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *op_AND_123 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_122, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_124 = CAST(32, IL_FALSE, op_AND_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_128 = CAST(16, MSB(op_AND_127), op_AND_127);
	RzILOpPure *op_ADD_129 = ADD(cast_st16_124, cast_st16_128);
	RzILOpPure *op_ADD_130 = LET("const_pos1", const_pos1, ADD(op_ADD_129, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_131 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *op_LT_132 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_131, VARLP("const_pos0")));
	RzILOpPure *op_SUB_133 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *op_NEG_135 = NEG(op_LSHIFT_134);
	RzILOpPure *op_SUB_136 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_136));
	RzILOpPure *op_SUB_138 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_137, VARLP("const_pos1")));
	RzILOpPure *cond_139 = ITE(op_LT_132, op_NEG_135, op_SUB_138);
	RzILOpPure *cond_140 = ITE(op_EQ_103, op_RSHIFT_114, cond_139);
	RzILOpPure *op_AND_141 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_140, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_142 = CAST(64, IL_FALSE, op_AND_141);
	RzILOpPure *op_MUL_143 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_144 = SHIFTL0(cast_ut64_142, op_MUL_143);
	RzILOpPure *op_OR_145 = LOGOR(op_AND_77, op_LSHIFT_144);
	RzILOpPure *op_MUL_148 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_149 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_148));
	RzILOpPure *op_NOT_150 = LOGNOT(op_LSHIFT_149);
	RzILOpPure *op_AND_151 = LOGAND(DUP(Rdd), op_NOT_150);
	RzILOpPure *op_NE_152 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_153 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rss), op_MUL_153);
	RzILOpPure *op_AND_155 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_154, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_156 = CAST(32, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_158 = SHIFTR0(DUP(Rtt), op_MUL_157);
	RzILOpPure *op_AND_159 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_158, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_160 = CAST(16, MSB(op_AND_159), op_AND_159);
	RzILOpPure *op_SUB_161 = SUB(cast_st16_156, cast_st16_160);
	RzILOpPure *op_ADD_162 = LET("const_pos1", const_pos1, ADD(op_SUB_161, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_162, VARLP("const_pos1")));
	RzILOpPure *c_call_164 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_163, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_165 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_152, c_call_164, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_166 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_167 = SHIFTR0(DUP(Rss), op_MUL_166);
	RzILOpPure *op_AND_168 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_167, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_169 = CAST(32, IL_FALSE, op_AND_168);
	RzILOpPure *op_MUL_170 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rtt), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_171, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_173 = CAST(16, MSB(op_AND_172), op_AND_172);
	RzILOpPure *op_SUB_174 = SUB(cast_st16_169, cast_st16_173);
	RzILOpPure *op_ADD_175 = LET("const_pos1", const_pos1, ADD(op_SUB_174, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_176 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_175, VARLP("const_pos1")));
	RzILOpPure *op_EQ_177 = EQ(cond_165, op_RSHIFT_176);
	RzILOpPure *op_MUL_178 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rss), op_MUL_178);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_179, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_181 = CAST(32, IL_FALSE, op_AND_180);
	RzILOpPure *op_MUL_182 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rtt), op_MUL_182);
	RzILOpPure *op_AND_184 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_183, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_185 = CAST(16, MSB(op_AND_184), op_AND_184);
	RzILOpPure *op_SUB_186 = SUB(cast_st16_181, cast_st16_185);
	RzILOpPure *op_ADD_187 = LET("const_pos1", const_pos1, ADD(op_SUB_186, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_188 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_187, VARLP("const_pos1")));
	RzILOpPure *c_call_189 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_190 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_191 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_192 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_190, c_call_191, VARLP("const_pos1")));
	RzILOpPure *cond_193 = ITE(c_call_189, c_call_192, usr);
	RzILOpPure *op_MUL_195 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_196 = SHIFTR0(DUP(Rss), op_MUL_195);
	RzILOpPure *op_AND_197 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_196, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_198 = CAST(32, IL_FALSE, op_AND_197);
	RzILOpPure *op_MUL_199 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rtt), op_MUL_199);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_200, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_202 = CAST(16, MSB(op_AND_201), op_AND_201);
	RzILOpPure *op_SUB_203 = SUB(cast_st16_198, cast_st16_202);
	RzILOpPure *op_ADD_204 = LET("const_pos1", const_pos1, ADD(op_SUB_203, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_205 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_204, VARLP("const_pos1")));
	RzILOpPure *op_LT_206 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_205, VARLP("const_pos0")));
	RzILOpPure *op_SUB_207 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_208 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_207));
	RzILOpPure *op_NEG_209 = NEG(op_LSHIFT_208);
	RzILOpPure *op_SUB_210 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_211 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_210));
	RzILOpPure *op_SUB_212 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_211, VARLP("const_pos1")));
	RzILOpPure *cond_213 = ITE(op_LT_206, op_NEG_209, op_SUB_212);
	RzILOpPure *cond_214 = ITE(op_EQ_177, op_RSHIFT_188, cond_213);
	RzILOpPure *op_AND_215 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_214, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_216 = CAST(64, IL_FALSE, op_AND_215);
	RzILOpPure *op_MUL_217 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_218 = SHIFTL0(cast_ut64_216, op_MUL_217);
	RzILOpPure *op_OR_219 = LOGOR(op_AND_151, op_LSHIFT_218);
	RzILOpPure *op_MUL_222 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_223 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_222));
	RzILOpPure *op_NOT_224 = LOGNOT(op_LSHIFT_223);
	RzILOpPure *op_AND_225 = LOGAND(DUP(Rdd), op_NOT_224);
	RzILOpPure *op_NE_226 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_227 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_228 = SHIFTR0(DUP(Rss), op_MUL_227);
	RzILOpPure *op_AND_229 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_228, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_230 = CAST(32, IL_FALSE, op_AND_229);
	RzILOpPure *op_MUL_231 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_232 = SHIFTR0(DUP(Rtt), op_MUL_231);
	RzILOpPure *op_AND_233 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_232, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_234 = CAST(16, MSB(op_AND_233), op_AND_233);
	RzILOpPure *op_ADD_235 = ADD(cast_st16_230, cast_st16_234);
	RzILOpPure *op_ADD_236 = LET("const_pos1", const_pos1, ADD(op_ADD_235, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_237 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_236, VARLP("const_pos1")));
	RzILOpPure *c_call_238 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_237, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_239 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_226, c_call_238, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_240 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_241 = SHIFTR0(DUP(Rss), op_MUL_240);
	RzILOpPure *op_AND_242 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_241, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_243 = CAST(32, IL_FALSE, op_AND_242);
	RzILOpPure *op_MUL_244 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_245 = SHIFTR0(DUP(Rtt), op_MUL_244);
	RzILOpPure *op_AND_246 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_245, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_247 = CAST(16, MSB(op_AND_246), op_AND_246);
	RzILOpPure *op_ADD_248 = ADD(cast_st16_243, cast_st16_247);
	RzILOpPure *op_ADD_249 = LET("const_pos1", const_pos1, ADD(op_ADD_248, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_250 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_249, VARLP("const_pos1")));
	RzILOpPure *op_EQ_251 = EQ(cond_239, op_RSHIFT_250);
	RzILOpPure *op_MUL_252 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_253 = SHIFTR0(DUP(Rss), op_MUL_252);
	RzILOpPure *op_AND_254 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_253, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_255 = CAST(32, IL_FALSE, op_AND_254);
	RzILOpPure *op_MUL_256 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_257 = SHIFTR0(DUP(Rtt), op_MUL_256);
	RzILOpPure *op_AND_258 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_257, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_259 = CAST(16, MSB(op_AND_258), op_AND_258);
	RzILOpPure *op_ADD_260 = ADD(cast_st16_255, cast_st16_259);
	RzILOpPure *op_ADD_261 = LET("const_pos1", const_pos1, ADD(op_ADD_260, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_262 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_261, VARLP("const_pos1")));
	RzILOpPure *c_call_263 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_264 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_265 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_266 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_264, c_call_265, VARLP("const_pos1")));
	RzILOpPure *cond_267 = ITE(c_call_263, c_call_266, usr);
	RzILOpPure *op_MUL_269 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *op_AND_271 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_270, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_272 = CAST(32, IL_FALSE, op_AND_271);
	RzILOpPure *op_MUL_273 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_274 = SHIFTR0(DUP(Rtt), op_MUL_273);
	RzILOpPure *op_AND_275 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_274, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_276 = CAST(16, MSB(op_AND_275), op_AND_275);
	RzILOpPure *op_ADD_277 = ADD(cast_st16_272, cast_st16_276);
	RzILOpPure *op_ADD_278 = LET("const_pos1", const_pos1, ADD(op_ADD_277, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_279 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_278, VARLP("const_pos1")));
	RzILOpPure *op_LT_280 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_279, VARLP("const_pos0")));
	RzILOpPure *op_SUB_281 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_282 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_281));
	RzILOpPure *op_NEG_283 = NEG(op_LSHIFT_282);
	RzILOpPure *op_SUB_284 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_285 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_284));
	RzILOpPure *op_SUB_286 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_285, VARLP("const_pos1")));
	RzILOpPure *cond_287 = ITE(op_LT_280, op_NEG_283, op_SUB_286);
	RzILOpPure *cond_288 = ITE(op_EQ_251, op_RSHIFT_262, cond_287);
	RzILOpPure *op_AND_289 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_288, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_290 = CAST(64, IL_FALSE, op_AND_289);
	RzILOpPure *op_MUL_291 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_292 = SHIFTL0(cast_ut64_290, op_MUL_291);
	RzILOpPure *op_OR_293 = LOGOR(op_AND_225, op_LSHIFT_292);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_72 = SETG(Rdd_assoc, op_OR_71);
	RzILOpEffect *empty_73 = EMPTY();
	RzILOpEffect *op_ASSIGN_120 = SETG(usr_assoc, cond_119);
	RzILOpEffect *op_ASSIGN_146 = SETG(Rdd_assoc, op_OR_145);
	RzILOpEffect *empty_147 = EMPTY();
	RzILOpEffect *op_ASSIGN_194 = SETG(usr_assoc, cond_193);
	RzILOpEffect *op_ASSIGN_220 = SETG(Rdd_assoc, op_OR_219);
	RzILOpEffect *empty_221 = EMPTY();
	RzILOpEffect *op_ASSIGN_268 = SETG(usr_assoc, cond_267);
	RzILOpEffect *op_ASSIGN_294 = SETG(Rdd_assoc, op_OR_293);
	RzILOpEffect *empty_295 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_72, empty_73, op_ASSIGN_146, empty_147, op_ASSIGN_220, empty_221, op_ASSIGN_294, empty_295);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddw_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_SUB_15 = SUB(cast_st64_9, cast_st64_14);
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_15, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_MUL_23 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_SUB_28 = SUB(cast_st64_22, cast_st64_27);
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_SUB_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(op_AND_32), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, IL_FALSE, cast_st32_33);
	RzILOpPure *op_MUL_35 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(op_AND_37), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(cast_st32_38), cast_st32_38);
	RzILOpPure *op_SUB_40 = SUB(cast_st64_34, cast_st64_39);
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_50 = CAST(32, MSB(op_AND_49), op_AND_49);
	RzILOpPure *cast_st64_51 = CAST(32, IL_FALSE, cast_st32_50);
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_55 = CAST(32, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(cast_st32_55), cast_st32_55);
	RzILOpPure *op_SUB_57 = SUB(cast_st64_51, cast_st64_56);
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_SUB_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_SUB_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_68 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_69 = SHIFTL0(op_AND_67, op_MUL_68);
	RzILOpPure *op_OR_70 = LOGOR(op_AND_3, op_LSHIFT_69);
	RzILOpPure *op_MUL_73 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_73));
	RzILOpPure *op_NOT_75 = LOGNOT(op_LSHIFT_74);
	RzILOpPure *op_AND_76 = LOGAND(DUP(Rdd), op_NOT_75);
	RzILOpPure *op_NE_77 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_79, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_81 = CAST(32, MSB(op_AND_80), op_AND_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(cast_st32_81), cast_st32_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_84, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_86 = CAST(32, MSB(op_AND_85), op_AND_85);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(cast_st32_86), cast_st32_86);
	RzILOpPure *op_ADD_88 = ADD(cast_st64_82, cast_st64_87);
	RzILOpPure *c_call_89 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_88, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_90 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_89, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_91 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_92, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_94 = CAST(32, MSB(op_AND_93), op_AND_93);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(cast_st32_94), cast_st32_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_97, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_99 = CAST(32, MSB(op_AND_98), op_AND_98);
	RzILOpPure *cast_st64_100 = CAST(64, MSB(cast_st32_99), cast_st32_99);
	RzILOpPure *op_ADD_101 = ADD(cast_st64_95, cast_st64_100);
	RzILOpPure *op_EQ_102 = EQ(cond_90, op_ADD_101);
	RzILOpPure *op_MUL_103 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rss), op_MUL_103);
	RzILOpPure *op_AND_105 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_104, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_106 = CAST(32, MSB(op_AND_105), op_AND_105);
	RzILOpPure *cast_st64_107 = CAST(64, IL_FALSE, cast_st32_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_109, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_111 = CAST(32, MSB(op_AND_110), op_AND_110);
	RzILOpPure *cast_st64_112 = CAST(64, MSB(cast_st32_111), cast_st32_111);
	RzILOpPure *op_ADD_113 = ADD(cast_st64_107, cast_st64_112);
	RzILOpPure *c_call_114 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_115, c_call_116, VARLP("const_pos1")));
	RzILOpPure *cond_118 = ITE(c_call_114, c_call_117, usr);
	RzILOpPure *op_MUL_120 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(op_AND_122), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(32, IL_FALSE, cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzILOpPure *op_ADD_130 = ADD(cast_st64_124, cast_st64_129);
	RzILOpPure *op_LT_131 = LET("const_pos0", const_pos0, ULT(op_ADD_130, VARLP("const_pos0")));
	RzILOpPure *op_SUB_132 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_132));
	RzILOpPure *op_NEG_134 = NEG(op_LSHIFT_133);
	RzILOpPure *op_SUB_135 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_136 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_135));
	RzILOpPure *op_SUB_137 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_136, VARLP("const_pos1")));
	RzILOpPure *cond_138 = ITE(op_LT_131, op_NEG_134, op_SUB_137);
	RzILOpPure *cond_139 = ITE(op_EQ_102, op_ADD_113, cond_138);
	RzILOpPure *op_AND_140 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_139, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_141 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_142 = SHIFTL0(op_AND_140, op_MUL_141);
	RzILOpPure *op_OR_143 = LOGOR(op_AND_76, op_LSHIFT_142);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rdd_assoc, op_OR_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *op_ASSIGN_119 = SETG(usr_assoc, cond_118);
	RzILOpEffect *op_ASSIGN_144 = SETG(Rdd_assoc, op_OR_143);
	RzILOpEffect *empty_145 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_71, empty_72, op_ASSIGN_144, empty_145);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_SUB_15 = SUB(cast_st64_9, cast_st64_14);
	RzILOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_15, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_16, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_MUL_23 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_SUB_28 = SUB(cast_st64_22, cast_st64_27);
	RzILOpPure *op_EQ_29 = EQ(cond_17, op_SUB_28);
	RzILOpPure *op_MUL_30 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(op_AND_32), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, IL_FALSE, cast_st32_33);
	RzILOpPure *op_MUL_35 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(op_AND_37), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(cast_st32_38), cast_st32_38);
	RzILOpPure *op_SUB_40 = SUB(cast_st64_34, cast_st64_39);
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_44 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_42, c_call_43, VARLP("const_pos1")));
	RzILOpPure *cond_45 = ITE(c_call_41, c_call_44, usr);
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_50 = CAST(32, MSB(op_AND_49), op_AND_49);
	RzILOpPure *cast_st64_51 = CAST(32, IL_FALSE, cast_st32_50);
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_55 = CAST(32, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(cast_st32_55), cast_st32_55);
	RzILOpPure *op_SUB_57 = SUB(cast_st64_51, cast_st64_56);
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(op_SUB_57, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_SUB_64 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_63, VARLP("const_pos1")));
	RzILOpPure *cond_65 = ITE(op_LT_58, op_NEG_61, op_SUB_64);
	RzILOpPure *cond_66 = ITE(op_EQ_29, op_SUB_40, cond_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_68 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_69 = SHIFTL0(op_AND_67, op_MUL_68);
	RzILOpPure *op_OR_70 = LOGOR(op_AND_3, op_LSHIFT_69);
	RzILOpPure *op_MUL_73 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_73));
	RzILOpPure *op_NOT_75 = LOGNOT(op_LSHIFT_74);
	RzILOpPure *op_AND_76 = LOGAND(DUP(Rdd), op_NOT_75);
	RzILOpPure *op_NE_77 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_79, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_81 = CAST(32, MSB(op_AND_80), op_AND_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(cast_st32_81), cast_st32_81);
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_84, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_86 = CAST(32, MSB(op_AND_85), op_AND_85);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(cast_st32_86), cast_st32_86);
	RzILOpPure *op_ADD_88 = ADD(cast_st64_82, cast_st64_87);
	RzILOpPure *c_call_89 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_88, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_90 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_89, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_91 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_92, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_94 = CAST(32, MSB(op_AND_93), op_AND_93);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(cast_st32_94), cast_st32_94);
	RzILOpPure *op_MUL_96 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_97, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_99 = CAST(32, MSB(op_AND_98), op_AND_98);
	RzILOpPure *cast_st64_100 = CAST(64, MSB(cast_st32_99), cast_st32_99);
	RzILOpPure *op_ADD_101 = ADD(cast_st64_95, cast_st64_100);
	RzILOpPure *op_EQ_102 = EQ(cond_90, op_ADD_101);
	RzILOpPure *op_MUL_103 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rss), op_MUL_103);
	RzILOpPure *op_AND_105 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_104, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_106 = CAST(32, MSB(op_AND_105), op_AND_105);
	RzILOpPure *cast_st64_107 = CAST(64, IL_FALSE, cast_st32_106);
	RzILOpPure *op_MUL_108 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_109, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_111 = CAST(32, MSB(op_AND_110), op_AND_110);
	RzILOpPure *cast_st64_112 = CAST(64, MSB(cast_st32_111), cast_st32_111);
	RzILOpPure *op_ADD_113 = ADD(cast_st64_107, cast_st64_112);
	RzILOpPure *c_call_114 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_115 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_116 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_117 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_115, c_call_116, VARLP("const_pos1")));
	RzILOpPure *cond_118 = ITE(c_call_114, c_call_117, usr);
	RzILOpPure *op_MUL_120 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(op_AND_122), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(32, IL_FALSE, cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzILOpPure *op_ADD_130 = ADD(cast_st64_124, cast_st64_129);
	RzILOpPure *op_LT_131 = LET("const_pos0", const_pos0, ULT(op_ADD_130, VARLP("const_pos0")));
	RzILOpPure *op_SUB_132 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_133 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_132));
	RzILOpPure *op_NEG_134 = NEG(op_LSHIFT_133);
	RzILOpPure *op_SUB_135 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_136 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_135));
	RzILOpPure *op_SUB_137 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_136, VARLP("const_pos1")));
	RzILOpPure *cond_138 = ITE(op_LT_131, op_NEG_134, op_SUB_137);
	RzILOpPure *cond_139 = ITE(op_EQ_102, op_ADD_113, cond_138);
	RzILOpPure *op_AND_140 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_139, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_141 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_142 = SHIFTL0(op_AND_140, op_MUL_141);
	RzILOpPure *op_OR_143 = LOGOR(op_AND_76, op_LSHIFT_142);

	// WRITE
	RzILOpEffect *op_ASSIGN_46 = SETG(usr_assoc, cond_45);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rdd_assoc, op_OR_70);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *op_ASSIGN_119 = SETG(usr_assoc, cond_118);
	RzILOpEffect *op_ASSIGN_144 = SETG(Rdd_assoc, op_OR_143);
	RzILOpEffect *empty_145 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_71, empty_72, op_ASSIGN_144, empty_145);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>