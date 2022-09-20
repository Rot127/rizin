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

RzILOpEffect *hex_il_op_l2_deallocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *cast_9 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_8 = LOGXOR(cast_9, op_LSHIFT_7);
	RzILOpPure *cast_11 = CAST(64, MSB(DUP(op_XOR_8)), op_XOR_8);
	RzILOpPure *op_ADD_12 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_11);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_2, op_ASSIGN_5, op_ASSIGN_10, op_ASSIGN_13, empty_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(8, IL_FALSE, cast_ut1_6);
	RzILOpPure *cast_ut8_9 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_9, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_12 = LOGOR(op_RSHIFT_10, op_LSHIFT_11);
	RzILOpPure *cast_14 = CAST(64, MSB(DUP(op_OR_12)), op_OR_12);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_8);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_14);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(8, IL_FALSE, cast_ut1_8);
	RzILOpPure *cast_ut8_11 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_12 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_11, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_14 = LOGOR(op_RSHIFT_12, op_LSHIFT_13);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_OR_14)), op_OR_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmpV", cast_10);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cast_ut1_7);
	RzILOpPure *cast_ut8_10 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_11 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_10, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_13 = LOGOR(op_RSHIFT_11, op_LSHIFT_12);
	RzILOpPure *cast_15 = CAST(64, MSB(DUP(op_OR_13)), op_OR_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_9);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_15);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(8, IL_FALSE, cast_ut2_6);
	RzILOpPure *cast_ut8_9 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_10 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_9, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_12 = LOGOR(op_RSHIFT_10, op_LSHIFT_11);
	RzILOpPure *cast_14 = CAST(64, MSB(DUP(op_OR_12)), op_OR_12);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_8);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_14);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7, op_ASSIGN_13, empty_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(8, IL_FALSE, cast_ut2_8);
	RzILOpPure *cast_ut8_11 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_12 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_11, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_14 = LOGOR(op_RSHIFT_12, op_LSHIFT_13);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(op_OR_14)), op_OR_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmpV", cast_10);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_16);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cast_ut2_7);
	RzILOpPure *cast_ut8_10 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_11 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_10, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_13 = LOGOR(op_RSHIFT_11, op_LSHIFT_12);
	RzILOpPure *cast_15 = CAST(64, MSB(DUP(op_OR_13)), op_OR_13);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_9);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_15);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp480;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_9 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_10 = LET("const_pos2", const_pos2, ULT(cast_11, VARLP("const_pos2")));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(cast_16, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_17 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_18 = LOGNOT(op_LSHIFT_17);
	RzILOpPure *cast_20 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_19 = LOGAND(cast_20, op_NOT_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(cast_22, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(VARL("tmpV"), op_MUL_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_RSHIFT_23);
	RzILOpPure *op_AND_24 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_26 = CAST(8, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, cast_st8_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", cast_9);
	RzILOpEffect *op_INC_12 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp480", VARL("i"));
	RzILOpEffect *seq_14 = SEQN(2, op_ASSIGN_hybrid_tmp_13, op_INC_12);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_14, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_10, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_8, for_41);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7, seq_40, empty_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp482;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_11 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_12 = LET("const_pos2", const_pos2, ULT(cast_13, VARLP("const_pos2")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(cast_18, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_17));
	RzILOpPure *op_NOT_20 = LOGNOT(op_LSHIFT_19);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_21 = LOGAND(cast_22, op_NOT_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(cast_24, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(VARL("tmpV"), op_MUL_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_27, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_28 = CAST(8, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, cast_st8_28);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_30, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_31 = CAST(64, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_31, op_MUL_32);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_OR_35 = LOGOR(cast_36, op_LSHIFT_34);
	RzILOpPure *cast_38 = CAST(32, MSB(DUP(op_OR_35)), op_OR_35);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmpV", cast_ut2_8);
	RzILOpEffect *op_ASSIGN_10 = SETL("i", cast_11);
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp482", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_38);
	RzILOpEffect *empty_39 = EMPTY();
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_37, empty_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_16, seq_40);
	RzILOpEffect *for_43 = REPEAT(op_LT_12, seq_41);
	RzILOpEffect *seq_42 = SEQN(2, op_ASSIGN_10, for_43);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9, seq_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp483;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos2", const_pos2, ULT(cast_12, VARLP("const_pos2")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_20 = LOGAND(cast_21, op_NOT_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_27 = CAST(8, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(32, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp483", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_15, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_11, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_9, for_42);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp484;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_9 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_10 = LET("const_pos4", const_pos4, ULT(cast_11, VARLP("const_pos4")));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(cast_16, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_17 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_18 = LOGNOT(op_LSHIFT_17);
	RzILOpPure *op_AND_19 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(VARL("tmpV"), op_MUL_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_24, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_25 = CAST(8, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st8_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", cast_9);
	RzILOpEffect *op_INC_12 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp484", VARL("i"));
	RzILOpEffect *seq_14 = SEQN(2, op_ASSIGN_hybrid_tmp_13, op_INC_12);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_14, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_10, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_8, for_40);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp486;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_11 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_12 = LET("const_pos4", const_pos4, ULT(cast_13, VARLP("const_pos4")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(cast_18, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_17));
	RzILOpPure *op_NOT_20 = LOGNOT(op_LSHIFT_19);
	RzILOpPure *op_AND_21 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_20);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_27 = CAST(8, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(64, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmpV", cast_ut4_8);
	RzILOpEffect *op_ASSIGN_10 = SETL("i", cast_11);
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp486", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_16, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_12, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_10, for_42);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9, seq_41, empty_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp487;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos4", const_pos4, ULT(cast_12, VARLP("const_pos4")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *op_AND_20 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(cast_22, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(VARL("tmpV"), op_MUL_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_RSHIFT_23);
	RzILOpPure *op_AND_24 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_26 = CAST(8, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, cast_st8_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp487", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_15, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_11, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_9, for_41);
	RzILOpEffect *empty_42 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_40, empty_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp488;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_9 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_10 = LET("const_pos2", const_pos2, ULT(cast_11, VARLP("const_pos2")));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(cast_16, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_17 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_18 = LOGNOT(op_LSHIFT_17);
	RzILOpPure *cast_20 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_19 = LOGAND(cast_20, op_NOT_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(cast_22, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(VARL("tmpV"), op_MUL_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_RSHIFT_23);
	RzILOpPure *op_AND_24 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_26 = CAST(8, IL_FALSE, op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, cast_ut8_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", cast_9);
	RzILOpEffect *op_INC_12 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp488", VARL("i"));
	RzILOpEffect *seq_14 = SEQN(2, op_ASSIGN_hybrid_tmp_13, op_INC_12);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_14, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_10, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_8, for_41);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp490;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_11 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_12 = LET("const_pos2", const_pos2, ULT(cast_13, VARLP("const_pos2")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(cast_18, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_17));
	RzILOpPure *op_NOT_20 = LOGNOT(op_LSHIFT_19);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_21 = LOGAND(cast_22, op_NOT_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(cast_24, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(VARL("tmpV"), op_MUL_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_27, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_28 = CAST(8, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, cast_ut8_28);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_30, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_31 = CAST(64, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_31, op_MUL_32);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_OR_35 = LOGOR(cast_36, op_LSHIFT_34);
	RzILOpPure *cast_38 = CAST(32, MSB(DUP(op_OR_35)), op_OR_35);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmpV", cast_ut2_8);
	RzILOpEffect *op_ASSIGN_10 = SETL("i", cast_11);
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp490", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_38);
	RzILOpEffect *empty_39 = EMPTY();
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_37, empty_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_16, seq_40);
	RzILOpEffect *for_43 = REPEAT(op_LT_12, seq_41);
	RzILOpEffect *seq_42 = SEQN(2, op_ASSIGN_10, for_43);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9, seq_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp491;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos2", const_pos2, ULT(cast_12, VARLP("const_pos2")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_20 = LOGAND(cast_21, op_NOT_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_ut8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(32, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp491", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_15, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_11, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_9, for_42);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp492;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_9 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_10 = LET("const_pos4", const_pos4, ULT(cast_11, VARLP("const_pos4")));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(cast_16, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_17 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_18 = LOGNOT(op_LSHIFT_17);
	RzILOpPure *op_AND_19 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(VARL("tmpV"), op_MUL_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_24, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_25 = CAST(8, IL_FALSE, op_AND_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_ut8_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", cast_9);
	RzILOpEffect *op_INC_12 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp492", VARL("i"));
	RzILOpEffect *seq_14 = SEQN(2, op_ASSIGN_hybrid_tmp_13, op_INC_12);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_14, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_10, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_8, for_40);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp494;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_11 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_12 = LET("const_pos4", const_pos4, ULT(cast_13, VARLP("const_pos4")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(cast_18, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_17));
	RzILOpPure *op_NOT_20 = LOGNOT(op_LSHIFT_19);
	RzILOpPure *op_AND_21 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_20);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_ut8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(64, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = SETL("tmpV", cast_ut4_8);
	RzILOpEffect *op_ASSIGN_10 = SETL("i", cast_11);
	RzILOpEffect *op_INC_14 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp494", VARL("i"));
	RzILOpEffect *seq_16 = SEQN(2, op_ASSIGN_hybrid_tmp_15, op_INC_14);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_16, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_12, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_10, for_42);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp495;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos4", const_pos4, ULT(cast_12, VARLP("const_pos4")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *op_AND_20 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(cast_22, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(VARL("tmpV"), op_MUL_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_RSHIFT_23);
	RzILOpPure *op_AND_24 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_26 = CAST(8, IL_FALSE, op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, cast_ut8_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp495", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_15, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_11, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_9, for_41);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_st1_6)), cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_st1_8)), cast_st1_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_7 = CAST(1, MSB(DUP(ml_EA_6)), ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cast_st1_7)), cast_st1_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrbgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_st1_5)), cast_st1_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(cast_ut8_6)), cast_ut8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(cast_ut8_8)), cast_ut8_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(cast_ut8_7)), cast_ut8_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrdgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(cast_ut8_5)), cast_ut8_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_st2_6)), cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_st2_8)), cast_st2_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_7 = CAST(2, MSB(DUP(ml_EA_6)), ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cast_st2_7)), cast_st2_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_st2_5)), cast_st2_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_ut4_6)), cast_ut4_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut4_8)), cast_ut4_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cast_ut4_7)), cast_ut4_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrigp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_ut4_5)), cast_ut4_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_ut1_6)), cast_ut1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut1_8)), cast_ut1_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cast_ut1_7)), cast_ut1_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrubgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_ut1_5)), cast_ut1_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(cast_ut2_6)), cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut2_8)), cast_ut2_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cast_ut2_7)), cast_ut2_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_ut2_5)), cast_ut2_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadw_aq(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadw_locked(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_9 = CAST(1, MSB(DUP(ml_EA_8)), ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_st1_9)), cast_st1_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_11 = CAST(1, MSB(DUP(ml_EA_10)), ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_st1_11)), cast_st1_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_9 = CAST(1, MSB(DUP(ml_EA_8)), ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_st1_9)), cast_st1_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_11 = CAST(1, MSB(DUP(ml_EA_10)), ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_st1_11)), cast_st1_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_st1_8)), cast_st1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_10 = CAST(1, MSB(DUP(ml_EA_9)), ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_st1_10)), cast_st1_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_st1_8)), cast_st1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_10 = CAST(1, MSB(DUP(ml_EA_9)), ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_st1_10)), cast_st1_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_9 = CAST(8, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(64, MSB(DUP(cast_ut8_9)), cast_ut8_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_11 = CAST(8, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(64, MSB(DUP(cast_ut8_11)), cast_ut8_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_9 = CAST(8, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(64, MSB(DUP(cast_ut8_9)), cast_ut8_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_11 = CAST(8, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(64, MSB(DUP(cast_ut8_11)), cast_ut8_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(cast_ut8_8)), cast_ut8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_10 = CAST(8, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(cast_ut8_10)), cast_ut8_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(cast_ut8_8)), cast_ut8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_10 = CAST(8, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(cast_ut8_10)), cast_ut8_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_9 = CAST(2, MSB(DUP(ml_EA_8)), ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_st2_9)), cast_st2_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_11 = CAST(2, MSB(DUP(ml_EA_10)), ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_st2_11)), cast_st2_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_9 = CAST(2, MSB(DUP(ml_EA_8)), ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_st2_9)), cast_st2_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_11 = CAST(2, MSB(DUP(ml_EA_10)), ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_st2_11)), cast_st2_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_st2_8)), cast_st2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_10 = CAST(2, MSB(DUP(ml_EA_9)), ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_st2_10)), cast_st2_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_st2_8)), cast_st2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_10 = CAST(2, MSB(DUP(ml_EA_9)), ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_st2_10)), cast_st2_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_9 = CAST(4, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_ut4_9)), cast_ut4_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_11 = CAST(4, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_ut4_11)), cast_ut4_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_9 = CAST(4, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_ut4_9)), cast_ut4_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_11 = CAST(4, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_ut4_11)), cast_ut4_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut4_8)), cast_ut4_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_10 = CAST(4, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_ut4_10)), cast_ut4_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut4_8)), cast_ut4_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_10 = CAST(4, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_ut4_10)), cast_ut4_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_9 = CAST(1, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_ut1_9)), cast_ut1_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_11 = CAST(1, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_ut1_11)), cast_ut1_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_9 = CAST(1, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_ut1_9)), cast_ut1_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_11 = CAST(1, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_ut1_11)), cast_ut1_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut1_8)), cast_ut1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_10 = CAST(1, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_ut1_10)), cast_ut1_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut1_8)), cast_ut1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_10 = CAST(1, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_ut1_10)), cast_ut1_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_9 = CAST(2, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_ut2_9)), cast_ut2_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_11 = CAST(2, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_ut2_11)), cast_ut2_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *op_INV_7 = INV(NON_ZERO(op_AND_5));
	RzILOpPure *ml_EA_8 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_9 = CAST(2, IL_FALSE, ml_EA_8);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cast_ut2_9)), cast_ut2_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *nop_12 = NOP();
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_16 = SEQN(2, nop_12, empty_13);
	RzILOpEffect *branch_15 = BRANCH(op_INV_7, seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_INV_5 = INV(NON_ZERO(op_AND_3));
	RzILOpPure *op_ADD_7 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_10 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_11 = CAST(2, IL_FALSE, ml_EA_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cast_ut2_11)), cast_ut2_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_6 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *seq_then_16 = SEQN(3, op_ASSIGN_8, empty_9, op_ASSIGN_12);
	RzILOpEffect *seq_else_18 = SEQN(2, nop_14, empty_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_5, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_6, op_ASSIGN_0, empty_2, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut2_8)), cast_ut2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_10 = CAST(2, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_ut2_10)), cast_ut2_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cast_ut2_8)), cast_ut2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *op_ADD_6 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *ml_EA_9 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_10 = CAST(2, IL_FALSE, ml_EA_9);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cast_ut2_10)), cast_ut2_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_6);
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *seq_then_15 = SEQN(3, op_ASSIGN_7, empty_8, op_ASSIGN_11);
	RzILOpEffect *seq_else_17 = SEQN(2, nop_13, empty_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_3), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_0, empty_2, branch_16);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>