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

RzILOpEffect *hex_il_op_m4_and_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc_tmp, andop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_2 = SETG(Rx_assoc_tmp, andop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc_tmp, andop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc_tmp, andop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_wh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp1848;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1849;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1850;
	// Declare: st64 h_tmp1851;
	// Declare: st64 h_tmp1852;
	// Declare: st64 h_tmp1853;
	// Declare: st64 h_tmp1854;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1855;
	// Declare: ut32 h_tmp1856;
	// Declare: ut32 h_tmp1857;
	// Declare: ut64 h_tmp1858;
	// Declare: st64 h_tmp1859;
	// Declare: st64 h_tmp1860;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *cast_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_3 = LOGAND(op_RSHIFT_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *cast_st32_7 = CAST(32, MSB(DUP(cast_st64_6)), cast_st64_6);
	RzILOpPure *cast_st64_8 = CAST(64, MSB(DUP(cast_st32_7)), cast_st32_7);
	RzILOpPure *op_NE_9 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, VARL("h_tmp1848"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_8, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *cast_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rt), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1849"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_29, cond_41);
	RzILOpPure *op_ADD_43 = ADD(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_ADD_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1850"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st32_59 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_60 = CAST(64, MSB(DUP(cast_st32_59)), cast_st32_59);
	RzILOpPure *cast_st32_61 = CAST(32, MSB(DUP(cast_st64_60)), cast_st64_60);
	RzILOpPure *cast_st64_62 = CAST(64, MSB(DUP(cast_st32_61)), cast_st32_61);
	RzILOpPure *op_NE_63 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_64 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rt), op_MUL_64);
	RzILOpPure *op_AND_66 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_65, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_63, VARL("h_tmp1851"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_62, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *cast_79 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_78 = LOGAND(op_RSHIFT_77, cast_79);
	RzILOpPure *cast_st32_80 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_81 = CAST(64, MSB(DUP(cast_st32_80)), cast_st32_80);
	RzILOpPure *cast_st32_82 = CAST(32, MSB(DUP(cast_st64_81)), cast_st64_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(DUP(cast_st32_82)), cast_st32_82);
	RzILOpPure *op_NE_84 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_85 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rt), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_84, VARL("h_tmp1852"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_83, cond_95);
	RzILOpPure *op_ADD_97 = ADD(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_ADD_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *cast_105 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_104 = LOGAND(op_RSHIFT_103, cast_105);
	RzILOpPure *cast_st32_106 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_107 = CAST(64, MSB(DUP(cast_st32_106)), cast_st32_106);
	RzILOpPure *cast_st32_108 = CAST(32, MSB(DUP(cast_st64_107)), cast_st64_107);
	RzILOpPure *cast_st64_109 = CAST(64, MSB(DUP(cast_st32_108)), cast_st32_108);
	RzILOpPure *op_NE_110 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_111 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_113)), op_AND_113);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_110, VARL("h_tmp1853"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_109, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *cast_126 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_125 = LOGAND(op_RSHIFT_124, cast_126);
	RzILOpPure *cast_st32_127 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(DUP(cast_st32_127)), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(DUP(cast_st64_128)), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(DUP(cast_st32_129)), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_131, VARL("h_tmp1854"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_130, cond_142);
	RzILOpPure *op_ADD_144 = ADD(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_ADD_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1856"))), VARL("h_tmp1856"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1857"))), VARL("h_tmp1857"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1855")), VARL("h_tmp1858"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *cast_173 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_172 = LOGAND(op_RSHIFT_171, cast_173);
	RzILOpPure *cast_st32_174 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_175 = CAST(64, MSB(DUP(cast_st32_174)), cast_st32_174);
	RzILOpPure *cast_st32_176 = CAST(32, MSB(DUP(cast_st64_175)), cast_st64_175);
	RzILOpPure *cast_st64_177 = CAST(64, MSB(DUP(cast_st32_176)), cast_st32_176);
	RzILOpPure *op_NE_178 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_179 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_180 = SHIFTR0(DUP(Rt), op_MUL_179);
	RzILOpPure *op_AND_181 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_180, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_181)), op_AND_181);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_178, VARL("h_tmp1859"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_177, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *cast_194 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_193 = LOGAND(op_RSHIFT_192, cast_194);
	RzILOpPure *cast_st32_195 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_196 = CAST(64, MSB(DUP(cast_st32_195)), cast_st32_195);
	RzILOpPure *cast_st32_197 = CAST(32, MSB(DUP(cast_st64_196)), cast_st64_196);
	RzILOpPure *cast_st64_198 = CAST(64, MSB(DUP(cast_st32_197)), cast_st32_197);
	RzILOpPure *op_NE_199 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_200 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_201 = SHIFTR0(DUP(Rt), op_MUL_200);
	RzILOpPure *op_AND_202 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_201, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_202)), op_AND_202);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_199, VARL("h_tmp1860"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_198, cond_210);
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
	RzILOpPure *cast_228 = CAST(32, IL_FALSE, cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1848", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1849", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1850", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1851", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1852", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1853", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1854", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1855", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1856", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1857", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1858", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = SETG(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1859", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1860", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = SETG(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_whc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp1861;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1862;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1863;
	// Declare: st64 h_tmp1864;
	// Declare: st64 h_tmp1865;
	// Declare: st64 h_tmp1866;
	// Declare: st64 h_tmp1867;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1868;
	// Declare: ut32 h_tmp1869;
	// Declare: ut32 h_tmp1870;
	// Declare: ut64 h_tmp1871;
	// Declare: st64 h_tmp1872;
	// Declare: st64 h_tmp1873;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *cast_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_3 = LOGAND(op_RSHIFT_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *cast_st32_7 = CAST(32, MSB(DUP(cast_st64_6)), cast_st64_6);
	RzILOpPure *cast_st64_8 = CAST(64, MSB(DUP(cast_st32_7)), cast_st32_7);
	RzILOpPure *op_NE_9 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, VARL("h_tmp1861"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_8, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *cast_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rt), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1862"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_29, cond_41);
	RzILOpPure *op_SUB_43 = SUB(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_SUB_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1863"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st32_59 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_60 = CAST(64, MSB(DUP(cast_st32_59)), cast_st32_59);
	RzILOpPure *cast_st32_61 = CAST(32, MSB(DUP(cast_st64_60)), cast_st64_60);
	RzILOpPure *cast_st64_62 = CAST(64, MSB(DUP(cast_st32_61)), cast_st32_61);
	RzILOpPure *op_NE_63 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_64 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rt), op_MUL_64);
	RzILOpPure *op_AND_66 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_65, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_63, VARL("h_tmp1864"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_62, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *cast_79 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_78 = LOGAND(op_RSHIFT_77, cast_79);
	RzILOpPure *cast_st32_80 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_81 = CAST(64, MSB(DUP(cast_st32_80)), cast_st32_80);
	RzILOpPure *cast_st32_82 = CAST(32, MSB(DUP(cast_st64_81)), cast_st64_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(DUP(cast_st32_82)), cast_st32_82);
	RzILOpPure *op_NE_84 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_85 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rt), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_84, VARL("h_tmp1865"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_83, cond_95);
	RzILOpPure *op_SUB_97 = SUB(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_SUB_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *cast_105 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_104 = LOGAND(op_RSHIFT_103, cast_105);
	RzILOpPure *cast_st32_106 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_107 = CAST(64, MSB(DUP(cast_st32_106)), cast_st32_106);
	RzILOpPure *cast_st32_108 = CAST(32, MSB(DUP(cast_st64_107)), cast_st64_107);
	RzILOpPure *cast_st64_109 = CAST(64, MSB(DUP(cast_st32_108)), cast_st32_108);
	RzILOpPure *op_NE_110 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_111 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_113)), op_AND_113);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_110, VARL("h_tmp1866"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_109, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *cast_126 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_125 = LOGAND(op_RSHIFT_124, cast_126);
	RzILOpPure *cast_st32_127 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(DUP(cast_st32_127)), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(DUP(cast_st64_128)), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(DUP(cast_st32_129)), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_131, VARL("h_tmp1867"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_130, cond_142);
	RzILOpPure *op_SUB_144 = SUB(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_SUB_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1869"))), VARL("h_tmp1869"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1870"))), VARL("h_tmp1870"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1868")), VARL("h_tmp1871"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *cast_173 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_172 = LOGAND(op_RSHIFT_171, cast_173);
	RzILOpPure *cast_st32_174 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_175 = CAST(64, MSB(DUP(cast_st32_174)), cast_st32_174);
	RzILOpPure *cast_st32_176 = CAST(32, MSB(DUP(cast_st64_175)), cast_st64_175);
	RzILOpPure *cast_st64_177 = CAST(64, MSB(DUP(cast_st32_176)), cast_st32_176);
	RzILOpPure *op_NE_178 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_179 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_180 = SHIFTR0(DUP(Rt), op_MUL_179);
	RzILOpPure *op_AND_181 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_180, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_181)), op_AND_181);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_178, VARL("h_tmp1872"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_177, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *cast_194 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_193 = LOGAND(op_RSHIFT_192, cast_194);
	RzILOpPure *cast_st32_195 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_196 = CAST(64, MSB(DUP(cast_st32_195)), cast_st32_195);
	RzILOpPure *cast_st32_197 = CAST(32, MSB(DUP(cast_st64_196)), cast_st64_196);
	RzILOpPure *cast_st64_198 = CAST(64, MSB(DUP(cast_st32_197)), cast_st32_197);
	RzILOpPure *op_NE_199 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_200 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_201 = SHIFTR0(DUP(Rt), op_MUL_200);
	RzILOpPure *op_AND_202 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_201, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_202)), op_AND_202);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_199, VARL("h_tmp1873"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_198, cond_210);
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
	RzILOpPure *cast_228 = CAST(32, IL_FALSE, cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1861", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1862", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1863", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1864", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1865", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1866", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1867", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1868", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1869", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1870", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1871", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = SETG(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1872", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1873", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = SETG(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_wh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1874;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1875;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1876;
	// Declare: st64 h_tmp1877;
	// Declare: st64 h_tmp1878;
	// Declare: st64 h_tmp1879;
	// Declare: st64 h_tmp1880;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1881;
	// Declare: ut32 h_tmp1882;
	// Declare: ut32 h_tmp1883;
	// Declare: ut64 h_tmp1884;
	// Declare: st64 h_tmp1885;
	// Declare: st64 h_tmp1886;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *cast_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_3 = LOGAND(op_RSHIFT_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *cast_st32_7 = CAST(32, MSB(DUP(cast_st64_6)), cast_st64_6);
	RzILOpPure *cast_st64_8 = CAST(64, MSB(DUP(cast_st32_7)), cast_st32_7);
	RzILOpPure *op_NE_9 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, VARL("h_tmp1874"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_8, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *cast_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rt), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1875"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_29, cond_41);
	RzILOpPure *op_SUB_43 = SUB(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_SUB_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1876"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st32_59 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_60 = CAST(64, MSB(DUP(cast_st32_59)), cast_st32_59);
	RzILOpPure *cast_st32_61 = CAST(32, MSB(DUP(cast_st64_60)), cast_st64_60);
	RzILOpPure *cast_st64_62 = CAST(64, MSB(DUP(cast_st32_61)), cast_st32_61);
	RzILOpPure *op_NE_63 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_64 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rt), op_MUL_64);
	RzILOpPure *op_AND_66 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_65, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_63, VARL("h_tmp1877"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_62, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *cast_79 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_78 = LOGAND(op_RSHIFT_77, cast_79);
	RzILOpPure *cast_st32_80 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_81 = CAST(64, MSB(DUP(cast_st32_80)), cast_st32_80);
	RzILOpPure *cast_st32_82 = CAST(32, MSB(DUP(cast_st64_81)), cast_st64_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(DUP(cast_st32_82)), cast_st32_82);
	RzILOpPure *op_NE_84 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_85 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rt), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_84, VARL("h_tmp1878"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_83, cond_95);
	RzILOpPure *op_SUB_97 = SUB(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_SUB_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *cast_105 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_104 = LOGAND(op_RSHIFT_103, cast_105);
	RzILOpPure *cast_st32_106 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_107 = CAST(64, MSB(DUP(cast_st32_106)), cast_st32_106);
	RzILOpPure *cast_st32_108 = CAST(32, MSB(DUP(cast_st64_107)), cast_st64_107);
	RzILOpPure *cast_st64_109 = CAST(64, MSB(DUP(cast_st32_108)), cast_st32_108);
	RzILOpPure *op_NE_110 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_111 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_113)), op_AND_113);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_110, VARL("h_tmp1879"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_109, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *cast_126 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_125 = LOGAND(op_RSHIFT_124, cast_126);
	RzILOpPure *cast_st32_127 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(DUP(cast_st32_127)), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(DUP(cast_st64_128)), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(DUP(cast_st32_129)), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_131, VARL("h_tmp1880"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_130, cond_142);
	RzILOpPure *op_SUB_144 = SUB(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_SUB_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1882"))), VARL("h_tmp1882"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1883"))), VARL("h_tmp1883"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1881")), VARL("h_tmp1884"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *cast_173 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_172 = LOGAND(op_RSHIFT_171, cast_173);
	RzILOpPure *cast_st32_174 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_175 = CAST(64, MSB(DUP(cast_st32_174)), cast_st32_174);
	RzILOpPure *cast_st32_176 = CAST(32, MSB(DUP(cast_st64_175)), cast_st64_175);
	RzILOpPure *cast_st64_177 = CAST(64, MSB(DUP(cast_st32_176)), cast_st32_176);
	RzILOpPure *op_NE_178 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_179 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_180 = SHIFTR0(DUP(Rt), op_MUL_179);
	RzILOpPure *op_AND_181 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_180, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_181)), op_AND_181);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_178, VARL("h_tmp1885"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_177, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *cast_194 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_193 = LOGAND(op_RSHIFT_192, cast_194);
	RzILOpPure *cast_st32_195 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_196 = CAST(64, MSB(DUP(cast_st32_195)), cast_st32_195);
	RzILOpPure *cast_st32_197 = CAST(32, MSB(DUP(cast_st64_196)), cast_st64_196);
	RzILOpPure *cast_st64_198 = CAST(64, MSB(DUP(cast_st32_197)), cast_st32_197);
	RzILOpPure *op_NE_199 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_200 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_201 = SHIFTR0(DUP(Rt), op_MUL_200);
	RzILOpPure *op_AND_202 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_201, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_202)), op_AND_202);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_199, VARL("h_tmp1886"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_198, cond_210);
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
	RzILOpPure *cast_228 = CAST(32, IL_FALSE, cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1874", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1875", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1876", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1877", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1878", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1879", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1880", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1881", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1882", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1883", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1884", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = SETG(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1885", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1886", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = SETG(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_whc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1887;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1888;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: st64 h_tmp1889;
	// Declare: st64 h_tmp1890;
	// Declare: st64 h_tmp1891;
	// Declare: st64 h_tmp1892;
	// Declare: st64 h_tmp1893;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1894;
	// Declare: ut32 h_tmp1895;
	// Declare: ut32 h_tmp1896;
	// Declare: ut64 h_tmp1897;
	// Declare: st64 h_tmp1898;
	// Declare: st64 h_tmp1899;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *cast_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_3 = LOGAND(op_RSHIFT_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *cast_st32_7 = CAST(32, MSB(DUP(cast_st64_6)), cast_st64_6);
	RzILOpPure *cast_st64_8 = CAST(64, MSB(DUP(cast_st32_7)), cast_st32_7);
	RzILOpPure *op_NE_9 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_9, VARL("h_tmp1887"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_8, cond_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *cast_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rt), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cast_st16_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1888"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_42 = MUL(cast_st64_29, cond_41);
	RzILOpPure *op_ADD_43 = ADD(op_MUL_21, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0x4000", const_pos0x4000, CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_44 = ADD(op_ADD_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_44, VARLP("const_pos15")));
	RzILOpPure *arg_cast_48 = CAST(64, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_54 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp1889"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_55 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_58 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st32_59 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_60 = CAST(64, MSB(DUP(cast_st32_59)), cast_st32_59);
	RzILOpPure *cast_st32_61 = CAST(32, MSB(DUP(cast_st64_60)), cast_st64_60);
	RzILOpPure *cast_st64_62 = CAST(64, MSB(DUP(cast_st32_61)), cast_st32_61);
	RzILOpPure *op_NE_63 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_64 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rt), op_MUL_64);
	RzILOpPure *op_AND_66 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_65, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *arg_cast_69 = CAST(64, IL_FALSE, cast_st16_67);
	RzILOpPure *arg_cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_71 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_74 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_63, VARL("h_tmp1890"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_75 = MUL(cast_st64_62, cond_74);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_76);
	RzILOpPure *cast_79 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_78 = LOGAND(op_RSHIFT_77, cast_79);
	RzILOpPure *cast_st32_80 = CAST(32, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *cast_st64_81 = CAST(64, MSB(DUP(cast_st32_80)), cast_st32_80);
	RzILOpPure *cast_st32_82 = CAST(32, MSB(DUP(cast_st64_81)), cast_st64_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(DUP(cast_st32_82)), cast_st32_82);
	RzILOpPure *op_NE_84 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_85 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rt), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st16_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_84, VARL("h_tmp1891"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_96 = MUL(cast_st64_83, cond_95);
	RzILOpPure *op_ADD_97 = ADD(op_MUL_75, op_MUL_96);
	RzILOpPure *cast_99 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_98 = ADD(op_ADD_97, cast_99);
	RzILOpPure *op_RSHIFT_100 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_98, VARLP("const_pos15")));
	RzILOpPure *op_EQ_101 = EQ(cond_54, op_RSHIFT_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *cast_105 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_104 = LOGAND(op_RSHIFT_103, cast_105);
	RzILOpPure *cast_st32_106 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_107 = CAST(64, MSB(DUP(cast_st32_106)), cast_st32_106);
	RzILOpPure *cast_st32_108 = CAST(32, MSB(DUP(cast_st64_107)), cast_st64_107);
	RzILOpPure *cast_st64_109 = CAST(64, MSB(DUP(cast_st32_108)), cast_st32_108);
	RzILOpPure *op_NE_110 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_111 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rt), op_MUL_111);
	RzILOpPure *op_AND_113 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_112, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_114 = CAST(16, MSB(DUP(op_AND_113)), op_AND_113);
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, cast_st16_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_121 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_110, VARL("h_tmp1892"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_122 = MUL(cast_st64_109, cond_121);
	RzILOpPure *op_MUL_123 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *cast_126 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_125 = LOGAND(op_RSHIFT_124, cast_126);
	RzILOpPure *cast_st32_127 = CAST(32, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(DUP(cast_st32_127)), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(DUP(cast_st64_128)), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(DUP(cast_st32_129)), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *arg_cast_137 = CAST(64, IL_FALSE, cast_st16_135);
	RzILOpPure *arg_cast_138 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_139 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_142 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_131, VARL("h_tmp1893"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_143 = MUL(cast_st64_130, cond_142);
	RzILOpPure *op_ADD_144 = ADD(op_MUL_122, op_MUL_143);
	RzILOpPure *cast_146 = LET("const_pos0x4000", DUP(const_pos0x4000), CAST(64, MSB(DUP(VARLP("const_pos0x4000"))), VARLP("const_pos0x4000")));
	RzILOpPure *op_ADD_145 = ADD(op_ADD_144, cast_146);
	RzILOpPure *op_RSHIFT_147 = LET("const_pos15", DUP(const_pos15), SHIFTR0(op_ADD_145, VARLP("const_pos15")));
	RzILOpPure *arg_cast_158 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_159 = CAST(64, MSB(DUP(VARL("h_tmp1895"))), VARL("h_tmp1895"));
	RzILOpPure *arg_cast_160 = CAST(64, MSB(DUP(VARL("h_tmp1896"))), VARL("h_tmp1896"));
	RzILOpPure *arg_cast_161 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_166 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_165 = ITE(NON_ZERO(VARL("h_tmp1894")), VARL("h_tmp1897"), cast_166);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, cond_165);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rss), op_MUL_170);
	RzILOpPure *cast_173 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_172 = LOGAND(op_RSHIFT_171, cast_173);
	RzILOpPure *cast_st32_174 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_175 = CAST(64, MSB(DUP(cast_st32_174)), cast_st32_174);
	RzILOpPure *cast_st32_176 = CAST(32, MSB(DUP(cast_st64_175)), cast_st64_175);
	RzILOpPure *cast_st64_177 = CAST(64, MSB(DUP(cast_st32_176)), cast_st32_176);
	RzILOpPure *op_NE_178 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_179 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_180 = SHIFTR0(DUP(Rt), op_MUL_179);
	RzILOpPure *op_AND_181 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_180, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_182 = CAST(16, MSB(DUP(op_AND_181)), op_AND_181);
	RzILOpPure *arg_cast_184 = CAST(64, IL_FALSE, cast_st16_182);
	RzILOpPure *arg_cast_185 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_186 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_189 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_178, VARL("h_tmp1898"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_190 = MUL(cast_st64_177, cond_189);
	RzILOpPure *op_MUL_191 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *cast_194 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_193 = LOGAND(op_RSHIFT_192, cast_194);
	RzILOpPure *cast_st32_195 = CAST(32, MSB(DUP(op_AND_193)), op_AND_193);
	RzILOpPure *cast_st64_196 = CAST(64, MSB(DUP(cast_st32_195)), cast_st32_195);
	RzILOpPure *cast_st32_197 = CAST(32, MSB(DUP(cast_st64_196)), cast_st64_196);
	RzILOpPure *cast_st64_198 = CAST(64, MSB(DUP(cast_st32_197)), cast_st32_197);
	RzILOpPure *op_NE_199 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_200 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_201 = SHIFTR0(DUP(Rt), op_MUL_200);
	RzILOpPure *op_AND_202 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_201, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_203 = CAST(16, MSB(DUP(op_AND_202)), op_AND_202);
	RzILOpPure *arg_cast_205 = CAST(64, IL_FALSE, cast_st16_203);
	RzILOpPure *arg_cast_206 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_207 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_210 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_199, VARL("h_tmp1899"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_211 = MUL(cast_st64_198, cond_210);
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
	RzILOpPure *cast_228 = CAST(32, IL_FALSE, cond_226);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1887", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp1888", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1889", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_19, seq_40, seq_52);
	RzILOpEffect *c_call_68 = HEX_SEXTRACT64(arg_cast_69, arg_cast_70, arg_cast_71);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp1890", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp1891", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp1892", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_136 = HEX_SEXTRACT64(arg_cast_137, arg_cast_138, arg_cast_139);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp1893", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_148 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_149 = SETL("h_tmp1894", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_150 = SEQN(2, c_call_148, op_ASSIGN_hybrid_tmp_149);
	RzILOpEffect *c_call_151 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_152 = SETL("h_tmp1895", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_153 = SEQN(2, c_call_151, op_ASSIGN_hybrid_tmp_152);
	RzILOpEffect *c_call_154 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp1896", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_157 = HEX_DEPOSIT64(arg_cast_158, arg_cast_159, arg_cast_160, arg_cast_161);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_162 = SETL("h_tmp1897", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_163 = SEQN(2, c_call_157, op_ASSIGN_hybrid_tmp_162);
	RzILOpEffect *seq_164 = SEQN(3, seq_153, seq_156, seq_163);
	RzILOpEffect *op_ASSIGN_167 = SETG(usr_assoc_tmp, cast_168);
	RzILOpEffect *seq_169 = SEQN(3, seq_150, seq_164, op_ASSIGN_167);
	RzILOpEffect *c_call_183 = HEX_SEXTRACT64(arg_cast_184, arg_cast_185, arg_cast_186);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_187 = SETL("h_tmp1898", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_188 = SEQN(2, c_call_183, op_ASSIGN_hybrid_tmp_187);
	RzILOpEffect *c_call_204 = HEX_SEXTRACT64(arg_cast_205, arg_cast_206, arg_cast_207);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp1899", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_204, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *op_ASSIGN_227 = SETG(Rd_assoc_tmp, cast_228);
	RzILOpEffect *seq_229 = SEQN(8, seq_53, seq_73, seq_94, seq_120, seq_141, seq_188, seq_209, op_ASSIGN_227);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_229, seq_169);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mac_up_s1_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(32, 0x1f);
	// Declare: st64 h_tmp1900;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1901;
	// Declare: ut32 h_tmp1902;
	// Declare: ut32 h_tmp1903;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp1904;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1900"), VARLP("const_pos0LL")));
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
	RzILOpPure *arg_cast_47 = CAST(64, MSB(DUP(VARL("h_tmp1902"))), VARL("h_tmp1902"));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp1903"))), VARL("h_tmp1903"));
	RzILOpPure *arg_cast_49 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_53 = ITE(NON_ZERO(VARL("h_tmp1901")), VARL("h_tmp1904"), cast_54);
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
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, cond_77);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp1900", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp1901", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1902", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp1903", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(arg_cast_46, arg_cast_47, arg_cast_48, arg_cast_49);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp1904", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *seq_52 = SEQN(3, seq_41, seq_44, seq_51);
	RzILOpEffect *op_ASSIGN_55 = SETG(usr_assoc_tmp, cast_56);
	RzILOpEffect *seq_57 = SEQN(3, seq_38, seq_52, op_ASSIGN_55);
	RzILOpEffect *op_ASSIGN_78 = SETG(Rx_assoc_tmp, cast_79);
	RzILOpEffect *seq_80 = SEQN(2, seq_15, op_ASSIGN_78);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_80, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_MUL_2 = MUL(Rs, VARL("U"));
	RzILOpPure *op_ADD_3 = ADD(VARL("u"), op_MUL_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = MUL(Rs, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Ru, op_MUL_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr_u2(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_MUL_1 = MUL(Rs, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Ru, op_MUL_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = MUL(Rs, Rt);
	RzILOpPure *op_ADD_2 = ADD(VARL("u"), op_MUL_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Ry_assoc_tmp = ISA2REG(hi, 'y', false);
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
	RzILOpEffect *op_ASSIGN_2 = SETG(Ry_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_nac_up_s1_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(32, 0x1f);
	// Declare: st64 h_tmp1905;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1906;
	// Declare: ut32 h_tmp1907;
	// Declare: ut32 h_tmp1908;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp1909;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1905"), VARLP("const_pos0LL")));
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
	RzILOpPure *arg_cast_47 = CAST(64, MSB(DUP(VARL("h_tmp1907"))), VARL("h_tmp1907"));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp1908"))), VARL("h_tmp1908"));
	RzILOpPure *arg_cast_49 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_54 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_53 = ITE(NON_ZERO(VARL("h_tmp1906")), VARL("h_tmp1909"), cast_54);
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
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, cond_77);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp1905", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp1906", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1907", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp1908", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(arg_cast_46, arg_cast_47, arg_cast_48, arg_cast_49);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp1909", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *seq_52 = SEQN(3, seq_41, seq_44, seq_51);
	RzILOpEffect *op_ASSIGN_55 = SETG(usr_assoc_tmp, cast_56);
	RzILOpEffect *seq_57 = SEQN(3, seq_38, seq_52, op_ASSIGN_55);
	RzILOpEffect *op_ASSIGN_78 = SETG(Rx_assoc_tmp, cast_79);
	RzILOpEffect *seq_80 = SEQN(2, seq_15, op_ASSIGN_78);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_80, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc_tmp, orop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_2 = SETG(Rx_assoc_tmp, orop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc_tmp, orop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc_tmp, orop_XOR_0Rx);
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
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	// Declare: st64 h_tmp1910;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1911;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1910"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_22, VARLP("const_pos0")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1911"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_46, VARLP("const_pos0")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);
	RzILOpPure *addop_ADD_48Rxx = ADD(cast_50, Rxx);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1910", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1911", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_ADD_49 = SETG(Rxx_assoc_tmp, addop_ADD_48Rxx);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_ADD_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s1(HexInsnPktBundle *bundle) {
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
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1912;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1913;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1912"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_22, VARLP("const_pos1")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1913"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_46, VARLP("const_pos1")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);
	RzILOpPure *addop_ADD_48Rxx = ADD(cast_50, Rxx);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1912", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1913", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_ADD_49 = SETG(Rxx_assoc_tmp, addop_ADD_48Rxx);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_ADD_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp1914;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1915;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1914"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_22, VARLP("const_pos0")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1915"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_46, VARLP("const_pos0")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1914", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1915", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, cast_50);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp1916;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1917;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1916"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_22, VARLP("const_pos1")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1917"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_46, VARLP("const_pos1")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1916", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1917", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, cast_50);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s0(HexInsnPktBundle *bundle) {
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
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1918;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1919;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1918"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_22, VARLP("const_pos0")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1919"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_46, VARLP("const_pos0")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);
	RzILOpPure *addop_ADD_48Rxx = ADD(cast_50, Rxx);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1918", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1919", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_ADD_49 = SETG(Rxx_assoc_tmp, addop_ADD_48Rxx);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_ADD_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s1(HexInsnPktBundle *bundle) {
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
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1920;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1921;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1920"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_22, VARLP("const_pos1")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1921"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_46, VARLP("const_pos1")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);
	RzILOpPure *addop_ADD_48Rxx = ADD(cast_50, Rxx);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1920", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1921", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_ADD_49 = SETG(Rxx_assoc_tmp, addop_ADD_48Rxx);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_ADD_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp1922;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1923;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1922"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_22, VARLP("const_pos0")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1923"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_st64_46, VARLP("const_pos0")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1922", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1923", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, cast_50);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp1924;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1925;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(cast_st64_5)), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *cast_12 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_11 = LOGAND(op_RSHIFT_10, cast_12);
	RzILOpPure *cast_st16_13 = CAST(16, MSB(DUP(op_AND_11)), op_AND_11);
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, cast_st16_13);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp1924"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = MUL(cast_st64_7, cond_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(op_MUL_21)), op_MUL_21);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_22, VARLP("const_pos1")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(cast_st64_29)), cast_st64_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_NE_32 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_33 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *arg_cast_39 = CAST(64, IL_FALSE, cast_st16_37);
	RzILOpPure *arg_cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_41 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_44 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_32, VARL("h_tmp1925"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_45 = MUL(cast_st64_31, cond_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(DUP(op_MUL_45)), op_MUL_45);
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1", DUP(const_pos1), SHIFTL0(cast_st64_46, VARLP("const_pos1")));
	RzILOpPure *op_ADD_48 = ADD(op_LSHIFT_23, op_LSHIFT_47);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_ADD_48);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1924", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_38 = HEX_SEXTRACT64(arg_cast_39, arg_cast_40, arg_cast_41);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp1925", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, cast_50);
	RzILOpEffect *seq_51 = SEQN(3, seq_19, seq_43, op_ASSIGN_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc_tmp, xorop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_2 = SETG(Rx_assoc_tmp, xorop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc_tmp, xorop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rxx_assoc_tmp, xorop_XOR_0Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>