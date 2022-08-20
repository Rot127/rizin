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

RzILOpEffect *hex_il_op_a6_vcmpbeq_notany(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut32 i;
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_3 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rss, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(op_AND_9), op_AND_9);
	RzILOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_14 = CAST(8, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_EQ_15 = EQ(cast_st8_10, cast_st8_14);
	RzILOpPure *op_NOT_23 = LOGNOT(VARG(Pd_assoc_tmp));

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_ASSIGN_2 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_16 = SETG(Pd_assoc_tmp, LET("const_pos0xff", const_pos0xff, VARLP("const_pos0xff")));
	RzILOpEffect *seq_17 = SEQN(2, seq_6, op_ASSIGN_16);
	RzILOpEffect *seq_then_18 = SEQN(1, seq_17);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *branch_19 = BRANCH(op_EQ_15, seq_then_18, empty_20);
	RzILOpEffect *seq_21 = SEQN(1, branch_19);
	RzILOpEffect *for_22 = SEQ2(op_ASSIGN_2, REPEAT(op_LT_3, seq_21));
	RzILOpEffect *op_ASSIGN_24 = SETG(Pd_assoc_tmp, op_NOT_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, for_22, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a6_vminub_rdp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pe_assoc_tmp = ISA2REG(hi, 'e', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pe_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_12 = CAST(8, IL_FALSE, op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *op_GT_17 = UGT(cast_ut8_12, cast_ut8_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_GT_17);
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("i"));
	RzILOpPure *op_OR_20 = LOGOR(op_AND_8, op_LSHIFT_19);
	RzILOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_24));
	RzILOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzILOpPure *op_AND_27 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_26);
	RzILOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_35 = CAST(8, IL_FALSE, op_AND_34);
	RzILOpPure *op_LT_36 = ULT(cast_ut8_31, cast_ut8_35);
	RzILOpPure *op_MUL_37 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzILOpPure *op_AND_39 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_40 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *op_MUL_41 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_44 = CAST(8, IL_FALSE, op_AND_43);
	RzILOpPure *cond_45 = ITE(op_LT_36, cast_ut8_40, cast_ut8_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_45, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *op_MUL_48 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_47, op_MUL_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_27, op_LSHIFT_49);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_21 = SETG(Pe_assoc_tmp, op_OR_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_5, op_ASSIGN_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = SETG(Rdd_assoc_tmp, op_OR_50);
	RzILOpEffect *empty_52 = EMPTY();
	RzILOpEffect *seq_53 = SEQN(4, seq_22, empty_23, op_ASSIGN_51, empty_52);
	RzILOpEffect *for_54 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_53));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_54);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>