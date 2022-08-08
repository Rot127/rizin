// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 19:19:30-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#ifndef HEXAGON_IL_H
#define HEXAGON_IL_H

#include <rz_il/rz_il_opbuilder_begin.h>
#include "hexagon.h"

#define NOT_IMPLEMENTED \
	do { \
		RZ_LOG_INFO("IL instruction not implemented."); \
		return NOP(); \
	} while (0)

#define ISA2REG(hi, var, new_reg) hex_isa_to_reg(hi, var, new_reg)
#define ISA2IMM(hi, var)          hex_isa_to_imm(hi, var)
#define ALIAS2REG(alias)          hex_alias_to_reg(alias)
#define HEX_REGFIELD(prop, reg)   hex_get_rf_property_val(prop, reg)

RZ_IPI bool hex_shuffle_insns(RZ_INOUT HexPkt *p);
RZ_IPI HexILOp *hex_copy_il_op(const HexILOp *io);
RZ_IPI RzILOpEffect *hex_get_il_op(const ut32 addr);
RZ_IPI RzAnalysisILConfig *rz_hexagon_il_config(bool big_endian);
RZ_IPI ut32 hex_get_rf_property_val(const HexRegFieldProperty property, const HexRegField field);
RzILOpEffect *hex_il_op_j2_endloop0();
RzILOpEffect *hex_il_op_j2_endloop1();
RzILOpEffect *hex_il_op_j2_endloop01();
RzILOpEffect *hex_il_op_a2_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_absp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_abssat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_add(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_hh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_lh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_sat_hh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_sat_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_sat_lh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_h16_sat_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_l16_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_l16_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_l16_sat_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addh_l16_sat_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addpsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addsph(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_addspl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_andir(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_andp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_aslh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_asrh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_combine_hh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_combine_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_combine_lh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_combine_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_combineii(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_combinew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_max(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_maxp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_maxu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_maxup(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_min(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_minp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_minu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_minup(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_negp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_negsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_nop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_notp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_orir(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_orp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddif(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddifnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddit(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_padditnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_paddtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pandf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pandfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pandt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pandtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_porf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_porfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_port(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_portnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_psubf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_psubfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_psubt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_psubtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pxorf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pxorfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pxort(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_pxortnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_roundsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_satb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_sath(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_satub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_satuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_sub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_hh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_lh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_sat_hh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_sat_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_sat_lh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_h16_sat_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_l16_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_l16_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_l16_sat_hl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subh_l16_sat_ll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_subsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svaddh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svaddhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svadduhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svavgh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svavghs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svnavgh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svsubh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svsubhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_svsubuhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_swiz(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_sxtb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_sxth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_sxtw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_tfr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_tfrcrr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_tfrih(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_tfril(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_tfrrcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_tfrsi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vabsh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vabshsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vabsw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vabswsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vaddh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vaddhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vaddub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vaddubs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vadduhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vaddw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vaddws(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavgh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavghcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavghr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavgub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavgubr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavguh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavguhr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavguw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavguwr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavgw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavgwcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vavgwr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmpbeq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmpbgtu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmpheq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmphgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmphgtu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmpweq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmpwgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vcmpwgtu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vconj(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vmaxb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vmaxh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vmaxub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vmaxuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vmaxuw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vmaxw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vminb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vminh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vminub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vminuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vminuw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vminw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vnavgh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vnavghcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vnavghr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vnavgw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vnavgwcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vnavgwr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vraddub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vraddub_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vrsadub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vrsadub_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsubh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsubhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsubub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsububs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsubuhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsubw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_vsubws(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_xorp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a2_zxth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_addp_c(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_andnp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_bitsplit(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_bitspliti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_boundscheck_hi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_boundscheck_lo(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpbeq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpbeqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpbgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpbgti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpbgtu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpbgtui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpheq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmpheqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmphgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmphgti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmphgtu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cmphgtui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_combineii(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_combineir(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_combineri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cround_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_cround_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_ext(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_modwrapu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_orn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_ornp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_paslhf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_paslhfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_paslht(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_paslhtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pasrhf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pasrhfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pasrht(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pasrhtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxtbf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxtbfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxtbt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxtbtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxthf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxthfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxtht(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_psxthtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxtbf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxtbfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxtbt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxtbtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxthf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxthfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxtht(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_pzxthtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_rcmpeq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_rcmpeqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_rcmpneq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_rcmpneqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_round_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_round_ri_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_round_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_round_rr_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_subp_c(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_tfrcpp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_tfrpcp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_tlbmatch(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpbeq_any(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpbeqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpbgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpbgti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpbgtui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpheqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmphgti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmphgtui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpweqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpwgti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vcmpwgtui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrmaxh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrmaxuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrmaxuw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrmaxw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrminh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrminuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrminuw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a4_vrminw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a5_acs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a5_vaddhubs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a6_vcmpbeq_notany(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a6_vminub_rdp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a7_clip(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a7_croundd_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a7_croundd_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_a7_vclip(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_all8(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_any8(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_bitsclr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_bitsclri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_bitsset(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_ccombinewf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_ccombinewnewf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_ccombinewnewt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_ccombinewt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmoveif(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmoveit(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmovenewif(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmovenewit(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpeq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpeqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpeqp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpgti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpgtp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpgtu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpgtui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_cmpgtup(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_mask(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_mux(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_muxii(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_muxir(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_muxri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_not(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_orn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_tfrpr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_tfrrp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_vitpack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_vmux(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c2_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_addipc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_and_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_and_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_and_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_and_orn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_cmplte(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_cmpltei(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_cmplteu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_cmplteui(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_cmpneq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_cmpneqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_fastcorner9(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_fastcorner9_not(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_nbitsclr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_nbitsclri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_nbitsset(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_or_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_or_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_or_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_c4_or_orn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_d2df(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_d2sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2d(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2d_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2ud(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2ud_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2uw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2uw_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2w(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_df2w_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2d(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2d_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2df(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2ud(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2ud_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2uw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2uw_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2w(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_sf2w_chop(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_ud2df(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_ud2sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_uw2df(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_uw2sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_w2df(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_conv_w2sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfadd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfclass(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfcmpeq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfcmpge(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfcmpgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfcmpuo(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfimm_n(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfimm_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfmax(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfmin(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfmpyfix(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfmpyhh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfmpylh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfmpyll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_dfsub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfadd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfclass(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfcmpeq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfcmpge(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfcmpgt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfcmpuo(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffixupd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffixupn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffixupr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffma(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffma_lib(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffma_sc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffms(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sffms_lib(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfimm_n(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfimm_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfinvsqrta(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfmax(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfmin(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfmpy(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfrecipa(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_f2_sfsub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_g4_tfrgcpp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_g4_tfrgcrr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_g4_tfrgpcp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_g4_tfrgrcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_call(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_callf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_callr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_callrf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_callrt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_callt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jump(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumpf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumpfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumpfnewpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumpfpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumpr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprfnewpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprfpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprgtez(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprgtezpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprltez(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprltezpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprnz(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprnzpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprtnewpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprtpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprz(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumprzpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumptnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumptnewpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_jumptpt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_loop0i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_loop0r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_loop1i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_loop1r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_pause(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_ploop1si(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_ploop1sr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_ploop2si(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_ploop2sr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_ploop3si(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_ploop3sr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_trap0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j2_trap1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeq_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqi_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpeqn1_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgt_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgti_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtn1_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtu_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpgtui_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmplt_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmplt_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmplt_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmplt_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpltu_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpltu_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpltu_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_cmpltu_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_hintjumpr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_jumpseti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_jumpsetr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_f_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_f_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_fp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_fp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_fp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_fp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_t_jumpnv_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_t_jumpnv_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_tp0_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_tp0_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_tp1_jump_nt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_j4_tstbit0_tp1_jump_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_deallocframe(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignb_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignb_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignb_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignb_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignb_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignh_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignh_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignh_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignh_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadalignh_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw2_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw2_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw2_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw2_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw2_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw2_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw4_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw4_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw4_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw4_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw4_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbsw4_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw2_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw2_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw2_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw2_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw2_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw2_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw4_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw4_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw4_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw4_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw4_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadbzw4_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrb_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrb_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrb_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrb_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrb_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrbgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrd_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrd_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrd_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrd_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrd_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrd_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrdgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrh_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrh_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrh_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrh_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrh_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrhgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadri_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadri_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadri_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadri_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadri_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadri_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrigp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrub_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrub_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrub_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrub_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrub_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrub_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadrubgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruh_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruh_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruh_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruh_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruh_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadruhgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadw_aq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_loadw_locked(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrbtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrdtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrhf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrhf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrhfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrhfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrht_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrht_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrhtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrhtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrif_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrif_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrifnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrifnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrit_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrit_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadritnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadritnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadrubtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruhf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruhf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruhfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruhfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruht_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruht_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruhtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l2_ploadruhtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_add_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_add_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_add_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_and_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_and_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_and_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_iadd_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_iadd_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_iadd_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_iand_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_iand_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_iand_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ior_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ior_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ior_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_isub_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_isub_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_isub_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadalignb_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadalignb_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadalignh_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadalignh_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbsw2_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbsw2_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbsw4_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbsw4_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbzw2_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbzw2_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbzw4_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadbzw4_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadd_aq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadd_locked(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrb_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrb_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrb_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrd_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrd_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrd_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrh_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrh_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrh_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadri_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadri_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadri_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrub_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrub_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadrub_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadruh_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadruh_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_loadruh_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_or_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_or_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_or_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrbtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrdtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrhf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrhf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrhfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrhfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrht_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrht_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrhtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrhtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrif_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrif_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrifnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrifnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrit_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrit_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadritnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadritnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadrubtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruhf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruhf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruhfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruhfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruht_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruht_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruhtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_ploadruhtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return_f(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return_fnew_pnt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return_fnew_pt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return_tnew_pnt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_return_tnew_pt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_sub_memopb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_sub_memoph_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l4_sub_memopw_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_l6_memcpy(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_acci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_accii(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmaci_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmacr_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmacs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmacs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmacsc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmacsc_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpyi_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpyr_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpyrs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpyrs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpyrsc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpyrsc_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpys_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpys_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpysc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cmpysc_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cnacs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cnacs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cnacsc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_cnacsc_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyss_acc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyss_nac_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyss_rnd_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyss_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyuu_acc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyuu_nac_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_dpmpyuu_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_hmmpyh_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_hmmpyh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_hmmpyl_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_hmmpyl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_maci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_macsin(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_macsip(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmachs_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmachs_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmachs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmachs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacls_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacls_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacls_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacls_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacuhs_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacuhs_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacuhs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmacuhs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmaculs_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmaculs_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmaculs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmaculs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyh_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyh_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyl_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyl_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyuh_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyuh_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyuh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyuh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyul_rs0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyul_rs1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyul_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mmpyul_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mnaci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_acc_sat_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_nac_sat_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_rnd_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_sat_rnd_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_up(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_up_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpy_up_s1_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_acc_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_nac_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyd_rnd_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpysin(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpysip(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpysu_up(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_acc_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_nac_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyu_up(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_acc_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_hh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_hh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_hl_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_hl_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_lh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_lh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_ll_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_mpyud_nac_ll_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_nacci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_naccii(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_subacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vabsdiffh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vabsdiffw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vcmac_s0_sat_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vcmac_s0_sat_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vcmpy_s0_sat_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vcmpy_s0_sat_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vcmpy_s1_sat_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vcmpy_s1_sat_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vdmacs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vdmacs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vdmpyrs_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vdmpyrs_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vdmpys_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vdmpys_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2es(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2es_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2es_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2s_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2s_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2su_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmac2su_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2es_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2es_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2s_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2s_s0pack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2s_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2s_s1pack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2su_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vmpy2su_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vraddh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vradduh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmaci_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmaci_s0c(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmacr_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmacr_s0c(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpyi_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpyi_s0c(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpyr_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpyr_s0c(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpys_acc_s1_h(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpys_acc_s1_l(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpys_s1_h(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpys_s1_l(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpys_s1rp_h(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrcmpys_s1rp_l(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrmac_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_vrmpy_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m2_xor_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_and_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_and_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_and_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_and_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_cmpyi_wh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_cmpyi_whc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_cmpyr_wh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_cmpyr_whc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_mac_up_s1_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_mpyri_addi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_mpyri_addr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_mpyri_addr_u2(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_mpyrr_addi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_mpyrr_addr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_nac_up_s1_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_or_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_or_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_or_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_or_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_pmpyw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_pmpyw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vpmpyh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vpmpyh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyeh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyeh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyoh_s0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_vrmpyoh_s1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_xor_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_xor_andn(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_xor_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m4_xor_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vdmacbsu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vdmpybsu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vmacbsu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vmacbuu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vmpybsu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vmpybuu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vrmacbsu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vrmacbuu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vrmpybsu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m5_vrmpybuu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m6_vabsdiffb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m6_vabsdiffub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyiw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyiw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyiwc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyiwc_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyrw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyrw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyrwc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_dcmpyrwc_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyiw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyiw_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyiwc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyiwc_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyrw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyrw_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyrwc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_m7_wcmpyrwc_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_loadrbabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_loadrdabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_loadrhabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_loadriabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_loadrubabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_loadruhabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerbabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerbnewabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerdabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerfabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerhabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerhnewabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storeriabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_storerinewabs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ps_trap1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_r6_release_at_vi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_r6_release_st_vi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_addasl_rrri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_allocframe(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_p_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_r_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_i_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_p_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_r_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asl_r_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_p_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_r_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_svw_trun(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_i_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_p_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_r_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_svw_trun(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_asr_r_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_brev(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_brevp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_cabacdecbin(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_cl0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_cl0p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_cl1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_cl1p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_clb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_clbnorm(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_clbp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_clrbit_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_clrbit_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_ct0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_ct0p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_ct1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_ct1p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_deinterleave(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_extractu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_extractu_rp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_extractup(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_extractup_rp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_insert(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_insert_rp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_insertp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_insertp_rp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_interleave(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lfsp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_p_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsl_r_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_p_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_r_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_i_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_p_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_vh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_lsr_r_vw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_mask(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_packhl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_parityp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbnewf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbnewf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbnewfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbnewt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbnewt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbnewtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerbtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerdf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerdf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerdfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerdt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerdt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerdtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerff_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerff_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerffnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerft_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerft_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerftnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhnewf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhnewf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhnewfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhnewt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhnewt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhnewtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerht_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerht_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerhtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerif_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerif_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerifnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerinewf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerinewf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerinewfnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerinewt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerinewt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerinewtnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerit_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstorerit_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_pstoreritnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_setbit_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_setbit_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_shuffeb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_shuffeh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_shuffob(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_shuffoh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerb_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerb_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerb_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerb_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerb_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnew_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnew_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnew_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnew_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerbnewgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerd_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerd_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerd_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerd_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerd_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerd_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerdgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerf_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerf_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerf_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerf_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerf_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerfgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerh_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerh_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerh_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerh_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerh_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnew_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnew_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnew_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnew_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerhnewgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storeri_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storeri_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storeri_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storeri_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storeri_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storeri_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerigp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinew_pbr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinew_pci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinew_pcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinew_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinew_pr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storerinewgp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storew_locked(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storew_rl_at_vi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_storew_rl_st_vi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_svsathb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_svsathub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_tableidxb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_tableidxd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_tableidxh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_tableidxw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_togglebit_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_togglebit_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_tstbit_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_tstbit_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_valignib(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_valignrb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vcnegh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vcrotate(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vrcnegh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vrndpackwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vrndpackwhs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsathb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsathb_nopack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsathub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsathub_nopack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsatwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsatwh_nopack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsatwuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsatwuh_nopack(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsplatrb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsplatrh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vspliceib(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsplicerb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsxtbh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vsxthw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vtrunehb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vtrunewh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vtrunohb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vtrunowh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vzxtbh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s2_vzxthw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_addaddi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_addi_asl_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_addi_lsr_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_andi_asl_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_andi_lsr_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_clbaddi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_clbpaddi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_clbpnorm(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_extract(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_extract_rp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_extractp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_extractp_rp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_lsli(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_ntstbit_i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_ntstbit_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_or_andi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_or_andix(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_or_ori(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_ori_asl_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_ori_lsr_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_parity(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerbtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerdtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerff_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerff_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerffnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerffnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerffnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerft_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerft_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerftnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerftnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerftnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerht_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerht_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerhtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerif_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerif_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerifnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerifnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerifnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewf_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewfnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewfnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewt_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewt_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewtnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerinewtnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerit_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstorerit_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstoreritnew_abs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstoreritnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_pstoreritnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_stored_locked(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_stored_rl_at_vi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_stored_rl_st_vi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirbf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirbfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirbt_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirbtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirhf_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirhfnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirht_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirhtnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeiri_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirif_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirifnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeirit_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeiritnew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerb_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerb_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerb_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerbnew_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerbnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerbnew_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerd_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerd_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerd_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerf_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerf_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerf_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerh_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerh_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerh_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerhnew_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerhnew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerhnew_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeri_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeri_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storeri_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerinew_ap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerinew_rr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_storerinew_ur(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_subaddi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_subi_asl_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_subi_lsr_ri(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vrcrotate(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vrcrotate_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vxaddsubh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vxaddsubhr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vxaddsubw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vxsubaddh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vxsubaddhr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s4_vxsubaddw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s5_asrhub_rnd_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s5_asrhub_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s5_popcountp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s5_vasrhrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_p(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_p_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_p_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_p_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_p_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_p_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_r(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_r_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_r_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_r_nac(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_r_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_rol_i_r_xacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_vsplatrbp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_vtrunehb_ppp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_s6_vtrunohb_ppp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_extractw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_lvsplatb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_lvsplath(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_lvsplatw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_and_n(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_not(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_or_n(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_scalar2(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_scalar2v2(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_pred_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_shuffeqh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_shuffeqw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_v6mpyhubs10(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_v6mpyhubs10_vxx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_v6mpyvubs10(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_v6mpyvubs10_vxx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32ub_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32ub_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32ub_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_cur_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_cur_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_nt_tmp_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vl32b_tmp_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32ub_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_new_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nqpred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nqpred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nqpred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_new_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_npred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_npred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_npred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_nqpred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_nqpred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_nqpred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_qpred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_qpred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_nt_qpred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_qpred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_qpred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_qpred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_srls_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_srls_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vs32b_srls_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabs_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabs_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsb_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsdiffh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsdiffub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsdiffuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsdiffw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsh_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vabsw_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_hf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_qf16(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_qf16_mix(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_qf32(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_qf32_mix(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_sf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadd_sf_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddb_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddbnq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddbq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddbsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddbsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddcarry(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddcarryo(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddcarrysat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddclbh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddclbw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddh_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddhnq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddhq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddhsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddhw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddhw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddubh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddubh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddubsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddubsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddububb_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadduhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadduhsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadduhw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadduhw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadduwsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vadduwsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddw_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddwnq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddwq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddwsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaddwsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_valignb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_valignbi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vand(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandnqrt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandnqrt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandqrt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandqrt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandvnqv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandvqv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandvrt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vandvrt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaslh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaslh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaslhv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaslw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaslw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vaslwv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasr_into(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrhbrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrhbsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrhubrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrhubsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrhv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasruhubrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasruhubsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasruwuhrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasruwuhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrvuhubrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrvuhubsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrvwuhrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrvwuhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrw_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrwhrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrwhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrwuhrndsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrwuhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vasrwv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vassign(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vassign_fp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vassign_tmp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgbrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavghrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgubrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavguh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavguhrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavguw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavguwrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vavgwrnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vccombine(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcl0h(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcl0w(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcmov(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcombine(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcombine_tmp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vconv_hf_qf16(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vconv_hf_qf32(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vconv_sf_qf32(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_b_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_h_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_hf_b(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_hf_h(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_hf_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_hf_ub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_hf_uh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_sf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_ub_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vcvt_uh_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdeal(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdealb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdealb4w(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdealh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdealvdd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdelta(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpy_sf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpy_sf_hf_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpybus(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpybus_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpybus_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpybus_dv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhb_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhb_dv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhisat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhisat_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhsat_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhsuisat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhsuisat_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhsusat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhsusat_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhvsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdmpyhvsat_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdsaduh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vdsaduh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqb_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqb_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqb_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqh_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqh_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqh_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqw_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqw_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_veqw_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vfmax_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vfmax_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vfmin_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vfmin_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vfneg_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vfneg_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgathermh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgathermhq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgathermhw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgathermhwq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgathermw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgathermwq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtb_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtb_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtb_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgth_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgth_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgth_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgthf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgthf_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgthf_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgthf_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtsf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtsf_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtsf_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtsf_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtub_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtub_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtub_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuh_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuh_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuh_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuw_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuw_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtuw_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtw_and(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtw_or(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vgtw_xor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vhist(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vhistq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vinsertwr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlalignb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlalignbi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlsrb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlsrh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlsrhv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlsrw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlsrwv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlut4(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvvb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvvb_nm(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvvb_oracc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvvb_oracci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvvbi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvwh_nm(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvwh_oracc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvwh_oracci(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vlutvwhi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmax_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmax_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmaxb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmaxh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmaxub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmaxuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmaxw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmin_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmin_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vminb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vminh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vminub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vminuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vminw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpabus(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpabus_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpabusv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpabuu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpabuu_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpabuuv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpahb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpahb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpahhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpauhb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpauhb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpauhuhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpsuhuhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_hf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_hf_hf_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf16(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf16_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf16_mix_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf32(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf32_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf32_mix_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf32_qf16(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_qf32_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_sf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_sf_hf_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpy_sf_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpybus(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpybus_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpybusv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpybusv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpybv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpybv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyewuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyewuh_64(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhsat_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhsrs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhss(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhus(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhus_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyhvsrs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyieoh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiewh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiewuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiewuh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyih(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyih_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyihb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyihb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiowh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiwb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiwb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiwh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiwub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyiwub_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyowh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyowh_64_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyowh_rnd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyowh_rnd_sacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyowh_sacc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyub_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyubv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyubv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuh_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuhe(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuhe_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuhv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuhv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmpyuhvs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vmux(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnavgb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnavgh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnavgub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnavgw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnccombine(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vncmov(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnormamth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnormamtw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vnot(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackeb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackeh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackhb_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackhub_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackob(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackoh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackwh_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpackwuh_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vpopcounth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vprefixqb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vprefixqh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vprefixqw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrdelta(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybub_rtt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybub_rtt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybus(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybus_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybusi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybusi_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybusv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybusv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpybv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyub_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyub_rtt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyub_rtt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyubi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyubi_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyubv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyubv_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbb_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbb_rt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbb_rx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbb_rx_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbub_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbub_rt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbub_rx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzbub_rx_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcb_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcb_rt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcb_rx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcb_rx_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcbs_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcbs_rt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcbs_rx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyzcbs_rx_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyznb_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyznb_rt_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyznb_rx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrmpyznb_rx_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vror(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrotr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vroundhb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vroundhub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrounduhub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrounduwuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vroundwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vroundwuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrsadubi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vrsadubi_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsatdw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsathub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsatuwuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsatwh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermh_add(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermhq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermhw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermhw_add(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermhwq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermw_add(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vscattermwq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshufeh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshuff(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshuffb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshuffeb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshuffh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshuffob(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshuffvdd(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshufoeb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshufoeh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vshufoh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_hf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_qf16(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_qf16_mix(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_qf32(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_qf32_mix(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_sf_hf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsub_sf_sf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubb_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubbnq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubbq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubbsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubbsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubcarry(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubcarryo(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubh_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubhnq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubhq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubhsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubhw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsububh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsububsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsububsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubububb_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubuhsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubuhsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubuhw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubuwsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubuwsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubw(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubw_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubwnq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubwq(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubwsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vsubwsat_dv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vswap(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vtmpyb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vtmpyb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vtmpybus(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vtmpybus_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vtmpyhb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vtmpyhb_acc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vunpackb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vunpackh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vunpackob(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vunpackoh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vunpackub(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vunpackuh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist128(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist128m(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist128q(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist128qm(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist256(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist256_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist256q(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vwhist256q_sat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vxor(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vzb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_vzh(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zld_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zld_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zld_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zld_pred_ai(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zld_pred_pi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zld_pred_ppu(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_v6_zextract(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_barrier(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_break(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_dccleana(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_dccleaninva(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_dcfetchbo(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_dcinva(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_dczeroa(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_icinva(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_isync(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_syncht(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_tfrscrr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_tfrsrcr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y2_wait(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y4_l2fetch(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y4_tfrscpp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y4_tfrspcp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y4_trace(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y5_l2fetch(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_diag(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_diag0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_diag1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_dmlink(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_dmpause(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_dmpoll(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_dmresume(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_dmstart(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_y6_dmwait(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_dep_a2_addsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_dep_a2_subsat(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_dep_s2_packhl(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_invalid_decode(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_pd_l2locka_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_ss(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_ctlbw_rss_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_dctagr_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_getimask_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_iassignr_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_icdatar_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_ictagr_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_l2tagr_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_memw_phys_rs_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_tlboc_rss(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rd_tlbp_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rdd_sss(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rdd_tlbr_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_sd_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_sdd_rss(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_ciad_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_crswap_rx_sgp0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_crswap_rx_sgp1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_crswap_rxx_sgp1_0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_cswi_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_dccleanidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_dccleaninvidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_dcinvidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_dckill(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_dctagw_rs_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_iassignw_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_icdataw_rs_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_icinvidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_ickill(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_ictagw_rs_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_k0lock(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_k0unlock(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2cleanidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2cleaninvidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2gclean(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2gclean_rtt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2gcleaninv(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2gcleaninv_rtt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2gunlock(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2invidx_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2kill(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2tagw_rs_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_l2unlocka_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_nmi_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_resume_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_rte(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_setimask_pt_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_setprio_pt_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_siad_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_start_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_stop_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_swi_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_tlbinvasid_rs(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_tlblock(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_tlbunlock(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_imported_tlbw_rss_rt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_addi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_addrx(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_addsp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_and1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_clrf(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_clrfnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_clrt(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_clrtnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_cmpeqi(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_combine0i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_combine1i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_combine2i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_combine3i(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_combinerz(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_combinezr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_dec(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_inc(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_seti(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_setin1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_sxtb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_sxth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_tfr(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_zxtb(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sa1_zxth(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl1_loadri_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl1_loadrub_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_deallocframe(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_jumpr31(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_jumpr31_f(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_jumpr31_fnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_jumpr31_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_jumpr31_tnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_loadrb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_loadrd_sp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_loadrh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_loadri_sp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_loadruh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_return(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_return_f(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_return_fnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_return_t(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_sl2_return_tnew(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss1_storeb_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss1_storew_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_allocframe(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_storebi0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_storebi1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_stored_sp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_storeh_io(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_storew_sp(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_storewi0(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_ss2_storewi1(HexInsnPktBundle *bundle);
RzILOpEffect *hex_il_op_undocumented_sa2_tfrsi(HexInsnPktBundle *bundle);

static HexILInsn hex_il_getter_lt[] = {
	{ { (HexILOpGetter)hex_il_op_a2_abs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_absp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_abssat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_add, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_hh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_lh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_sat_hh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_sat_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_sat_lh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_h16_sat_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_l16_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_l16_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_l16_sat_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addh_l16_sat_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addpsat, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addsph, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_addspl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_andir, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_andp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_aslh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_asrh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_combine_hh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_combine_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_combine_lh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_combine_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_combineii, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_combinew, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_max, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_maxp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_maxu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_maxup, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_min, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_minp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_minu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_minup, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_negp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_negsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_nop, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_notp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_orir, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_orp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddif, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddifnew, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddit, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_padditnew, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_paddtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pandf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pandfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pandt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pandtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_porf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_porfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_port, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_portnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_psubf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_psubfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_psubt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_psubtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pxorf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pxorfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pxort, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_pxortnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_roundsat, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_satb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_sath, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_satub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_satuh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_sub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_hh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_lh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_sat_hh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_sat_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_sat_lh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_h16_sat_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_l16_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_l16_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_l16_sat_hl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subh_l16_sat_ll, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_subsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svaddh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svaddhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svadduhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svavgh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svavghs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svnavgh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svsubh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svsubhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_svsubuhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_swiz, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_sxtb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_sxth, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_sxtw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_tfr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_tfrcrr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_tfrih, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_tfril, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_tfrrcr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_tfrsi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vabsh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vabshsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vabsw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vabswsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vaddh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vaddhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vaddub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vaddubs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vadduhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vaddw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vaddws, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavgh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavghcr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavghr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavgub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavgubr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavguh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavguhr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavguw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavguwr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavgw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavgwcr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vavgwr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmpbeq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmpbgtu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmpheq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmphgt, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmphgtu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmpweq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmpwgt, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vcmpwgtu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vconj, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vmaxb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vmaxh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vmaxub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vmaxuh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vmaxuw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vmaxw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vminb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vminh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vminub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vminuh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vminuw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vminw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vnavgh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vnavghcr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vnavghr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vnavgw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vnavgwcr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vnavgwr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vraddub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vraddub_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vrsadub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vrsadub_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsubh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsubhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsubub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsububs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsubuhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsubw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_vsubws, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_xorp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a2_zxth, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_addp_c, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_andnp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_bitsplit, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_bitspliti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_boundscheck_hi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_boundscheck_lo, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpbeq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpbeqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpbgt, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpbgti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpbgtu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpbgtui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpheq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmpheqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmphgt, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmphgti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmphgtu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cmphgtui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_combineii, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_combineir, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_combineri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cround_ri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_cround_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_ext, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_modwrapu, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_orn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_ornp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_paslhf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_paslhfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_paslht, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_paslhtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pasrhf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pasrhfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pasrht, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pasrhtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxtbf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxtbfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxtbt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxtbtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxthf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxthfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxtht, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_psxthtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxtbf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxtbfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxtbt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxtbtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxthf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxthfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxtht, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_pzxthtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_rcmpeq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_rcmpeqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_rcmpneq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_rcmpneqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_round_ri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_round_ri_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_round_rr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_round_rr_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_subp_c, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_tfrcpp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_tfrpcp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_tlbmatch, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpbeq_any, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpbeqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpbgt, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpbgti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpbgtui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpheqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmphgti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmphgtui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpweqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpwgti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vcmpwgtui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrmaxh, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrmaxuh, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrmaxuw, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrmaxw, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrminh, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrminuh, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrminuw, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a4_vrminw, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a5_acs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a5_vaddhubs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a6_vcmpbeq_notany, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a6_vminub_rdp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a7_clip, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a7_croundd_ri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a7_croundd_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_a7_vclip, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_all8, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_any8, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_bitsclr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_bitsclri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_bitsset, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_ccombinewf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_ccombinewnewf, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_ccombinewnewt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_ccombinewt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmoveif, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmoveit, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmovenewif, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmovenewit, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpeq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpeqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpeqp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpgt, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpgti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpgtp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpgtu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpgtui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_cmpgtup, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_mask, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_mux, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_muxii, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_muxir, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_muxri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_not, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_orn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_tfrpr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_tfrrp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_vitpack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_vmux, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c2_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_addipc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_and_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_and_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_and_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_and_orn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_cmplte, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_cmpltei, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_cmplteu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_cmplteui, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_cmpneq, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_cmpneqi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_fastcorner9, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_fastcorner9_not, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_nbitsclr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_nbitsclri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_nbitsset, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_or_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_or_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_or_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_c4_or_orn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_d2df, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_d2sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2d, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2d_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2ud, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2ud_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2uw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2uw_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2w, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_df2w_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2d, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2d_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2df, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2ud, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2ud_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2uw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2uw_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2w, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_sf2w_chop, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_ud2df, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_ud2sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_uw2df, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_uw2sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_w2df, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_conv_w2sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfadd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfclass, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfcmpeq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfcmpge, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfcmpgt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfcmpuo, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfimm_n, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfimm_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfmax, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfmin, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfmpyfix, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfmpyhh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfmpylh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfmpyll, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_dfsub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfadd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfclass, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfcmpeq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfcmpge, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfcmpgt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfcmpuo, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffixupd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffixupn, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffixupr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffma, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffma_lib, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffma_sc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffms, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sffms_lib, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfimm_n, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfimm_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfinvsqrta, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfmax, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfmin, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfmpy, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfrecipa, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_f2_sfsub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_g4_tfrgcpp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_g4_tfrgcrr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_g4_tfrgpcp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_g4_tfrgrcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_call, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_callf, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_callr, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_callrf, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_callrt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_callt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jump, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumpf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumpfnew, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumpfnewpt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumpfpt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumpr, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprf, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprfnewpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprfpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprgtez, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprgtezpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprltez, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprltezpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprnz, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprnzpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprtnewpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprtpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprz, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumprzpt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumpt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumptnew, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumptnewpt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_jumptpt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_loop0i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_loop0r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_loop1i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_loop1r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_pause, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_ploop1si, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_ploop1sr, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_ploop2si, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_ploop2sr, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_ploop3si, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_ploop3sr, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_trap0, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j2_trap1, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeq_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqi_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpeqn1_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgt_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgti_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtn1_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtu_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpgtui_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmplt_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmplt_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmplt_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmplt_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpltu_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpltu_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpltu_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_cmpltu_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_hintjumpr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_jumpseti, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_jumpsetr, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_f_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_f_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_fp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_fp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_fp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_fp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_t_jumpnv_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_t_jumpnv_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_tp0_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_tp0_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_tp1_jump_nt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_j4_tstbit0_tp1_jump_t, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_deallocframe, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignb_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignb_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignb_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignb_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignb_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignb_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignh_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignh_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignh_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignh_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignh_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadalignh_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw2_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw2_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw2_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw2_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw2_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw2_pr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw4_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw4_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw4_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw4_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw4_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbsw4_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw2_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw2_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw2_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw2_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw2_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw2_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw4_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw4_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw4_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw4_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw4_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadbzw4_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrb_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrb_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrb_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrb_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrb_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrb_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrbgp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrd_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrd_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrd_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrd_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrd_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrd_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrdgp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrh_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrh_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrh_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrh_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrh_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrh_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrhgp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadri_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadri_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadri_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadri_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadri_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadri_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrigp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrub_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrub_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrub_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrub_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrub_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrub_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadrubgp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruh_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruh_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruh_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruh_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruh_pi, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruh_pr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadruhgp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadw_aq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_loadw_locked, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbf_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbf_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbfnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbfnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbt_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbt_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbtnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrbtnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdf_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdf_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdfnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdfnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdt_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdt_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdtnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrdtnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrhf_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrhf_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrhfnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrhfnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrht_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrht_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrhtnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrhtnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrif_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrif_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrifnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrifnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrit_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrit_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadritnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadritnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubf_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubf_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubfnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubfnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubt_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubt_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubtnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadrubtnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruhf_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruhf_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruhfnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruhfnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruht_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruht_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruhtnew_io, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l2_ploadruhtnew_pi, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_add_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_add_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_add_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_and_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_and_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_and_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_iadd_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_iadd_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_iadd_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_iand_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_iand_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_iand_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ior_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ior_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ior_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_isub_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_isub_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_isub_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadalignb_ap, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadalignb_ur, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadalignh_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadalignh_ur, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbsw2_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbsw2_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbsw4_ap, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbsw4_ur, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbzw2_ap, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbzw2_ur, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbzw4_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadbzw4_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadd_aq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadd_locked, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrb_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrb_rr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrb_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrd_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrd_rr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrd_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrh_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrh_rr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrh_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadri_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadri_rr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadri_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrub_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrub_rr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadrub_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadruh_ap, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadruh_rr, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_loadruh_ur, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_or_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_or_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_or_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbf_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbf_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbfnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbfnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbt_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbt_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbtnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrbtnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdf_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdf_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdfnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdfnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdt_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdt_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdtnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrdtnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrhf_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrhf_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrhfnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrhfnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrht_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrht_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrhtnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrhtnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrif_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrif_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrifnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrifnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrit_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrit_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadritnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadritnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubf_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubf_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubfnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubfnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubt_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubt_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubtnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadrubtnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruhf_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruhf_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruhfnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruhfnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruht_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruht_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruhtnew_abs, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_ploadruhtnew_rr, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return, HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return_f, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return_fnew_pnt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return_fnew_pt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return_t, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return_tnew_pnt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_return_tnew_pt, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_sub_memopb_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_sub_memoph_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l4_sub_memopw_io, HEX_IL_INSN_ATTR_MEM_WRITE | HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_l6_memcpy, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_acci, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_accii, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmaci_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmacr_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmacs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmacs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmacsc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmacsc_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpyi_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpyr_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpyrs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpyrs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpyrsc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpyrsc_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpys_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpys_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpysc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cmpysc_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cnacs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cnacs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cnacsc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_cnacsc_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyss_acc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyss_nac_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyss_rnd_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyss_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyuu_acc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyuu_nac_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_dpmpyuu_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_hmmpyh_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_hmmpyh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_hmmpyl_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_hmmpyl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_maci, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_macsin, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_macsip, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmachs_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmachs_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmachs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmachs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacls_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacls_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacls_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacls_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacuhs_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacuhs_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacuhs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmacuhs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmaculs_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmaculs_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmaculs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmaculs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyh_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyh_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyl_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyl_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyuh_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyuh_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyuh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyuh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyul_rs0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyul_rs1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyul_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mmpyul_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mnaci, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_acc_sat_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_nac_sat_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_rnd_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_sat_rnd_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_up, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_up_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpy_up_s1_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_acc_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_nac_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyd_rnd_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpysin, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpysip, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpysu_up, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_acc_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_nac_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyu_up, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_acc_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_hh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_hh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_hl_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_hl_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_lh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_lh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_ll_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_mpyud_nac_ll_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_nacci, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_naccii, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_subacc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vabsdiffh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vabsdiffw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vcmac_s0_sat_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vcmac_s0_sat_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vcmpy_s0_sat_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vcmpy_s0_sat_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vcmpy_s1_sat_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vcmpy_s1_sat_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vdmacs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vdmacs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vdmpyrs_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vdmpyrs_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vdmpys_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vdmpys_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2es, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2es_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2es_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2s_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2s_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2su_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmac2su_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2es_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2es_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2s_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2s_s0pack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2s_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2s_s1pack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2su_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vmpy2su_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vraddh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vradduh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmaci_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmaci_s0c, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmacr_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmacr_s0c, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpyi_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpyi_s0c, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpyr_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpyr_s0c, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpys_acc_s1_h, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpys_acc_s1_l, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpys_s1_h, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpys_s1_l, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpys_s1rp_h, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrcmpys_s1rp_l, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrmac_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_vrmpy_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m2_xor_xacc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_and_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_and_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_and_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_and_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_cmpyi_wh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_cmpyi_whc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_cmpyr_wh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_cmpyr_whc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_mac_up_s1_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_mpyri_addi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_mpyri_addr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_mpyri_addr_u2, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_mpyrr_addi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_mpyrr_addr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_nac_up_s1_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_or_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_or_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_or_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_or_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_pmpyw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_pmpyw_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vpmpyh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vpmpyh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyeh_acc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyeh_acc_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyeh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyeh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyoh_acc_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyoh_acc_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyoh_s0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_vrmpyoh_s1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_xor_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_xor_andn, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_xor_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m4_xor_xacc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vdmacbsu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vdmpybsu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vmacbsu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vmacbuu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vmpybsu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vmpybuu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vrmacbsu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vrmacbuu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vrmpybsu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m5_vrmpybuu, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m6_vabsdiffb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m6_vabsdiffub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyiw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyiw_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyiwc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyiwc_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyrw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyrw_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyrwc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_dcmpyrwc_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyiw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyiw_rnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyiwc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyiwc_rnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyrw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyrw_rnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyrwc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_m7_wcmpyrwc_rnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_loadrbabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_loadrdabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_loadrhabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_loadriabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_loadrubabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_loadruhabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerbabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerbnewabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerdabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerfabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerhabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerhnewabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storeriabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_storerinewabs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ps_trap1, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_r6_release_at_vi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_r6_release_st_vi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_addasl_rrri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_allocframe, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_p_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_p_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_p_nac, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_p_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_p_xacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r_nac, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_r_xacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_i_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_p_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_p_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_p_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_p_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_p_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_r_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_r_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_r_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_r_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_r_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asl_r_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_p_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_p_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_p_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_p_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_p_rnd, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_r_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_r_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_r_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_r_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_r_rnd, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_svw_trun, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_i_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_p_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_p_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_p_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_p_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_p_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_r_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_r_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_r_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_r_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_r_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_svw_trun, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_asr_r_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_brev, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_brevp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_cabacdecbin, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_cl0, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_cl0p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_cl1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_cl1p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_clb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_clbnorm, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_clbp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_clrbit_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_clrbit_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_ct0, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_ct0p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_ct1, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_ct1p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_deinterleave, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_extractu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_extractu_rp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_extractup, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_extractup_rp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_insert, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_insert_rp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_insertp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_insertp_rp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_interleave, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lfsp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_p_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_p_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_p_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_p_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_p_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_r_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_r_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_r_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_r_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsl_r_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_p_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_p_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_p_nac, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_p_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_p_xacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_r, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_r_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_r_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_r_nac, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_r_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_r_xacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_i_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_p, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_p_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_p_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_p_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_p_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_p_xor, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_r_acc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_r_and, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_r_nac, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_r_or, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_vh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_lsr_r_vw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_mask, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_packhl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_parityp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbf_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbfnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbnewf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbnewf_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbnewfnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbnewt_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbnewt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbnewtnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbt_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerbtnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerdf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerdf_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerdfnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerdt_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerdt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerdtnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerff_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerff_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerffnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerft_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerft_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerftnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhf_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhfnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhnewf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhnewf_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhnewfnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhnewt_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhnewt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhnewtnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerht_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerht_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerhtnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerif_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerif_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerifnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerinewf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerinewf_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerinewfnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerinewt_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerinewt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerinewtnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerit_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstorerit_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_pstoreritnew_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_setbit_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_setbit_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_shuffeb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_shuffeh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_shuffob, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_shuffoh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerb_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerb_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerb_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerb_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerb_pi, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerb_pr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbgp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnew_io, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnew_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnew_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnew_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnew_pi, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnew_pr, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerbnewgp, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerd_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerd_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerd_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerd_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerd_pi, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerd_pr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerdgp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerf_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerf_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerf_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerf_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerf_pi, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerf_pr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerfgp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerh_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerh_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerh_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerh_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerh_pi, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerh_pr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhgp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnew_io, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnew_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnew_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnew_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnew_pi, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnew_pr, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerhnewgp, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storeri_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storeri_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storeri_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storeri_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storeri_pi, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storeri_pr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerigp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinew_io, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinew_pbr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinew_pci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinew_pcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinew_pi, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinew_pr, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storerinewgp, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storew_locked, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storew_rl_at_vi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_storew_rl_st_vi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_svsathb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_svsathub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_tableidxb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_tableidxd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_tableidxh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_tableidxw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_togglebit_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_togglebit_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_tstbit_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_tstbit_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_valignib, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_valignrb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vcnegh, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vcrotate, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vrcnegh, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vrndpackwh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vrndpackwhs, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsathb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsathb_nopack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsathub, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsathub_nopack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsatwh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsatwh_nopack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsatwuh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsatwuh_nopack, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsplatrb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsplatrh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vspliceib, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsplicerb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsxtbh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vsxthw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vtrunehb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vtrunewh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vtrunohb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vtrunowh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vzxtbh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s2_vzxthw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_addaddi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_addi_asl_ri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_addi_lsr_ri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_andi_asl_ri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_andi_lsr_ri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_clbaddi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_clbpaddi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_clbpnorm, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_extract, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_extract_rp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_extractp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_extractp_rp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_lsli, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_ntstbit_i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_ntstbit_r, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_or_andi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_or_andix, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_or_ori, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_ori_asl_ri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_ori_lsr_ri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_parity, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbf_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbf_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbfnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbfnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewf_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewf_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewfnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewfnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewt_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewt_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewtnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbnewtnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbt_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbt_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbtnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerbtnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdf_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdf_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdfnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdfnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdt_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdt_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdtnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerdtnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerff_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerff_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerffnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerffnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerffnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerft_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerft_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerftnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerftnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerftnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhf_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhf_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhfnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhfnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewf_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewf_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewfnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewfnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewt_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewt_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewtnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhnewtnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerht_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerht_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhtnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerhtnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerif_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerif_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerifnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerifnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerifnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewf_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewf_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewfnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewfnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewt_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewt_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewtnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerinewtnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerit_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstorerit_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstoreritnew_abs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstoreritnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_pstoreritnew_rr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_stored_locked, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_stored_rl_at_vi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_stored_rl_st_vi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirb_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirbf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirbfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirbt_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirbtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirh_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirhf_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirhfnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirht_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirhtnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeiri_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirif_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirifnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeirit_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeiritnew_io, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerb_ap, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerb_rr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerb_ur, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerbnew_ap, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerbnew_rr, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerbnew_ur, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerd_ap, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerd_rr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerd_ur, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerf_ap, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerf_rr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerf_ur, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerh_ap, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerh_rr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerh_ur, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerhnew_ap, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerhnew_rr, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerhnew_ur, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeri_ap, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeri_rr, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storeri_ur, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerinew_ap, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerinew_rr, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_storerinew_ur, HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_subaddi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_subi_asl_ri, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_subi_lsr_ri, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vrcrotate, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vrcrotate_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vxaddsubh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vxaddsubhr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vxaddsubw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vxsubaddh, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vxsubaddhr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s4_vxsubaddw, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s5_asrhub_rnd_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s5_asrhub_sat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s5_popcountp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s5_vasrhrnd, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_p, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_p_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_p_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_p_nac, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_p_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_p_xacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_r, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_r_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_r_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_r_nac, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_r_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_rol_i_r_xacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_vsplatrbp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_vtrunehb_ppp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_s6_vtrunohb_ppp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_extractw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_lvsplatb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_lvsplath, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_lvsplatw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_and_n, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_not, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_or_n, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_scalar2, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_scalar2v2, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_pred_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_shuffeqh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_shuffeqw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_v6mpyhubs10, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_v6mpyhubs10_vxx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_v6mpyvubs10, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_v6mpyvubs10_vxx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32ub_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32ub_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32ub_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_cur_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_cur_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_nt_tmp_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vl32b_tmp_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32ub_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_new_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nqpred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nqpred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nqpred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_new_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_npred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_npred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_npred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_nqpred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_nqpred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_nqpred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_qpred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_qpred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_nt_qpred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_qpred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_qpred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_qpred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_srls_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_srls_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vs32b_srls_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabs_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabs_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsb_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsdiffh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsdiffub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsdiffuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsdiffw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsh_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vabsw_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_hf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_qf16, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_qf16_mix, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_qf32, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_qf32_mix, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_sf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadd_sf_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddb_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddbnq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddbq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddbsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddbsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddcarry, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddcarryo, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddcarrysat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddclbh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddclbw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddh_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddhnq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddhq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddhsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddhw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddhw_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddubh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddubh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddubsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddubsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddububb_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadduhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadduhsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadduhw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadduhw_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadduwsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vadduwsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddw_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddwnq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddwq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddwsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaddwsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_valignb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_valignbi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vand, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandnqrt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandnqrt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandqrt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandqrt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandvnqv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandvqv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandvrt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vandvrt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaslh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaslh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaslhv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaslw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaslw_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vaslwv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasr_into, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrhbrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrhbsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrhubrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrhubsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrhv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasruhubrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasruhubsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasruwuhrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasruwuhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrvuhubrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrvuhubsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrvwuhrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrvwuhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrw_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrwh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrwhrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrwhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrwuhrndsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrwuhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vasrwv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vassign, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vassign_fp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vassign_tmp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgbrnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavghrnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgubrnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavguh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavguhrnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavguw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavguwrnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vavgwrnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vccombine, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcl0h, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcl0w, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcmov, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcombine, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcombine_tmp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vconv_hf_qf16, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vconv_hf_qf32, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vconv_sf_qf32, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_b_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_h_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_hf_b, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_hf_h, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_hf_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_hf_ub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_hf_uh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_sf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_ub_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vcvt_uh_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdeal, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdealb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdealb4w, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdealh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdealvdd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdelta, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpy_sf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpy_sf_hf_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpybus, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpybus_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpybus_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpybus_dv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhb_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhb_dv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhisat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhisat_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhsat_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhsuisat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhsuisat_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhsusat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhsusat_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhvsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdmpyhvsat_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdsaduh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vdsaduh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqb_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqb_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqb_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqh_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqh_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqh_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqw_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqw_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_veqw_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vfmax_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vfmax_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vfmin_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vfmin_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vfneg_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vfneg_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgathermh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgathermhq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgathermhw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgathermhwq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgathermw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgathermwq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtb_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtb_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtb_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgth, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgth_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgth_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgth_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgthf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgthf_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgthf_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgthf_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtsf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtsf_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtsf_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtsf_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtub_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtub_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtub_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuh_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuh_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuh_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuw_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuw_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtuw_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtw_and, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtw_or, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vgtw_xor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vhist, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vhistq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vinsertwr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlalignb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlalignbi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlsrb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlsrh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlsrhv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlsrw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlsrwv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlut4, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvvb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvvb_nm, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvvb_oracc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvvb_oracci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvvbi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvwh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvwh_nm, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvwh_oracc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvwh_oracci, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vlutvwhi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmax_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmax_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmaxb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmaxh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmaxub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmaxuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmaxw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmin_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmin_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vminb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vminh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vminub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vminuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vminw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpabus, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpabus_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpabusv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpabuu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpabuu_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpabuuv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpahb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpahb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpahhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpauhb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpauhb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpauhuhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpsuhuhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_hf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_hf_hf_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf16, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf16_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf16_mix_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf32, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf32_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf32_mix_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf32_qf16, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_qf32_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_sf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_sf_hf_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpy_sf_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpybus, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpybus_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpybusv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpybusv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpybv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpybv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyewuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyewuh_64, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhsat_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhsrs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhss, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhus, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhus_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyhvsrs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyieoh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiewh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiewuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiewuh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyih, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyih_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyihb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyihb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiowh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiwb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiwb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiwh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiwh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiwub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyiwub_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyowh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyowh_64_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyowh_rnd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyowh_rnd_sacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyowh_sacc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyub_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyubv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyubv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuh_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuhe, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuhe_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuhv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuhv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmpyuhvs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vmux, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnavgb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnavgh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnavgub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnavgw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnccombine, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vncmov, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnormamth, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnormamtw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vnot, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackeb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackeh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackhb_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackhub_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackob, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackoh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackwh_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpackwuh_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vpopcounth, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vprefixqb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vprefixqh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vprefixqw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrdelta, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybub_rtt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybub_rtt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybus, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybus_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybusi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybusi_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybusv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybusv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpybv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyub_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyub_rtt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyub_rtt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyubi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyubi_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyubv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyubv_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbb_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbb_rt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbb_rx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbb_rx_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbub_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbub_rt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbub_rx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzbub_rx_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcb_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcb_rt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcb_rx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcb_rx_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcbs_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcbs_rt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcbs_rx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyzcbs_rx_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyznb_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyznb_rt_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyznb_rx, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrmpyznb_rx_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vror, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrotr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vroundhb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vroundhub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrounduhub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrounduwuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vroundwh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vroundwuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrsadubi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vrsadubi_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsatdw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsathub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsatuwuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsatwh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermh_add, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermhq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermhw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermhw_add, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermhwq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermw_add, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vscattermwq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshufeh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshuff, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshuffb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshuffeb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshuffh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshuffob, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshuffvdd, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshufoeb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshufoeh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vshufoh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_hf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_qf16, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_qf16_mix, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_qf32, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_qf32_mix, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_sf_hf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsub_sf_sf, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubb_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubbnq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubbq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubbsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubbsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubcarry, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubcarryo, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubh_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubhnq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubhq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubhsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubhw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsububh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsububsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsububsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubububb_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubuhsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubuhsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubuhw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubuwsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubuwsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubw, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubw_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubwnq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubwq, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubwsat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vsubwsat_dv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vswap, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vtmpyb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vtmpyb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vtmpybus, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vtmpybus_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vtmpyhb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vtmpyhb_acc, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vunpackb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vunpackh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vunpackob, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vunpackoh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vunpackub, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vunpackuh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist128, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist128m, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist128q, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist128qm, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist256, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist256_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist256q, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vwhist256q_sat, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vxor, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vzb, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_vzh, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zld_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zld_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zld_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zld_pred_ai, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zld_pred_pi, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zld_pred_ppu, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_v6_zextract, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_barrier, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_break, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_dccleana, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_dccleaninva, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_dcfetchbo, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_dcinva, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_dczeroa, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_icinva, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_isync, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_syncht, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_tfrscrr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_tfrsrcr, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y2_wait, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y4_l2fetch, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y4_tfrscpp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y4_tfrspcp, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y4_trace, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y5_l2fetch, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_diag, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_diag0, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_diag1, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_dmlink, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_dmpause, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_dmpoll, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_dmresume, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_dmstart, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_y6_dmwait, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_dep_a2_addsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_dep_a2_subsat, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_dep_s2_packhl, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_invalid_decode, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_pd_l2locka_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_ss, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_ctlbw_rss_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_dctagr_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_getimask_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_iassignr_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_icdatar_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_ictagr_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_l2tagr_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_memw_phys_rs_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_tlboc_rss, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rd_tlbp_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rdd_sss, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rdd_tlbr_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_sd_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_sdd_rss, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_ciad_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_crswap_rx_sgp0, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_crswap_rx_sgp1, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_crswap_rxx_sgp1_0, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_cswi_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_dccleanidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_dccleaninvidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_dcinvidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_dckill, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_dctagw_rs_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_iassignw_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_icdataw_rs_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_icinvidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_ickill, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_ictagw_rs_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_k0lock, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_k0unlock, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2cleanidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2cleaninvidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2gclean, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2gclean_rtt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2gcleaninv, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2gcleaninv_rtt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2gunlock, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2invidx_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2kill, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2tagw_rs_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_l2unlocka_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_nmi_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_resume_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_rte, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_setimask_pt_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_setprio_pt_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_siad_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_start_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_stop_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_swi_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_tlbinvasid_rs, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_tlblock, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_tlbunlock, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_imported_tlbw_rss_rt, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_addi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_addrx, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_addsp, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_and1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_clrf, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_clrfnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_clrt, HEX_IL_INSN_ATTR_COND },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_clrtnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_cmpeqi, HEX_IL_INSN_ATTR_WPRED | HEX_IL_INSN_ATTR_WRITE_P3 | HEX_IL_INSN_ATTR_WRITE_P0 | HEX_IL_INSN_ATTR_WRITE_P1 },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_combine0i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_combine1i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_combine2i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_combine3i, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_combinerz, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_combinezr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_dec, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_inc, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_seti, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_setin1, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_sxtb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_sxth, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_tfr, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_zxtb, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sa1_zxth, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl1_loadri_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl1_loadrub_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_deallocframe, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_jumpr31, HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_jumpr31_f, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_jumpr31_fnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_jumpr31_t, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_jumpr31_tnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_loadrb_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_loadrd_sp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_loadrh_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_loadri_sp, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_loadruh_io, HEX_IL_INSN_ATTR_MEM_READ },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_return, HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_return_f, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_return_fnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_return_t, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_sl2_return_tnew, HEX_IL_INSN_ATTR_COND | HEX_IL_INSN_ATTR_NEW | HEX_IL_INSN_ATTR_MEM_READ | HEX_IL_INSN_ATTR_BRANCH },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss1_storeb_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss1_storew_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_allocframe, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_storebi0, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_storebi1, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_stored_sp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_storeh_io, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_storew_sp, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_storewi0, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_ss2_storewi1, HEX_IL_INSN_ATTR_MEM_WRITE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
	{ { (HexILOpGetter)hex_il_op_undocumented_sa2_tfrsi, HEX_IL_INSN_ATTR_NONE },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID },
		{ (HexILOpGetter)NULL, HEX_IL_INSN_ATTR_INVALID } },
};
#include <rz_il/rz_il_opbuilder_end.h>
#endif
