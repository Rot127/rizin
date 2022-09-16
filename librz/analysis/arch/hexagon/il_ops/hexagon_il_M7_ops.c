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

RzILOpEffect *hex_il_op_m7_dcmpyiw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_ADD_34 = ADD(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_ADD_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyiw_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_ADD_34 = ADD(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_ADD_34);
	RzILOpPure *addop_ADD_34Rxx = ADD(cast_36, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc_tmp, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyiwc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_SUB_34 = SUB(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_SUB_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyiwc_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_SUB_34 = SUB(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_SUB_34);
	RzILOpPure *addop_SUB_34Rxx = ADD(cast_36, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc_tmp, addop_SUB_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyrw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_SUB_34 = SUB(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_SUB_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyrw_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_SUB_34 = SUB(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_SUB_34);
	RzILOpPure *addop_SUB_34Rxx = ADD(cast_36, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc_tmp, addop_SUB_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyrwc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_ADD_34 = ADD(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_ADD_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_dcmpyrwc_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(cast_st64_13)), cast_st64_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_st64_7, cast_st64_15);
	RzILOpPure *op_MUL_17 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(cast_st64_22)), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(cast_st64_30)), cast_st64_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_24, cast_st64_32);
	RzILOpPure *op_ADD_34 = ADD(op_MUL_16, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_ADD_34);
	RzILOpPure *addop_ADD_34Rxx = ADD(cast_36, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc_tmp, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m7_wcmpyiw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyiw_rnd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyiwc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyiwc_rnd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyrw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyrw_rnd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyrwc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m7_wcmpyrwc_rnd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>