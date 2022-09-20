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

RzILOpEffect *hex_il_op_m4_and_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *andop_AND_0Rx = LOGAND(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, andop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *andop_AND_1Rx = LOGAND(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_2 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, andop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *andop_OR_0Rx = LOGAND(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, andop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);
	RzILOpPure *andop_XOR_0Rx = LOGAND(op_XOR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, andop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_wh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1771;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1772;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1773;
	// Declare: st64 h_tmp1774;
	// Declare: st64 h_tmp1775;
	// Declare: st64 h_tmp1776;
	// Declare: st64 h_tmp1777;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1778;
	// Declare: ut32 h_tmp1779;
	// Declare: ut32 h_tmp1780;
	// Declare: ut64 h_tmp1781;
	// Declare: st64 h_tmp1782;
	// Declare: st64 h_tmp1783;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, op_RSHIFT_10);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1771"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(cast_st64_26)), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *op_NE_29 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_30 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rt), op_MUL_30);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, op_RSHIFT_31);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp1772"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_28, cond_41);
	RzILOpPure *op_ADD_43 = ADD(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_ADD_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1773"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(cast_st64_59)), cast_st64_59);
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_NE_62 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rt), op_MUL_63);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, op_RSHIFT_64);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_66, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_62, VARL("h_tmp1774"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_61, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_77, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *cast_st32_81 = CAST(32, MSB(DUP(cast_st64_80)), cast_st64_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(DUP(cast_st32_81)), cast_st32_81);
	RzILOpPure *op_NE_83 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_84 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rt), op_MUL_84);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, op_RSHIFT_85);
	RzILOpPure *op_AND_86 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_83, VARL("h_tmp1775"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_82, cond_95);
	RzILOpPure *op_ADD_97 = ADD(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_ADD_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(DUP(cast_st64_106)), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(DUP(cast_st32_107)), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, op_RSHIFT_111);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_113, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_112)), op_AND_112);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_109, VARL("h_tmp1776"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_108, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_124, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_126 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_127 = CAST(64, MSB(DUP(cast_st32_126)), cast_st32_126);
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(cast_st64_127)), cast_st64_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *op_NE_130 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_131 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rt), op_MUL_131);
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *op_AND_133 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_134, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_130, VARL("h_tmp1777"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_129, cond_142);
	RzILOpPure *op_ADD_144 = ADD(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_ADD_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1779"))), VARL("h_tmp1779"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1780"))), VARL("h_tmp1780"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1778")), VARL("h_tmp1781"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_173 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_174 = CAST(64, MSB(DUP(cast_st32_173)), cast_st32_173);
	RzILOpPure *cast_st32_175 = CAST(32, MSB(DUP(cast_st64_174)), cast_st64_174);
	RzILOpPure *cast_st64_176 = CAST(64, MSB(DUP(cast_st32_175)), cast_st32_175);
	RzILOpPure *op_NE_177 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_178 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rt), op_MUL_178);
	RzILOpPure *cast_181 = CAST(32, IL_FALSE, op_RSHIFT_179);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_181, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_180)), op_AND_180);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_177, VARL("h_tmp1782"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_176, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *op_AND_193 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_192, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_194 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_195 = CAST(64, MSB(DUP(cast_st32_194)), cast_st32_194);
	RzILOpPure *cast_st32_196 = CAST(32, MSB(DUP(cast_st64_195)), cast_st64_195);
	RzILOpPure *cast_st64_197 = CAST(64, MSB(DUP(cast_st32_196)), cast_st32_196);
	RzILOpPure *op_NE_198 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_199 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rt), op_MUL_199);
	RzILOpPure *cast_202 = CAST(32, IL_FALSE, op_RSHIFT_200);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_202, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_201)), op_AND_201);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_198, VARL("h_tmp1783"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_197, cond_210);
	RzILOpPure *op_ADD_212 = ADD(op_MUL_190, op_MUL_211);
	RzILOpPure *cast_214 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_213 = ADD(op_ADD_212, cast_214);
	RzILOpPure *op_RSHIFT_215 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_213, VARLP("const_pos15")));
	RzILOpPure *cast_217 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_216 = SLT(op_RSHIFT_215, cast_217);
	RzILOpPure *op_SUB_218 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_219 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_218));
	RzILOpPure *op_NEG_220 = NEG(op_LSHIFT_219);
	RzILOpPure *op_SUB_221 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_222 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_221));
	RzILOpPure *cast_224 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_223 = SUB(op_LSHIFT_222, cast_224);
	RzILOpPure *cond_225 = ITE(op_LT_216, op_NEG_220, op_SUB_223);
	RzILOpPure *cond_226 = ITE(op_EQ_101, op_RSHIFT_147, cond_225);
	RzILOpPure *cast_228 = CAST(32, MSB(DUP(cond_226)), cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1771", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1772", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1773", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1774", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1775", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1776", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1777", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1778", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1779", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1780", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1781", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1782", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1783", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_whc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1784;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1785;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1786;
	// Declare: st64 h_tmp1787;
	// Declare: st64 h_tmp1788;
	// Declare: st64 h_tmp1789;
	// Declare: st64 h_tmp1790;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1791;
	// Declare: ut32 h_tmp1792;
	// Declare: ut32 h_tmp1793;
	// Declare: ut64 h_tmp1794;
	// Declare: st64 h_tmp1795;
	// Declare: st64 h_tmp1796;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, op_RSHIFT_10);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1784"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(cast_st64_26)), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *op_NE_29 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_30 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rt), op_MUL_30);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, op_RSHIFT_31);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp1785"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_28, cond_41);
	RzILOpPure *op_SUB_43 = SUB(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_SUB_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1786"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(cast_st64_59)), cast_st64_59);
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_NE_62 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rt), op_MUL_63);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, op_RSHIFT_64);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_66, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_62, VARL("h_tmp1787"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_61, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_77, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *cast_st32_81 = CAST(32, MSB(DUP(cast_st64_80)), cast_st64_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(DUP(cast_st32_81)), cast_st32_81);
	RzILOpPure *op_NE_83 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_84 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rt), op_MUL_84);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, op_RSHIFT_85);
	RzILOpPure *op_AND_86 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_83, VARL("h_tmp1788"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_82, cond_95);
	RzILOpPure *op_SUB_97 = SUB(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_SUB_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(DUP(cast_st64_106)), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(DUP(cast_st32_107)), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, op_RSHIFT_111);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_113, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_112)), op_AND_112);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_109, VARL("h_tmp1789"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_108, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_124, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_126 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_127 = CAST(64, MSB(DUP(cast_st32_126)), cast_st32_126);
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(cast_st64_127)), cast_st64_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *op_NE_130 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_131 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rt), op_MUL_131);
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *op_AND_133 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_134, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_130, VARL("h_tmp1790"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_129, cond_142);
	RzILOpPure *op_SUB_144 = SUB(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_SUB_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1792"))), VARL("h_tmp1792"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1793"))), VARL("h_tmp1793"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1791")), VARL("h_tmp1794"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_173 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_174 = CAST(64, MSB(DUP(cast_st32_173)), cast_st32_173);
	RzILOpPure *cast_st32_175 = CAST(32, MSB(DUP(cast_st64_174)), cast_st64_174);
	RzILOpPure *cast_st64_176 = CAST(64, MSB(DUP(cast_st32_175)), cast_st32_175);
	RzILOpPure *op_NE_177 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_178 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rt), op_MUL_178);
	RzILOpPure *cast_181 = CAST(32, IL_FALSE, op_RSHIFT_179);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_181, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_180)), op_AND_180);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_177, VARL("h_tmp1795"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_176, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *op_AND_193 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_192, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_194 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_195 = CAST(64, MSB(DUP(cast_st32_194)), cast_st32_194);
	RzILOpPure *cast_st32_196 = CAST(32, MSB(DUP(cast_st64_195)), cast_st64_195);
	RzILOpPure *cast_st64_197 = CAST(64, MSB(DUP(cast_st32_196)), cast_st32_196);
	RzILOpPure *op_NE_198 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_199 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rt), op_MUL_199);
	RzILOpPure *cast_202 = CAST(32, IL_FALSE, op_RSHIFT_200);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_202, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_201)), op_AND_201);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_198, VARL("h_tmp1796"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_197, cond_210);
	RzILOpPure *op_SUB_212 = SUB(op_MUL_190, op_MUL_211);
	RzILOpPure *cast_214 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_213 = ADD(op_SUB_212, cast_214);
	RzILOpPure *op_RSHIFT_215 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_213, VARLP("const_pos15")));
	RzILOpPure *cast_217 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_216 = SLT(op_RSHIFT_215, cast_217);
	RzILOpPure *op_SUB_218 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_219 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_218));
	RzILOpPure *op_NEG_220 = NEG(op_LSHIFT_219);
	RzILOpPure *op_SUB_221 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_222 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_221));
	RzILOpPure *cast_224 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_223 = SUB(op_LSHIFT_222, cast_224);
	RzILOpPure *cond_225 = ITE(op_LT_216, op_NEG_220, op_SUB_223);
	RzILOpPure *cond_226 = ITE(op_EQ_101, op_RSHIFT_147, cond_225);
	RzILOpPure *cast_228 = CAST(32, MSB(DUP(cond_226)), cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1784", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1785", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1786", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1787", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1788", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1789", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1790", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1791", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1792", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1793", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1794", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1795", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1796", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_wh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1797;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1798;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1799;
	// Declare: st64 h_tmp1800;
	// Declare: st64 h_tmp1801;
	// Declare: st64 h_tmp1802;
	// Declare: st64 h_tmp1803;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1804;
	// Declare: ut32 h_tmp1805;
	// Declare: ut32 h_tmp1806;
	// Declare: ut64 h_tmp1807;
	// Declare: st64 h_tmp1808;
	// Declare: st64 h_tmp1809;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, op_RSHIFT_10);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1797"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(cast_st64_26)), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *op_NE_29 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_30 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rt), op_MUL_30);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, op_RSHIFT_31);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp1798"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_28, cond_41);
	RzILOpPure *op_SUB_43 = SUB(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_SUB_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1799"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(cast_st64_59)), cast_st64_59);
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_NE_62 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rt), op_MUL_63);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, op_RSHIFT_64);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_66, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_62, VARL("h_tmp1800"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_61, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_77, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *cast_st32_81 = CAST(32, MSB(DUP(cast_st64_80)), cast_st64_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(DUP(cast_st32_81)), cast_st32_81);
	RzILOpPure *op_NE_83 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_84 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rt), op_MUL_84);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, op_RSHIFT_85);
	RzILOpPure *op_AND_86 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_83, VARL("h_tmp1801"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_82, cond_95);
	RzILOpPure *op_SUB_97 = SUB(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_SUB_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(DUP(cast_st64_106)), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(DUP(cast_st32_107)), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, op_RSHIFT_111);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_113, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_112)), op_AND_112);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_109, VARL("h_tmp1802"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_108, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_124, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_126 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_127 = CAST(64, MSB(DUP(cast_st32_126)), cast_st32_126);
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(cast_st64_127)), cast_st64_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *op_NE_130 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_131 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rt), op_MUL_131);
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *op_AND_133 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_134, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_130, VARL("h_tmp1803"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_129, cond_142);
	RzILOpPure *op_SUB_144 = SUB(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_SUB_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1805"))), VARL("h_tmp1805"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1806"))), VARL("h_tmp1806"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1804")), VARL("h_tmp1807"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_173 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_174 = CAST(64, MSB(DUP(cast_st32_173)), cast_st32_173);
	RzILOpPure *cast_st32_175 = CAST(32, MSB(DUP(cast_st64_174)), cast_st64_174);
	RzILOpPure *cast_st64_176 = CAST(64, MSB(DUP(cast_st32_175)), cast_st32_175);
	RzILOpPure *op_NE_177 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_178 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rt), op_MUL_178);
	RzILOpPure *cast_181 = CAST(32, IL_FALSE, op_RSHIFT_179);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_181, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_180)), op_AND_180);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_177, VARL("h_tmp1808"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_176, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *op_AND_193 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_192, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_194 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_195 = CAST(64, MSB(DUP(cast_st32_194)), cast_st32_194);
	RzILOpPure *cast_st32_196 = CAST(32, MSB(DUP(cast_st64_195)), cast_st64_195);
	RzILOpPure *cast_st64_197 = CAST(64, MSB(DUP(cast_st32_196)), cast_st32_196);
	RzILOpPure *op_NE_198 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_199 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rt), op_MUL_199);
	RzILOpPure *cast_202 = CAST(32, IL_FALSE, op_RSHIFT_200);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_202, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_201)), op_AND_201);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_198, VARL("h_tmp1809"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_197, cond_210);
	RzILOpPure *op_SUB_212 = SUB(op_MUL_190, op_MUL_211);
	RzILOpPure *cast_214 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_213 = ADD(op_SUB_212, cast_214);
	RzILOpPure *op_RSHIFT_215 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_213, VARLP("const_pos15")));
	RzILOpPure *cast_217 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_216 = SLT(op_RSHIFT_215, cast_217);
	RzILOpPure *op_SUB_218 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_219 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_218));
	RzILOpPure *op_NEG_220 = NEG(op_LSHIFT_219);
	RzILOpPure *op_SUB_221 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_222 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_221));
	RzILOpPure *cast_224 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_223 = SUB(op_LSHIFT_222, cast_224);
	RzILOpPure *cond_225 = ITE(op_LT_216, op_NEG_220, op_SUB_223);
	RzILOpPure *cond_226 = ITE(op_EQ_101, op_RSHIFT_147, cond_225);
	RzILOpPure *cast_228 = CAST(32, MSB(DUP(cond_226)), cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1797", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1798", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1799", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1800", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1801", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1802", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1803", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1804", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1805", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1806", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1807", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1808", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1809", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_whc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1810;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1811;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1812;
	// Declare: st64 h_tmp1813;
	// Declare: st64 h_tmp1814;
	// Declare: st64 h_tmp1815;
	// Declare: st64 h_tmp1816;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1817;
	// Declare: ut32 h_tmp1818;
	// Declare: ut32 h_tmp1819;
	// Declare: ut64 h_tmp1820;
	// Declare: st64 h_tmp1821;
	// Declare: st64 h_tmp1822;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, op_RSHIFT_10);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1810"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(cast_st64_26)), cast_st64_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *op_NE_29 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_30 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rt), op_MUL_30);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, op_RSHIFT_31);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp1811"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_28, cond_41);
	RzILOpPure *op_ADD_43 = ADD(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_ADD_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1812"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(cast_st64_59)), cast_st64_59);
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_NE_62 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rt), op_MUL_63);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, op_RSHIFT_64);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_66, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_62, VARL("h_tmp1813"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_61, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_77, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *cast_st32_81 = CAST(32, MSB(DUP(cast_st64_80)), cast_st64_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(DUP(cast_st32_81)), cast_st32_81);
	RzILOpPure *op_NE_83 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_84 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rt), op_MUL_84);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, op_RSHIFT_85);
	RzILOpPure *op_AND_86 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_83, VARL("h_tmp1814"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_82, cond_95);
	RzILOpPure *op_ADD_97 = ADD(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_ADD_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(DUP(cast_st64_106)), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(DUP(cast_st32_107)), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, op_RSHIFT_111);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_113, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_112)), op_AND_112);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_109, VARL("h_tmp1815"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_108, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *op_AND_125 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_124, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_126 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_127 = CAST(64, MSB(DUP(cast_st32_126)), cast_st32_126);
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(cast_st64_127)), cast_st64_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *op_NE_130 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_131 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rt), op_MUL_131);
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *op_AND_133 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_134, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_130, VARL("h_tmp1816"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_129, cond_142);
	RzILOpPure *op_ADD_144 = ADD(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_ADD_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1818"))), VARL("h_tmp1818"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1819"))), VARL("h_tmp1819"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1817")), VARL("h_tmp1820"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_173 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_174 = CAST(64, MSB(DUP(cast_st32_173)), cast_st32_173);
	RzILOpPure *cast_st32_175 = CAST(32, MSB(DUP(cast_st64_174)), cast_st64_174);
	RzILOpPure *cast_st64_176 = CAST(64, MSB(DUP(cast_st32_175)), cast_st32_175);
	RzILOpPure *op_NE_177 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_178 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_179 = SHIFTR0(DUP(Rt), op_MUL_178);
	RzILOpPure *cast_181 = CAST(32, IL_FALSE, op_RSHIFT_179);
	RzILOpPure *op_AND_180 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_181, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_180)), op_AND_180);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_177, VARL("h_tmp1821"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_176, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *op_AND_193 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_192, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_194 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_195 = CAST(64, MSB(DUP(cast_st32_194)), cast_st32_194);
	RzILOpPure *cast_st32_196 = CAST(32, MSB(DUP(cast_st64_195)), cast_st64_195);
	RzILOpPure *cast_st64_197 = CAST(64, MSB(DUP(cast_st32_196)), cast_st32_196);
	RzILOpPure *op_NE_198 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_199 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_200 = SHIFTR0(DUP(Rt), op_MUL_199);
	RzILOpPure *cast_202 = CAST(32, IL_FALSE, op_RSHIFT_200);
	RzILOpPure *op_AND_201 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_202, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_201)), op_AND_201);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_198, VARL("h_tmp1822"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_197, cond_210);
	RzILOpPure *op_ADD_212 = ADD(op_MUL_190, op_MUL_211);
	RzILOpPure *cast_214 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_213 = ADD(op_ADD_212, cast_214);
	RzILOpPure *op_RSHIFT_215 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_213, VARLP("const_pos15")));
	RzILOpPure *cast_217 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_216 = SLT(op_RSHIFT_215, cast_217);
	RzILOpPure *op_SUB_218 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_219 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_218));
	RzILOpPure *op_NEG_220 = NEG(op_LSHIFT_219);
	RzILOpPure *op_SUB_221 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_222 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_221));
	RzILOpPure *cast_224 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_223 = SUB(op_LSHIFT_222, cast_224);
	RzILOpPure *cond_225 = ITE(op_LT_216, op_NEG_220, op_SUB_223);
	RzILOpPure *cond_226 = ITE(op_EQ_101, op_RSHIFT_147, cond_225);
	RzILOpPure *cast_228 = CAST(32, MSB(DUP(cond_226)), cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1810", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1811", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1812", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1813", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1814", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1815", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1816", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1817", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1818", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1819", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1820", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1821", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1822", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mac_up_s1_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(32, 0x1f);
	// Declare: st64 h_tmp1823;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1824;
	// Declare: ut32 h_tmp1825;
	// Declare: ut32 h_tmp1826;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp1827;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(DUP(cast_st32_1)), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_MUL_7 = MUL(cast_st64_4, cast_st64_6);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_7, VARLP("const_pos31")));
	RzILOpPure *op_ADD_9 = ADD(cast_st64_2, op_RSHIFT_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1823"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *op_MUL_23 = MUL(cast_st64_20, cast_st64_22);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos31", DUP(const_pos31), SHIFTR0(op_MUL_23, VARLP("const_pos31")));
	RzILOpPure *op_ADD_25 = ADD(cast_st64_18, op_RSHIFT_24);
	RzILOpPure *op_EQ_26 = EQ(cond_16, op_ADD_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_30, cast_st64_32);
	RzILOpPure *op_RSHIFT_34 = LET("const_pos31", DUP(const_pos31), SHIFTR0(op_MUL_33, VARLP("const_pos31")));
	RzILOpPure *op_ADD_35 = ADD(cast_st64_28, op_RSHIFT_34);
	RzILOpPure *arg_cast_46 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_47 = CAST(64, MSB(DUP(VARL("h_tmp1825"))), VARL("h_tmp1825"));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp1826"))), VARL("h_tmp1826"));
	RzILOpPure *arg_cast_49 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_53 = ITE(NON_ZERO(VARL("h_tmp1824")), VARL("h_tmp1827"), cast_54);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, cond_53);
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *cast_st32_62 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_63 = CAST(64, MSB(DUP(cast_st32_62)), cast_st32_62);
	RzILOpPure *op_MUL_64 = MUL(cast_st64_61, cast_st64_63);
	RzILOpPure *op_RSHIFT_65 = LET("const_pos31", DUP(const_pos31), SHIFTR0(op_MUL_64, VARLP("const_pos31")));
	RzILOpPure *op_ADD_66 = ADD(cast_st64_59, op_RSHIFT_65);
	RzILOpPure *cast_68 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_67 = SLT(op_ADD_66, cast_68);
	RzILOpPure *op_SUB_69 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_70 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_69));
	RzILOpPure *op_NEG_71 = NEG(op_LSHIFT_70);
	RzILOpPure *op_SUB_72 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_72));
	RzILOpPure *cast_75 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_74 = SUB(op_LSHIFT_73, cast_75);
	RzILOpPure *cond_76 = ITE(op_LT_67, op_NEG_71, op_SUB_74);
	RzILOpPure *cond_77 = ITE(op_EQ_26, op_ADD_35, cond_76);
	RzILOpPure *cast_79 = CAST(32, MSB(DUP(cond_77)), cond_77);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp1823", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp1824", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1825", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp1826", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(arg_cast_46, arg_cast_47, arg_cast_48, arg_cast_49);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp1827", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *seq_52 = SEQN(3, seq_41, seq_44, seq_51);
	RzILOpEffect *op_ASSIGN_55 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_56);
	RzILOpEffect *seq_57 = SEQN(3, seq_38, seq_52, op_ASSIGN_55);
	RzILOpEffect *op_ASSIGN_78 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_79);
	RzILOpEffect *seq_80 = SEQN(2, seq_15, op_ASSIGN_78);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_80, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_MUL_2 = MUL(cast_3, VARL("U"));
	RzILOpPure *op_ADD_4 = ADD(VARL("u"), op_MUL_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_ADD_4)), op_ADD_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_MUL_1 = MUL(cast_2, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Ru);
	RzILOpPure *op_ADD_3 = ADD(cast_4, op_MUL_1);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_ADD_3)), op_ADD_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr_u2(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_MUL_1 = MUL(cast_2, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Ru);
	RzILOpPure *op_ADD_3 = ADD(cast_4, op_MUL_1);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_ADD_3)), op_ADD_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = MUL(Rs, Rt);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_MUL_1);
	RzILOpPure *op_ADD_2 = ADD(VARL("u"), cast_3);
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(op_ADD_2)), op_ADD_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Ry_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ry_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ry = VARG(Ry_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, Ry);
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Ry_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_nac_up_s1_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(32, 0x1f);
	// Declare: st64 h_tmp1828;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1829;
	// Declare: ut32 h_tmp1830;
	// Declare: ut32 h_tmp1831;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp1832;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(DUP(cast_st32_1)), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_MUL_7 = MUL(cast_st64_4, cast_st64_6);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_7, VARLP("const_pos31")));
	RzILOpPure *op_SUB_9 = SUB(cast_st64_2, op_RSHIFT_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1828"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *op_MUL_23 = MUL(cast_st64_20, cast_st64_22);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos31", DUP(const_pos31), SHIFTR0(op_MUL_23, VARLP("const_pos31")));
	RzILOpPure *op_SUB_25 = SUB(cast_st64_18, op_RSHIFT_24);
	RzILOpPure *op_EQ_26 = EQ(cond_16, op_SUB_25);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_MUL_33 = MUL(cast_st64_30, cast_st64_32);
	RzILOpPure *op_RSHIFT_34 = LET("const_pos31", DUP(const_pos31), SHIFTR0(op_MUL_33, VARLP("const_pos31")));
	RzILOpPure *op_SUB_35 = SUB(cast_st64_28, op_RSHIFT_34);
	RzILOpPure *arg_cast_46 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_47 = CAST(64, MSB(DUP(VARL("h_tmp1830"))), VARL("h_tmp1830"));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp1831"))), VARL("h_tmp1831"));
	RzILOpPure *arg_cast_49 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_53 = ITE(NON_ZERO(VARL("h_tmp1829")), VARL("h_tmp1832"), cast_54);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, cond_53);
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *cast_st32_62 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_63 = CAST(64, MSB(DUP(cast_st32_62)), cast_st32_62);
	RzILOpPure *op_MUL_64 = MUL(cast_st64_61, cast_st64_63);
	RzILOpPure *op_RSHIFT_65 = LET("const_pos31", DUP(const_pos31), SHIFTR0(op_MUL_64, VARLP("const_pos31")));
	RzILOpPure *op_SUB_66 = SUB(cast_st64_59, op_RSHIFT_65);
	RzILOpPure *cast_68 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_67 = SLT(op_SUB_66, cast_68);
	RzILOpPure *op_SUB_69 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_70 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_69));
	RzILOpPure *op_NEG_71 = NEG(op_LSHIFT_70);
	RzILOpPure *op_SUB_72 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_72));
	RzILOpPure *cast_75 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_74 = SUB(op_LSHIFT_73, cast_75);
	RzILOpPure *cond_76 = ITE(op_LT_67, op_NEG_71, op_SUB_74);
	RzILOpPure *cond_77 = ITE(op_EQ_26, op_SUB_35, cond_76);
	RzILOpPure *cast_79 = CAST(32, MSB(DUP(cond_77)), cond_77);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp1828", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp1829", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1830", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp1831", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(arg_cast_46, arg_cast_47, arg_cast_48, arg_cast_49);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp1832", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *seq_52 = SEQN(3, seq_41, seq_44, seq_51);
	RzILOpEffect *op_ASSIGN_55 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_56);
	RzILOpEffect *seq_57 = SEQN(3, seq_38, seq_52, op_ASSIGN_55);
	RzILOpEffect *op_ASSIGN_78 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_79);
	RzILOpEffect *seq_80 = SEQN(2, seq_15, op_ASSIGN_78);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_80, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *orop_AND_0Rx = LOGOR(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, orop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *orop_AND_1Rx = LOGOR(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_2 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, orop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *orop_OR_0Rx = LOGOR(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, orop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);
	RzILOpPure *orop_XOR_0Rx = LOGOR(op_XOR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, orop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_pmpyw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_pmpyw_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vpmpyh(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vpmpyh_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1833;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1834;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1833"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_21, VARLP("const_pos0")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1834"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_44, VARLP("const_pos0")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);
	RzILOpPure *addop_ADD_46Rxx = ADD(op_ADD_46, Rxx);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1833", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1834", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_ADD_47 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, addop_ADD_46Rxx);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_ADD_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1835;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1836;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1835"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_21, VARLP("const_pos1")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1836"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_44, VARLP("const_pos1")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);
	RzILOpPure *addop_ADD_46Rxx = ADD(op_ADD_46, Rxx);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1835", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1836", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_ADD_47 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, addop_ADD_46Rxx);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_ADD_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1837;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1838;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1837"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_21, VARLP("const_pos0")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1838"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_44, VARLP("const_pos0")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1837", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1838", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_47 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1839;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1840;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1839"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_21, VARLP("const_pos1")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1840"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_44, VARLP("const_pos1")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1839", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1840", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_47 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1841;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1842;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1841"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_21, VARLP("const_pos0")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1842"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_44, VARLP("const_pos0")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);
	RzILOpPure *addop_ADD_46Rxx = ADD(op_ADD_46, Rxx);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1841", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1842", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_ADD_47 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, addop_ADD_46Rxx);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_ADD_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1843;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1844;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1843"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_21, VARLP("const_pos1")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1844"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_44, VARLP("const_pos1")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);
	RzILOpPure *addop_ADD_46Rxx = ADD(op_ADD_46, Rxx);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1843", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1844", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_ADD_47 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, addop_ADD_46Rxx);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_ADD_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1845;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1846;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1845"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_21, VARLP("const_pos0")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1846"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_44, VARLP("const_pos0")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1845", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1846", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_47 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1847;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1848;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, cast_st16_12);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp1847"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = MUL(cast_st64_6, cond_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *op_LSHIFT_22 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_21, VARLP("const_pos1")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st16_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1848"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_43 = MUL(cast_st64_29, cond_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(op_MUL_43)), op_MUL_43);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_44, VARLP("const_pos1")));
	RzILOpPure *op_ADD_46 = ADD(op_LSHIFT_22, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1847", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1848", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_47 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_18, seq_41, op_ASSIGN_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *xorop_AND_0Rx = LOGXOR(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, xorop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *xorop_AND_1Rx = LOGXOR(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_2 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, xorop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *xorop_OR_0Rx = LOGXOR(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, xorop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rss, Rtt);
	RzILOpPure *xorop_XOR_0Rxx = LOGXOR(op_XOR_0, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, xorop_XOR_0Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>