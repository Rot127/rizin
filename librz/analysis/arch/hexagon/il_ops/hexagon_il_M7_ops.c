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

RzILOpEffect *hex_il_op_m7_dcmpyiw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_ADD_30 = ADD(op_MUL_14, op_MUL_29);

	// WRITE
	RzILOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc_tmp, op_ADD_30);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_ADD_30 = ADD(op_MUL_14, op_MUL_29);
	RzILOpPure *addop_ADD_30Rxx = ADD(op_ADD_30, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_31 = SETG(Rxx_assoc_tmp, addop_ADD_30Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_SUB_30 = SUB(op_MUL_14, op_MUL_29);

	// WRITE
	RzILOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc_tmp, op_SUB_30);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_SUB_30 = SUB(op_MUL_14, op_MUL_29);
	RzILOpPure *addop_SUB_30Rxx = ADD(op_SUB_30, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_31 = SETG(Rxx_assoc_tmp, addop_SUB_30Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_SUB_30 = SUB(op_MUL_14, op_MUL_29);

	// WRITE
	RzILOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc_tmp, op_SUB_30);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_SUB_30 = SUB(op_MUL_14, op_MUL_29);
	RzILOpPure *addop_SUB_30Rxx = ADD(op_SUB_30, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_31 = SETG(Rxx_assoc_tmp, addop_SUB_30Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_ADD_30 = ADD(op_MUL_14, op_MUL_29);

	// WRITE
	RzILOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc_tmp, op_ADD_30);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_31);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, IL_FALSE, cast_st32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(op_AND_9), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(cast_st64_11), cast_st64_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cast_st64_13);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(cast_st64_19), cast_st64_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(cast_st64_26), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_MUL_29 = MUL(cast_st64_21, cast_st64_28);
	RzILOpPure *op_ADD_30 = ADD(op_MUL_14, op_MUL_29);
	RzILOpPure *addop_ADD_30Rxx = ADD(op_ADD_30, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_31 = SETG(Rxx_assoc_tmp, addop_ADD_30Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_31);

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