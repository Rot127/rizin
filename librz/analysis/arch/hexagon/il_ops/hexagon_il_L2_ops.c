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

RzILOpEffect *hex_il_op_l2_deallocframe_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzILOpPure *op_ADD_8 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, op_XOR_6);
	RzILOpEffect *op_ASSIGN_9 = SETG(sp_assoc, op_ADD_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_9, empty_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzILOpPure *op_ADD_8 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, op_XOR_6);
	RzILOpEffect *op_ASSIGN_9 = SETG(sp_assoc, op_ADD_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_6 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_5, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_8 = LOGOR(op_RSHIFT_6, op_LSHIFT_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut1_3);
	RzILOpEffect *op_ASSIGN_9 = SETG(Ryy_assoc, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_9, empty_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_6 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_5, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_8 = LOGOR(op_RSHIFT_6, op_LSHIFT_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut1_3);
	RzILOpEffect *op_ASSIGN_9 = SETG(Ryy_assoc, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut1_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut1_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut1_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut1_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pi_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_7 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(Rdd, op_NOT_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARL("tmpV"), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_16, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_12, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut4_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_8);
	RzILOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_7, seq_24));
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_5, for_25, empty_26);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_7 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(Rdd, op_NOT_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARL("tmpV"), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_16, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_12, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut4_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_8);
	RzILOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_7, seq_24));
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_5, for_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_7 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(Rd, op_NOT_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARL("tmpV"), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_16, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_12, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_22 = SETG(Rd_assoc, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_8);
	RzILOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_7, seq_24));
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_5, for_25, empty_26);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_7 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(Rd, op_NOT_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARL("tmpV"), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_16, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_12, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_22 = SETG(Rd_assoc, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_8);
	RzILOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_7, seq_24));
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_5, for_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_io_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrbgp_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrdgp_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrhgp_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrigp_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrubgp_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pbr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pci_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pcr_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruhgp_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadw_aq_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadw_locked_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP;
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_pi_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP;
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>