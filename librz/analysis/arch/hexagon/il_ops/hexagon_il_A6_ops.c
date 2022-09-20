// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 00:30:08-04:00
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
	// Declare: st32 i;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp430;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos8", const_pos8, ULT(cast_5, VARLP("const_pos8")));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_9 = LET("const_pos8", DUP(const_pos8), MUL(cast_10, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *cast_13 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st8_14 = CAST(8, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(cast_16, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *op_EQ_21 = EQ(cast_st8_14, cast_st8_20);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(8, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_NOT_31 = LOGNOT(VARG(Pd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp430", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_23);
	RzILOpEffect *seq_then_24 = SEQN(1, op_ASSIGN_22);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *branch_25 = BRANCH(op_EQ_21, seq_then_24, empty_26);
	RzILOpEffect *seq_27 = SEQN(1, branch_25);
	RzILOpEffect *seq_28 = SEQN(2, seq_8, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_4, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_2, for_30);
	RzILOpEffect *op_ASSIGN_32 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, op_NOT_31);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, seq_29, op_ASSIGN_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a6_vminub_rdp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp431;
	const char *Pe_assoc_tmp = ISA2REG(hi, 'e', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pe_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_ut8_22 = CAST(8, IL_FALSE, op_AND_20);
	RzILOpPure *op_GT_23 = UGT(cast_ut8_16, cast_ut8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos8", DUP(const_pos8), MUL(cast_31, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_32 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_30));
	RzILOpPure *op_NOT_33 = LOGNOT(op_LSHIFT_32);
	RzILOpPure *op_AND_34 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_33);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos8", DUP(const_pos8), MUL(cast_36, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut8_40 = CAST(8, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut8_46 = CAST(8, IL_FALSE, op_AND_44);
	RzILOpPure *op_LT_47 = ULT(cast_ut8_40, cast_ut8_46);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_48 = LET("const_pos8", DUP(const_pos8), MUL(cast_49, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *cast_52 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_51 = LOGAND(op_RSHIFT_50, cast_52);
	RzILOpPure *cast_ut8_53 = CAST(8, IL_FALSE, op_AND_51);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_54 = LET("const_pos8", DUP(const_pos8), MUL(cast_55, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_54);
	RzILOpPure *cast_58 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_ut8_59 = CAST(8, IL_FALSE, op_AND_57);
	RzILOpPure *cond_60 = ITE(op_LT_47, cast_ut8_53, cast_ut8_59);
	RzILOpPure *cast_62 = CAST(64, MSB(DUP(cond_60)), cond_60);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_62, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_63 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos8", DUP(const_pos8), MUL(cast_65, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_63, op_MUL_64);
	RzILOpPure *cast_68 = CAST(64, IL_FALSE, op_AND_34);
	RzILOpPure *op_OR_67 = LOGOR(cast_68, op_LSHIFT_66);
	RzILOpPure *cast_70 = CAST(64, MSB(DUP(op_OR_67)), op_OR_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp431", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pe_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_69 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_70);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_69, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>