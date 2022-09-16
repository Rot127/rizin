// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 17:23:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_types.h>
#include <rz_util.h>
#include <rz_asm.h>
#include <rz_analysis.h>
#include <rz_lib.h>
#include "hexagon.h"
#include "hexagon_insn.h"
#include "hexagon_arch.h"
#include "analysis/arch/hexagon/hexagon_il.h"

RZ_API int hexagon_v6_op(RzAnalysis *analysis, RzAnalysisOp *op, ut64 addr, const ut8 *buf, int len, RzAnalysisOpMask mask) {
	rz_return_val_if_fail(analysis && op && buf, -1);
	if (len < 4) {
		return -1;
	}
	if (analysis->pcalign == 0) {
		analysis->pcalign = 0x4;
	}

	HexReversedOpcode rev = { .action = HEXAGON_ANALYSIS, .ana_op = op, .asm_op = NULL };

	hexagon_reverse_opcode(NULL, &rev, buf, addr);
	op->il_op = hex_get_il_op(addr);

	return op->size;
}

static RzAnalysisILConfig *rz_hexagon_il_config(RzAnalysis *a) {
	HexState *state = hexagon_get_state();
	state->just_init = true;
	return rz_analysis_il_config_new(32, a->big_endian, 32);
}

RZ_API char *get_reg_profile(RzAnalysis *analysis) {
	const char *p =
		"=PC	C9\n"
		"=SP	R29\n"
		"=BP	R30\n"
		"=LR	R31\n"
		"=SR	C8\n"
		"=SN	R0\n"
		"=A0	R0\n"
		"=A1	R1\n"
		"=A2	R2\n"
		"=A3	R3\n"
		"=A4	R4\n"
		"=A5	R5\n"
		"=R0	R0\n"
		"=R1	R1\n"

		"ctr	C0	.32	0	0\n"
		"ctr	C0_tmp	.32	32	0\n"
		"ctr	C1	.32	64	0\n"
		"ctr	C1_tmp	.32	96	0\n"
		"ctr	C2	.32	128	0\n"
		"ctr	C2_tmp	.32	160	0\n"
		"ctr	C3	.32	192	0\n"
		"ctr	C3_tmp	.32	224	0\n"
		"ctr	C4	.32	256	0\n"
		"ctr	C4_tmp	.32	288	0\n"
		"ctr	C5	.32	320	0\n"
		"ctr	C5_tmp	.32	352	0\n"
		"ctr	C6	.32	384	0\n"
		"ctr	C6_tmp	.32	416	0\n"
		"ctr	C7	.32	448	0\n"
		"ctr	C7_tmp	.32	480	0\n"
		"ctr	C8	.32	512	0\n"
		"ctr	C8_tmp	.32	544	0\n"
		"ctr	C9	.32	576	0\n"
		"ctr	C9_tmp	.32	608	0\n"
		"ctr	C10	.32	640	0\n"
		"ctr	C10_tmp	.32	672	0\n"
		"ctr	C11	.32	704	0\n"
		"ctr	C11_tmp	.32	736	0\n"
		"ctr	C12	.32	768	0\n"
		"ctr	C12_tmp	.32	800	0\n"
		"ctr	C13	.32	832	0\n"
		"ctr	C13_tmp	.32	864	0\n"
		"ctr	C14	.32	896	0\n"
		"ctr	C14_tmp	.32	928	0\n"
		"ctr	C15	.32	960	0\n"
		"ctr	C15_tmp	.32	992	0\n"
		"ctr	C16	.32	1024	0\n"
		"ctr	C16_tmp	.32	1056	0\n"
		"ctr	C17	.32	1088	0\n"
		"ctr	C17_tmp	.32	1120	0\n"
		"ctr	C18	.32	1152	0\n"
		"ctr	C18_tmp	.32	1184	0\n"
		"ctr	C19	.32	1216	0\n"
		"ctr	C19_tmp	.32	1248	0\n"
		"ctr	C30	.32	1280	0\n"
		"ctr	C30_tmp	.32	1312	0\n"
		"ctr	C31	.32	1344	0\n"
		"ctr	C31_tmp	.32	1376	0\n"

		"ctr	C1:0	.64	1408	0\n"
		"ctr	C1:0_tmp	.64	1472	0\n"
		"ctr	C3:2	.64	1536	0\n"
		"ctr	C3:2_tmp	.64	1600	0\n"
		"ctr	C5:4	.64	1664	0\n"
		"ctr	C5:4_tmp	.64	1728	0\n"
		"ctr	C7:6	.64	1792	0\n"
		"ctr	C7:6_tmp	.64	1856	0\n"
		"ctr	C9:8	.64	1920	0\n"
		"ctr	C9:8_tmp	.64	1984	0\n"
		"ctr	C11:10	.64	2048	0\n"
		"ctr	C11:10_tmp	.64	2112	0\n"
		"ctr	C13:12	.64	2176	0\n"
		"ctr	C13:12_tmp	.64	2240	0\n"
		"ctr	C15:14	.64	2304	0\n"
		"ctr	C15:14_tmp	.64	2368	0\n"
		"ctr	C17:16	.64	2432	0\n"
		"ctr	C17:16_tmp	.64	2496	0\n"
		"ctr	C19:18	.64	2560	0\n"
		"ctr	C19:18_tmp	.64	2624	0\n"
		"ctr	C31:30	.64	2688	0\n"
		"ctr	C31:30_tmp	.64	2752	0\n"

		"gpr	R1:0	.64	2816	0\n"
		"gpr	R1:0_tmp	.64	2880	0\n"
		"gpr	R3:2	.64	2944	0\n"
		"gpr	R3:2_tmp	.64	3008	0\n"
		"gpr	R5:4	.64	3072	0\n"
		"gpr	R5:4_tmp	.64	3136	0\n"
		"gpr	R7:6	.64	3200	0\n"
		"gpr	R7:6_tmp	.64	3264	0\n"
		"gpr	R9:8	.64	3328	0\n"
		"gpr	R9:8_tmp	.64	3392	0\n"
		"gpr	R11:10	.64	3456	0\n"
		"gpr	R11:10_tmp	.64	3520	0\n"
		"gpr	R13:12	.64	3584	0\n"
		"gpr	R13:12_tmp	.64	3648	0\n"
		"gpr	R15:14	.64	3712	0\n"
		"gpr	R15:14_tmp	.64	3776	0\n"
		"gpr	R17:16	.64	3840	0\n"
		"gpr	R17:16_tmp	.64	3904	0\n"
		"gpr	R19:18	.64	3968	0\n"
		"gpr	R19:18_tmp	.64	4032	0\n"
		"gpr	R21:20	.64	4096	0\n"
		"gpr	R21:20_tmp	.64	4160	0\n"
		"gpr	R23:22	.64	4224	0\n"
		"gpr	R23:22_tmp	.64	4288	0\n"
		"gpr	R25:24	.64	4352	0\n"
		"gpr	R25:24_tmp	.64	4416	0\n"
		"gpr	R27:26	.64	4480	0\n"
		"gpr	R27:26_tmp	.64	4544	0\n"
		"gpr	R29:28	.64	4608	0\n"
		"gpr	R29:28_tmp	.64	4672	0\n"
		"gpr	R31:30	.64	4736	0\n"
		"gpr	R31:30_tmp	.64	4800	0\n"

		"gpr	G0	.32	4864	0\n"
		"gpr	G0_tmp	.32	4896	0\n"
		"gpr	G1	.32	4928	0\n"
		"gpr	G1_tmp	.32	4960	0\n"
		"gpr	G2	.32	4992	0\n"
		"gpr	G2_tmp	.32	5024	0\n"
		"gpr	G3	.32	5056	0\n"
		"gpr	G3_tmp	.32	5088	0\n"
		"gpr	G4	.32	5120	0\n"
		"gpr	G4_tmp	.32	5152	0\n"
		"gpr	G5	.32	5184	0\n"
		"gpr	G5_tmp	.32	5216	0\n"
		"gpr	G6	.32	5248	0\n"
		"gpr	G6_tmp	.32	5280	0\n"
		"gpr	G7	.32	5312	0\n"
		"gpr	G7_tmp	.32	5344	0\n"
		"gpr	G8	.32	5376	0\n"
		"gpr	G8_tmp	.32	5408	0\n"
		"gpr	G9	.32	5440	0\n"
		"gpr	G9_tmp	.32	5472	0\n"
		"gpr	G10	.32	5504	0\n"
		"gpr	G10_tmp	.32	5536	0\n"
		"gpr	G11	.32	5568	0\n"
		"gpr	G11_tmp	.32	5600	0\n"
		"gpr	G12	.32	5632	0\n"
		"gpr	G12_tmp	.32	5664	0\n"
		"gpr	G13	.32	5696	0\n"
		"gpr	G13_tmp	.32	5728	0\n"
		"gpr	G14	.32	5760	0\n"
		"gpr	G14_tmp	.32	5792	0\n"
		"gpr	G15	.32	5824	0\n"
		"gpr	G15_tmp	.32	5856	0\n"
		"gpr	G16	.32	5888	0\n"
		"gpr	G16_tmp	.32	5920	0\n"
		"gpr	G17	.32	5952	0\n"
		"gpr	G17_tmp	.32	5984	0\n"
		"gpr	G18	.32	6016	0\n"
		"gpr	G18_tmp	.32	6048	0\n"
		"gpr	G19	.32	6080	0\n"
		"gpr	G19_tmp	.32	6112	0\n"
		"gpr	G20	.32	6144	0\n"
		"gpr	G20_tmp	.32	6176	0\n"
		"gpr	G21	.32	6208	0\n"
		"gpr	G21_tmp	.32	6240	0\n"
		"gpr	G22	.32	6272	0\n"
		"gpr	G22_tmp	.32	6304	0\n"
		"gpr	G23	.32	6336	0\n"
		"gpr	G23_tmp	.32	6368	0\n"
		"gpr	G24	.32	6400	0\n"
		"gpr	G24_tmp	.32	6432	0\n"
		"gpr	G25	.32	6464	0\n"
		"gpr	G25_tmp	.32	6496	0\n"
		"gpr	G26	.32	6528	0\n"
		"gpr	G26_tmp	.32	6560	0\n"
		"gpr	G27	.32	6592	0\n"
		"gpr	G27_tmp	.32	6624	0\n"
		"gpr	G28	.32	6656	0\n"
		"gpr	G28_tmp	.32	6688	0\n"
		"gpr	G29	.32	6720	0\n"
		"gpr	G29_tmp	.32	6752	0\n"
		"gpr	G30	.32	6784	0\n"
		"gpr	G30_tmp	.32	6816	0\n"
		"gpr	G31	.32	6848	0\n"
		"gpr	G31_tmp	.32	6880	0\n"

		"gpr	G1:0	.64	6912	0\n"
		"gpr	G1:0_tmp	.64	6976	0\n"
		"gpr	G3:2	.64	7040	0\n"
		"gpr	G3:2_tmp	.64	7104	0\n"
		"gpr	G5:4	.64	7168	0\n"
		"gpr	G5:4_tmp	.64	7232	0\n"
		"gpr	G7:6	.64	7296	0\n"
		"gpr	G7:6_tmp	.64	7360	0\n"
		"gpr	G9:8	.64	7424	0\n"
		"gpr	G9:8_tmp	.64	7488	0\n"
		"gpr	G11:10	.64	7552	0\n"
		"gpr	G11:10_tmp	.64	7616	0\n"
		"gpr	G13:12	.64	7680	0\n"
		"gpr	G13:12_tmp	.64	7744	0\n"
		"gpr	G15:14	.64	7808	0\n"
		"gpr	G15:14_tmp	.64	7872	0\n"
		"gpr	G17:16	.64	7936	0\n"
		"gpr	G17:16_tmp	.64	8000	0\n"
		"gpr	G19:18	.64	8064	0\n"
		"gpr	G19:18_tmp	.64	8128	0\n"
		"gpr	G21:20	.64	8192	0\n"
		"gpr	G21:20_tmp	.64	8256	0\n"
		"gpr	G23:22	.64	8320	0\n"
		"gpr	G23:22_tmp	.64	8384	0\n"
		"gpr	G25:24	.64	8448	0\n"
		"gpr	G25:24_tmp	.64	8512	0\n"
		"gpr	G27:26	.64	8576	0\n"
		"gpr	G27:26_tmp	.64	8640	0\n"
		"gpr	G29:28	.64	8704	0\n"
		"gpr	G29:28_tmp	.64	8768	0\n"
		"gpr	G31:30	.64	8832	0\n"
		"gpr	G31:30_tmp	.64	8896	0\n"

		"vcc	Q0	.128	8960	0\n"
		"vcc	Q0_tmp	.128	9088	0\n"
		"vcc	Q1	.128	9216	0\n"
		"vcc	Q1_tmp	.128	9344	0\n"
		"vcc	Q2	.128	9472	0\n"
		"vcc	Q2_tmp	.128	9600	0\n"
		"vcc	Q3	.128	9728	0\n"
		"vcc	Q3_tmp	.128	9856	0\n"

		"vc	V3:0	.4096	9984	0\n"
		"vc	V3:0_tmp	.4096	14080	0\n"
		"vc	V7:4	.4096	18176	0\n"
		"vc	V7:4_tmp	.4096	22272	0\n"
		"vc	V11:8	.4096	26368	0\n"
		"vc	V11:8_tmp	.4096	30464	0\n"
		"vc	V15:12	.4096	34560	0\n"
		"vc	V15:12_tmp	.4096	38656	0\n"
		"vc	V19:16	.4096	42752	0\n"
		"vc	V19:16_tmp	.4096	46848	0\n"
		"vc	V23:20	.4096	50944	0\n"
		"vc	V23:20_tmp	.4096	55040	0\n"
		"vc	V27:24	.4096	59136	0\n"
		"vc	V27:24_tmp	.4096	63232	0\n"
		"vc	V31:28	.4096	67328	0\n"
		"vc	V31:28_tmp	.4096	71424	0\n"

		"vc	V0	.1024	75520	0\n"
		"vc	V0_tmp	.1024	76544	0\n"
		"vc	V1	.1024	77568	0\n"
		"vc	V1_tmp	.1024	78592	0\n"
		"vc	V2	.1024	79616	0\n"
		"vc	V2_tmp	.1024	80640	0\n"
		"vc	V3	.1024	81664	0\n"
		"vc	V3_tmp	.1024	82688	0\n"
		"vc	V4	.1024	83712	0\n"
		"vc	V4_tmp	.1024	84736	0\n"
		"vc	V5	.1024	85760	0\n"
		"vc	V5_tmp	.1024	86784	0\n"
		"vc	V6	.1024	87808	0\n"
		"vc	V6_tmp	.1024	88832	0\n"
		"vc	V7	.1024	89856	0\n"
		"vc	V7_tmp	.1024	90880	0\n"
		"vc	V8	.1024	91904	0\n"
		"vc	V8_tmp	.1024	92928	0\n"
		"vc	V9	.1024	93952	0\n"
		"vc	V9_tmp	.1024	94976	0\n"
		"vc	V10	.1024	96000	0\n"
		"vc	V10_tmp	.1024	97024	0\n"
		"vc	V11	.1024	98048	0\n"
		"vc	V11_tmp	.1024	99072	0\n"
		"vc	V12	.1024	100096	0\n"
		"vc	V12_tmp	.1024	101120	0\n"
		"vc	V13	.1024	102144	0\n"
		"vc	V13_tmp	.1024	103168	0\n"
		"vc	V14	.1024	104192	0\n"
		"vc	V14_tmp	.1024	105216	0\n"
		"vc	V15	.1024	106240	0\n"
		"vc	V15_tmp	.1024	107264	0\n"
		"vc	V16	.1024	108288	0\n"
		"vc	V16_tmp	.1024	109312	0\n"
		"vc	V17	.1024	110336	0\n"
		"vc	V17_tmp	.1024	111360	0\n"
		"vc	V18	.1024	112384	0\n"
		"vc	V18_tmp	.1024	113408	0\n"
		"vc	V19	.1024	114432	0\n"
		"vc	V19_tmp	.1024	115456	0\n"
		"vc	V20	.1024	116480	0\n"
		"vc	V20_tmp	.1024	117504	0\n"
		"vc	V21	.1024	118528	0\n"
		"vc	V21_tmp	.1024	119552	0\n"
		"vc	V22	.1024	120576	0\n"
		"vc	V22_tmp	.1024	121600	0\n"
		"vc	V23	.1024	122624	0\n"
		"vc	V23_tmp	.1024	123648	0\n"
		"vc	V24	.1024	124672	0\n"
		"vc	V24_tmp	.1024	125696	0\n"
		"vc	V25	.1024	126720	0\n"
		"vc	V25_tmp	.1024	127744	0\n"
		"vc	V26	.1024	128768	0\n"
		"vc	V26_tmp	.1024	129792	0\n"
		"vc	V27	.1024	130816	0\n"
		"vc	V27_tmp	.1024	131840	0\n"
		"vc	V28	.1024	132864	0\n"
		"vc	V28_tmp	.1024	133888	0\n"
		"vc	V29	.1024	134912	0\n"
		"vc	V29_tmp	.1024	135936	0\n"
		"vc	V30	.1024	136960	0\n"
		"vc	V30_tmp	.1024	137984	0\n"
		"vc	V31	.1024	139008	0\n"
		"vc	V31_tmp	.1024	140032	0\n"

		"vc	V1:0	.2048	141056	0\n"
		"vc	V1:0_tmp	.2048	143104	0\n"
		"vc	V3:2	.2048	145152	0\n"
		"vc	V3:2_tmp	.2048	147200	0\n"
		"vc	V5:4	.2048	149248	0\n"
		"vc	V5:4_tmp	.2048	151296	0\n"
		"vc	V7:6	.2048	153344	0\n"
		"vc	V7:6_tmp	.2048	155392	0\n"
		"vc	V9:8	.2048	157440	0\n"
		"vc	V9:8_tmp	.2048	159488	0\n"
		"vc	V11:10	.2048	161536	0\n"
		"vc	V11:10_tmp	.2048	163584	0\n"
		"vc	V13:12	.2048	165632	0\n"
		"vc	V13:12_tmp	.2048	167680	0\n"
		"vc	V15:14	.2048	169728	0\n"
		"vc	V15:14_tmp	.2048	171776	0\n"
		"vc	V17:16	.2048	173824	0\n"
		"vc	V17:16_tmp	.2048	175872	0\n"
		"vc	V19:18	.2048	177920	0\n"
		"vc	V19:18_tmp	.2048	179968	0\n"
		"vc	V21:20	.2048	182016	0\n"
		"vc	V21:20_tmp	.2048	184064	0\n"
		"vc	V23:22	.2048	186112	0\n"
		"vc	V23:22_tmp	.2048	188160	0\n"
		"vc	V25:24	.2048	190208	0\n"
		"vc	V25:24_tmp	.2048	192256	0\n"
		"vc	V27:26	.2048	194304	0\n"
		"vc	V27:26_tmp	.2048	196352	0\n"
		"vc	V29:28	.2048	198400	0\n"
		"vc	V29:28_tmp	.2048	200448	0\n"
		"vc	V31:30	.2048	202496	0\n"
		"vc	V31:30_tmp	.2048	204544	0\n"

		"gpr	R0	.32	206592	0\n"
		"gpr	R0_tmp	.32	206624	0\n"
		"gpr	R1	.32	206656	0\n"
		"gpr	R1_tmp	.32	206688	0\n"
		"gpr	R2	.32	206720	0\n"
		"gpr	R2_tmp	.32	206752	0\n"
		"gpr	R3	.32	206784	0\n"
		"gpr	R3_tmp	.32	206816	0\n"
		"gpr	R4	.32	206848	0\n"
		"gpr	R4_tmp	.32	206880	0\n"
		"gpr	R5	.32	206912	0\n"
		"gpr	R5_tmp	.32	206944	0\n"
		"gpr	R6	.32	206976	0\n"
		"gpr	R6_tmp	.32	207008	0\n"
		"gpr	R7	.32	207040	0\n"
		"gpr	R7_tmp	.32	207072	0\n"
		"gpr	R8	.32	207104	0\n"
		"gpr	R8_tmp	.32	207136	0\n"
		"gpr	R9	.32	207168	0\n"
		"gpr	R9_tmp	.32	207200	0\n"
		"gpr	R10	.32	207232	0\n"
		"gpr	R10_tmp	.32	207264	0\n"
		"gpr	R11	.32	207296	0\n"
		"gpr	R11_tmp	.32	207328	0\n"
		"gpr	R12	.32	207360	0\n"
		"gpr	R12_tmp	.32	207392	0\n"
		"gpr	R13	.32	207424	0\n"
		"gpr	R13_tmp	.32	207456	0\n"
		"gpr	R14	.32	207488	0\n"
		"gpr	R14_tmp	.32	207520	0\n"
		"gpr	R15	.32	207552	0\n"
		"gpr	R15_tmp	.32	207584	0\n"
		"gpr	R16	.32	207616	0\n"
		"gpr	R16_tmp	.32	207648	0\n"
		"gpr	R17	.32	207680	0\n"
		"gpr	R17_tmp	.32	207712	0\n"
		"gpr	R18	.32	207744	0\n"
		"gpr	R18_tmp	.32	207776	0\n"
		"gpr	R19	.32	207808	0\n"
		"gpr	R19_tmp	.32	207840	0\n"
		"gpr	R20	.32	207872	0\n"
		"gpr	R20_tmp	.32	207904	0\n"
		"gpr	R21	.32	207936	0\n"
		"gpr	R21_tmp	.32	207968	0\n"
		"gpr	R22	.32	208000	0\n"
		"gpr	R22_tmp	.32	208032	0\n"
		"gpr	R23	.32	208064	0\n"
		"gpr	R23_tmp	.32	208096	0\n"
		"gpr	R24	.32	208128	0\n"
		"gpr	R24_tmp	.32	208160	0\n"
		"gpr	R25	.32	208192	0\n"
		"gpr	R25_tmp	.32	208224	0\n"
		"gpr	R26	.32	208256	0\n"
		"gpr	R26_tmp	.32	208288	0\n"
		"gpr	R27	.32	208320	0\n"
		"gpr	R27_tmp	.32	208352	0\n"
		"gpr	R28	.32	208384	0\n"
		"gpr	R28_tmp	.32	208416	0\n"
		"gpr	R29	.32	208448	0\n"
		"gpr	R29_tmp	.32	208480	0\n"
		"gpr	R30	.32	208512	0\n"
		"gpr	R30_tmp	.32	208544	0\n"
		"gpr	R31	.32	208576	0\n"
		"gpr	R31_tmp	.32	208608	0\n"

		"ctr	P0	.8	208640	0\n"
		"ctr	P0_tmp	.8	208648	0\n"
		"ctr	P1	.8	208656	0\n"
		"ctr	P1_tmp	.8	208664	0\n"
		"ctr	P2	.8	208672	0\n"
		"ctr	P2_tmp	.8	208680	0\n"
		"ctr	P3	.8	208688	0\n"
		"ctr	P3_tmp	.8	208696	0\n"

		"sys	S0	.32	208704	0\n"
		"sys	S0_tmp	.32	208736	0\n"
		"sys	S1	.32	208768	0\n"
		"sys	S1_tmp	.32	208800	0\n"
		"sys	S2	.32	208832	0\n"
		"sys	S2_tmp	.32	208864	0\n"
		"sys	S3	.32	208896	0\n"
		"sys	S3_tmp	.32	208928	0\n"
		"sys	S4	.32	208960	0\n"
		"sys	S4_tmp	.32	208992	0\n"
		"sys	S5	.32	209024	0\n"
		"sys	S5_tmp	.32	209056	0\n"
		"sys	S6	.32	209088	0\n"
		"sys	S6_tmp	.32	209120	0\n"
		"sys	S7	.32	209152	0\n"
		"sys	S7_tmp	.32	209184	0\n"
		"sys	S8	.32	209216	0\n"
		"sys	S8_tmp	.32	209248	0\n"
		"sys	S9	.32	209280	0\n"
		"sys	S9_tmp	.32	209312	0\n"
		"sys	S10	.32	209344	0\n"
		"sys	S10_tmp	.32	209376	0\n"
		"sys	S11	.32	209408	0\n"
		"sys	S11_tmp	.32	209440	0\n"
		"sys	S12	.32	209472	0\n"
		"sys	S12_tmp	.32	209504	0\n"
		"sys	S13	.32	209536	0\n"
		"sys	S13_tmp	.32	209568	0\n"
		"sys	S14	.32	209600	0\n"
		"sys	S14_tmp	.32	209632	0\n"
		"sys	S15	.32	209664	0\n"
		"sys	S15_tmp	.32	209696	0\n"
		"sys	S16	.32	209728	0\n"
		"sys	S16_tmp	.32	209760	0\n"
		"sys	S17	.32	209792	0\n"
		"sys	S17_tmp	.32	209824	0\n"
		"sys	S18	.32	209856	0\n"
		"sys	S18_tmp	.32	209888	0\n"
		"sys	S19	.32	209920	0\n"
		"sys	S19_tmp	.32	209952	0\n"
		"sys	S20	.32	209984	0\n"
		"sys	S20_tmp	.32	210016	0\n"
		"sys	S21	.32	210048	0\n"
		"sys	S21_tmp	.32	210080	0\n"
		"sys	S22	.32	210112	0\n"
		"sys	S22_tmp	.32	210144	0\n"
		"sys	S23	.32	210176	0\n"
		"sys	S23_tmp	.32	210208	0\n"
		"sys	S24	.32	210240	0\n"
		"sys	S24_tmp	.32	210272	0\n"
		"sys	S25	.32	210304	0\n"
		"sys	S25_tmp	.32	210336	0\n"
		"sys	S26	.32	210368	0\n"
		"sys	S26_tmp	.32	210400	0\n"
		"sys	S27	.32	210432	0\n"
		"sys	S27_tmp	.32	210464	0\n"
		"sys	S28	.32	210496	0\n"
		"sys	S28_tmp	.32	210528	0\n"
		"sys	S29	.32	210560	0\n"
		"sys	S29_tmp	.32	210592	0\n"
		"sys	S30	.32	210624	0\n"
		"sys	S30_tmp	.32	210656	0\n"
		"sys	S31	.32	210688	0\n"
		"sys	S31_tmp	.32	210720	0\n"
		"sys	S32	.32	210752	0\n"
		"sys	S32_tmp	.32	210784	0\n"
		"sys	S33	.32	210816	0\n"
		"sys	S33_tmp	.32	210848	0\n"
		"sys	S34	.32	210880	0\n"
		"sys	S34_tmp	.32	210912	0\n"
		"sys	S35	.32	210944	0\n"
		"sys	S35_tmp	.32	210976	0\n"
		"sys	S36	.32	211008	0\n"
		"sys	S36_tmp	.32	211040	0\n"
		"sys	S37	.32	211072	0\n"
		"sys	S37_tmp	.32	211104	0\n"
		"sys	S38	.32	211136	0\n"
		"sys	S38_tmp	.32	211168	0\n"
		"sys	S39	.32	211200	0\n"
		"sys	S39_tmp	.32	211232	0\n"
		"sys	S40	.32	211264	0\n"
		"sys	S40_tmp	.32	211296	0\n"
		"sys	S41	.32	211328	0\n"
		"sys	S41_tmp	.32	211360	0\n"
		"sys	S42	.32	211392	0\n"
		"sys	S42_tmp	.32	211424	0\n"
		"sys	S43	.32	211456	0\n"
		"sys	S43_tmp	.32	211488	0\n"
		"sys	S44	.32	211520	0\n"
		"sys	S44_tmp	.32	211552	0\n"
		"sys	S45	.32	211584	0\n"
		"sys	S45_tmp	.32	211616	0\n"
		"sys	S46	.32	211648	0\n"
		"sys	S46_tmp	.32	211680	0\n"
		"sys	S47	.32	211712	0\n"
		"sys	S47_tmp	.32	211744	0\n"
		"sys	S48	.32	211776	0\n"
		"sys	S48_tmp	.32	211808	0\n"
		"sys	S49	.32	211840	0\n"
		"sys	S49_tmp	.32	211872	0\n"
		"sys	S50	.32	211904	0\n"
		"sys	S50_tmp	.32	211936	0\n"
		"sys	S51	.32	211968	0\n"
		"sys	S51_tmp	.32	212000	0\n"
		"sys	S52	.32	212032	0\n"
		"sys	S52_tmp	.32	212064	0\n"
		"sys	S53	.32	212096	0\n"
		"sys	S53_tmp	.32	212128	0\n"
		"sys	S54	.32	212160	0\n"
		"sys	S54_tmp	.32	212192	0\n"
		"sys	S55	.32	212224	0\n"
		"sys	S55_tmp	.32	212256	0\n"
		"sys	S56	.32	212288	0\n"
		"sys	S56_tmp	.32	212320	0\n"
		"sys	S57	.32	212352	0\n"
		"sys	S57_tmp	.32	212384	0\n"
		"sys	S58	.32	212416	0\n"
		"sys	S58_tmp	.32	212448	0\n"
		"sys	S59	.32	212480	0\n"
		"sys	S59_tmp	.32	212512	0\n"
		"sys	S60	.32	212544	0\n"
		"sys	S60_tmp	.32	212576	0\n"
		"sys	S61	.32	212608	0\n"
		"sys	S61_tmp	.32	212640	0\n"
		"sys	S62	.32	212672	0\n"
		"sys	S62_tmp	.32	212704	0\n"
		"sys	S63	.32	212736	0\n"
		"sys	S63_tmp	.32	212768	0\n"
		"sys	S64	.32	212800	0\n"
		"sys	S64_tmp	.32	212832	0\n"
		"sys	S65	.32	212864	0\n"
		"sys	S65_tmp	.32	212896	0\n"
		"sys	S66	.32	212928	0\n"
		"sys	S66_tmp	.32	212960	0\n"
		"sys	S67	.32	212992	0\n"
		"sys	S67_tmp	.32	213024	0\n"
		"sys	S68	.32	213056	0\n"
		"sys	S68_tmp	.32	213088	0\n"
		"sys	S69	.32	213120	0\n"
		"sys	S69_tmp	.32	213152	0\n"
		"sys	S70	.32	213184	0\n"
		"sys	S70_tmp	.32	213216	0\n"
		"sys	S71	.32	213248	0\n"
		"sys	S71_tmp	.32	213280	0\n"
		"sys	S72	.32	213312	0\n"
		"sys	S72_tmp	.32	213344	0\n"
		"sys	S73	.32	213376	0\n"
		"sys	S73_tmp	.32	213408	0\n"
		"sys	S74	.32	213440	0\n"
		"sys	S74_tmp	.32	213472	0\n"
		"sys	S75	.32	213504	0\n"
		"sys	S75_tmp	.32	213536	0\n"
		"sys	S76	.32	213568	0\n"
		"sys	S76_tmp	.32	213600	0\n"
		"sys	S77	.32	213632	0\n"
		"sys	S77_tmp	.32	213664	0\n"
		"sys	S78	.32	213696	0\n"
		"sys	S78_tmp	.32	213728	0\n"
		"sys	S79	.32	213760	0\n"
		"sys	S79_tmp	.32	213792	0\n"
		"sys	S80	.32	213824	0\n"
		"sys	S80_tmp	.32	213856	0\n"

		"sys	S1:0	.64	213888	0\n"
		"sys	S1:0_tmp	.64	213952	0\n"
		"sys	S3:2	.64	214016	0\n"
		"sys	S3:2_tmp	.64	214080	0\n"
		"sys	S5:4	.64	214144	0\n"
		"sys	S5:4_tmp	.64	214208	0\n"
		"sys	S7:6	.64	214272	0\n"
		"sys	S7:6_tmp	.64	214336	0\n"
		"sys	S9:8	.64	214400	0\n"
		"sys	S9:8_tmp	.64	214464	0\n"
		"sys	S11:10	.64	214528	0\n"
		"sys	S11:10_tmp	.64	214592	0\n"
		"sys	S13:12	.64	214656	0\n"
		"sys	S13:12_tmp	.64	214720	0\n"
		"sys	S15:14	.64	214784	0\n"
		"sys	S15:14_tmp	.64	214848	0\n"
		"sys	S17:16	.64	214912	0\n"
		"sys	S17:16_tmp	.64	214976	0\n"
		"sys	S19:18	.64	215040	0\n"
		"sys	S19:18_tmp	.64	215104	0\n"
		"sys	S21:20	.64	215168	0\n"
		"sys	S21:20_tmp	.64	215232	0\n"
		"sys	S23:22	.64	215296	0\n"
		"sys	S23:22_tmp	.64	215360	0\n"
		"sys	S25:24	.64	215424	0\n"
		"sys	S25:24_tmp	.64	215488	0\n"
		"sys	S27:26	.64	215552	0\n"
		"sys	S27:26_tmp	.64	215616	0\n"
		"sys	S29:28	.64	215680	0\n"
		"sys	S29:28_tmp	.64	215744	0\n"
		"sys	S31:30	.64	215808	0\n"
		"sys	S31:30_tmp	.64	215872	0\n"
		"sys	S33:32	.64	215936	0\n"
		"sys	S33:32_tmp	.64	216000	0\n"
		"sys	S35:34	.64	216064	0\n"
		"sys	S35:34_tmp	.64	216128	0\n"
		"sys	S37:36	.64	216192	0\n"
		"sys	S37:36_tmp	.64	216256	0\n"
		"sys	S39:38	.64	216320	0\n"
		"sys	S39:38_tmp	.64	216384	0\n"
		"sys	S41:40	.64	216448	0\n"
		"sys	S41:40_tmp	.64	216512	0\n"
		"sys	S43:42	.64	216576	0\n"
		"sys	S43:42_tmp	.64	216640	0\n"
		"sys	S45:44	.64	216704	0\n"
		"sys	S45:44_tmp	.64	216768	0\n"
		"sys	S47:46	.64	216832	0\n"
		"sys	S47:46_tmp	.64	216896	0\n"
		"sys	S49:48	.64	216960	0\n"
		"sys	S49:48_tmp	.64	217024	0\n"
		"sys	S51:50	.64	217088	0\n"
		"sys	S51:50_tmp	.64	217152	0\n"
		"sys	S53:52	.64	217216	0\n"
		"sys	S53:52_tmp	.64	217280	0\n"
		"sys	S55:54	.64	217344	0\n"
		"sys	S55:54_tmp	.64	217408	0\n"
		"sys	S57:56	.64	217472	0\n"
		"sys	S57:56_tmp	.64	217536	0\n"
		"sys	S59:58	.64	217600	0\n"
		"sys	S59:58_tmp	.64	217664	0\n"
		"sys	S61:60	.64	217728	0\n"
		"sys	S61:60_tmp	.64	217792	0\n"
		"sys	S63:62	.64	217856	0\n"
		"sys	S63:62_tmp	.64	217920	0\n"
		"sys	S65:64	.64	217984	0\n"
		"sys	S65:64_tmp	.64	218048	0\n"
		"sys	S67:66	.64	218112	0\n"
		"sys	S67:66_tmp	.64	218176	0\n"
		"sys	S69:68	.64	218240	0\n"
		"sys	S69:68_tmp	.64	218304	0\n"
		"sys	S71:70	.64	218368	0\n"
		"sys	S71:70_tmp	.64	218432	0\n"
		"sys	S73:72	.64	218496	0\n"
		"sys	S73:72_tmp	.64	218560	0\n"
		"sys	S75:74	.64	218624	0\n"
		"sys	S75:74_tmp	.64	218688	0\n"
		"sys	S77:76	.64	218752	0\n"
		"sys	S77:76_tmp	.64	218816	0\n"
		"sys	S79:78	.64	218880	0\n"
		"sys	S79:78_tmp	.64	218944	0\n"

		"ctr	p0_written	.1	219008	0\n"
		"ctr	p1_written	.1	219009	0\n"
		"ctr	p2_written	.1	219010	0\n"
		"ctr	p3_written	.1	219011	0\n";
	return strdup(p);
}

RzAnalysisPlugin rz_analysis_plugin_hexagon = {
	.name = "hexagon",
	.desc = "Qualcomm Hexagon (QDSP6) V6",
	.license = "LGPL3",
	.arch = "hexagon",
	.bits = 32,
	.op = hexagon_v6_op,
	.esil = false,
	.get_reg_profile = get_reg_profile,
	.il_config = rz_hexagon_il_config,
};

#ifndef RZ_PLUGIN_INCORE
RZ_API RzLibStruct rizin_plugin = {
	.type = RZ_LIB_TYPE_ANALYSIS,
	.data = &rz_analysis_plugin_hexagon_v6,
	.version = RZ_VERSION
};
#endif
