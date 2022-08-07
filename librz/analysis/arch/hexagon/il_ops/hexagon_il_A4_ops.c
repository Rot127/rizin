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

RzILOpEffect *hex_il_op_a4_addp_c(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Rs);
	RzIlOpPure *op_AND_1 = LOGAND(Rt, op_NOT_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_AND_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_andnp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Rss);
	RzIlOpPure *op_AND_1 = LOGAND(Rtt, op_NOT_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc, op_AND_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_bitsplit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos5 = UN(32, 5);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	// Declare: ut32 shamt;
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *cast_ut32_8 = CAST(64, IL_FALSE, Rs);
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_8, VARL("shamt"));
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_12 = SHIFTL0(op_AND_10, op_MUL_11);
	RzIlOpPure *op_OR_13 = LOGOR(op_AND_7, op_LSHIFT_12);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_16));
	RzIlOpPure *op_NOT_18 = LOGNOT(op_LSHIFT_17);
	RzIlOpPure *op_AND_19 = LOGAND(DUP(Rdd), op_NOT_18);
	RzIlOpPure *op_NE_20 = LET("const_pos0", const_pos0, INV(EQ(VARL("shamt"), VARLP("const_pos0"))));
	RzIlOpPure *c_call_21 = LET("const_pos0", const_pos0, HEX_EXTRACT64(DUP(Rs), VARLP("const_pos0"), VARL("shamt")));
	RzIlOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_20, c_call_21, VARLP("const_pos0LL")));
	RzIlOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_22, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_25 = SHIFTL0(op_AND_23, op_MUL_24);
	RzIlOpPure *op_OR_26 = LOGOR(op_AND_19, op_LSHIFT_25);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETL("shamt", cond_2);
	RzIlOpEffect *op_ASSIGN_14 = SETG(Rdd_assoc, op_OR_13);
	RzIlOpEffect *empty_15 = EMPTY();
	RzIlOpEffect *op_ASSIGN_27 = SETG(Rdd_assoc, op_OR_26);
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_3, op_ASSIGN_14, empty_15, op_ASSIGN_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_bitspliti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *cast_ut32_4 = CAST(64, IL_FALSE, Rs);
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(cast_ut32_4, VARL("u"));
	RzIlOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_5, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_6, op_MUL_7);
	RzIlOpPure *op_OR_9 = LOGOR(op_AND_3, op_LSHIFT_8);
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_12));
	RzIlOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzIlOpPure *op_AND_15 = LOGAND(DUP(Rdd), op_NOT_14);
	RzIlOpPure *op_NE_16 = LET("const_pos0", const_pos0, INV(EQ(VARL("u"), VARLP("const_pos0"))));
	RzIlOpPure *c_call_17 = LET("const_pos0", const_pos0, HEX_EXTRACT64(DUP(Rs), VARLP("const_pos0"), VARL("u")));
	RzIlOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_17, VARLP("const_pos0LL")));
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_15, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc, op_OR_9);
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_10, empty_11, op_ASSIGN_23, empty_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_boundscheck_hi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_boundscheck_lo(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_cmpbeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_3 = CAST(8, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_EQ_8 = EQ(cast_st8_3, cast_st8_7);
	RzIlOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Pd_assoc, cond_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_3 = CAST(32, IL_FALSE, op_AND_2);
	RzIlOpPure *op_EQ_4 = EQ(cast_ut8_3, VARL("u"));
	RzIlOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Pd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_3 = CAST(8, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_GT_8 = SGT(cast_st8_3, cast_st8_7);
	RzIlOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Pd_assoc, cond_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_GT_4 = SGT(cast_st8_3, VARL("s"));
	RzIlOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Pd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_7 = CAST(8, IL_FALSE, op_AND_6);
	RzIlOpPure *op_GT_8 = UGT(cast_ut8_3, cast_ut8_7);
	RzIlOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Pd_assoc, cond_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_3 = CAST(32, IL_FALSE, op_AND_2);
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, VARL("u"));
	RzIlOpPure *op_GT_5 = UGT(cast_ut8_3, cast_ut32_4);
	RzIlOpPure *cond_6 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_7 = SETG(Pd_assoc, cond_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpheq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_EQ_8 = EQ(cast_st16_3, cast_st16_7);
	RzIlOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Pd_assoc, cond_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_EQ_4 = EQ(cast_st16_3, VARL("s"));
	RzIlOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Pd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_GT_8 = SGT(cast_st16_3, cast_st16_7);
	RzIlOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Pd_assoc, cond_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_GT_4 = SGT(cast_st16_3, VARL("s"));
	RzIlOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Pd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_7 = CAST(16, IL_FALSE, op_AND_6);
	RzIlOpPure *op_GT_8 = UGT(cast_ut16_3, cast_ut16_7);
	RzIlOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_8, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Pd_assoc, cond_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_3 = CAST(32, IL_FALSE, op_AND_2);
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, VARL("u"));
	RzIlOpPure *op_GT_5 = UGT(cast_ut16_3, cast_ut32_4);
	RzIlOpPure *cond_6 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_5, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_ASSIGN_7 = SETG(Pd_assoc, cond_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(64, (ut64)ISA2IMM(hi, "s"));

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("U"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("s"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("s"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("s"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cround_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_cround_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_ext(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ

	// EXEC

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_modwrapu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(Rs, VARLP("const_pos0")));
	RzIlOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzIlOpPure *op_ADD_2 = ADD(DUP(Rs), cast_ut32_1);
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzIlOpPure *cast_ut32_5 = CAST(32, IL_FALSE, DUP(Rt));
	RzIlOpPure *op_GE_6 = UGE(cast_ut32_4, cast_ut32_5);
	RzIlOpPure *cast_ut32_7 = CAST(32, IL_FALSE, DUP(Rt));
	RzIlOpPure *op_SUB_8 = SUB(DUP(Rs), cast_ut32_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, op_ADD_2);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rd_assoc, op_SUB_8);
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, Rs);
	RzIlOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_9);
	RzIlOpEffect *seq_else_13 = SEQN(1, op_ASSIGN_10);
	RzIlOpEffect *branch_12 = BRANCH(op_GE_6, seq_then_11, seq_else_13);
	RzIlOpEffect *seq_then_14 = SEQN(1, op_ASSIGN_3);
	RzIlOpEffect *seq_else_16 = SEQN(1, branch_12);
	RzIlOpEffect *branch_15 = BRANCH(op_LT_0, seq_then_14, seq_else_16);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Rs);
	RzIlOpPure *op_OR_1 = LOGOR(Rt, op_NOT_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_OR_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_ornp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Rss);
	RzIlOpPure *op_OR_1 = LOGOR(Rtt, op_NOT_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc, op_OR_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_LSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_LSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_LSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_LSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_RSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_RSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_RSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_1 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_RSHIFT_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_NE_1 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cond_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzIlOpEffect *branch_7 = BRANCH(op_AND_0, seq_then_6, seq_else_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_EQ_0 = EQ(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_EQ_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_EQ_0 = EQ(Rs, VARL("s"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_EQ_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpneq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_NE_0 = INV(EQ(Rs, Rt));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_NE_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpneqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_NE_0 = INV(EQ(Rs, VARL("s")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_NE_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzIlOpPure *cast_st32_1 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzIlOpPure *op_SUB_3 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_3));
	RzIlOpPure *op_ADD_5 = ADD(cast_st64_2, op_LSHIFT_4);
	RzIlOpPure *cond_6 = ITE(op_EQ_0, DUP(Rs), op_ADD_5);
	RzIlOpPure *op_RSHIFT_7 = SHIFTR0(cond_6, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rd_assoc, op_RSHIFT_7);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_ri_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzIlOpPure *cast_st32_2 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_3 = CAST(32, IL_FALSE, cast_st32_2);
	RzIlOpPure *op_SUB_4 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_4));
	RzIlOpPure *op_ADD_6 = ADD(cast_st64_3, op_LSHIFT_5);
	RzIlOpPure *cond_7 = ITE(op_EQ_1, DUP(Rs), op_ADD_6);
	RzIlOpPure *c_call_8 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cond_7, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_8, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_10 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_12 = CAST(32, IL_FALSE, cast_st32_11);
	RzIlOpPure *op_SUB_13 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_14 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_13));
	RzIlOpPure *op_ADD_15 = ADD(cast_st64_12, op_LSHIFT_14);
	RzIlOpPure *cond_16 = ITE(op_EQ_10, DUP(Rs), op_ADD_15);
	RzIlOpPure *op_EQ_17 = EQ(cond_9, cond_16);
	RzIlOpPure *op_EQ_18 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzIlOpPure *cast_st32_19 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_20 = CAST(32, IL_FALSE, cast_st32_19);
	RzIlOpPure *op_SUB_21 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_22 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_21));
	RzIlOpPure *op_ADD_23 = ADD(cast_st64_20, op_LSHIFT_22);
	RzIlOpPure *cond_24 = ITE(op_EQ_18, DUP(Rs), op_ADD_23);
	RzIlOpPure *c_call_25 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_26 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_27 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_28 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_26, c_call_27, VARLP("const_pos1")));
	RzIlOpPure *cond_29 = ITE(c_call_25, c_call_28, usr);
	RzIlOpPure *op_EQ_31 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzIlOpPure *cast_st32_32 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_33 = CAST(32, IL_FALSE, cast_st32_32);
	RzIlOpPure *op_SUB_34 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_35 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_34));
	RzIlOpPure *op_ADD_36 = ADD(cast_st64_33, op_LSHIFT_35);
	RzIlOpPure *cond_37 = ITE(op_EQ_31, DUP(Rs), op_ADD_36);
	RzIlOpPure *op_LT_38 = LET("const_pos0", const_pos0, ULT(cond_37, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_39 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_40 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_39));
	RzIlOpPure *op_NEG_41 = NEG(op_LSHIFT_40);
	RzIlOpPure *op_SUB_42 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_43 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_42));
	RzIlOpPure *op_SUB_44 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_43, VARLP("const_pos1")));
	RzIlOpPure *cond_45 = ITE(op_LT_38, op_NEG_41, op_SUB_44);
	RzIlOpPure *cond_46 = ITE(op_EQ_17, cond_24, cond_45);
	RzIlOpPure *op_RSHIFT_47 = SHIFTR0(cond_46, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_30 = SETG(usr_assoc, cond_29);
	RzIlOpEffect *op_ASSIGN_48 = SETG(Rd_assoc, op_RSHIFT_47);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos5 = UN(32, 5);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_3 = LET("const_pos0", const_pos0, EQ(cond_2, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_4 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_5 = CAST(32, IL_FALSE, cast_st32_4);
	RzIlOpPure *op_NE_6 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_7 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_8 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, c_call_7, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_9 = LET("const_pos1", const_pos1, SUB(cond_8, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_10 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_9));
	RzIlOpPure *op_ADD_11 = ADD(cast_st64_5, op_LSHIFT_10);
	RzIlOpPure *cond_12 = ITE(op_EQ_3, DUP(Rs), op_ADD_11);
	RzIlOpPure *op_NE_13 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(cond_12, cond_15);

	// WRITE
	RzIlOpEffect *op_ASSIGN_17 = SETG(Rd_assoc, op_RSHIFT_16);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_rr_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos5 = UN(32, 5);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_NE_1 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_2 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_3 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_1, c_call_2, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_4 = LET("const_pos0", const_pos0, EQ(cond_3, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_5 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_6 = CAST(32, IL_FALSE, cast_st32_5);
	RzIlOpPure *op_NE_7 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_8 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_8, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_10 = LET("const_pos1", const_pos1, SUB(cond_9, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_10));
	RzIlOpPure *op_ADD_12 = ADD(cast_st64_6, op_LSHIFT_11);
	RzIlOpPure *cond_13 = ITE(op_EQ_4, DUP(Rs), op_ADD_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cond_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_17 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_17, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_19 = LET("const_pos0", const_pos0, EQ(cond_18, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_21 = CAST(32, IL_FALSE, cast_st32_20);
	RzIlOpPure *op_NE_22 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_23 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_22, c_call_23, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_25 = LET("const_pos1", const_pos1, SUB(cond_24, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_26 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_25));
	RzIlOpPure *op_ADD_27 = ADD(cast_st64_21, op_LSHIFT_26);
	RzIlOpPure *cond_28 = ITE(op_EQ_19, DUP(Rs), op_ADD_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_15, cond_28);
	RzIlOpPure *op_NE_30 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_31 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_30, c_call_31, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_33 = LET("const_pos0", const_pos0, EQ(cond_32, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_34 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_35 = CAST(32, IL_FALSE, cast_st32_34);
	RzIlOpPure *op_NE_36 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_37 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_38 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_36, c_call_37, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_39 = LET("const_pos1", const_pos1, SUB(cond_38, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_40 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_39));
	RzIlOpPure *op_ADD_41 = ADD(cast_st64_35, op_LSHIFT_40);
	RzIlOpPure *cond_42 = ITE(op_EQ_33, DUP(Rs), op_ADD_41);
	RzIlOpPure *c_call_43 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_44 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_45 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_46 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_44, c_call_45, VARLP("const_pos1")));
	RzIlOpPure *cond_47 = ITE(c_call_43, c_call_46, usr);
	RzIlOpPure *op_NE_49 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_50 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_51 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_49, c_call_50, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_52 = LET("const_pos0", const_pos0, EQ(cond_51, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_53 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_54 = CAST(32, IL_FALSE, cast_st32_53);
	RzIlOpPure *op_NE_55 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_56 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_57 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_55, c_call_56, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_58 = LET("const_pos1", const_pos1, SUB(cond_57, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_59 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), op_SUB_58));
	RzIlOpPure *op_ADD_60 = ADD(cast_st64_54, op_LSHIFT_59);
	RzIlOpPure *cond_61 = ITE(op_EQ_52, DUP(Rs), op_ADD_60);
	RzIlOpPure *op_LT_62 = LET("const_pos0", const_pos0, ULT(cond_61, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_63 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_64 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_63));
	RzIlOpPure *op_NEG_65 = NEG(op_LSHIFT_64);
	RzIlOpPure *op_SUB_66 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_67 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzIlOpPure *op_SUB_68 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_67, VARLP("const_pos1")));
	RzIlOpPure *cond_69 = ITE(op_LT_62, op_NEG_65, op_SUB_68);
	RzIlOpPure *cond_70 = ITE(op_EQ_29, cond_42, cond_69);
	RzIlOpPure *op_NE_71 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_72 = LET("const_pos0", const_pos0, LET("const_pos5", const_pos5, HEX_EXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos5"))));
	RzIlOpPure *cond_73 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_71, c_call_72, VARLP("const_pos0LL")));
	RzIlOpPure *op_RSHIFT_74 = SHIFTR0(cond_70, cond_73);

	// WRITE
	RzIlOpEffect *op_ASSIGN_48 = SETG(usr_assoc, cond_47);
	RzIlOpEffect *op_ASSIGN_75 = SETG(Rd_assoc, op_RSHIFT_74);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_subp_c(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_tfrcpp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Css_assoc = ISA2REG(hi, "Css", false);
	RzIlOpPure *Css = VARG(Css_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rdd_assoc, Css);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_tfrpcp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Cdd_assoc = ISA2REG(hi, "Cdd", false);
	RzIlOpPure *Cdd = VARG(Cdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Cdd_assoc, Rss);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_tlbmatch(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_vcmpbeq_any(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos0 = UN(32, 0);
	// Declare: ut32 i;
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_LT_3 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_5 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_8 = CAST(8, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_12 = CAST(8, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_EQ_13 = EQ(cast_st8_8, cast_st8_12);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, const_pos0);
	RzIlOpEffect *op_ASSIGN_2 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_4 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_14 = SETG(Pd_assoc, const_pos0xff);
	RzIlOpEffect *seq_then_15 = SEQN(1, op_ASSIGN_14);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *branch_16 = BRANCH(op_EQ_13, seq_then_15, empty_17);
	RzIlOpEffect *seq_18 = SEQN(2, branch_16, op_INC_4);
	RzIlOpEffect *for_19 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_3, seq_18));
	RzIlOpEffect *instruction_sequence = SEQN(3, empty_0, op_ASSIGN_1, for_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_10 = CAST(32, IL_FALSE, op_AND_9);
	RzIlOpPure *op_EQ_11 = EQ(cast_ut8_10, VARL("u"));
	RzIlOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_EQ_11);
	RzIlOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("i"));
	RzIlOpPure *op_OR_14 = LOGOR(op_AND_6, op_LSHIFT_13);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_15 = SETG(Pd_assoc, op_OR_14);
	RzIlOpEffect *empty_16 = EMPTY();
	RzIlOpEffect *seq_17 = SEQN(3, op_ASSIGN_15, empty_16, op_INC_3);
	RzIlOpEffect *for_18 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_17));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_18);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_10 = CAST(8, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_14 = CAST(8, MSB(op_AND_13), op_AND_13);
	RzIlOpPure *op_GT_15 = SGT(cast_st8_10, cast_st8_14);
	RzIlOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_GT_15);
	RzIlOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_16, VARL("i"));
	RzIlOpPure *op_OR_18 = LOGOR(op_AND_6, op_LSHIFT_17);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_19 = SETG(Pd_assoc, op_OR_18);
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_21 = SEQN(3, op_ASSIGN_19, empty_20, op_INC_3);
	RzIlOpEffect *for_22 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_21));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *op_GT_11 = SGT(cast_st8_10, VARL("s"));
	RzIlOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_GT_11);
	RzIlOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("i"));
	RzIlOpPure *op_OR_14 = LOGOR(op_AND_6, op_LSHIFT_13);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_15 = SETG(Pd_assoc, op_OR_14);
	RzIlOpEffect *empty_16 = EMPTY();
	RzIlOpEffect *seq_17 = SEQN(3, op_ASSIGN_15, empty_16, op_INC_3);
	RzIlOpEffect *for_18 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_17));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_18);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_10 = CAST(32, IL_FALSE, op_AND_9);
	RzIlOpPure *op_GT_11 = UGT(cast_ut8_10, VARL("u"));
	RzIlOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_GT_11);
	RzIlOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_12, VARL("i"));
	RzIlOpPure *op_OR_14 = LOGOR(op_AND_6, op_LSHIFT_13);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_15 = SETG(Pd_assoc, op_OR_14);
	RzIlOpEffect *empty_16 = EMPTY();
	RzIlOpEffect *seq_17 = SEQN(3, op_ASSIGN_15, empty_16, op_INC_3);
	RzIlOpEffect *for_18 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_17));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_18);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Pd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_EQ_12 = EQ(cast_st16_11, VARL("s"));
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_EQ_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzIlOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);
	RzIlOpPure *op_MUL_19 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_20 = LET("const_pos1", const_pos1, ADD(op_MUL_19, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_21 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_20));
	RzIlOpPure *op_NOT_22 = LOGNOT(op_LSHIFT_21);
	RzIlOpPure *op_AND_23 = LOGAND(DUP(Pd), op_NOT_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_EQ_28 = EQ(cast_st16_27, VARL("s"));
	RzIlOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_EQ_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_31 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_ADD_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_23, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_17 = SETG(Pd_assoc, op_OR_16);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *op_ASSIGN_34 = SETG(Pd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(5, op_ASSIGN_17, empty_18, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Pd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_GT_12 = SGT(cast_st16_11, VARL("s"));
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_GT_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzIlOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);
	RzIlOpPure *op_MUL_19 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_20 = LET("const_pos1", const_pos1, ADD(op_MUL_19, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_21 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_20));
	RzIlOpPure *op_NOT_22 = LOGNOT(op_LSHIFT_21);
	RzIlOpPure *op_AND_23 = LOGAND(DUP(Pd), op_NOT_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_GT_28 = SGT(cast_st16_27, VARL("s"));
	RzIlOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_GT_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_31 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_ADD_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_23, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_17 = SETG(Pd_assoc, op_OR_16);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *op_ASSIGN_34 = SETG(Pd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(5, op_ASSIGN_17, empty_18, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Pd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_GT_12 = UGT(cast_ut16_11, VARL("u"));
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_GT_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_13, op_MUL_14);
	RzIlOpPure *op_OR_16 = LOGOR(op_AND_7, op_LSHIFT_15);
	RzIlOpPure *op_MUL_19 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_20 = LET("const_pos1", const_pos1, ADD(op_MUL_19, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_21 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_20));
	RzIlOpPure *op_NOT_22 = LOGNOT(op_LSHIFT_21);
	RzIlOpPure *op_AND_23 = LOGAND(DUP(Pd), op_NOT_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_27 = CAST(32, IL_FALSE, op_AND_26);
	RzIlOpPure *op_GT_28 = UGT(cast_ut16_27, VARL("u"));
	RzIlOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_GT_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_31 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_ADD_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_23, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_17 = SETG(Pd_assoc, op_OR_16);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *op_ASSIGN_34 = SETG(Pd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(5, op_ASSIGN_17, empty_18, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpweqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos3 = UN(32, 3);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos7 = UN(32, 7);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *cast_st64_11 = CAST(32, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_EQ_12 = EQ(cast_st64_11, VARL("s"));
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_EQ_12);
	RzIlOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_13, VARL("j"));
	RzIlOpPure *op_OR_15 = LOGOR(op_AND_6, op_LSHIFT_14);
	RzIlOpPure *op_LE_22 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzIlOpPure *op_LSHIFT_24 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_25 = LOGNOT(op_LSHIFT_24);
	RzIlOpPure *op_AND_26 = LOGAND(DUP(Pd), op_NOT_25);
	RzIlOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzIlOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzIlOpPure *cast_st64_31 = CAST(32, MSB(cast_st32_30), cast_st32_30);
	RzIlOpPure *op_EQ_32 = EQ(cast_st64_31, VARL("s"));
	RzIlOpPure *cast_ut64_33 = CAST(64, IL_FALSE, op_EQ_32);
	RzIlOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_33, VARL("j"));
	RzIlOpPure *op_OR_35 = LOGOR(op_AND_26, op_LSHIFT_34);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("j", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_16 = SETG(Pd_assoc, op_OR_15);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *seq_18 = SEQN(2, empty_17, op_INC_3);
	RzIlOpEffect *for_19 = SEQ2(SETL("j", const_pos0), REPEAT(op_LE_2, seq_18));
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *op_ASSIGN_21 = SETL("j", const_pos4);
	RzIlOpEffect *op_INC_23 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_36 = SETG(Pd_assoc, op_OR_35);
	RzIlOpEffect *empty_37 = EMPTY();
	RzIlOpEffect *seq_38 = SEQN(2, empty_37, op_INC_23);
	RzIlOpEffect *for_39 = SEQ2(SETL("j", const_pos4), REPEAT(op_LE_22, seq_38));
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, for_19, empty_20, for_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos3 = UN(32, 3);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos7 = UN(32, 7);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *cast_st64_11 = CAST(32, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_GT_12 = SGT(cast_st64_11, VARL("s"));
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, op_GT_12);
	RzIlOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_13, VARL("j"));
	RzIlOpPure *op_OR_15 = LOGOR(op_AND_6, op_LSHIFT_14);
	RzIlOpPure *op_LE_23 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzIlOpPure *op_AND_27 = LOGAND(DUP(Pd), op_NOT_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_31 = CAST(32, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *cast_st64_32 = CAST(32, MSB(cast_st32_31), cast_st32_31);
	RzIlOpPure *op_GT_33 = SGT(cast_st64_32, VARL("s"));
	RzIlOpPure *cast_ut64_34 = CAST(64, IL_FALSE, op_GT_33);
	RzIlOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_34, VARL("j"));
	RzIlOpPure *op_OR_36 = LOGOR(op_AND_27, op_LSHIFT_35);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("j", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_16 = SETG(Pd_assoc, op_OR_15);
	RzIlOpEffect *empty_17 = EMPTY();
	RzIlOpEffect *seq_18 = SEQN(3, op_ASSIGN_16, empty_17, op_INC_3);
	RzIlOpEffect *for_19 = SEQ2(SETL("j", const_pos0), REPEAT(op_LE_2, seq_18));
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *empty_21 = EMPTY();
	RzIlOpEffect *op_ASSIGN_22 = SETL("j", const_pos4);
	RzIlOpEffect *op_INC_24 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_37 = SETG(Pd_assoc, op_OR_36);
	RzIlOpEffect *empty_38 = EMPTY();
	RzIlOpEffect *seq_39 = SEQN(3, op_ASSIGN_37, empty_38, op_INC_24);
	RzIlOpEffect *for_40 = SEQ2(SETL("j", const_pos4), REPEAT(op_LE_23, seq_39));
	RzIlOpEffect *empty_41 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, empty_0, for_19, empty_20, empty_21, for_40, empty_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos3 = UN(32, 3);
	const char *Pd_assoc = ISA2REG(hi, "Pd", false);
	RzILOpPure *const_pos1ULL = UN(64, 1);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos7 = UN(32, 7);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_5 = LOGNOT(op_LSHIFT_4);
	RzIlOpPure *op_AND_6 = LOGAND(Pd, op_NOT_5);
	RzIlOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_10 = CAST(32, IL_FALSE, op_AND_9);
	RzIlOpPure *cast_ut64_11 = CAST(32, IL_FALSE, cast_ut32_10);
	RzIlOpPure *cast_ut32_12 = CAST(32, IL_FALSE, VARL("u"));
	RzIlOpPure *op_GT_13 = UGT(cast_ut64_11, cast_ut32_12);
	RzIlOpPure *cast_ut64_14 = CAST(64, IL_FALSE, op_GT_13);
	RzIlOpPure *op_LSHIFT_15 = SHIFTL0(cast_ut64_14, VARL("j"));
	RzIlOpPure *op_OR_16 = LOGOR(op_AND_6, op_LSHIFT_15);
	RzIlOpPure *op_LE_23 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzIlOpPure *op_AND_27 = LOGAND(DUP(Pd), op_NOT_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_31 = CAST(32, IL_FALSE, op_AND_30);
	RzIlOpPure *cast_ut64_32 = CAST(32, IL_FALSE, cast_ut32_31);
	RzIlOpPure *cast_ut32_33 = CAST(32, IL_FALSE, VARL("u"));
	RzIlOpPure *op_GT_34 = UGT(cast_ut64_32, cast_ut32_33);
	RzIlOpPure *cast_ut64_35 = CAST(64, IL_FALSE, op_GT_34);
	RzIlOpPure *op_LSHIFT_36 = SHIFTL0(cast_ut64_35, VARL("j"));
	RzIlOpPure *op_OR_37 = LOGOR(op_AND_27, op_LSHIFT_36);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("j", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_17 = SETG(Pd_assoc, op_OR_16);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *seq_19 = SEQN(2, empty_18, op_INC_3);
	RzIlOpEffect *for_20 = SEQ2(SETL("j", const_pos0), REPEAT(op_LE_2, seq_19));
	RzIlOpEffect *empty_21 = EMPTY();
	RzIlOpEffect *op_ASSIGN_22 = SETL("j", const_pos4);
	RzIlOpEffect *op_INC_24 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_38 = SETG(Pd_assoc, op_OR_37);
	RzIlOpEffect *empty_39 = EMPTY();
	RzIlOpEffect *seq_40 = SEQN(2, empty_39, op_INC_24);
	RzIlOpEffect *for_41 = SEQ2(SETL("j", const_pos4), REPEAT(op_LE_23, seq_40));
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, for_20, empty_21, for_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzIlOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzIlOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzIlOpPure *op_LT_19 = ULT(VARL("max"), cast_st16_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzIlOpPure *op_OR_26 = LOGOR(Ru, op_LSHIFT_25);
	RzIlOpPure *op_MUL_33 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_33));
	RzIlOpPure *op_NOT_35 = LOGNOT(op_LSHIFT_34);
	RzIlOpPure *op_AND_36 = LOGAND(DUP(Rxx), op_NOT_35);
	RzIlOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_38 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_39 = SHIFTL0(op_AND_37, op_MUL_38);
	RzIlOpPure *op_OR_40 = LOGOR(op_AND_36, op_LSHIFT_39);
	RzIlOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_43));
	RzIlOpPure *op_NOT_45 = LOGNOT(op_LSHIFT_44);
	RzIlOpPure *op_AND_46 = LOGAND(DUP(Rxx), op_NOT_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_48 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_47, op_MUL_48);
	RzIlOpPure *op_OR_50 = LOGOR(op_AND_46, op_LSHIFT_49);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("max", cast_st16_4);
	RzIlOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzIlOpEffect *op_ASSIGN_12 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_14 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETL("max", cast_st16_23);
	RzIlOpEffect *op_ASSIGN_27 = SETL("addr", op_OR_26);
	RzIlOpEffect *seq_then_28 = SEQN(2, op_ASSIGN_24, op_ASSIGN_27);
	RzIlOpEffect *empty_30 = EMPTY();
	RzIlOpEffect *branch_29 = BRANCH(op_LT_19, seq_then_28, empty_30);
	RzIlOpEffect *seq_31 = SEQN(2, branch_29, op_INC_14);
	RzIlOpEffect *for_32 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_13, seq_31));
	RzIlOpEffect *op_ASSIGN_41 = SETG(Rxx_assoc, op_OR_40);
	RzIlOpEffect *empty_42 = EMPTY();
	RzIlOpEffect *op_ASSIGN_51 = SETG(Rxx_assoc, op_OR_50);
	RzIlOpEffect *empty_52 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_32, op_ASSIGN_41, empty_42, op_ASSIGN_51, empty_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_3);
	RzIlOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzIlOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzIlOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzIlOpPure *op_LT_19 = ULT(VARL("max"), cast_ut16_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzIlOpPure *op_OR_26 = LOGOR(Ru, op_LSHIFT_25);
	RzIlOpPure *op_MUL_33 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_33));
	RzIlOpPure *op_NOT_35 = LOGNOT(op_LSHIFT_34);
	RzIlOpPure *op_AND_36 = LOGAND(DUP(Rxx), op_NOT_35);
	RzIlOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_38 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_39 = SHIFTL0(op_AND_37, op_MUL_38);
	RzIlOpPure *op_OR_40 = LOGOR(op_AND_36, op_LSHIFT_39);
	RzIlOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_43));
	RzIlOpPure *op_NOT_45 = LOGNOT(op_LSHIFT_44);
	RzIlOpPure *op_AND_46 = LOGAND(DUP(Rxx), op_NOT_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_48 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_47, op_MUL_48);
	RzIlOpPure *op_OR_50 = LOGOR(op_AND_46, op_LSHIFT_49);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("max", cast_ut16_4);
	RzIlOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzIlOpEffect *op_ASSIGN_12 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_14 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETL("max", cast_ut16_23);
	RzIlOpEffect *op_ASSIGN_27 = SETL("addr", op_OR_26);
	RzIlOpEffect *seq_then_28 = SEQN(2, op_ASSIGN_24, op_ASSIGN_27);
	RzIlOpEffect *empty_30 = EMPTY();
	RzIlOpEffect *branch_29 = BRANCH(op_LT_19, seq_then_28, empty_30);
	RzIlOpEffect *seq_31 = SEQN(2, branch_29, op_INC_14);
	RzIlOpEffect *for_32 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_13, seq_31));
	RzIlOpEffect *op_ASSIGN_41 = SETG(Rxx_assoc, op_OR_40);
	RzIlOpEffect *empty_42 = EMPTY();
	RzIlOpEffect *op_ASSIGN_51 = SETG(Rxx_assoc, op_OR_50);
	RzIlOpEffect *empty_52 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_32, op_ASSIGN_41, empty_42, op_ASSIGN_51, empty_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos1 = UN(32, 1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_3);
	RzIlOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzIlOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_19 = CAST(32, IL_FALSE, op_AND_18);
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzIlOpPure *op_LT_21 = ULT(VARL("max"), cast_ut64_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_24);
	RzIlOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzIlOpPure *op_LSHIFT_28 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzIlOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzIlOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzIlOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzIlOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzIlOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzIlOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzIlOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzIlOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzIlOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("max", cast_ut64_5);
	RzIlOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzIlOpEffect *op_ASSIGN_13 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_15 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_27 = SETL("max", cast_ut64_26);
	RzIlOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzIlOpEffect *seq_then_31 = SEQN(2, op_ASSIGN_27, op_ASSIGN_30);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *branch_32 = BRANCH(op_LT_21, seq_then_31, empty_33);
	RzIlOpEffect *seq_34 = SEQN(2, branch_32, op_INC_15);
	RzIlOpEffect *for_35 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_14, seq_34));
	RzIlOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc, op_OR_43);
	RzIlOpEffect *empty_45 = EMPTY();
	RzIlOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc, op_OR_53);
	RzIlOpEffect *empty_55 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 max;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos1 = UN(32, 1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzIlOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzIlOpPure *op_LT_21 = ULT(VARL("max"), cast_st64_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzIlOpPure *op_LSHIFT_28 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzIlOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzIlOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzIlOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("max"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzIlOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzIlOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzIlOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzIlOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzIlOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzIlOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("max", cast_st64_5);
	RzIlOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzIlOpEffect *op_ASSIGN_13 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_15 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_27 = SETL("max", cast_st64_26);
	RzIlOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzIlOpEffect *seq_then_31 = SEQN(2, op_ASSIGN_27, op_ASSIGN_30);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *branch_32 = BRANCH(op_LT_21, seq_then_31, empty_33);
	RzIlOpEffect *seq_34 = SEQN(2, branch_32, op_INC_15);
	RzIlOpEffect *for_35 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_14, seq_34));
	RzIlOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc, op_OR_43);
	RzIlOpEffect *empty_45 = EMPTY();
	RzIlOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc, op_OR_53);
	RzIlOpEffect *empty_55 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzIlOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzIlOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzIlOpPure *op_GT_19 = UGT(VARL("min"), cast_st16_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzIlOpPure *op_OR_26 = LOGOR(Ru, op_LSHIFT_25);
	RzIlOpPure *op_MUL_33 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_33));
	RzIlOpPure *op_NOT_35 = LOGNOT(op_LSHIFT_34);
	RzIlOpPure *op_AND_36 = LOGAND(DUP(Rxx), op_NOT_35);
	RzIlOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_38 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_39 = SHIFTL0(op_AND_37, op_MUL_38);
	RzIlOpPure *op_OR_40 = LOGOR(op_AND_36, op_LSHIFT_39);
	RzIlOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_43));
	RzIlOpPure *op_NOT_45 = LOGNOT(op_LSHIFT_44);
	RzIlOpPure *op_AND_46 = LOGAND(DUP(Rxx), op_NOT_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_48 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_47, op_MUL_48);
	RzIlOpPure *op_OR_50 = LOGOR(op_AND_46, op_LSHIFT_49);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("min", cast_st16_4);
	RzIlOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzIlOpEffect *op_ASSIGN_12 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_14 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETL("min", cast_st16_23);
	RzIlOpEffect *op_ASSIGN_27 = SETL("addr", op_OR_26);
	RzIlOpEffect *seq_then_28 = SEQN(2, op_ASSIGN_24, op_ASSIGN_27);
	RzIlOpEffect *empty_30 = EMPTY();
	RzIlOpEffect *branch_29 = BRANCH(op_GT_19, seq_then_28, empty_30);
	RzIlOpEffect *seq_31 = SEQN(2, branch_29, op_INC_14);
	RzIlOpEffect *for_32 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_13, seq_31));
	RzIlOpEffect *op_ASSIGN_41 = SETG(Rxx_assoc, op_OR_40);
	RzIlOpEffect *empty_42 = EMPTY();
	RzIlOpEffect *op_ASSIGN_51 = SETG(Rxx_assoc, op_OR_50);
	RzIlOpEffect *empty_52 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_32, op_ASSIGN_41, empty_42, op_ASSIGN_51, empty_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_3);
	RzIlOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_7 = SHIFTR0(DUP(Rxx), op_MUL_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_9 = CAST(32, MSB(op_AND_8), op_AND_8);
	RzIlOpPure *cast_st64_10 = CAST(64, MSB(cast_st32_9), cast_st32_9);
	RzIlOpPure *op_LT_13 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzIlOpPure *op_GT_19 = UGT(VARL("min"), cast_ut16_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1", const_pos1, SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzIlOpPure *op_OR_26 = LOGOR(Ru, op_LSHIFT_25);
	RzIlOpPure *op_MUL_33 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_33));
	RzIlOpPure *op_NOT_35 = LOGNOT(op_LSHIFT_34);
	RzIlOpPure *op_AND_36 = LOGAND(DUP(Rxx), op_NOT_35);
	RzIlOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_38 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_39 = SHIFTL0(op_AND_37, op_MUL_38);
	RzIlOpPure *op_OR_40 = LOGOR(op_AND_36, op_LSHIFT_39);
	RzIlOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_43));
	RzIlOpPure *op_NOT_45 = LOGNOT(op_LSHIFT_44);
	RzIlOpPure *op_AND_46 = LOGAND(DUP(Rxx), op_NOT_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_48 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_47, op_MUL_48);
	RzIlOpPure *op_OR_50 = LOGOR(op_AND_46, op_LSHIFT_49);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("min", cast_ut16_4);
	RzIlOpEffect *op_ASSIGN_11 = SETL("addr", cast_st64_10);
	RzIlOpEffect *op_ASSIGN_12 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_14 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETL("min", cast_ut16_23);
	RzIlOpEffect *op_ASSIGN_27 = SETL("addr", op_OR_26);
	RzIlOpEffect *seq_then_28 = SEQN(2, op_ASSIGN_24, op_ASSIGN_27);
	RzIlOpEffect *empty_30 = EMPTY();
	RzIlOpEffect *branch_29 = BRANCH(op_GT_19, seq_then_28, empty_30);
	RzIlOpEffect *seq_31 = SEQN(2, branch_29, op_INC_14);
	RzIlOpEffect *for_32 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_13, seq_31));
	RzIlOpEffect *op_ASSIGN_41 = SETG(Rxx_assoc, op_OR_40);
	RzIlOpEffect *empty_42 = EMPTY();
	RzIlOpEffect *op_ASSIGN_51 = SETG(Rxx_assoc, op_OR_50);
	RzIlOpEffect *empty_52 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_5, op_ASSIGN_11, for_32, op_ASSIGN_41, empty_42, op_ASSIGN_51, empty_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos1 = UN(32, 1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_3);
	RzIlOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzIlOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_19 = CAST(32, IL_FALSE, op_AND_18);
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzIlOpPure *op_GT_21 = UGT(VARL("min"), cast_ut64_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_24);
	RzIlOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzIlOpPure *op_LSHIFT_28 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzIlOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzIlOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzIlOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzIlOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzIlOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzIlOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzIlOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzIlOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzIlOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("min", cast_ut64_5);
	RzIlOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzIlOpEffect *op_ASSIGN_13 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_15 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_27 = SETL("min", cast_ut64_26);
	RzIlOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzIlOpEffect *seq_then_31 = SEQN(2, op_ASSIGN_27, op_ASSIGN_30);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *branch_32 = BRANCH(op_GT_21, seq_then_31, empty_33);
	RzIlOpEffect *seq_34 = SEQN(2, branch_32, op_INC_15);
	RzIlOpEffect *for_35 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_14, seq_34));
	RzIlOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc, op_OR_43);
	RzIlOpEffect *empty_45 = EMPTY();
	RzIlOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc, op_OR_53);
	RzIlOpEffect *empty_55 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 min;
	// Declare: ut64 addr;
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos1 = UN(32, 1);
	// Declare: ut32 i;
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, "Ru", false);
	RzIlOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rxx, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzIlOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzIlOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_LT_14 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzIlOpPure *op_GT_21 = UGT(VARL("min"), cast_st64_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzIlOpPure *op_LSHIFT_28 = LET("const_pos2", const_pos2, SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_OR_29 = LOGOR(Ru, op_LSHIFT_28);
	RzIlOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_36));
	RzIlOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzIlOpPure *op_AND_39 = LOGAND(DUP(Rxx), op_NOT_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("min"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_40, op_MUL_41);
	RzIlOpPure *op_OR_43 = LOGOR(op_AND_39, op_LSHIFT_42);
	RzIlOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_46));
	RzIlOpPure *op_NOT_48 = LOGNOT(op_LSHIFT_47);
	RzIlOpPure *op_AND_49 = LOGAND(DUP(Rxx), op_NOT_48);
	RzIlOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("addr"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_52 = SHIFTL0(op_AND_50, op_MUL_51);
	RzIlOpPure *op_OR_53 = LOGOR(op_AND_49, op_LSHIFT_52);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("min", cast_st64_5);
	RzIlOpEffect *op_ASSIGN_12 = SETL("addr", cast_st64_11);
	RzIlOpEffect *op_ASSIGN_13 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_15 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_27 = SETL("min", cast_st64_26);
	RzIlOpEffect *op_ASSIGN_30 = SETL("addr", op_OR_29);
	RzIlOpEffect *seq_then_31 = SEQN(2, op_ASSIGN_27, op_ASSIGN_30);
	RzIlOpEffect *empty_33 = EMPTY();
	RzIlOpEffect *branch_32 = BRANCH(op_GT_21, seq_then_31, empty_33);
	RzIlOpEffect *seq_34 = SEQN(2, branch_32, op_INC_15);
	RzIlOpEffect *for_35 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_14, seq_34));
	RzIlOpEffect *op_ASSIGN_44 = SETG(Rxx_assoc, op_OR_43);
	RzIlOpEffect *empty_45 = EMPTY();
	RzIlOpEffect *op_ASSIGN_54 = SETG(Rxx_assoc, op_OR_53);
	RzIlOpEffect *empty_55 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, empty_0, op_ASSIGN_6, op_ASSIGN_12, for_35, op_ASSIGN_44, empty_45, op_ASSIGN_54, empty_55);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>