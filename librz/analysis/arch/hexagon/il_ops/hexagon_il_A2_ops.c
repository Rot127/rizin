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

RzILOpEffect *hex_il_op_a2_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(Rs, VARLP("const_pos0")));
	RzIlOpPure *op_NEG_1 = NEG(DUP(Rs));
	RzIlOpPure *cond_2 = ITE(op_LT_0, op_NEG_1, DUP(Rs));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_absp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(Rss, VARLP("const_pos0")));
	RzIlOpPure *op_NEG_1 = NEG(DUP(Rss));
	RzIlOpPure *cond_2 = ITE(op_LT_0, op_NEG_1, DUP(Rss));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_abssat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *cast_st32_1 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzIlOpPure *op_LT_3 = LET("const_pos0", const_pos0, ULT(cast_st64_2, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_4 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzIlOpPure *op_NEG_6 = NEG(cast_st64_5);
	RzIlOpPure *cast_st32_7 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_8 = CAST(64, MSB(cast_st32_7), cast_st32_7);
	RzIlOpPure *cond_9 = ITE(op_LT_3, op_NEG_6, cast_st64_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cond_9, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_13 = CAST(32, IL_FALSE, cast_st32_12);
	RzIlOpPure *op_LT_14 = LET("const_pos0", const_pos0, ULT(cast_st64_13, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_15 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzIlOpPure *op_NEG_17 = NEG(cast_st64_16);
	RzIlOpPure *cast_st32_18 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzIlOpPure *cond_20 = ITE(op_LT_14, op_NEG_17, cast_st64_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, cond_20);
	RzIlOpPure *cast_st32_22 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_23 = CAST(32, IL_FALSE, cast_st32_22);
	RzIlOpPure *op_LT_24 = LET("const_pos0", const_pos0, ULT(cast_st64_23, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzIlOpPure *op_NEG_27 = NEG(cast_st64_26);
	RzIlOpPure *cast_st32_28 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzIlOpPure *cond_30 = ITE(op_LT_24, op_NEG_27, cast_st64_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *cast_st32_37 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_38 = CAST(32, IL_FALSE, cast_st32_37);
	RzIlOpPure *op_LT_39 = LET("const_pos0", const_pos0, ULT(cast_st64_38, VARLP("const_pos0")));
	RzIlOpPure *cast_st32_40 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_41 = CAST(32, IL_FALSE, cast_st32_40);
	RzIlOpPure *op_NEG_42 = NEG(cast_st64_41);
	RzIlOpPure *cast_st32_43 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_44 = CAST(64, MSB(cast_st32_43), cast_st32_43);
	RzIlOpPure *cond_45 = ITE(op_LT_39, op_NEG_42, cast_st64_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(cond_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, cond_30, cond_53);

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_55 = SETG(Rd_assoc, cond_54);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_add(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_ADD_20 = ADD(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_ADD_30 = ADD(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_ADD_45 = ADD(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_ADD_20 = ADD(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_ADD_30 = ADD(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_ADD_45 = ADD(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_ADD_20 = ADD(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_ADD_30 = ADD(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_ADD_45 = ADD(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_ADD_20 = ADD(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_ADD_30 = ADD(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_ADD_45 = ADD(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_12 = SETG(Rd_assoc, cond_11);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_12 = SETG(Rd_assoc, cond_11);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_ADD_20 = ADD(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_ADD_30 = ADD(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_ADD_45 = ADD(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_55 = SETG(Rd_assoc, cond_54);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_ADD_20 = ADD(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_ADD_30 = ADD(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_ADD_45 = ADD(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_55 = SETG(Rd_assoc, cond_54);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rss, Rtt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addpsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_addsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *cast_st32_1 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzIlOpPure *cast_st32_3 = CAST(32, MSB(Rt), DUP(Rt));
	RzIlOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzIlOpPure *op_ADD_5 = ADD(cast_st64_2, cast_st64_4);
	RzIlOpPure *c_call_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_5, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_6, VARLP("const_pos0LL")));
	RzIlOpPure *cast_st32_8 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_ADD_12 = ADD(cast_st64_9, cast_st64_11);
	RzIlOpPure *op_EQ_13 = EQ(cond_7, op_ADD_12);
	RzIlOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzIlOpPure *op_ADD_18 = ADD(cast_st64_15, cast_st64_17);
	RzIlOpPure *c_call_19 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_20 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_21 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_22 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_20, c_call_21, VARLP("const_pos1")));
	RzIlOpPure *cond_23 = ITE(c_call_19, c_call_22, usr);
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_26 = CAST(32, IL_FALSE, cast_st32_25);
	RzIlOpPure *cast_st32_27 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzIlOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzIlOpPure *op_ADD_29 = ADD(cast_st64_26, cast_st64_28);
	RzIlOpPure *op_LT_30 = LET("const_pos0", const_pos0, ULT(op_ADD_29, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_31 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_32 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_31));
	RzIlOpPure *op_NEG_33 = NEG(op_LSHIFT_32);
	RzIlOpPure *op_SUB_34 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_34));
	RzIlOpPure *op_SUB_36 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_35, VARLP("const_pos1")));
	RzIlOpPure *cond_37 = ITE(op_LT_30, op_NEG_33, op_SUB_36);
	RzIlOpPure *cond_38 = ITE(op_EQ_13, op_ADD_18, cond_37);

	// WRITE
	RzIlOpEffect *op_ASSIGN_24 = SETG(usr_assoc, cond_23);
	RzIlOpEffect *op_ASSIGN_39 = SETG(Rd_assoc, cond_38);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addsph(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzIlOpPure *c_call_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_5, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_6, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_8 = ADD(Rtt, cond_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_ADD_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addspl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzIlOpPure *c_call_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_5, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_6, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_8 = ADD(Rtt, cond_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_ADD_8);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_AND_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_andir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Rs, VARL("s"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_AND_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_andp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LOGAND(Rss, Rtt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_AND_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_aslh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_LSHIFT_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_asrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);

	// EXEC
	RzIlOpPure *op_RSHIFT_0 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_RSHIFT_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzIlOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_OR_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzIlOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_OR_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzIlOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_OR_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzIlOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzIlOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_OR_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *S = UN(64, (ut64)ISA2IMM(hi, "S"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("S"), VARLP("const_pos0x0ffffffffLL")));
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

RzILOpEffect *hex_il_op_a2_combinew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rt, VARLP("const_pos0x0ffffffffLL")));
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

RzILOpEffect *hex_il_op_a2_max(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_GT_0 = UGT(Rs, Rt);
	RzIlOpPure *cond_1 = ITE(op_GT_0, DUP(Rs), DUP(Rt));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_GT_0 = UGT(Rss, Rtt);
	RzIlOpPure *cond_1 = ITE(op_GT_0, DUP(Rss), DUP(Rtt));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzIlOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzIlOpPure *op_GT_2 = UGT(cast_ut32_0, cast_ut32_1);
	RzIlOpPure *cast_ut32_3 = CAST(32, IL_FALSE, DUP(Rs));
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rt));
	RzIlOpPure *cond_5 = ITE(op_GT_2, cast_ut32_3, cast_ut32_4);

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rss);
	RzIlOpPure *cast_ut64_1 = CAST(64, IL_FALSE, Rtt);
	RzIlOpPure *op_GT_2 = UGT(cast_ut64_0, cast_ut64_1);
	RzIlOpPure *cast_ut64_3 = CAST(64, IL_FALSE, DUP(Rss));
	RzIlOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rtt));
	RzIlOpPure *cond_5 = ITE(op_GT_2, cast_ut64_3, cast_ut64_4);

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_min(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_LT_0 = ULT(Rt, Rs);
	RzIlOpPure *cond_1 = ITE(op_LT_0, DUP(Rt), DUP(Rs));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_0 = ULT(Rtt, Rss);
	RzIlOpPure *cond_1 = ITE(op_LT_0, DUP(Rtt), DUP(Rss));

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc, cond_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rt);
	RzIlOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rs);
	RzIlOpPure *op_LT_2 = ULT(cast_ut32_0, cast_ut32_1);
	RzIlOpPure *cast_ut32_3 = CAST(32, IL_FALSE, DUP(Rt));
	RzIlOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzIlOpPure *cond_5 = ITE(op_LT_2, cast_ut32_3, cast_ut32_4);

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rtt);
	RzIlOpPure *cast_ut64_1 = CAST(64, IL_FALSE, Rss);
	RzIlOpPure *op_LT_2 = ULT(cast_ut64_0, cast_ut64_1);
	RzIlOpPure *cast_ut64_3 = CAST(64, IL_FALSE, DUP(Rtt));
	RzIlOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzIlOpPure *cond_5 = ITE(op_LT_2, cast_ut64_3, cast_ut64_4);

	// WRITE
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cond_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_negp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_NEG_0 = NEG(Rss);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_NEG_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_negsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *cast_st64_1 = CAST(64, MSB(Rs), DUP(Rs));
	RzIlOpPure *op_NEG_2 = NEG(cast_st64_1);
	RzIlOpPure *c_call_3 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_NEG_2, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_3, VARLP("const_pos0LL")));
	RzIlOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *op_NEG_6 = NEG(cast_st64_5);
	RzIlOpPure *op_EQ_7 = EQ(cond_4, op_NEG_6);
	RzIlOpPure *cast_st64_8 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *op_NEG_9 = NEG(cast_st64_8);
	RzIlOpPure *c_call_10 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_11 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_13 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_11, c_call_12, VARLP("const_pos1")));
	RzIlOpPure *cond_14 = ITE(c_call_10, c_call_13, usr);
	RzIlOpPure *cast_st64_16 = CAST(32, IL_FALSE, DUP(Rs));
	RzIlOpPure *op_NEG_17 = NEG(cast_st64_16);
	RzIlOpPure *op_LT_18 = LET("const_pos0", const_pos0, ULT(op_NEG_17, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_19 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_20 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_19));
	RzIlOpPure *op_NEG_21 = NEG(op_LSHIFT_20);
	RzIlOpPure *op_SUB_22 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_23 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_22));
	RzIlOpPure *op_SUB_24 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_23, VARLP("const_pos1")));
	RzIlOpPure *cond_25 = ITE(op_LT_18, op_NEG_21, op_SUB_24);
	RzIlOpPure *cond_26 = ITE(op_EQ_7, op_NEG_9, cond_25);

	// WRITE
	RzIlOpEffect *op_ASSIGN_15 = SETG(usr_assoc, cond_14);
	RzIlOpEffect *op_ASSIGN_27 = SETG(Rd_assoc, cond_26);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_nop(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ

	// EXEC

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_notp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_NOT_0 = LOGNOT(Rss);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_NOT_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_OR_0 = LOGOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_OR_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_orir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_OR_0 = LOGOR(Rs, VARL("s"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_OR_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_orp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_OR_0 = LOGOR(Rss, Rtt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_OR_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_paddifnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_paddit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_padditnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_paddt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_AND_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_AND_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_AND_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_AND_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_porf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_OR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_porfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_OR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_port(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_OR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_portnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_OR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_SUB_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_SUB_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_SUB_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_SUB_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxorf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_XOR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxorfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_XOR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxort(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, "Pu", false);
	RzIlOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_XOR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxortnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, "Pu", true);
	RzIlOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzIlOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_XOR_1);
	RzIlOpEffect *nop_3 = NOP;
	RzIlOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzIlOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzIlOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_roundsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(Rss, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_3 = EQ(cond_2, DUP(Rss));
	RzIlOpPure *c_call_4 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_7 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_5, c_call_6, VARLP("const_pos1")));
	RzIlOpPure *cond_8 = ITE(c_call_4, c_call_7, usr);
	RzIlOpPure *op_LT_10 = LET("const_pos0", const_pos0, ULT(DUP(Rss), VARLP("const_pos0")));
	RzIlOpPure *op_SUB_11 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_11));
	RzIlOpPure *op_NEG_13 = NEG(op_LSHIFT_12);
	RzIlOpPure *op_SUB_14 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_15 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_14));
	RzIlOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_15, VARLP("const_pos1")));
	RzIlOpPure *cond_17 = ITE(op_LT_10, op_NEG_13, op_SUB_16);
	RzIlOpPure *cond_18 = ITE(op_EQ_3, DUP(Rss), cond_17);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(usr_assoc, cond_8);
	RzIlOpEffect *op_ASSIGN_19 = SETG(Rd_assoc, cond_18);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_3 = EQ(cond_2, DUP(Rs));
	RzIlOpPure *c_call_4 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_7 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_5, c_call_6, VARLP("const_pos1")));
	RzIlOpPure *cond_8 = ITE(c_call_4, c_call_7, usr);
	RzIlOpPure *op_LT_10 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzIlOpPure *op_SUB_11 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_11));
	RzIlOpPure *op_NEG_13 = NEG(op_LSHIFT_12);
	RzIlOpPure *op_SUB_14 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_15 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_14));
	RzIlOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_15, VARLP("const_pos1")));
	RzIlOpPure *cond_17 = ITE(op_LT_10, op_NEG_13, op_SUB_16);
	RzIlOpPure *cond_18 = ITE(op_EQ_3, DUP(Rs), cond_17);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(usr_assoc, cond_8);
	RzIlOpEffect *op_ASSIGN_19 = SETG(Rd_assoc, cond_18);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sath(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_3 = EQ(cond_2, DUP(Rs));
	RzIlOpPure *c_call_4 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_7 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_5, c_call_6, VARLP("const_pos1")));
	RzIlOpPure *cond_8 = ITE(c_call_4, c_call_7, usr);
	RzIlOpPure *op_LT_10 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzIlOpPure *op_SUB_11 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_11));
	RzIlOpPure *op_NEG_13 = NEG(op_LSHIFT_12);
	RzIlOpPure *op_SUB_14 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_15 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_14));
	RzIlOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_15, VARLP("const_pos1")));
	RzIlOpPure *cond_17 = ITE(op_LT_10, op_NEG_13, op_SUB_16);
	RzIlOpPure *cond_18 = ITE(op_EQ_3, DUP(Rs), cond_17);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(usr_assoc, cond_8);
	RzIlOpEffect *op_ASSIGN_19 = SETG(Rd_assoc, cond_18);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_3 = EQ(cond_2, DUP(Rs));
	RzIlOpPure *c_call_4 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_7 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_5, c_call_6, VARLP("const_pos1")));
	RzIlOpPure *cond_8 = ITE(c_call_4, c_call_7, usr);
	RzIlOpPure *op_LT_10 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzIlOpPure *op_SUB_12 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_11, VARLP("const_pos1")));
	RzIlOpPure *cond_13 = LET("const_pos0", const_pos0, ITE(op_LT_10, VARLP("const_pos0"), op_SUB_12));
	RzIlOpPure *cond_14 = ITE(op_EQ_3, DUP(Rs), cond_13);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(usr_assoc, cond_8);
	RzIlOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_3 = EQ(cond_2, DUP(Rs));
	RzIlOpPure *c_call_4 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_7 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_5, c_call_6, VARLP("const_pos1")));
	RzIlOpPure *cond_8 = ITE(c_call_4, c_call_7, usr);
	RzIlOpPure *op_LT_10 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzIlOpPure *op_SUB_12 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_11, VARLP("const_pos1")));
	RzIlOpPure *cond_13 = LET("const_pos0", const_pos0, ITE(op_LT_10, VARLP("const_pos0"), op_SUB_12));
	RzIlOpPure *cond_14 = ITE(op_EQ_3, DUP(Rs), cond_13);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(usr_assoc, cond_8);
	RzIlOpEffect *op_ASSIGN_15 = SETG(Rd_assoc, cond_14);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = SUB(Rt, Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_SUB_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzIlOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_10 = SETG(Rd_assoc, op_LSHIFT_9);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_SUB_20 = SUB(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_SUB_45 = SUB(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_SUB_20 = SUB(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_SUB_45 = SUB(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_SUB_20 = SUB(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_SUB_45 = SUB(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_SUB_20 = SUB(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_SUB_45 = SUB(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos16", const_pos16, SHIFTL0(cond_54, VARLP("const_pos16")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_LSHIFT_55);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_12 = SETG(Rd_assoc, cond_11);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_12 = SETG(Rd_assoc, cond_11);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_SUB_20 = SUB(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_SUB_45 = SUB(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_55 = SETG(Rd_assoc, cond_54);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzIlOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rt), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rs), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_SUB_20 = SUB(cast_st16_15, cast_st16_19);
	RzIlOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_32 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzIlOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzIlOpPure *op_MUL_37 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *op_SUB_45 = SUB(cast_st16_40, cast_st16_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_47 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzIlOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzIlOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzIlOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzIlOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzIlOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);

	// WRITE
	RzIlOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzIlOpEffect *op_ASSIGN_55 = SETG(Rd_assoc, cond_54);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = SUB(Rtt, Rss);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_SUB_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_SUB_0 = SUB(VARL("s"), Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_SUB_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *cast_st32_1 = CAST(32, MSB(Rt), DUP(Rt));
	RzIlOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzIlOpPure *cast_st32_3 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzIlOpPure *op_SUB_5 = SUB(cast_st64_2, cast_st64_4);
	RzIlOpPure *c_call_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_5, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_6, VARLP("const_pos0LL")));
	RzIlOpPure *cast_st32_8 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzIlOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzIlOpPure *cast_st32_10 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_SUB_12 = SUB(cast_st64_9, cast_st64_11);
	RzIlOpPure *op_EQ_13 = EQ(cond_7, op_SUB_12);
	RzIlOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzIlOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzIlOpPure *op_SUB_18 = SUB(cast_st64_15, cast_st64_17);
	RzIlOpPure *c_call_19 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_20 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_21 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_22 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_20, c_call_21, VARLP("const_pos1")));
	RzIlOpPure *cond_23 = ITE(c_call_19, c_call_22, usr);
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzIlOpPure *cast_st64_26 = CAST(32, IL_FALSE, cast_st32_25);
	RzIlOpPure *cast_st32_27 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzIlOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzIlOpPure *op_SUB_29 = SUB(cast_st64_26, cast_st64_28);
	RzIlOpPure *op_LT_30 = LET("const_pos0", const_pos0, ULT(op_SUB_29, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_31 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_32 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_31));
	RzIlOpPure *op_NEG_33 = NEG(op_LSHIFT_32);
	RzIlOpPure *op_SUB_34 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_34));
	RzIlOpPure *op_SUB_36 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_35, VARLP("const_pos1")));
	RzIlOpPure *cond_37 = ITE(op_LT_30, op_NEG_33, op_SUB_36);
	RzIlOpPure *cond_38 = ITE(op_EQ_13, op_SUB_18, cond_37);

	// WRITE
	RzIlOpEffect *op_ASSIGN_24 = SETG(usr_assoc, cond_23);
	RzIlOpEffect *op_ASSIGN_39 = SETG(Rd_assoc, cond_38);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_ADD_16, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_7, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_3);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_24));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rs, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_ADD_17 = ADD(cast_st16_12, cast_st16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rs), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_ADD_28 = ADD(cast_st16_23, cast_st16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rs), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rs), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rt), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_st16_48, cast_st16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_55 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_56 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_55));
	RzIlOpPure *op_NEG_57 = NEG(op_LSHIFT_56);
	RzIlOpPure *op_SUB_58 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_59 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_58));
	RzIlOpPure *op_SUB_60 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_59, VARLP("const_pos1")));
	RzIlOpPure *cond_61 = ITE(op_LT_54, op_NEG_57, op_SUB_60);
	RzIlOpPure *cond_62 = ITE(op_EQ_29, op_ADD_38, cond_61);
	RzIlOpPure *op_AND_63 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_62, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_63);
	RzIlOpPure *op_MUL_65 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzIlOpPure *op_OR_67 = LOGOR(op_AND_7, op_LSHIFT_66);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_68 = SETG(Rd_assoc, op_OR_67);
	RzIlOpEffect *empty_69 = EMPTY();
	RzIlOpEffect *seq_70 = SEQN(3, op_ASSIGN_68, empty_69, op_INC_3);
	RzIlOpEffect *for_71 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_70));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rs, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_12 = CAST(16, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_16 = CAST(16, IL_FALSE, op_AND_15);
	RzIlOpPure *op_ADD_17 = ADD(cast_ut16_12, cast_ut16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rs), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_26);
	RzIlOpPure *op_ADD_28 = ADD(cast_ut16_23, cast_ut16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rs), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_36);
	RzIlOpPure *op_ADD_38 = ADD(cast_ut16_33, cast_ut16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rs), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rt), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_52 = CAST(16, IL_FALSE, op_AND_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_ut16_48, cast_ut16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_ADD_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavghs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rs, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_ADD_17 = LET("const_pos1", const_pos1, ADD(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_18 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_17, VARLP("const_pos1")));
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_7, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_3);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_26));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rs, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_16, VARLP("const_pos1")));
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rs, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_SUB_16, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_7, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_3);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_24));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_st16_12, cast_st16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rt), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_SUB_28 = SUB(cast_st16_23, cast_st16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_SUB_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rt), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rs), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_SUB_38 = SUB(cast_st16_33, cast_st16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rt), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzIlOpPure *op_SUB_53 = SUB(cast_st16_48, cast_st16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_SUB_53, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_55 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_56 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_55));
	RzIlOpPure *op_NEG_57 = NEG(op_LSHIFT_56);
	RzIlOpPure *op_SUB_58 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_59 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_58));
	RzIlOpPure *op_SUB_60 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_59, VARLP("const_pos1")));
	RzIlOpPure *cond_61 = ITE(op_LT_54, op_NEG_57, op_SUB_60);
	RzIlOpPure *cond_62 = ITE(op_EQ_29, op_SUB_38, cond_61);
	RzIlOpPure *op_AND_63 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_62, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_63);
	RzIlOpPure *op_MUL_65 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzIlOpPure *op_OR_67 = LOGOR(op_AND_7, op_LSHIFT_66);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_68 = SETG(Rd_assoc, op_OR_67);
	RzIlOpEffect *empty_69 = EMPTY();
	RzIlOpEffect *seq_70 = SEQN(3, op_ASSIGN_68, empty_69, op_INC_3);
	RzIlOpEffect *for_71 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_70));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_12 = CAST(16, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_16 = CAST(16, IL_FALSE, op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_ut16_12, cast_ut16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(op_SUB_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rt), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_26);
	RzIlOpPure *op_SUB_28 = SUB(cast_ut16_23, cast_ut16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_SUB_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rt), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rs), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_36);
	RzIlOpPure *op_SUB_38 = SUB(cast_ut16_33, cast_ut16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rt), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_52 = CAST(16, IL_FALSE, op_AND_51);
	RzIlOpPure *op_SUB_53 = SUB(cast_ut16_48, cast_ut16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_SUB_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_SUB_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_swiz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos3 = UN(32, 3);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos2 = UN(32, 2);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rd, op_NOT_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_7 = CAST(64, MSB(op_AND_6), op_AND_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_7, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzIlOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzIlOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_16 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_15));
	RzIlOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzIlOpPure *op_AND_18 = LOGAND(DUP(Rd), op_NOT_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rs), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_22 = CAST(64, MSB(op_AND_21), op_AND_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_22, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzIlOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzIlOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzIlOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_31 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_30));
	RzIlOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzIlOpPure *op_AND_33 = LOGAND(DUP(Rd), op_NOT_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rs), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_37 = CAST(64, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_37, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzIlOpPure *op_MUL_40 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzIlOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzIlOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_46 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_45));
	RzIlOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzIlOpPure *op_AND_48 = LOGAND(DUP(Rd), op_NOT_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_52 = CAST(64, MSB(op_AND_51), op_AND_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_52, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzIlOpPure *op_MUL_55 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzIlOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzIlOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzIlOpEffect *op_ASSIGN_13 = SETG(Rd_assoc, op_OR_12);
	RzIlOpEffect *empty_14 = EMPTY();
	RzIlOpEffect *op_ASSIGN_28 = SETG(Rd_assoc, op_OR_27);
	RzIlOpEffect *empty_29 = EMPTY();
	RzIlOpEffect *op_ASSIGN_43 = SETG(Rd_assoc, op_OR_42);
	RzIlOpEffect *empty_44 = EMPTY();
	RzIlOpEffect *op_ASSIGN_58 = SETG(Rd_assoc, op_OR_57);
	RzIlOpEffect *empty_59 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *cast_st32_0 = CAST(32, MSB(Rs), DUP(Rs));
	RzIlOpPure *cast_st64_1 = CAST(64, MSB(cast_st32_0), cast_st32_0);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc, cast_st64_1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rd_assoc, Rs);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrcrr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Cs_assoc = ISA2REG(hi, "Cs", false);
	RzIlOpPure *Cs = VARG(Cs_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rd_assoc, Cs);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrih(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rx, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(VARL("u"), VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_5 = CAST(64, IL_FALSE, op_AND_4);
	RzIlOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_7 = SHIFTL0(cast_ut64_5, op_MUL_6);
	RzIlOpPure *op_OR_8 = LOGOR(op_AND_3, op_LSHIFT_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rx_assoc, op_OR_8);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfril(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rx, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(VARL("u"), VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_5 = CAST(64, IL_FALSE, op_AND_4);
	RzIlOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_7 = SHIFTL0(cast_ut64_5, op_MUL_6);
	RzIlOpPure *op_OR_8 = LOGOR(op_AND_3, op_LSHIFT_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rx_assoc, op_OR_8);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrrcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Cd_assoc = ISA2REG(hi, "Cd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Cd_assoc, Rs);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrsi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rd_assoc, s);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_LT_12 = LET("const_pos0", const_pos0, ULT(cast_st16_11, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(DUP(Rss), op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(32, IL_FALSE, op_AND_15);
	RzIlOpPure *op_NEG_17 = NEG(cast_st16_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *cond_22 = ITE(op_LT_12, op_NEG_17, cast_st16_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_22, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzIlOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzIlOpPure *op_OR_27 = LOGOR(op_AND_7, op_LSHIFT_26);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc, op_OR_27);
	RzIlOpEffect *empty_29 = EMPTY();
	RzIlOpEffect *seq_30 = SEQN(3, op_ASSIGN_28, empty_29, op_INC_3);
	RzIlOpEffect *for_31 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_30));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabshsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(32, IL_FALSE, op_AND_11);
	RzIlOpPure *op_LT_13 = LET("const_pos0", const_pos0, ULT(cast_st16_12, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rss), op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzIlOpPure *op_NEG_18 = NEG(cast_st16_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_22 = CAST(16, MSB(op_AND_21), op_AND_21);
	RzIlOpPure *cond_23 = ITE(op_LT_13, op_NEG_18, cast_st16_22);
	RzIlOpPure *c_call_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cond_23, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_24, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_26 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(32, IL_FALSE, op_AND_28);
	RzIlOpPure *op_LT_30 = LET("const_pos0", const_pos0, ULT(cast_st16_29, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzIlOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_34 = CAST(16, MSB(op_AND_33), op_AND_33);
	RzIlOpPure *op_NEG_35 = NEG(cast_st16_34);
	RzIlOpPure *op_MUL_36 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_37, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_39 = CAST(16, MSB(op_AND_38), op_AND_38);
	RzIlOpPure *cond_40 = ITE(op_LT_30, op_NEG_35, cast_st16_39);
	RzIlOpPure *op_EQ_41 = EQ(cond_25, cond_40);
	RzIlOpPure *op_MUL_42 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzIlOpPure *op_AND_44 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_43, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_45 = CAST(32, IL_FALSE, op_AND_44);
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(cast_st16_45, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_47 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzIlOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_50 = CAST(32, IL_FALSE, op_AND_49);
	RzIlOpPure *op_NEG_51 = NEG(cast_st16_50);
	RzIlOpPure *op_MUL_52 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rss), op_MUL_52);
	RzIlOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_55 = CAST(16, MSB(op_AND_54), op_AND_54);
	RzIlOpPure *cond_56 = ITE(op_LT_46, op_NEG_51, cast_st16_55);
	RzIlOpPure *c_call_57 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_58 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_59 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_60 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_58, c_call_59, VARLP("const_pos1")));
	RzIlOpPure *cond_61 = ITE(c_call_57, c_call_60, usr);
	RzIlOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzIlOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzIlOpPure *op_LT_67 = LET("const_pos0", const_pos0, ULT(cast_st16_66, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_68 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzIlOpPure *op_AND_70 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_69, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_71 = CAST(32, IL_FALSE, op_AND_70);
	RzIlOpPure *op_NEG_72 = NEG(cast_st16_71);
	RzIlOpPure *op_MUL_73 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rss), op_MUL_73);
	RzIlOpPure *op_AND_75 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_74, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_76 = CAST(16, MSB(op_AND_75), op_AND_75);
	RzIlOpPure *cond_77 = ITE(op_LT_67, op_NEG_72, cast_st16_76);
	RzIlOpPure *op_LT_78 = LET("const_pos0", const_pos0, ULT(cond_77, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_79 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_80 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_79));
	RzIlOpPure *op_NEG_81 = NEG(op_LSHIFT_80);
	RzIlOpPure *op_SUB_82 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_83 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_82));
	RzIlOpPure *op_SUB_84 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_83, VARLP("const_pos1")));
	RzIlOpPure *cond_85 = ITE(op_LT_78, op_NEG_81, op_SUB_84);
	RzIlOpPure *cond_86 = ITE(op_EQ_41, cond_56, cond_85);
	RzIlOpPure *op_AND_87 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_86, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_88 = CAST(64, IL_FALSE, op_AND_87);
	RzIlOpPure *op_MUL_89 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_90 = SHIFTL0(cast_ut64_88, op_MUL_89);
	RzIlOpPure *op_OR_91 = LOGOR(op_AND_7, op_LSHIFT_90);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_62 = SETG(usr_assoc, cond_61);
	RzIlOpEffect *op_ASSIGN_92 = SETG(Rdd_assoc, op_OR_91);
	RzIlOpEffect *empty_93 = EMPTY();
	RzIlOpEffect *seq_94 = SEQN(3, op_ASSIGN_92, empty_93, op_INC_3);
	RzIlOpEffect *for_95 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_94));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_95);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(32, IL_FALSE, cast_st32_11);
	RzIlOpPure *op_LT_13 = LET("const_pos0", const_pos0, ULT(cast_st64_12, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rss), op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzIlOpPure *cast_st64_18 = CAST(64, IL_FALSE, cast_st32_17);
	RzIlOpPure *op_NEG_19 = NEG(cast_st64_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_23 = CAST(32, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzIlOpPure *cond_25 = ITE(op_LT_13, op_NEG_19, cast_st64_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_26, op_MUL_27);
	RzIlOpPure *op_OR_29 = LOGOR(op_AND_7, op_LSHIFT_28);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc, op_OR_29);
	RzIlOpEffect *empty_31 = EMPTY();
	RzIlOpEffect *seq_32 = SEQN(3, op_ASSIGN_30, empty_31, op_INC_3);
	RzIlOpEffect *for_33 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_32));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabswsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(32, IL_FALSE, cast_st32_12);
	RzIlOpPure *op_LT_14 = LET("const_pos0", const_pos0, ULT(cast_st64_13, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzIlOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzIlOpPure *op_NEG_20 = NEG(cast_st64_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzIlOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzIlOpPure *cond_26 = ITE(op_LT_14, op_NEG_20, cast_st64_25);
	RzIlOpPure *c_call_27 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cond_26, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_28 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_27, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_29 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzIlOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_32 = CAST(32, MSB(op_AND_31), op_AND_31);
	RzIlOpPure *cast_st64_33 = CAST(32, IL_FALSE, cast_st32_32);
	RzIlOpPure *op_LT_34 = LET("const_pos0", const_pos0, ULT(cast_st64_33, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_35 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzIlOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_38 = CAST(32, MSB(op_AND_37), op_AND_37);
	RzIlOpPure *cast_st64_39 = CAST(64, MSB(cast_st32_38), cast_st32_38);
	RzIlOpPure *op_NEG_40 = NEG(cast_st64_39);
	RzIlOpPure *op_MUL_41 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_42, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_44 = CAST(32, MSB(op_AND_43), op_AND_43);
	RzIlOpPure *cast_st64_45 = CAST(64, MSB(cast_st32_44), cast_st32_44);
	RzIlOpPure *cond_46 = ITE(op_LT_34, op_NEG_40, cast_st64_45);
	RzIlOpPure *op_EQ_47 = EQ(cond_28, cond_46);
	RzIlOpPure *op_MUL_48 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzIlOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_51 = CAST(32, MSB(op_AND_50), op_AND_50);
	RzIlOpPure *cast_st64_52 = CAST(32, IL_FALSE, cast_st32_51);
	RzIlOpPure *op_LT_53 = LET("const_pos0", const_pos0, ULT(cast_st64_52, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_54 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rss), op_MUL_54);
	RzIlOpPure *op_AND_56 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_55, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_57 = CAST(32, MSB(op_AND_56), op_AND_56);
	RzIlOpPure *cast_st64_58 = CAST(64, IL_FALSE, cast_st32_57);
	RzIlOpPure *op_NEG_59 = NEG(cast_st64_58);
	RzIlOpPure *op_MUL_60 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rss), op_MUL_60);
	RzIlOpPure *op_AND_62 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_61, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_63 = CAST(32, MSB(op_AND_62), op_AND_62);
	RzIlOpPure *cast_st64_64 = CAST(64, MSB(cast_st32_63), cast_st32_63);
	RzIlOpPure *cond_65 = ITE(op_LT_53, op_NEG_59, cast_st64_64);
	RzIlOpPure *c_call_66 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_67 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_68 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_69 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_67, c_call_68, VARLP("const_pos1")));
	RzIlOpPure *cond_70 = ITE(c_call_66, c_call_69, usr);
	RzIlOpPure *op_MUL_72 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_73 = SHIFTR0(DUP(Rss), op_MUL_72);
	RzIlOpPure *op_AND_74 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_73, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_75 = CAST(32, MSB(op_AND_74), op_AND_74);
	RzIlOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzIlOpPure *op_LT_77 = LET("const_pos0", const_pos0, ULT(cast_st64_76, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_78 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzIlOpPure *op_AND_80 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_79, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_81 = CAST(32, MSB(op_AND_80), op_AND_80);
	RzIlOpPure *cast_st64_82 = CAST(32, IL_FALSE, cast_st32_81);
	RzIlOpPure *op_NEG_83 = NEG(cast_st64_82);
	RzIlOpPure *op_MUL_84 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzIlOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_87 = CAST(32, MSB(op_AND_86), op_AND_86);
	RzIlOpPure *cast_st64_88 = CAST(64, MSB(cast_st32_87), cast_st32_87);
	RzIlOpPure *cond_89 = ITE(op_LT_77, op_NEG_83, cast_st64_88);
	RzIlOpPure *op_LT_90 = LET("const_pos0", const_pos0, ULT(cond_89, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_91 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_92 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_91));
	RzIlOpPure *op_NEG_93 = NEG(op_LSHIFT_92);
	RzIlOpPure *op_SUB_94 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_95 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_94));
	RzIlOpPure *op_SUB_96 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_95, VARLP("const_pos1")));
	RzIlOpPure *cond_97 = ITE(op_LT_90, op_NEG_93, op_SUB_96);
	RzIlOpPure *cond_98 = ITE(op_EQ_47, cond_65, cond_97);
	RzIlOpPure *op_AND_99 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_98, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_100 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_101 = SHIFTL0(op_AND_99, op_MUL_100);
	RzIlOpPure *op_OR_102 = LOGOR(op_AND_7, op_LSHIFT_101);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_71 = SETG(usr_assoc, cond_70);
	RzIlOpEffect *op_ASSIGN_103 = SETG(Rdd_assoc, op_OR_102);
	RzIlOpEffect *empty_104 = EMPTY();
	RzIlOpEffect *seq_105 = SEQN(3, op_ASSIGN_103, empty_104, op_INC_3);
	RzIlOpEffect *for_106 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_105));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_106);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_ADD_16, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_7, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_3);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_24));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_ADD_17 = ADD(cast_st16_12, cast_st16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_ADD_28 = ADD(cast_st16_23, cast_st16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_st16_48, cast_st16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_55 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_56 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_55));
	RzIlOpPure *op_NEG_57 = NEG(op_LSHIFT_56);
	RzIlOpPure *op_SUB_58 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_59 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_58));
	RzIlOpPure *op_SUB_60 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_59, VARLP("const_pos1")));
	RzIlOpPure *cond_61 = ITE(op_LT_54, op_NEG_57, op_SUB_60);
	RzIlOpPure *cond_62 = ITE(op_EQ_29, op_ADD_38, cond_61);
	RzIlOpPure *op_AND_63 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_62, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_63);
	RzIlOpPure *op_MUL_65 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzIlOpPure *op_OR_67 = LOGOR(op_AND_7, op_LSHIFT_66);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_68 = SETG(Rdd_assoc, op_OR_67);
	RzIlOpEffect *empty_69 = EMPTY();
	RzIlOpEffect *seq_70 = SEQN(3, op_ASSIGN_68, empty_69, op_INC_3);
	RzIlOpEffect *for_71 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_70));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(64, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_ADD_16, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_7, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_3);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_24));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddubs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_12 = CAST(8, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_15);
	RzIlOpPure *op_ADD_17 = ADD(cast_ut8_12, cast_ut8_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_26);
	RzIlOpPure *op_ADD_28 = ADD(cast_ut8_23, cast_ut8_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_33 = CAST(64, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_37 = CAST(8, IL_FALSE, op_AND_36);
	RzIlOpPure *op_ADD_38 = ADD(cast_ut8_33, cast_ut8_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_52 = CAST(8, IL_FALSE, op_AND_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_ut8_48, cast_ut8_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_ADD_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_58, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_12 = CAST(16, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_16 = CAST(16, IL_FALSE, op_AND_15);
	RzIlOpPure *op_ADD_17 = ADD(cast_ut16_12, cast_ut16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_26);
	RzIlOpPure *op_ADD_28 = ADD(cast_ut16_23, cast_ut16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_36);
	RzIlOpPure *op_ADD_38 = ADD(cast_ut16_33, cast_ut16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_52 = CAST(16, IL_FALSE, op_AND_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_ut16_48, cast_ut16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_ADD_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, IL_FALSE, cast_st32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzIlOpPure *op_ADD_18 = ADD(cast_st64_12, cast_st64_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzIlOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);
	RzIlOpPure *op_ADD_19 = ADD(cast_st64_13, cast_st64_18);
	RzIlOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_19, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_20, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzIlOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzIlOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzIlOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);
	RzIlOpPure *op_ADD_32 = ADD(cast_st64_26, cast_st64_31);
	RzIlOpPure *op_EQ_33 = EQ(cond_21, op_ADD_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_37 = CAST(32, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *cast_st64_38 = CAST(64, IL_FALSE, cast_st32_37);
	RzIlOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzIlOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_42 = CAST(32, MSB(op_AND_41), op_AND_41);
	RzIlOpPure *cast_st64_43 = CAST(64, MSB(cast_st32_42), cast_st32_42);
	RzIlOpPure *op_ADD_44 = ADD(cast_st64_38, cast_st64_43);
	RzIlOpPure *c_call_45 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_46 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_47 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_48 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_46, c_call_47, VARLP("const_pos1")));
	RzIlOpPure *cond_49 = ITE(c_call_45, c_call_48, usr);
	RzIlOpPure *op_MUL_51 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzIlOpPure *cast_st64_55 = CAST(32, IL_FALSE, cast_st32_54);
	RzIlOpPure *op_MUL_56 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rtt), op_MUL_56);
	RzIlOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_57, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_59 = CAST(32, MSB(op_AND_58), op_AND_58);
	RzIlOpPure *cast_st64_60 = CAST(64, MSB(cast_st32_59), cast_st32_59);
	RzIlOpPure *op_ADD_61 = ADD(cast_st64_55, cast_st64_60);
	RzIlOpPure *op_LT_62 = LET("const_pos0", const_pos0, ULT(op_ADD_61, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_63 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_64 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_63));
	RzIlOpPure *op_NEG_65 = NEG(op_LSHIFT_64);
	RzIlOpPure *op_SUB_66 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_67 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzIlOpPure *op_SUB_68 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_67, VARLP("const_pos1")));
	RzIlOpPure *cond_69 = ITE(op_LT_62, op_NEG_65, op_SUB_68);
	RzIlOpPure *cond_70 = ITE(op_EQ_33, op_ADD_44, cond_69);
	RzIlOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_70, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_72 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_73 = SHIFTL0(op_AND_71, op_MUL_72);
	RzIlOpPure *op_OR_74 = LOGOR(op_AND_7, op_LSHIFT_73);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_50 = SETG(usr_assoc, cond_49);
	RzIlOpEffect *op_ASSIGN_75 = SETG(Rdd_assoc, op_OR_74);
	RzIlOpEffect *empty_76 = EMPTY();
	RzIlOpEffect *seq_77 = SEQN(3, op_ASSIGN_75, empty_76, op_INC_3);
	RzIlOpEffect *for_78 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_77));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 3);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x3", const_pos0x3, LOGAND(op_ADD_16, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_18 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_17, VARLP("const_pos0x3")));
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzIlOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzIlOpPure *op_AND_25 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_26 = CAST(16, MSB(op_AND_25), op_AND_25);
	RzIlOpPure *op_ADD_27 = ADD(cast_st16_22, cast_st16_26);
	RzIlOpPure *op_ADD_28 = LET("const_pos1", const_pos1, ADD(op_ADD_27, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzIlOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_32 = CAST(16, MSB(op_AND_31), op_AND_31);
	RzIlOpPure *op_MUL_33 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzIlOpPure *op_AND_35 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_36 = CAST(16, MSB(op_AND_35), op_AND_35);
	RzIlOpPure *op_ADD_37 = ADD(cast_st16_32, cast_st16_36);
	RzIlOpPure *cond_38 = ITE(op_EQ_18, op_ADD_28, op_ADD_37);
	RzIlOpPure *op_RSHIFT_39 = LET("const_pos1", const_pos1, SHIFTR0(cond_38, VARLP("const_pos1")));
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_39, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_40);
	RzIlOpPure *op_MUL_42 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzIlOpPure *op_OR_44 = LOGOR(op_AND_7, op_LSHIFT_43);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_45 = SETG(Rdd_assoc, op_OR_44);
	RzIlOpEffect *empty_46 = EMPTY();
	RzIlOpEffect *seq_47 = SEQN(3, op_ASSIGN_45, empty_46, op_INC_3);
	RzIlOpEffect *for_48 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_47));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_ADD_17 = LET("const_pos1", const_pos1, ADD(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_18 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_17, VARLP("const_pos1")));
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_7, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_3);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_26));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(8, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgubr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(64, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_ADD_17 = LET("const_pos1", const_pos1, ADD(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_18 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_17, VARLP("const_pos1")));
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_7, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_3);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_26));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_11 = CAST(16, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_ut16_11, cast_ut16_15);
	RzIlOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzIlOpPure *op_ADD_16 = ADD(cast_ut16_11, cast_ut16_15);
	RzIlOpPure *op_ADD_17 = LET("const_pos1", const_pos1, ADD(op_ADD_16, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_18 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_17, VARLP("const_pos1")));
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_7, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_3);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_26));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_12 = CAST(32, IL_FALSE, op_AND_11);
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_EXTRACT64(cast_ut64_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_20 = CAST(32, IL_FALSE, op_AND_19);
	RzIlOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzIlOpPure *c_call_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_EXTRACT64(cast_ut64_21, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_22, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_24 = ADD(cond_15, cond_23);
	RzIlOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_24, VARLP("const_pos1")));
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_26, op_MUL_27);
	RzIlOpPure *op_OR_29 = LOGOR(op_AND_7, op_LSHIFT_28);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc, op_OR_29);
	RzIlOpEffect *empty_31 = EMPTY();
	RzIlOpEffect *seq_32 = SEQN(3, op_ASSIGN_30, empty_31, op_INC_3);
	RzIlOpEffect *for_33 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_32));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_12 = CAST(32, IL_FALSE, op_AND_11);
	RzIlOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_EXTRACT64(cast_ut64_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_20 = CAST(32, IL_FALSE, op_AND_19);
	RzIlOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzIlOpPure *c_call_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_EXTRACT64(cast_ut64_21, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_22, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_24 = ADD(cond_15, cond_23);
	RzIlOpPure *op_ADD_25 = LET("const_pos1", const_pos1, ADD(op_ADD_24, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzIlOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_28 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(op_AND_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzIlOpPure *c_call_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_21, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_22, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_24 = ADD(cond_15, cond_23);
	RzIlOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_24, VARLP("const_pos1")));
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_26, op_MUL_27);
	RzIlOpPure *op_OR_29 = LOGOR(op_AND_7, op_LSHIFT_28);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc, op_OR_29);
	RzIlOpEffect *empty_31 = EMPTY();
	RzIlOpEffect *seq_32 = SEQN(3, op_ASSIGN_30, empty_31, op_INC_3);
	RzIlOpEffect *for_33 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_32));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 3);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzIlOpPure *c_call_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_21, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_22, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_24 = ADD(cond_15, cond_23);
	RzIlOpPure *op_AND_25 = LET("const_pos0x3", const_pos0x3, LOGAND(op_ADD_24, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_26 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_25, VARLP("const_pos0x3")));
	RzIlOpPure *op_NE_27 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_28 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_31 = CAST(32, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *cast_st64_32 = CAST(64, MSB(cast_st32_31), cast_st32_31);
	RzIlOpPure *c_call_33 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_32, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_34 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_27, c_call_33, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_35 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_36 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzIlOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzIlOpPure *c_call_41 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_40, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_42 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_35, c_call_41, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_43 = ADD(cond_34, cond_42);
	RzIlOpPure *op_ADD_44 = LET("const_pos1", const_pos1, ADD(op_ADD_43, VARLP("const_pos1")));
	RzIlOpPure *op_NE_45 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_46 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_46);
	RzIlOpPure *op_AND_48 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_47, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_49 = CAST(32, MSB(op_AND_48), op_AND_48);
	RzIlOpPure *cast_st64_50 = CAST(64, MSB(cast_st32_49), cast_st32_49);
	RzIlOpPure *c_call_51 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_50, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_52 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_45, c_call_51, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_53 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_54 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rtt), op_MUL_54);
	RzIlOpPure *op_AND_56 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_55, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_57 = CAST(32, MSB(op_AND_56), op_AND_56);
	RzIlOpPure *cast_st64_58 = CAST(64, MSB(cast_st32_57), cast_st32_57);
	RzIlOpPure *c_call_59 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_58, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_60 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_53, c_call_59, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_61 = ADD(cond_52, cond_60);
	RzIlOpPure *cond_62 = ITE(op_EQ_26, op_ADD_44, op_ADD_61);
	RzIlOpPure *op_RSHIFT_63 = LET("const_pos1", const_pos1, SHIFTR0(cond_62, VARLP("const_pos1")));
	RzIlOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_65 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_64, op_MUL_65);
	RzIlOpPure *op_OR_67 = LOGOR(op_AND_7, op_LSHIFT_66);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_68 = SETG(Rdd_assoc, op_OR_67);
	RzIlOpEffect *empty_69 = EMPTY();
	RzIlOpEffect *seq_70 = SEQN(3, op_ASSIGN_68, empty_69, op_INC_3);
	RzIlOpEffect *for_71 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_70));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzIlOpPure *c_call_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_21, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_22, VARLP("const_pos0LL")));
	RzIlOpPure *op_ADD_24 = ADD(cond_15, cond_23);
	RzIlOpPure *op_ADD_25 = LET("const_pos1", const_pos1, ADD(op_ADD_24, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzIlOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_28 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(op_AND_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpbeq(HexInsnPktBundle *bundle) {
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
	RzIlOpPure *op_EQ_15 = EQ(cast_st8_10, cast_st8_14);
	RzIlOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_EQ_15);
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

RzILOpEffect *hex_il_op_a2_vcmpbgtu(HexInsnPktBundle *bundle) {
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
	RzIlOpPure *cast_ut8_10 = CAST(8, IL_FALSE, op_AND_9);
	RzIlOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_14 = CAST(8, IL_FALSE, op_AND_13);
	RzIlOpPure *op_GT_15 = UGT(cast_ut8_10, cast_ut8_14);
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

RzILOpEffect *hex_il_op_a2_vcmpheq(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_EQ_16 = EQ(cast_st16_11, cast_st16_15);
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_EQ_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_7, op_LSHIFT_19);
	RzIlOpPure *op_MUL_23 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_24 = LET("const_pos1", const_pos1, ADD(op_MUL_23, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_24));
	RzIlOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzIlOpPure *op_AND_27 = LOGAND(DUP(Pd), op_NOT_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_35 = CAST(16, MSB(op_AND_34), op_AND_34);
	RzIlOpPure *op_EQ_36 = EQ(cast_st16_31, cast_st16_35);
	RzIlOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_EQ_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_MUL_38, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_40 = SHIFTL0(cast_ut64_37, op_ADD_39);
	RzIlOpPure *op_OR_41 = LOGOR(op_AND_27, op_LSHIFT_40);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *op_ASSIGN_42 = SETG(Pd_assoc, op_OR_41);
	RzIlOpEffect *empty_43 = EMPTY();
	RzIlOpEffect *seq_44 = SEQN(5, op_ASSIGN_21, empty_22, op_ASSIGN_42, empty_43, op_INC_3);
	RzIlOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmphgt(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_GT_16 = SGT(cast_st16_11, cast_st16_15);
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_GT_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_7, op_LSHIFT_19);
	RzIlOpPure *op_MUL_23 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_24 = LET("const_pos1", const_pos1, ADD(op_MUL_23, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_24));
	RzIlOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzIlOpPure *op_AND_27 = LOGAND(DUP(Pd), op_NOT_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_35 = CAST(16, MSB(op_AND_34), op_AND_34);
	RzIlOpPure *op_GT_36 = SGT(cast_st16_31, cast_st16_35);
	RzIlOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_GT_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_MUL_38, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_40 = SHIFTL0(cast_ut64_37, op_ADD_39);
	RzIlOpPure *op_OR_41 = LOGOR(op_AND_27, op_LSHIFT_40);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *op_ASSIGN_42 = SETG(Pd_assoc, op_OR_41);
	RzIlOpEffect *empty_43 = EMPTY();
	RzIlOpEffect *seq_44 = SEQN(5, op_ASSIGN_21, empty_22, op_ASSIGN_42, empty_43, op_INC_3);
	RzIlOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmphgtu(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *cast_ut16_11 = CAST(16, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzIlOpPure *op_GT_16 = UGT(cast_ut16_11, cast_ut16_15);
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_GT_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_7, op_LSHIFT_19);
	RzIlOpPure *op_MUL_23 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_24 = LET("const_pos1", const_pos1, ADD(op_MUL_23, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_25 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_24));
	RzIlOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzIlOpPure *op_AND_27 = LOGAND(DUP(Pd), op_NOT_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_31 = CAST(16, IL_FALSE, op_AND_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_35 = CAST(16, IL_FALSE, op_AND_34);
	RzIlOpPure *op_GT_36 = UGT(cast_ut16_31, cast_ut16_35);
	RzIlOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_GT_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_ADD_39 = LET("const_pos1", const_pos1, ADD(op_MUL_38, VARLP("const_pos1")));
	RzIlOpPure *op_LSHIFT_40 = SHIFTL0(cast_ut64_37, op_ADD_39);
	RzIlOpPure *op_OR_41 = LOGOR(op_AND_27, op_LSHIFT_40);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *op_ASSIGN_42 = SETG(Pd_assoc, op_OR_41);
	RzIlOpEffect *empty_43 = EMPTY();
	RzIlOpEffect *seq_44 = SEQN(5, op_ASSIGN_21, empty_22, op_ASSIGN_42, empty_43, op_INC_3);
	RzIlOpEffect *for_45 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_44));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpweq(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzIlOpPure *op_EQ_17 = EQ(cast_st64_11, cast_st64_16);
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_EQ_17);
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("j"));
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_6, op_LSHIFT_19);
	RzIlOpPure *op_LE_27 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzIlOpPure *op_LSHIFT_29 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzIlOpPure *op_AND_31 = LOGAND(DUP(Pd), op_NOT_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzIlOpPure *cast_st64_36 = CAST(64, MSB(cast_st32_35), cast_st32_35);
	RzIlOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_40 = CAST(32, MSB(op_AND_39), op_AND_39);
	RzIlOpPure *cast_st64_41 = CAST(64, MSB(cast_st32_40), cast_st32_40);
	RzIlOpPure *op_EQ_42 = EQ(cast_st64_36, cast_st64_41);
	RzIlOpPure *cast_ut64_43 = CAST(64, IL_FALSE, op_EQ_42);
	RzIlOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_43, VARL("j"));
	RzIlOpPure *op_OR_45 = LOGOR(op_AND_31, op_LSHIFT_44);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("j", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *seq_23 = SEQN(2, empty_22, op_INC_3);
	RzIlOpEffect *for_24 = SEQ2(SETL("j", const_pos0), REPEAT(op_LE_2, seq_23));
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETL("j", const_pos4);
	RzIlOpEffect *op_INC_28 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_46 = SETG(Pd_assoc, op_OR_45);
	RzIlOpEffect *empty_47 = EMPTY();
	RzIlOpEffect *seq_48 = SEQN(2, empty_47, op_INC_28);
	RzIlOpEffect *for_49 = SEQ2(SETL("j", const_pos4), REPEAT(op_LE_27, seq_48));
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, for_24, empty_25, for_49);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgt(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzIlOpPure *op_GT_17 = SGT(cast_st64_11, cast_st64_16);
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_GT_17);
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("j"));
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_6, op_LSHIFT_19);
	RzIlOpPure *op_LE_28 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzIlOpPure *op_LSHIFT_30 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_31 = LOGNOT(op_LSHIFT_30);
	RzIlOpPure *op_AND_32 = LOGAND(DUP(Pd), op_NOT_31);
	RzIlOpPure *op_MUL_33 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzIlOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_36 = CAST(32, MSB(op_AND_35), op_AND_35);
	RzIlOpPure *cast_st64_37 = CAST(64, MSB(cast_st32_36), cast_st32_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rtt), op_MUL_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_39, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_41 = CAST(32, MSB(op_AND_40), op_AND_40);
	RzIlOpPure *cast_st64_42 = CAST(64, MSB(cast_st32_41), cast_st32_41);
	RzIlOpPure *op_GT_43 = SGT(cast_st64_37, cast_st64_42);
	RzIlOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_GT_43);
	RzIlOpPure *op_LSHIFT_45 = SHIFTL0(cast_ut64_44, VARL("j"));
	RzIlOpPure *op_OR_46 = LOGOR(op_AND_32, op_LSHIFT_45);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("j", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_3);
	RzIlOpEffect *for_24 = SEQ2(SETL("j", const_pos0), REPEAT(op_LE_2, seq_23));
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *op_ASSIGN_27 = SETL("j", const_pos4);
	RzIlOpEffect *op_INC_29 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_47 = SETG(Pd_assoc, op_OR_46);
	RzIlOpEffect *empty_48 = EMPTY();
	RzIlOpEffect *seq_49 = SEQN(2, empty_48, op_INC_29);
	RzIlOpEffect *for_50 = SEQ2(SETL("j", const_pos4), REPEAT(op_LE_28, seq_49));
	RzIlOpEffect *instruction_sequence = SEQN(5, empty_0, for_24, empty_25, empty_26, for_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgtu(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_15 = CAST(32, IL_FALSE, op_AND_14);
	RzIlOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzIlOpPure *op_GT_17 = UGT(cast_ut64_11, cast_ut64_16);
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_GT_17);
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("j"));
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_6, op_LSHIFT_19);
	RzIlOpPure *op_LE_27 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzIlOpPure *op_LSHIFT_29 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzIlOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzIlOpPure *op_AND_31 = LOGAND(DUP(Pd), op_NOT_30);
	RzIlOpPure *op_MUL_32 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzIlOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_35 = CAST(32, IL_FALSE, op_AND_34);
	RzIlOpPure *cast_ut64_36 = CAST(64, IL_FALSE, cast_ut32_35);
	RzIlOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_40 = CAST(32, IL_FALSE, op_AND_39);
	RzIlOpPure *cast_ut64_41 = CAST(64, IL_FALSE, cast_ut32_40);
	RzIlOpPure *op_GT_42 = UGT(cast_ut64_36, cast_ut64_41);
	RzIlOpPure *cast_ut64_43 = CAST(64, IL_FALSE, op_GT_42);
	RzIlOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_43, VARL("j"));
	RzIlOpPure *op_OR_45 = LOGOR(op_AND_31, op_LSHIFT_44);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("j", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Pd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *seq_23 = SEQN(2, empty_22, op_INC_3);
	RzIlOpEffect *for_24 = SEQ2(SETL("j", const_pos0), REPEAT(op_LE_2, seq_23));
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETL("j", const_pos4);
	RzIlOpEffect *op_INC_28 = SETL("j", INC(VARL("j")));
	RzIlOpEffect *op_ASSIGN_46 = SETG(Pd_assoc, op_OR_45);
	RzIlOpEffect *empty_47 = EMPTY();
	RzIlOpEffect *seq_48 = SEQN(3, op_ASSIGN_46, empty_47, op_INC_28);
	RzIlOpEffect *for_49 = SEQ2(SETL("j", const_pos4), REPEAT(op_LE_27, seq_48));
	RzIlOpEffect *empty_50 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(5, empty_0, for_24, empty_25, for_49, empty_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vconj(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	RzILOpPure *const_pos3 = UN(32, 3);
	RzILOpPure *const_pos2 = UN(32, 2);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzIlOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzIlOpPure *op_NEG_9 = NEG(cast_st16_8);
	RzIlOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_NEG_9, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, c_call_10, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rss), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_NEG_16 = NEG(cast_st16_15);
	RzIlOpPure *op_EQ_17 = EQ(cond_11, op_NEG_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_21 = CAST(32, IL_FALSE, op_AND_20);
	RzIlOpPure *op_NEG_22 = NEG(cast_st16_21);
	RzIlOpPure *c_call_23 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_24 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_25 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_26 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_24, c_call_25, VARLP("const_pos1")));
	RzIlOpPure *cond_27 = ITE(c_call_23, c_call_26, usr);
	RzIlOpPure *op_MUL_29 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzIlOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_32 = CAST(32, IL_FALSE, op_AND_31);
	RzIlOpPure *op_NEG_33 = NEG(cast_st16_32);
	RzIlOpPure *op_LT_34 = LET("const_pos0", const_pos0, ULT(op_NEG_33, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_35 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_36 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_35));
	RzIlOpPure *op_NEG_37 = NEG(op_LSHIFT_36);
	RzIlOpPure *op_SUB_38 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_39 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_38));
	RzIlOpPure *op_SUB_40 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_39, VARLP("const_pos1")));
	RzIlOpPure *cond_41 = ITE(op_LT_34, op_NEG_37, op_SUB_40);
	RzIlOpPure *cond_42 = ITE(op_EQ_17, op_NEG_22, cond_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_42, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_AND_43);
	RzIlOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_46 = SHIFTL0(cast_ut64_44, op_MUL_45);
	RzIlOpPure *op_OR_47 = LOGOR(op_AND_3, op_LSHIFT_46);
	RzIlOpPure *op_MUL_50 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_51 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_50));
	RzIlOpPure *op_NOT_52 = LOGNOT(op_LSHIFT_51);
	RzIlOpPure *op_AND_53 = LOGAND(DUP(Rdd), op_NOT_52);
	RzIlOpPure *op_MUL_54 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rss), op_MUL_54);
	RzIlOpPure *op_AND_56 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_55, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_57 = CAST(32, IL_FALSE, op_AND_56);
	RzIlOpPure *op_AND_58 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_57, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_59 = CAST(64, IL_FALSE, op_AND_58);
	RzIlOpPure *op_MUL_60 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_61 = SHIFTL0(cast_ut64_59, op_MUL_60);
	RzIlOpPure *op_OR_62 = LOGOR(op_AND_53, op_LSHIFT_61);
	RzIlOpPure *op_MUL_65 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_66 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_65));
	RzIlOpPure *op_NOT_67 = LOGNOT(op_LSHIFT_66);
	RzIlOpPure *op_AND_68 = LOGAND(DUP(Rdd), op_NOT_67);
	RzIlOpPure *op_NE_69 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_70 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzIlOpPure *op_AND_72 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_71, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_73 = CAST(16, MSB(op_AND_72), op_AND_72);
	RzIlOpPure *op_NEG_74 = NEG(cast_st16_73);
	RzIlOpPure *c_call_75 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_NEG_74, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_76 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_69, c_call_75, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_77 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_78 = SHIFTR0(DUP(Rss), op_MUL_77);
	RzIlOpPure *op_AND_79 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_78, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_80 = CAST(16, MSB(op_AND_79), op_AND_79);
	RzIlOpPure *op_NEG_81 = NEG(cast_st16_80);
	RzIlOpPure *op_EQ_82 = EQ(cond_76, op_NEG_81);
	RzIlOpPure *op_MUL_83 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rss), op_MUL_83);
	RzIlOpPure *op_AND_85 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_84, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_86 = CAST(32, IL_FALSE, op_AND_85);
	RzIlOpPure *op_NEG_87 = NEG(cast_st16_86);
	RzIlOpPure *c_call_88 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_89 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_90 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_91 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_89, c_call_90, VARLP("const_pos1")));
	RzIlOpPure *cond_92 = ITE(c_call_88, c_call_91, usr);
	RzIlOpPure *op_MUL_94 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rss), op_MUL_94);
	RzIlOpPure *op_AND_96 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_95, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_97 = CAST(32, IL_FALSE, op_AND_96);
	RzIlOpPure *op_NEG_98 = NEG(cast_st16_97);
	RzIlOpPure *op_LT_99 = LET("const_pos0", const_pos0, ULT(op_NEG_98, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_100 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_101 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_100));
	RzIlOpPure *op_NEG_102 = NEG(op_LSHIFT_101);
	RzIlOpPure *op_SUB_103 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_104 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_103));
	RzIlOpPure *op_SUB_105 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_104, VARLP("const_pos1")));
	RzIlOpPure *cond_106 = ITE(op_LT_99, op_NEG_102, op_SUB_105);
	RzIlOpPure *cond_107 = ITE(op_EQ_82, op_NEG_87, cond_106);
	RzIlOpPure *op_AND_108 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_107, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_109 = CAST(64, IL_FALSE, op_AND_108);
	RzIlOpPure *op_MUL_110 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_111 = SHIFTL0(cast_ut64_109, op_MUL_110);
	RzIlOpPure *op_OR_112 = LOGOR(op_AND_68, op_LSHIFT_111);
	RzIlOpPure *op_MUL_115 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_116 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_115));
	RzIlOpPure *op_NOT_117 = LOGNOT(op_LSHIFT_116);
	RzIlOpPure *op_AND_118 = LOGAND(DUP(Rdd), op_NOT_117);
	RzIlOpPure *op_MUL_119 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzIlOpPure *op_AND_121 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_120, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_122 = CAST(32, IL_FALSE, op_AND_121);
	RzIlOpPure *op_AND_123 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_122, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_124 = CAST(64, IL_FALSE, op_AND_123);
	RzIlOpPure *op_MUL_125 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_126 = SHIFTL0(cast_ut64_124, op_MUL_125);
	RzIlOpPure *op_OR_127 = LOGOR(op_AND_118, op_LSHIFT_126);

	// WRITE
	RzIlOpEffect *op_ASSIGN_28 = SETG(usr_assoc, cond_27);
	RzIlOpEffect *op_ASSIGN_48 = SETG(Rdd_assoc, op_OR_47);
	RzIlOpEffect *empty_49 = EMPTY();
	RzIlOpEffect *op_ASSIGN_63 = SETG(Rdd_assoc, op_OR_62);
	RzIlOpEffect *empty_64 = EMPTY();
	RzIlOpEffect *op_ASSIGN_93 = SETG(usr_assoc, cond_92);
	RzIlOpEffect *op_ASSIGN_113 = SETG(Rdd_assoc, op_OR_112);
	RzIlOpEffect *empty_114 = EMPTY();
	RzIlOpEffect *op_ASSIGN_128 = SETG(Rdd_assoc, op_OR_127);
	RzIlOpEffect *empty_129 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_48, empty_49, op_ASSIGN_63, empty_64, op_ASSIGN_113, empty_114, op_ASSIGN_128, empty_129);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_11 = CAST(8, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_15 = CAST(8, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_GT_16 = SGT(cast_st8_11, cast_st8_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_20 = CAST(64, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_24 = CAST(8, MSB(op_AND_23), op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_GT_16, cast_st8_20, cast_st8_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_25, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_GT_16 = SGT(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_20 = CAST(32, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_24 = CAST(16, MSB(op_AND_23), op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_GT_16, cast_st16_20, cast_st16_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_25, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(8, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_GT_16 = UGT(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_GT_16, cast_ut8_20, cast_ut8_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_25, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_11 = CAST(16, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzIlOpPure *op_GT_16 = UGT(cast_ut16_11, cast_ut16_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_20 = CAST(32, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_GT_16, cast_ut16_20, cast_ut16_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_25, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_16 = CAST(32, IL_FALSE, op_AND_15);
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, cast_ut32_16);
	RzIlOpPure *op_GT_18 = UGT(cast_ut64_12, cast_ut64_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_22 = CAST(32, IL_FALSE, op_AND_21);
	RzIlOpPure *cast_ut64_23 = CAST(64, IL_FALSE, cast_ut32_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_27 = CAST(32, IL_FALSE, op_AND_26);
	RzIlOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzIlOpPure *cond_29 = ITE(op_GT_18, cast_ut64_23, cast_ut64_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_31 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(op_AND_30, op_MUL_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_7, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(3, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzIlOpPure *op_GT_18 = SGT(cast_st64_12, cast_st64_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzIlOpPure *cast_st64_23 = CAST(64, IL_FALSE, cast_st32_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzIlOpPure *cond_29 = ITE(op_GT_18, cast_st64_23, cast_st64_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_31 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(op_AND_30, op_MUL_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_7, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(3, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_11 = CAST(8, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_15 = CAST(8, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_LT_16 = SLT(cast_st8_11, cast_st8_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_20 = CAST(64, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_24 = CAST(8, MSB(op_AND_23), op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_LT_16, cast_st8_20, cast_st8_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_25, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_LT_16 = SLT(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_20 = CAST(32, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_24 = CAST(16, MSB(op_AND_23), op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_LT_16, cast_st16_20, cast_st16_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_25, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(8, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_LT_16 = ULT(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_LT_16, cast_ut8_20, cast_ut8_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_25, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_11 = CAST(16, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_15 = CAST(16, IL_FALSE, op_AND_14);
	RzIlOpPure *op_LT_16 = ULT(cast_ut16_11, cast_ut16_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rtt), op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_20 = CAST(32, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_23);
	RzIlOpPure *cond_25 = ITE(op_LT_16, cast_ut16_20, cast_ut16_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_25, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzIlOpPure *op_OR_30 = LOGOR(op_AND_7, op_LSHIFT_29);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc, op_OR_30);
	RzIlOpEffect *empty_32 = EMPTY();
	RzIlOpEffect *seq_33 = SEQN(3, op_ASSIGN_31, empty_32, op_INC_3);
	RzIlOpEffect *for_34 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_33));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_16 = CAST(32, IL_FALSE, op_AND_15);
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, cast_ut32_16);
	RzIlOpPure *op_LT_18 = ULT(cast_ut64_12, cast_ut64_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_22 = CAST(32, IL_FALSE, op_AND_21);
	RzIlOpPure *cast_ut64_23 = CAST(64, IL_FALSE, cast_ut32_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_ut32_27 = CAST(32, IL_FALSE, op_AND_26);
	RzIlOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzIlOpPure *cond_29 = ITE(op_LT_18, cast_ut64_23, cast_ut64_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_31 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(op_AND_30, op_MUL_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_7, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(3, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, MSB(cast_st32_11), cast_st32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzIlOpPure *op_LT_18 = SLT(cast_st64_12, cast_st64_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzIlOpPure *cast_st64_23 = CAST(64, IL_FALSE, cast_st32_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_27 = CAST(32, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzIlOpPure *cond_29 = ITE(op_LT_18, cast_st64_23, cast_st64_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_29, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_31 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_32 = SHIFTL0(op_AND_30, op_MUL_31);
	RzIlOpPure *op_OR_33 = LOGOR(op_AND_7, op_LSHIFT_32);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc, op_OR_33);
	RzIlOpEffect *empty_35 = EMPTY();
	RzIlOpEffect *seq_36 = SEQN(3, op_ASSIGN_34, empty_35, op_INC_3);
	RzIlOpEffect *for_37 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_36));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_16, VARLP("const_pos1")));
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 3);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(32, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_st16_12, cast_st16_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_17, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_19 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_18, VARLP("const_pos0x3")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(32, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_SUB_28 = SUB(cast_st16_23, cast_st16_27);
	RzIlOpPure *op_ADD_29 = LET("const_pos1", const_pos1, ADD(op_SUB_28, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_33 = CAST(16, MSB(op_AND_32), op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_SUB_38 = SUB(cast_st16_33, cast_st16_37);
	RzIlOpPure *cond_39 = ITE(op_EQ_19, op_ADD_29, op_SUB_38);
	RzIlOpPure *op_RSHIFT_40 = LET("const_pos1", const_pos1, SHIFTR0(cond_39, VARLP("const_pos1")));
	RzIlOpPure *c_call_41 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_40, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_42 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_41, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_43 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rtt), op_MUL_43);
	RzIlOpPure *op_AND_45 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_44, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_46 = CAST(32, IL_FALSE, op_AND_45);
	RzIlOpPure *op_MUL_47 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzIlOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_50 = CAST(16, MSB(op_AND_49), op_AND_49);
	RzIlOpPure *op_SUB_51 = SUB(cast_st16_46, cast_st16_50);
	RzIlOpPure *op_AND_52 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_51, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_53 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_52, VARLP("const_pos0x3")));
	RzIlOpPure *op_MUL_54 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rtt), op_MUL_54);
	RzIlOpPure *op_AND_56 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_55, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_57 = CAST(32, IL_FALSE, op_AND_56);
	RzIlOpPure *op_MUL_58 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_59 = SHIFTR0(DUP(Rss), op_MUL_58);
	RzIlOpPure *op_AND_60 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_59, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_61 = CAST(16, MSB(op_AND_60), op_AND_60);
	RzIlOpPure *op_SUB_62 = SUB(cast_st16_57, cast_st16_61);
	RzIlOpPure *op_ADD_63 = LET("const_pos1", const_pos1, ADD(op_SUB_62, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_64 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rtt), op_MUL_64);
	RzIlOpPure *op_AND_66 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_65, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_67 = CAST(16, MSB(op_AND_66), op_AND_66);
	RzIlOpPure *op_MUL_68 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzIlOpPure *op_AND_70 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_69, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_71 = CAST(16, MSB(op_AND_70), op_AND_70);
	RzIlOpPure *op_SUB_72 = SUB(cast_st16_67, cast_st16_71);
	RzIlOpPure *cond_73 = ITE(op_EQ_53, op_ADD_63, op_SUB_72);
	RzIlOpPure *op_RSHIFT_74 = LET("const_pos1", const_pos1, SHIFTR0(cond_73, VARLP("const_pos1")));
	RzIlOpPure *op_EQ_75 = EQ(cond_42, op_RSHIFT_74);
	RzIlOpPure *op_MUL_76 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rtt), op_MUL_76);
	RzIlOpPure *op_AND_78 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_77, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_79 = CAST(32, IL_FALSE, op_AND_78);
	RzIlOpPure *op_MUL_80 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_81 = SHIFTR0(DUP(Rss), op_MUL_80);
	RzIlOpPure *op_AND_82 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_81, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_83 = CAST(16, MSB(op_AND_82), op_AND_82);
	RzIlOpPure *op_SUB_84 = SUB(cast_st16_79, cast_st16_83);
	RzIlOpPure *op_AND_85 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_84, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_86 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_85, VARLP("const_pos0x3")));
	RzIlOpPure *op_MUL_87 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_88 = SHIFTR0(DUP(Rtt), op_MUL_87);
	RzIlOpPure *op_AND_89 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_88, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_90 = CAST(32, IL_FALSE, op_AND_89);
	RzIlOpPure *op_MUL_91 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzIlOpPure *op_AND_93 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_92, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_94 = CAST(16, MSB(op_AND_93), op_AND_93);
	RzIlOpPure *op_SUB_95 = SUB(cast_st16_90, cast_st16_94);
	RzIlOpPure *op_ADD_96 = LET("const_pos1", const_pos1, ADD(op_SUB_95, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_97 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_98 = SHIFTR0(DUP(Rtt), op_MUL_97);
	RzIlOpPure *op_AND_99 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_98, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_100 = CAST(16, MSB(op_AND_99), op_AND_99);
	RzIlOpPure *op_MUL_101 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_102 = SHIFTR0(DUP(Rss), op_MUL_101);
	RzIlOpPure *op_AND_103 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_102, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_104 = CAST(16, MSB(op_AND_103), op_AND_103);
	RzIlOpPure *op_SUB_105 = SUB(cast_st16_100, cast_st16_104);
	RzIlOpPure *cond_106 = ITE(op_EQ_86, op_ADD_96, op_SUB_105);
	RzIlOpPure *op_RSHIFT_107 = LET("const_pos1", const_pos1, SHIFTR0(cond_106, VARLP("const_pos1")));
	RzIlOpPure *c_call_108 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_109 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_110 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_111 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_109, c_call_110, VARLP("const_pos1")));
	RzIlOpPure *cond_112 = ITE(c_call_108, c_call_111, usr);
	RzIlOpPure *op_MUL_114 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_115 = SHIFTR0(DUP(Rtt), op_MUL_114);
	RzIlOpPure *op_AND_116 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_115, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_117 = CAST(32, IL_FALSE, op_AND_116);
	RzIlOpPure *op_MUL_118 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_119 = SHIFTR0(DUP(Rss), op_MUL_118);
	RzIlOpPure *op_AND_120 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_119, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_121 = CAST(16, MSB(op_AND_120), op_AND_120);
	RzIlOpPure *op_SUB_122 = SUB(cast_st16_117, cast_st16_121);
	RzIlOpPure *op_AND_123 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_122, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_124 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_123, VARLP("const_pos0x3")));
	RzIlOpPure *op_MUL_125 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzIlOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_128 = CAST(32, IL_FALSE, op_AND_127);
	RzIlOpPure *op_MUL_129 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_130 = SHIFTR0(DUP(Rss), op_MUL_129);
	RzIlOpPure *op_AND_131 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_130, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_132 = CAST(16, MSB(op_AND_131), op_AND_131);
	RzIlOpPure *op_SUB_133 = SUB(cast_st16_128, cast_st16_132);
	RzIlOpPure *op_ADD_134 = LET("const_pos1", const_pos1, ADD(op_SUB_133, VARLP("const_pos1")));
	RzIlOpPure *op_MUL_135 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_136 = SHIFTR0(DUP(Rtt), op_MUL_135);
	RzIlOpPure *op_AND_137 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_136, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_138 = CAST(16, MSB(op_AND_137), op_AND_137);
	RzIlOpPure *op_MUL_139 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzIlOpPure *op_AND_141 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_140, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_142 = CAST(16, MSB(op_AND_141), op_AND_141);
	RzIlOpPure *op_SUB_143 = SUB(cast_st16_138, cast_st16_142);
	RzIlOpPure *cond_144 = ITE(op_EQ_124, op_ADD_134, op_SUB_143);
	RzIlOpPure *op_RSHIFT_145 = LET("const_pos1", const_pos1, SHIFTR0(cond_144, VARLP("const_pos1")));
	RzIlOpPure *op_LT_146 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_145, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_147 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_148 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_147));
	RzIlOpPure *op_NEG_149 = NEG(op_LSHIFT_148);
	RzIlOpPure *op_SUB_150 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_151 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_150));
	RzIlOpPure *op_SUB_152 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_151, VARLP("const_pos1")));
	RzIlOpPure *cond_153 = ITE(op_LT_146, op_NEG_149, op_SUB_152);
	RzIlOpPure *cond_154 = ITE(op_EQ_75, op_RSHIFT_107, cond_153);
	RzIlOpPure *op_AND_155 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_154, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_156 = CAST(64, IL_FALSE, op_AND_155);
	RzIlOpPure *op_MUL_157 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_158 = SHIFTL0(cast_ut64_156, op_MUL_157);
	RzIlOpPure *op_OR_159 = LOGOR(op_AND_7, op_LSHIFT_158);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_113 = SETG(usr_assoc, cond_112);
	RzIlOpEffect *op_ASSIGN_160 = SETG(Rdd_assoc, op_OR_159);
	RzIlOpEffect *empty_161 = EMPTY();
	RzIlOpEffect *seq_162 = SEQN(3, op_ASSIGN_160, empty_161, op_INC_3);
	RzIlOpEffect *for_163 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_162));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_163);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(32, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_st16_12, cast_st16_16);
	RzIlOpPure *op_ADD_18 = LET("const_pos1", const_pos1, ADD(op_SUB_17, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_18, VARLP("const_pos1")));
	RzIlOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_RSHIFT_19, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_20, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(32, IL_FALSE, op_AND_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzIlOpPure *op_ADD_31 = LET("const_pos1", const_pos1, ADD(op_SUB_30, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_32 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_31, VARLP("const_pos1")));
	RzIlOpPure *op_EQ_33 = EQ(cond_21, op_RSHIFT_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_39, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_41 = CAST(16, MSB(op_AND_40), op_AND_40);
	RzIlOpPure *op_SUB_42 = SUB(cast_st16_37, cast_st16_41);
	RzIlOpPure *op_ADD_43 = LET("const_pos1", const_pos1, ADD(op_SUB_42, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_44 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_43, VARLP("const_pos1")));
	RzIlOpPure *c_call_45 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_46 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_47 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_48 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_46, c_call_47, VARLP("const_pos1")));
	RzIlOpPure *cond_49 = ITE(c_call_45, c_call_48, usr);
	RzIlOpPure *op_MUL_51 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_54 = CAST(32, IL_FALSE, op_AND_53);
	RzIlOpPure *op_MUL_55 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzIlOpPure *op_AND_57 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_56, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_58 = CAST(16, MSB(op_AND_57), op_AND_57);
	RzIlOpPure *op_SUB_59 = SUB(cast_st16_54, cast_st16_58);
	RzIlOpPure *op_ADD_60 = LET("const_pos1", const_pos1, ADD(op_SUB_59, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_61 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_60, VARLP("const_pos1")));
	RzIlOpPure *op_LT_62 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_61, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_63 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_64 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_63));
	RzIlOpPure *op_NEG_65 = NEG(op_LSHIFT_64);
	RzIlOpPure *op_SUB_66 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_67 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzIlOpPure *op_SUB_68 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_67, VARLP("const_pos1")));
	RzIlOpPure *cond_69 = ITE(op_LT_62, op_NEG_65, op_SUB_68);
	RzIlOpPure *cond_70 = ITE(op_EQ_33, op_RSHIFT_44, cond_69);
	RzIlOpPure *op_AND_71 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_70, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_72 = CAST(64, IL_FALSE, op_AND_71);
	RzIlOpPure *op_MUL_73 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_74 = SHIFTL0(cast_ut64_72, op_MUL_73);
	RzIlOpPure *op_OR_75 = LOGOR(op_AND_7, op_LSHIFT_74);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_50 = SETG(usr_assoc, cond_49);
	RzIlOpEffect *op_ASSIGN_76 = SETG(Rdd_assoc, op_OR_75);
	RzIlOpEffect *empty_77 = EMPTY();
	RzIlOpEffect *seq_78 = SEQN(3, op_ASSIGN_76, empty_77, op_INC_3);
	RzIlOpEffect *for_79 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_78));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_79);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_13, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_16 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzIlOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzIlOpPure *c_call_22 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_21, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_16, c_call_22, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_24 = SUB(cond_15, cond_23);
	RzIlOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_24, VARLP("const_pos1")));
	RzIlOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_26, op_MUL_27);
	RzIlOpPure *op_OR_29 = LOGOR(op_AND_7, op_LSHIFT_28);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc, op_OR_29);
	RzIlOpEffect *empty_31 = EMPTY();
	RzIlOpEffect *seq_32 = SEQN(3, op_ASSIGN_30, empty_31, op_INC_3);
	RzIlOpEffect *for_33 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_32));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 3);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_NE_9 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzIlOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzIlOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzIlOpPure *c_call_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_14, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, c_call_15, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_17 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_18 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzIlOpPure *c_call_23 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_22, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_17, c_call_23, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_25 = SUB(cond_16, cond_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_25, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_27 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_26, VARLP("const_pos0x3")));
	RzIlOpPure *op_NE_28 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_29 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzIlOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_32 = CAST(32, MSB(op_AND_31), op_AND_31);
	RzIlOpPure *cast_st64_33 = CAST(64, MSB(cast_st32_32), cast_st32_32);
	RzIlOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_28, c_call_34, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_36 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_37 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_40 = CAST(32, MSB(op_AND_39), op_AND_39);
	RzIlOpPure *cast_st64_41 = CAST(64, MSB(cast_st32_40), cast_st32_40);
	RzIlOpPure *c_call_42 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_41, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_43 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_36, c_call_42, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_44 = SUB(cond_35, cond_43);
	RzIlOpPure *op_ADD_45 = LET("const_pos1", const_pos1, ADD(op_SUB_44, VARLP("const_pos1")));
	RzIlOpPure *op_NE_46 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_47 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzIlOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_50 = CAST(32, MSB(op_AND_49), op_AND_49);
	RzIlOpPure *cast_st64_51 = CAST(64, MSB(cast_st32_50), cast_st32_50);
	RzIlOpPure *c_call_52 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_51, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_53 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_46, c_call_52, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_54 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_55 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzIlOpPure *op_AND_57 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_56, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_58 = CAST(32, MSB(op_AND_57), op_AND_57);
	RzIlOpPure *cast_st64_59 = CAST(64, MSB(cast_st32_58), cast_st32_58);
	RzIlOpPure *c_call_60 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_59, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_61 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_54, c_call_60, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_62 = SUB(cond_53, cond_61);
	RzIlOpPure *cond_63 = ITE(op_EQ_27, op_ADD_45, op_SUB_62);
	RzIlOpPure *op_RSHIFT_64 = LET("const_pos1", const_pos1, SHIFTR0(cond_63, VARLP("const_pos1")));
	RzIlOpPure *c_call_65 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_64, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_66 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_65, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_67 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_68 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rtt), op_MUL_68);
	RzIlOpPure *op_AND_70 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_69, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_71 = CAST(32, MSB(op_AND_70), op_AND_70);
	RzIlOpPure *cast_st64_72 = CAST(64, MSB(cast_st32_71), cast_st32_71);
	RzIlOpPure *c_call_73 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_72, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_74 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_67, c_call_73, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_75 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_76 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzIlOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_77, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_79 = CAST(32, MSB(op_AND_78), op_AND_78);
	RzIlOpPure *cast_st64_80 = CAST(64, MSB(cast_st32_79), cast_st32_79);
	RzIlOpPure *c_call_81 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_80, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_82 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_75, c_call_81, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_83 = SUB(cond_74, cond_82);
	RzIlOpPure *op_AND_84 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_83, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_85 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_84, VARLP("const_pos0x3")));
	RzIlOpPure *op_NE_86 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_87 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_88 = SHIFTR0(DUP(Rtt), op_MUL_87);
	RzIlOpPure *op_AND_89 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_88, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_90 = CAST(32, MSB(op_AND_89), op_AND_89);
	RzIlOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzIlOpPure *c_call_92 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_91, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_93 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_86, c_call_92, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_94 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_95 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_96 = SHIFTR0(DUP(Rss), op_MUL_95);
	RzIlOpPure *op_AND_97 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_96, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_98 = CAST(32, MSB(op_AND_97), op_AND_97);
	RzIlOpPure *cast_st64_99 = CAST(64, MSB(cast_st32_98), cast_st32_98);
	RzIlOpPure *c_call_100 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_99, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_101 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_94, c_call_100, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_102 = SUB(cond_93, cond_101);
	RzIlOpPure *op_ADD_103 = LET("const_pos1", const_pos1, ADD(op_SUB_102, VARLP("const_pos1")));
	RzIlOpPure *op_NE_104 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_105 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_106 = SHIFTR0(DUP(Rtt), op_MUL_105);
	RzIlOpPure *op_AND_107 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_106, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_108 = CAST(32, MSB(op_AND_107), op_AND_107);
	RzIlOpPure *cast_st64_109 = CAST(64, MSB(cast_st32_108), cast_st32_108);
	RzIlOpPure *c_call_110 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_109, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_111 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_104, c_call_110, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_112 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_113 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rss), op_MUL_113);
	RzIlOpPure *op_AND_115 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_114, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_116 = CAST(32, MSB(op_AND_115), op_AND_115);
	RzIlOpPure *cast_st64_117 = CAST(64, MSB(cast_st32_116), cast_st32_116);
	RzIlOpPure *c_call_118 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_117, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_119 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_112, c_call_118, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_120 = SUB(cond_111, cond_119);
	RzIlOpPure *cond_121 = ITE(op_EQ_85, op_ADD_103, op_SUB_120);
	RzIlOpPure *op_RSHIFT_122 = LET("const_pos1", const_pos1, SHIFTR0(cond_121, VARLP("const_pos1")));
	RzIlOpPure *op_EQ_123 = EQ(cond_66, op_RSHIFT_122);
	RzIlOpPure *op_NE_124 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_125 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzIlOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzIlOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzIlOpPure *c_call_130 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_129, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_131 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_124, c_call_130, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_132 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_133 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_134 = SHIFTR0(DUP(Rss), op_MUL_133);
	RzIlOpPure *op_AND_135 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_134, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_136 = CAST(32, MSB(op_AND_135), op_AND_135);
	RzIlOpPure *cast_st64_137 = CAST(64, MSB(cast_st32_136), cast_st32_136);
	RzIlOpPure *c_call_138 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_137, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_139 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_132, c_call_138, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_140 = SUB(cond_131, cond_139);
	RzIlOpPure *op_AND_141 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_140, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_142 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_141, VARLP("const_pos0x3")));
	RzIlOpPure *op_NE_143 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_144 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_145 = SHIFTR0(DUP(Rtt), op_MUL_144);
	RzIlOpPure *op_AND_146 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_145, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_147 = CAST(32, MSB(op_AND_146), op_AND_146);
	RzIlOpPure *cast_st64_148 = CAST(64, MSB(cast_st32_147), cast_st32_147);
	RzIlOpPure *c_call_149 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_148, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_150 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_143, c_call_149, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_151 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_152 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_153 = SHIFTR0(DUP(Rss), op_MUL_152);
	RzIlOpPure *op_AND_154 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_153, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_155 = CAST(32, MSB(op_AND_154), op_AND_154);
	RzIlOpPure *cast_st64_156 = CAST(64, MSB(cast_st32_155), cast_st32_155);
	RzIlOpPure *c_call_157 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_156, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_158 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_151, c_call_157, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_159 = SUB(cond_150, cond_158);
	RzIlOpPure *op_ADD_160 = LET("const_pos1", const_pos1, ADD(op_SUB_159, VARLP("const_pos1")));
	RzIlOpPure *op_NE_161 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_162 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_163 = SHIFTR0(DUP(Rtt), op_MUL_162);
	RzIlOpPure *op_AND_164 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_163, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_165 = CAST(32, MSB(op_AND_164), op_AND_164);
	RzIlOpPure *cast_st64_166 = CAST(64, MSB(cast_st32_165), cast_st32_165);
	RzIlOpPure *c_call_167 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_166, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_168 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_161, c_call_167, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_169 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_170 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzIlOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_173 = CAST(32, MSB(op_AND_172), op_AND_172);
	RzIlOpPure *cast_st64_174 = CAST(64, MSB(cast_st32_173), cast_st32_173);
	RzIlOpPure *c_call_175 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_174, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_176 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_169, c_call_175, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_177 = SUB(cond_168, cond_176);
	RzIlOpPure *cond_178 = ITE(op_EQ_142, op_ADD_160, op_SUB_177);
	RzIlOpPure *op_RSHIFT_179 = LET("const_pos1", const_pos1, SHIFTR0(cond_178, VARLP("const_pos1")));
	RzIlOpPure *c_call_180 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_181 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_182 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_183 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_181, c_call_182, VARLP("const_pos1")));
	RzIlOpPure *cond_184 = ITE(c_call_180, c_call_183, usr);
	RzIlOpPure *op_NE_186 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_187 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_188 = SHIFTR0(DUP(Rtt), op_MUL_187);
	RzIlOpPure *op_AND_189 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_188, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_190 = CAST(32, MSB(op_AND_189), op_AND_189);
	RzIlOpPure *cast_st64_191 = CAST(64, MSB(cast_st32_190), cast_st32_190);
	RzIlOpPure *c_call_192 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_191, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_193 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_186, c_call_192, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_194 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_195 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_196 = SHIFTR0(DUP(Rss), op_MUL_195);
	RzIlOpPure *op_AND_197 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_196, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_198 = CAST(32, MSB(op_AND_197), op_AND_197);
	RzIlOpPure *cast_st64_199 = CAST(64, MSB(cast_st32_198), cast_st32_198);
	RzIlOpPure *c_call_200 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_199, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_201 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_194, c_call_200, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_202 = SUB(cond_193, cond_201);
	RzIlOpPure *op_AND_203 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_202, VARLP("const_pos0x3")));
	RzIlOpPure *op_EQ_204 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_203, VARLP("const_pos0x3")));
	RzIlOpPure *op_NE_205 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_206 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_207 = SHIFTR0(DUP(Rtt), op_MUL_206);
	RzIlOpPure *op_AND_208 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_207, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_209 = CAST(32, MSB(op_AND_208), op_AND_208);
	RzIlOpPure *cast_st64_210 = CAST(64, MSB(cast_st32_209), cast_st32_209);
	RzIlOpPure *c_call_211 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_210, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_212 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_205, c_call_211, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_213 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_214 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rss), op_MUL_214);
	RzIlOpPure *op_AND_216 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_215, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_217 = CAST(32, MSB(op_AND_216), op_AND_216);
	RzIlOpPure *cast_st64_218 = CAST(64, MSB(cast_st32_217), cast_st32_217);
	RzIlOpPure *c_call_219 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_218, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_220 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_213, c_call_219, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_221 = SUB(cond_212, cond_220);
	RzIlOpPure *op_ADD_222 = LET("const_pos1", const_pos1, ADD(op_SUB_221, VARLP("const_pos1")));
	RzIlOpPure *op_NE_223 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_224 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_225 = SHIFTR0(DUP(Rtt), op_MUL_224);
	RzIlOpPure *op_AND_226 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_225, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_227 = CAST(32, MSB(op_AND_226), op_AND_226);
	RzIlOpPure *cast_st64_228 = CAST(64, MSB(cast_st32_227), cast_st32_227);
	RzIlOpPure *c_call_229 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_228, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_230 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_223, c_call_229, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_231 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_232 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_233 = SHIFTR0(DUP(Rss), op_MUL_232);
	RzIlOpPure *op_AND_234 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_233, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_235 = CAST(32, MSB(op_AND_234), op_AND_234);
	RzIlOpPure *cast_st64_236 = CAST(64, MSB(cast_st32_235), cast_st32_235);
	RzIlOpPure *c_call_237 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_236, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_238 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_231, c_call_237, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_239 = SUB(cond_230, cond_238);
	RzIlOpPure *cond_240 = ITE(op_EQ_204, op_ADD_222, op_SUB_239);
	RzIlOpPure *op_RSHIFT_241 = LET("const_pos1", const_pos1, SHIFTR0(cond_240, VARLP("const_pos1")));
	RzIlOpPure *op_LT_242 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_241, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_243 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_244 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_243));
	RzIlOpPure *op_NEG_245 = NEG(op_LSHIFT_244);
	RzIlOpPure *op_SUB_246 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_247 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_246));
	RzIlOpPure *op_SUB_248 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_247, VARLP("const_pos1")));
	RzIlOpPure *cond_249 = ITE(op_LT_242, op_NEG_245, op_SUB_248);
	RzIlOpPure *cond_250 = ITE(op_EQ_123, op_RSHIFT_179, cond_249);
	RzIlOpPure *op_AND_251 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_250, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_252 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_253 = SHIFTL0(op_AND_251, op_MUL_252);
	RzIlOpPure *op_OR_254 = LOGOR(op_AND_7, op_LSHIFT_253);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_185 = SETG(usr_assoc, cond_184);
	RzIlOpEffect *op_ASSIGN_255 = SETG(Rdd_assoc, op_OR_254);
	RzIlOpEffect *empty_256 = EMPTY();
	RzIlOpEffect *seq_257 = SEQN(3, op_ASSIGN_255, empty_256, op_INC_3);
	RzIlOpEffect *for_258 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_257));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_258);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_NE_9 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzIlOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzIlOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzIlOpPure *c_call_15 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_14, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, c_call_15, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_17 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_18 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(Rss, op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzIlOpPure *c_call_23 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_22, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_17, c_call_23, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_25 = SUB(cond_16, cond_24);
	RzIlOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(op_SUB_25, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_27 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_26, VARLP("const_pos1")));
	RzIlOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_27, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_28, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_30 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_31 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzIlOpPure *op_AND_33 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_32, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_34 = CAST(32, MSB(op_AND_33), op_AND_33);
	RzIlOpPure *cast_st64_35 = CAST(64, MSB(cast_st32_34), cast_st32_34);
	RzIlOpPure *c_call_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_35, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_37 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_30, c_call_36, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_38 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzIlOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_42 = CAST(32, MSB(op_AND_41), op_AND_41);
	RzIlOpPure *cast_st64_43 = CAST(64, MSB(cast_st32_42), cast_st32_42);
	RzIlOpPure *c_call_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_43, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_45 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_38, c_call_44, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_46 = SUB(cond_37, cond_45);
	RzIlOpPure *op_ADD_47 = LET("const_pos1", const_pos1, ADD(op_SUB_46, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_48 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_47, VARLP("const_pos1")));
	RzIlOpPure *op_EQ_49 = EQ(cond_29, op_RSHIFT_48);
	RzIlOpPure *op_NE_50 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_51 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzIlOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzIlOpPure *c_call_56 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_55, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_57 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_50, c_call_56, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_58 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_59 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rss), op_MUL_59);
	RzIlOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_60, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_62 = CAST(32, MSB(op_AND_61), op_AND_61);
	RzIlOpPure *cast_st64_63 = CAST(64, MSB(cast_st32_62), cast_st32_62);
	RzIlOpPure *c_call_64 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_63, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_65 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_64, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_66 = SUB(cond_57, cond_65);
	RzIlOpPure *op_ADD_67 = LET("const_pos1", const_pos1, ADD(op_SUB_66, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_68 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_67, VARLP("const_pos1")));
	RzIlOpPure *c_call_69 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_70 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_71 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_72 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_70, c_call_71, VARLP("const_pos1")));
	RzIlOpPure *cond_73 = ITE(c_call_69, c_call_72, usr);
	RzIlOpPure *op_NE_75 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_76 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rtt), op_MUL_76);
	RzIlOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_77, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_79 = CAST(32, MSB(op_AND_78), op_AND_78);
	RzIlOpPure *cast_st64_80 = CAST(64, MSB(cast_st32_79), cast_st32_79);
	RzIlOpPure *c_call_81 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_80, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_82 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_75, c_call_81, VARLP("const_pos0LL")));
	RzIlOpPure *op_NE_83 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_84 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzIlOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_87 = CAST(32, MSB(op_AND_86), op_AND_86);
	RzIlOpPure *cast_st64_88 = CAST(64, MSB(cast_st32_87), cast_st32_87);
	RzIlOpPure *c_call_89 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(cast_st64_88, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_90 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_83, c_call_89, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_91 = SUB(cond_82, cond_90);
	RzIlOpPure *op_ADD_92 = LET("const_pos1", const_pos1, ADD(op_SUB_91, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_93 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_92, VARLP("const_pos1")));
	RzIlOpPure *op_LT_94 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_93, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_95 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_96 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_95));
	RzIlOpPure *op_NEG_97 = NEG(op_LSHIFT_96);
	RzIlOpPure *op_SUB_98 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_98));
	RzIlOpPure *op_SUB_100 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_99, VARLP("const_pos1")));
	RzIlOpPure *cond_101 = ITE(op_LT_94, op_NEG_97, op_SUB_100);
	RzIlOpPure *cond_102 = ITE(op_EQ_49, op_RSHIFT_68, cond_101);
	RzIlOpPure *op_AND_103 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_102, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_104 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_105 = SHIFTL0(op_AND_103, op_MUL_104);
	RzIlOpPure *op_OR_106 = LOGOR(op_AND_7, op_LSHIFT_105);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_74 = SETG(usr_assoc, cond_73);
	RzIlOpEffect *op_ASSIGN_107 = SETG(Rdd_assoc, op_OR_106);
	RzIlOpEffect *empty_108 = EMPTY();
	RzIlOpEffect *seq_109 = SEQN(3, op_ASSIGN_107, empty_108, op_INC_3);
	RzIlOpEffect *for_110 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_109));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_110);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_3 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_5));
	RzIlOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzIlOpPure *op_AND_8 = LOGAND(Rdd, op_NOT_7);
	RzIlOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(DUP(Rdd), op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, IL_FALSE, cast_st32_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_21 = CAST(8, IL_FALSE, op_AND_20);
	RzIlOpPure *op_ADD_22 = ADD(cast_ut8_17, cast_ut8_21);
	RzIlOpPure *op_ADD_23 = ADD(cast_st64_13, op_ADD_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_26 = SHIFTL0(op_AND_24, op_MUL_25);
	RzIlOpPure *op_OR_27 = LOGOR(op_AND_8, op_LSHIFT_26);
	RzIlOpPure *op_LT_33 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_35 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_36 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_35));
	RzIlOpPure *op_NOT_37 = LOGNOT(op_LSHIFT_36);
	RzIlOpPure *op_AND_38 = LOGAND(DUP(Rdd), op_NOT_37);
	RzIlOpPure *op_MUL_39 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rdd), op_MUL_39);
	RzIlOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_42 = CAST(32, MSB(op_AND_41), op_AND_41);
	RzIlOpPure *cast_st64_43 = CAST(64, IL_FALSE, cast_st32_42);
	RzIlOpPure *op_MUL_44 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzIlOpPure *op_AND_46 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_47 = CAST(8, IL_FALSE, op_AND_46);
	RzIlOpPure *op_MUL_48 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzIlOpPure *op_AND_50 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_49, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_51 = CAST(8, IL_FALSE, op_AND_50);
	RzIlOpPure *op_ADD_52 = ADD(cast_ut8_47, cast_ut8_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_st64_43, op_ADD_52);
	RzIlOpPure *op_AND_54 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_53, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_55 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_56 = SHIFTL0(op_AND_54, op_MUL_55);
	RzIlOpPure *op_OR_57 = LOGOR(op_AND_38, op_LSHIFT_56);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, const_pos0);
	RzIlOpEffect *op_ASSIGN_2 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_4 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc, op_OR_27);
	RzIlOpEffect *empty_29 = EMPTY();
	RzIlOpEffect *seq_30 = SEQN(3, op_ASSIGN_28, empty_29, op_INC_4);
	RzIlOpEffect *for_31 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_3, seq_30));
	RzIlOpEffect *op_ASSIGN_32 = SETL("i", const_pos4);
	RzIlOpEffect *op_INC_34 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc, op_OR_57);
	RzIlOpEffect *empty_59 = EMPTY();
	RzIlOpEffect *seq_60 = SEQN(3, op_ASSIGN_58, empty_59, op_INC_34);
	RzIlOpEffect *for_61 = SEQ2(SETL("i", const_pos4), REPEAT(op_LT_33, seq_60));
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, for_31, for_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rxx, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(DUP(Rxx), op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, IL_FALSE, cast_st32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_20 = CAST(8, IL_FALSE, op_AND_19);
	RzIlOpPure *op_ADD_21 = ADD(cast_ut8_16, cast_ut8_20);
	RzIlOpPure *op_ADD_22 = ADD(cast_st64_12, op_ADD_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_22, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_25 = SHIFTL0(op_AND_23, op_MUL_24);
	RzIlOpPure *op_OR_26 = LOGOR(op_AND_7, op_LSHIFT_25);
	RzIlOpPure *op_LT_32 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_34));
	RzIlOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzIlOpPure *op_AND_37 = LOGAND(DUP(Rxx), op_NOT_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rxx), op_MUL_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_39, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_41 = CAST(32, MSB(op_AND_40), op_AND_40);
	RzIlOpPure *cast_st64_42 = CAST(64, IL_FALSE, cast_st32_41);
	RzIlOpPure *op_MUL_43 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzIlOpPure *op_AND_45 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_44, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_46 = CAST(8, IL_FALSE, op_AND_45);
	RzIlOpPure *op_MUL_47 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzIlOpPure *op_AND_49 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_50 = CAST(8, IL_FALSE, op_AND_49);
	RzIlOpPure *op_ADD_51 = ADD(cast_ut8_46, cast_ut8_50);
	RzIlOpPure *op_ADD_52 = ADD(cast_st64_42, op_ADD_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_52, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_54 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_53, op_MUL_54);
	RzIlOpPure *op_OR_56 = LOGOR(op_AND_37, op_LSHIFT_55);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_27 = SETG(Rxx_assoc, op_OR_26);
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *seq_29 = SEQN(3, op_ASSIGN_27, empty_28, op_INC_3);
	RzIlOpEffect *for_30 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_29));
	RzIlOpEffect *op_ASSIGN_31 = SETL("i", const_pos4);
	RzIlOpEffect *op_INC_33 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_57 = SETG(Rxx_assoc, op_OR_56);
	RzIlOpEffect *empty_58 = EMPTY();
	RzIlOpEffect *seq_59 = SEQN(3, op_ASSIGN_57, empty_58, op_INC_33);
	RzIlOpEffect *for_60 = SEQ2(SETL("i", const_pos4), REPEAT(op_LT_32, seq_59));
	RzIlOpEffect *instruction_sequence = SEQN(3, empty_0, for_30, for_60);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0 = UN(32, 0);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 4);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_3 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_5));
	RzIlOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzIlOpPure *op_AND_8 = LOGAND(Rdd, op_NOT_7);
	RzIlOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(DUP(Rdd), op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, IL_FALSE, cast_st32_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_21 = CAST(8, IL_FALSE, op_AND_20);
	RzIlOpPure *op_SUB_22 = SUB(cast_ut8_17, cast_ut8_21);
	RzIlOpPure *op_LT_23 = LET("const_pos0", const_pos0, ULT(op_SUB_22, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_26);
	RzIlOpPure *op_MUL_28 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzIlOpPure *op_AND_30 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_30);
	RzIlOpPure *op_SUB_32 = SUB(cast_ut8_27, cast_ut8_31);
	RzIlOpPure *op_NEG_33 = NEG(op_SUB_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_37 = CAST(8, IL_FALSE, op_AND_36);
	RzIlOpPure *op_MUL_38 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rtt), op_MUL_38);
	RzIlOpPure *op_AND_40 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_39, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_41 = CAST(8, IL_FALSE, op_AND_40);
	RzIlOpPure *op_SUB_42 = SUB(cast_ut8_37, cast_ut8_41);
	RzIlOpPure *cond_43 = ITE(op_LT_23, op_NEG_33, op_SUB_42);
	RzIlOpPure *op_ADD_44 = ADD(cast_st64_13, cond_43);
	RzIlOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_44, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_46 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_47 = SHIFTL0(op_AND_45, op_MUL_46);
	RzIlOpPure *op_OR_48 = LOGOR(op_AND_8, op_LSHIFT_47);
	RzIlOpPure *op_LT_54 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_57 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_56));
	RzIlOpPure *op_NOT_58 = LOGNOT(op_LSHIFT_57);
	RzIlOpPure *op_AND_59 = LOGAND(DUP(Rdd), op_NOT_58);
	RzIlOpPure *op_MUL_60 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rdd), op_MUL_60);
	RzIlOpPure *op_AND_62 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_61, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_63 = CAST(32, MSB(op_AND_62), op_AND_62);
	RzIlOpPure *cast_st64_64 = CAST(64, IL_FALSE, cast_st32_63);
	RzIlOpPure *op_MUL_65 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_65);
	RzIlOpPure *op_AND_67 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_66, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_68 = CAST(32, IL_FALSE, op_AND_67);
	RzIlOpPure *op_MUL_69 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rtt), op_MUL_69);
	RzIlOpPure *op_AND_71 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_70, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_72 = CAST(8, IL_FALSE, op_AND_71);
	RzIlOpPure *op_SUB_73 = SUB(cast_ut8_68, cast_ut8_72);
	RzIlOpPure *op_LT_74 = LET("const_pos0", const_pos0, ULT(op_SUB_73, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_75 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rss), op_MUL_75);
	RzIlOpPure *op_AND_77 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_76, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_78 = CAST(8, IL_FALSE, op_AND_77);
	RzIlOpPure *op_MUL_79 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rtt), op_MUL_79);
	RzIlOpPure *op_AND_81 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_80, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_82 = CAST(8, IL_FALSE, op_AND_81);
	RzIlOpPure *op_SUB_83 = SUB(cast_ut8_78, cast_ut8_82);
	RzIlOpPure *op_NEG_84 = NEG(op_SUB_83);
	RzIlOpPure *op_MUL_85 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzIlOpPure *op_AND_87 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_86, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_88 = CAST(8, IL_FALSE, op_AND_87);
	RzIlOpPure *op_MUL_89 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_90 = SHIFTR0(DUP(Rtt), op_MUL_89);
	RzIlOpPure *op_AND_91 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_90, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_92 = CAST(8, IL_FALSE, op_AND_91);
	RzIlOpPure *op_SUB_93 = SUB(cast_ut8_88, cast_ut8_92);
	RzIlOpPure *cond_94 = ITE(op_LT_74, op_NEG_84, op_SUB_93);
	RzIlOpPure *op_ADD_95 = ADD(cast_st64_64, cond_94);
	RzIlOpPure *op_AND_96 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_95, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_97 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_98 = SHIFTL0(op_AND_96, op_MUL_97);
	RzIlOpPure *op_OR_99 = LOGOR(op_AND_59, op_LSHIFT_98);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, const_pos0);
	RzIlOpEffect *op_ASSIGN_2 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_4 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc, op_OR_48);
	RzIlOpEffect *empty_50 = EMPTY();
	RzIlOpEffect *seq_51 = SEQN(3, op_ASSIGN_49, empty_50, op_INC_4);
	RzIlOpEffect *for_52 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_3, seq_51));
	RzIlOpEffect *op_ASSIGN_53 = SETL("i", const_pos4);
	RzIlOpEffect *op_INC_55 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_100 = SETG(Rdd_assoc, op_OR_99);
	RzIlOpEffect *empty_101 = EMPTY();
	RzIlOpEffect *seq_102 = SEQN(3, op_ASSIGN_100, empty_101, op_INC_55);
	RzIlOpEffect *for_103 = SEQ2(SETL("i", const_pos4), REPEAT(op_LT_54, seq_102));
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, for_52, for_103);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rxx_assoc = ISA2REG(hi, "Rxx", false);
	RzIlOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rxx, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(DUP(Rxx), op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, IL_FALSE, cast_st32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_20 = CAST(8, IL_FALSE, op_AND_19);
	RzIlOpPure *op_SUB_21 = SUB(cast_ut8_16, cast_ut8_20);
	RzIlOpPure *op_LT_22 = LET("const_pos0", const_pos0, ULT(op_SUB_21, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzIlOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_26 = CAST(8, IL_FALSE, op_AND_25);
	RzIlOpPure *op_MUL_27 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzIlOpPure *op_AND_29 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_30 = CAST(8, IL_FALSE, op_AND_29);
	RzIlOpPure *op_SUB_31 = SUB(cast_ut8_26, cast_ut8_30);
	RzIlOpPure *op_NEG_32 = NEG(op_SUB_31);
	RzIlOpPure *op_MUL_33 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzIlOpPure *op_AND_35 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_34, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_36 = CAST(8, IL_FALSE, op_AND_35);
	RzIlOpPure *op_MUL_37 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzIlOpPure *op_AND_39 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_38, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_40 = CAST(8, IL_FALSE, op_AND_39);
	RzIlOpPure *op_SUB_41 = SUB(cast_ut8_36, cast_ut8_40);
	RzIlOpPure *cond_42 = ITE(op_LT_22, op_NEG_32, op_SUB_41);
	RzIlOpPure *op_ADD_43 = ADD(cast_st64_12, cond_42);
	RzIlOpPure *op_AND_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_43, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_45 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_46 = SHIFTL0(op_AND_44, op_MUL_45);
	RzIlOpPure *op_OR_47 = LOGOR(op_AND_7, op_LSHIFT_46);
	RzIlOpPure *op_LT_53 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_55 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_56 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_55));
	RzIlOpPure *op_NOT_57 = LOGNOT(op_LSHIFT_56);
	RzIlOpPure *op_AND_58 = LOGAND(DUP(Rxx), op_NOT_57);
	RzIlOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rxx), op_MUL_59);
	RzIlOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_60, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_62 = CAST(32, MSB(op_AND_61), op_AND_61);
	RzIlOpPure *cast_st64_63 = CAST(64, IL_FALSE, cast_st32_62);
	RzIlOpPure *op_MUL_64 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_64);
	RzIlOpPure *op_AND_66 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_65, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_67 = CAST(32, IL_FALSE, op_AND_66);
	RzIlOpPure *op_MUL_68 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rtt), op_MUL_68);
	RzIlOpPure *op_AND_70 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_69, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_71 = CAST(8, IL_FALSE, op_AND_70);
	RzIlOpPure *op_SUB_72 = SUB(cast_ut8_67, cast_ut8_71);
	RzIlOpPure *op_LT_73 = LET("const_pos0", const_pos0, ULT(op_SUB_72, VARLP("const_pos0")));
	RzIlOpPure *op_MUL_74 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rss), op_MUL_74);
	RzIlOpPure *op_AND_76 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_75, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_77 = CAST(8, IL_FALSE, op_AND_76);
	RzIlOpPure *op_MUL_78 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rtt), op_MUL_78);
	RzIlOpPure *op_AND_80 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_81 = CAST(8, IL_FALSE, op_AND_80);
	RzIlOpPure *op_SUB_82 = SUB(cast_ut8_77, cast_ut8_81);
	RzIlOpPure *op_NEG_83 = NEG(op_SUB_82);
	RzIlOpPure *op_MUL_84 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzIlOpPure *op_AND_86 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_85, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_87 = CAST(8, IL_FALSE, op_AND_86);
	RzIlOpPure *op_MUL_88 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_89 = SHIFTR0(DUP(Rtt), op_MUL_88);
	RzIlOpPure *op_AND_90 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_89, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_91 = CAST(8, IL_FALSE, op_AND_90);
	RzIlOpPure *op_SUB_92 = SUB(cast_ut8_87, cast_ut8_91);
	RzIlOpPure *cond_93 = ITE(op_LT_73, op_NEG_83, op_SUB_92);
	RzIlOpPure *op_ADD_94 = ADD(cast_st64_63, cond_93);
	RzIlOpPure *op_AND_95 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_94, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_96 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_97 = SHIFTL0(op_AND_95, op_MUL_96);
	RzIlOpPure *op_OR_98 = LOGOR(op_AND_58, op_LSHIFT_97);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_48 = SETG(Rxx_assoc, op_OR_47);
	RzIlOpEffect *empty_49 = EMPTY();
	RzIlOpEffect *seq_50 = SEQN(3, op_ASSIGN_48, empty_49, op_INC_3);
	RzIlOpEffect *for_51 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_50));
	RzIlOpEffect *op_ASSIGN_52 = SETL("i", const_pos4);
	RzIlOpEffect *op_INC_54 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_99 = SETG(Rxx_assoc, op_OR_98);
	RzIlOpEffect *empty_100 = EMPTY();
	RzIlOpEffect *seq_101 = SEQN(3, op_ASSIGN_99, empty_100, op_INC_54);
	RzIlOpEffect *for_102 = SEQ2(SETL("i", const_pos4), REPEAT(op_LT_53, seq_101));
	RzIlOpEffect *instruction_sequence = SEQN(3, empty_0, for_51, for_102);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(32, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_15 = CAST(16, MSB(op_AND_14), op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_st16_11, cast_st16_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_SUB_16, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_7, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_3);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_24));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_st16_12, cast_st16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(op_SUB_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_SUB_28 = SUB(cast_st16_23, cast_st16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_SUB_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_SUB_38 = SUB(cast_st16_33, cast_st16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzIlOpPure *op_SUB_53 = SUB(cast_st16_48, cast_st16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_SUB_53, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_55 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_56 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_55));
	RzIlOpPure *op_NEG_57 = NEG(op_LSHIFT_56);
	RzIlOpPure *op_SUB_58 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_59 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_58));
	RzIlOpPure *op_SUB_60 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_59, VARLP("const_pos1")));
	RzIlOpPure *cond_61 = ITE(op_LT_54, op_NEG_57, op_SUB_60);
	RzIlOpPure *cond_62 = ITE(op_EQ_29, op_SUB_38, cond_61);
	RzIlOpPure *op_AND_63 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_62, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_64 = CAST(64, IL_FALSE, op_AND_63);
	RzIlOpPure *op_MUL_65 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_64, op_MUL_65);
	RzIlOpPure *op_OR_67 = LOGOR(op_AND_7, op_LSHIFT_66);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_68 = SETG(Rdd_assoc, op_OR_67);
	RzIlOpEffect *empty_69 = EMPTY();
	RzIlOpEffect *seq_70 = SEQN(3, op_ASSIGN_68, empty_69, op_INC_3);
	RzIlOpEffect *for_71 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_70));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_11 = CAST(64, IL_FALSE, op_AND_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(8, IL_FALSE, op_AND_14);
	RzIlOpPure *op_SUB_16 = SUB(cast_ut8_11, cast_ut8_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_SUB_16, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_7, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_3);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_24));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsububs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_12 = CAST(8, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_ut8_12, cast_ut8_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_SUB_17, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_26);
	RzIlOpPure *op_SUB_28 = SUB(cast_ut8_23, cast_ut8_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_SUB_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_33 = CAST(64, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_37 = CAST(8, IL_FALSE, op_AND_36);
	RzIlOpPure *op_SUB_38 = SUB(cast_ut8_33, cast_ut8_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_52 = CAST(8, IL_FALSE, op_AND_51);
	RzIlOpPure *op_SUB_53 = SUB(cast_ut8_48, cast_ut8_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_SUB_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_SUB_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_58, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_12 = CAST(16, IL_FALSE, op_AND_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_16 = CAST(16, IL_FALSE, op_AND_15);
	RzIlOpPure *op_SUB_17 = SUB(cast_ut16_12, cast_ut16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(op_SUB_17, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_26);
	RzIlOpPure *op_SUB_28 = SUB(cast_ut16_23, cast_ut16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_SUB_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_33 = CAST(32, IL_FALSE, op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_36);
	RzIlOpPure *op_SUB_38 = SUB(cast_ut16_33, cast_ut16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_ut16_52 = CAST(16, IL_FALSE, op_AND_51);
	RzIlOpPure *op_SUB_53 = SUB(cast_ut16_48, cast_ut16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_SUB_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_SUB_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_58, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rdd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_9, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_11 = CAST(32, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *cast_st64_12 = CAST(64, IL_FALSE, cast_st32_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzIlOpPure *op_SUB_18 = SUB(cast_st64_12, cast_st64_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_SUB_18, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_7, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_3);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_25));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = SN(64, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_4 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzIlOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);
	RzIlOpPure *op_SUB_19 = SUB(cast_st64_13, cast_st64_18);
	RzIlOpPure *c_call_20 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_19, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_20, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzIlOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzIlOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzIlOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);
	RzIlOpPure *op_SUB_32 = SUB(cast_st64_26, cast_st64_31);
	RzIlOpPure *op_EQ_33 = EQ(cond_21, op_SUB_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_37 = CAST(32, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *cast_st64_38 = CAST(64, IL_FALSE, cast_st32_37);
	RzIlOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzIlOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_42 = CAST(32, MSB(op_AND_41), op_AND_41);
	RzIlOpPure *cast_st64_43 = CAST(64, MSB(cast_st32_42), cast_st32_42);
	RzIlOpPure *op_SUB_44 = SUB(cast_st64_38, cast_st64_43);
	RzIlOpPure *c_call_45 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_46 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_47 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_48 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_46, c_call_47, VARLP("const_pos1")));
	RzIlOpPure *cond_49 = ITE(c_call_45, c_call_48, usr);
	RzIlOpPure *op_MUL_51 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzIlOpPure *cast_st64_55 = CAST(32, IL_FALSE, cast_st32_54);
	RzIlOpPure *op_MUL_56 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzIlOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_57, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_59 = CAST(32, MSB(op_AND_58), op_AND_58);
	RzIlOpPure *cast_st64_60 = CAST(64, MSB(cast_st32_59), cast_st32_59);
	RzIlOpPure *op_SUB_61 = SUB(cast_st64_55, cast_st64_60);
	RzIlOpPure *op_LT_62 = LET("const_pos0", const_pos0, ULT(op_SUB_61, VARLP("const_pos0")));
	RzIlOpPure *op_SUB_63 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_64 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_63));
	RzIlOpPure *op_NEG_65 = NEG(op_LSHIFT_64);
	RzIlOpPure *op_SUB_66 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzIlOpPure *op_LSHIFT_67 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzIlOpPure *op_SUB_68 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_67, VARLP("const_pos1")));
	RzIlOpPure *cond_69 = ITE(op_LT_62, op_NEG_65, op_SUB_68);
	RzIlOpPure *cond_70 = ITE(op_EQ_33, op_SUB_44, cond_69);
	RzIlOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_70, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_72 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzIlOpPure *op_LSHIFT_73 = SHIFTL0(op_AND_71, op_MUL_72);
	RzIlOpPure *op_OR_74 = LOGOR(op_AND_7, op_LSHIFT_73);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_50 = SETG(usr_assoc, cond_49);
	RzIlOpEffect *op_ASSIGN_75 = SETG(Rdd_assoc, op_OR_74);
	RzIlOpEffect *empty_76 = EMPTY();
	RzIlOpEffect *seq_77 = SEQN(3, op_ASSIGN_75, empty_76, op_INC_3);
	RzIlOpEffect *for_78 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_77));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_XOR_0 = LOGXOR(Rs, Rt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_XOR_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_xorp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzIlOpPure *op_XOR_0 = LOGXOR(Rss, Rtt);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc, op_XOR_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_zxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>