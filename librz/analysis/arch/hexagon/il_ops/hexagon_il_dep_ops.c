// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 15:53:51-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_dep_a2_addsat(HexInsnPktBundle *bundle) {
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

RzILOpEffect *hex_il_op_dep_a2_subsat(HexInsnPktBundle *bundle) {
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

RzILOpEffect *hex_il_op_dep_s2_packhl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos2 = UN(32, 2);
	RzILOpPure *const_pos3 = UN(32, 3);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzIlOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzIlOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzIlOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzIlOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzIlOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzIlOpPure *op_AND_18 = LOGAND(DUP(Rdd), op_NOT_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(Rs, op_MUL_19);
	RzIlOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzIlOpPure *op_AND_23 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzIlOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzIlOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzIlOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzIlOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzIlOpPure *op_AND_33 = LOGAND(DUP(Rdd), op_NOT_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzIlOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzIlOpPure *op_MUL_40 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzIlOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzIlOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzIlOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzIlOpPure *op_AND_48 = LOGAND(DUP(Rdd), op_NOT_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzIlOpPure *op_AND_53 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzIlOpPure *op_MUL_55 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzIlOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzIlOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzIlOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc, op_OR_12);
	RzIlOpEffect *empty_14 = EMPTY();
	RzIlOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc, op_OR_27);
	RzIlOpEffect *empty_29 = EMPTY();
	RzIlOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc, op_OR_42);
	RzIlOpEffect *empty_44 = EMPTY();
	RzIlOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc, op_OR_57);
	RzIlOpEffect *empty_59 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>