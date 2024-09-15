// SPDX-FileCopyrightText: 2018 Emmanuel Vadot <manu@bidouilliste.com>
// SPDX-License-Identifier: LGPL-3.0-only

// NGREG 34
return rz_str_dup(
	"=PC	pc\n"
	"=BP	x29\n"
	"=SP	sp\n"
	"=SN	x8\n"
	"=A0	x0\n"
	"=A1	x1\n"
	"=A2	x2\n"
	"=A3	x3\n"
	"=ZF	zf\n"
	"=SF	nf\n"
	"=OF	vf\n"
	"=CF	cf\n"
	"gpr	x0	.64	0	0\n"
	"gpr	x1	.64	8	0\n"
	"gpr	x2	.64	16	0\n"
	"gpr	x3	.64	24	0\n"
	"gpr	x4	.64	32	0\n"
	"gpr	x5	.64	40	0\n"
	"gpr	x6	.64	48	0\n"
	"gpr	x7	.64	56	0\n"
	"gpr	x8	.64	64	0\n"
	"gpr	x9	.64	72	0\n"
	"gpr	x10	.64	80	0\n"
	"gpr	x11	.64	88	0\n"
	"gpr	x12	.64	96	0\n"
	"gpr	x13	.64	104	0\n"
	"gpr	x14	.64	112	0\n"
	"gpr	x15	.64	120	0\n"
	"gpr	x16	.64	128	0\n"
	"gpr	x17	.64	136	0\n"
	"gpr	x18	.64	144	0\n"
	"gpr	x19	.64	152	0\n"
	"gpr	x20	.64	160	0\n"
	"gpr	x21	.64	168	0\n"
	"gpr	x22	.64	176	0\n"
	"gpr	x23	.64	184	0\n"
	"gpr	x24	.64	192	0\n"
	"gpr	x25	.64	200	0\n"
	"gpr	x26	.64	208	0\n"
	"gpr	x27	.64	216	0\n"
	"gpr	x28	.64	224	0\n"
	"gpr	x29	.64	232	0\n"
	"gpr	x30	.64	240	0\n"
	"gpr	sp	.64	248	0\n"
	"gpr	pc	.64	256	0\n"

	// 8 bit

	"gpr	b0	.8	0	0\n"
	"gpr	b1	.8	8	0\n"
	"gpr	b2	.8	16	0\n"
	"gpr	b3	.8	24	0\n"
	"gpr	b4	.8	32	0\n"
	"gpr	b5	.8	40	0\n"
	"gpr	b6	.8	48	0\n"
	"gpr	b7	.8	56	0\n"
	"gpr	b8	.8	64	0\n"
	"gpr	b9	.8	72	0\n"
	"gpr	b10	.8	80	0\n"
	"gpr	b11	.8	88	0\n"
	"gpr	b12	.8	96	0\n"
	"gpr	b13	.8	104	0\n"
	"gpr	b14	.8	112	0\n"
	"gpr	b15	.8	120	0\n"
	"gpr	b16	.8	128	0\n"
	"gpr	b17	.8	136	0\n"
	"gpr	b18	.8	144	0\n"
	"gpr	b19	.8	152	0\n"
	"gpr	b20	.8	160	0\n"
	"gpr	b21	.8	168	0\n"
	"gpr	b22	.8	176	0\n"
	"gpr	b23	.8	184	0\n"
	"gpr	b24	.8	192	0\n"
	"gpr	b25	.8	200	0\n"
	"gpr	b26	.8	208	0\n"
	"gpr	b27	.8	216	0\n"
	"gpr	b28	.8	224	0\n"
	"gpr	b29	.8	232	0\n"
	"gpr	b30	.8	240	0\n"
	"gpr	bsp	.8	248	0\n"

	// 16 bit

	"gpr	h0	.16	0	0\n"
	"gpr	h1	.16	8	0\n"
	"gpr	h2	.16	16	0\n"
	"gpr	h3	.16	24	0\n"
	"gpr	h4	.16	32	0\n"
	"gpr	h5	.16	40	0\n"
	"gpr	h6	.16	48	0\n"
	"gpr	h7	.16	56	0\n"
	"gpr	h8	.16	64	0\n"
	"gpr	h9	.16	72	0\n"
	"gpr	h10	.16	80	0\n"
	"gpr	h11	.16	88	0\n"
	"gpr	h12	.16	96	0\n"
	"gpr	h13	.16	104	0\n"
	"gpr	h14	.16	112	0\n"
	"gpr	h15	.16	120	0\n"
	"gpr	h16	.16	128	0\n"
	"gpr	h17	.16	136	0\n"
	"gpr	h18	.16	144	0\n"
	"gpr	h19	.16	152	0\n"
	"gpr	h20	.16	160	0\n"
	"gpr	h21	.16	168	0\n"
	"gpr	h22	.16	176	0\n"
	"gpr	h23	.16	184	0\n"
	"gpr	h24	.16	192	0\n"
	"gpr	h25	.16	200	0\n"
	"gpr	h26	.16	208	0\n"
	"gpr	h27	.16	216	0\n"
	"gpr	h28	.16	224	0\n"
	"gpr	h29	.16	232	0\n"
	"gpr	h30	.16	240	0\n"

	// 32 bit

	"gpr	w0	.32	0	0\n"
	"gpr	w1	.32	8	0\n"
	"gpr	w2	.32	16	0\n"
	"gpr	w3	.32	24	0\n"
	"gpr	w4	.32	32	0\n"
	"gpr	w5	.32	40	0\n"
	"gpr	w6	.32	48	0\n"
	"gpr	w7	.32	56	0\n"
	"gpr	w8	.32	64	0\n"
	"gpr	w9	.32	72	0\n"
	"gpr	w10	.32	80	0\n"
	"gpr	w11	.32	88	0\n"
	"gpr	w12	.32	96	0\n"
	"gpr	w13	.32	104	0\n"
	"gpr	w14	.32	112	0\n"
	"gpr	w15	.32	120	0\n"
	"gpr	w16	.32	128	0\n"
	"gpr	w17	.32	136	0\n"
	"gpr	w18	.32	144	0\n"
	"gpr	w19	.32	152	0\n"
	"gpr	w20	.32	160	0\n"
	"gpr	w21	.32	168	0\n"
	"gpr	w22	.32	176	0\n"
	"gpr	w23	.32	184	0\n"
	"gpr	w24	.32	192	0\n"
	"gpr	w25	.32	200	0\n"
	"gpr	w26	.32	208	0\n"
	"gpr	w27	.32	216	0\n"
	"gpr	w28	.32	224	0\n"
	"gpr	w29	.32	232	0\n"
	"gpr	w30	.32	240	0\n"
	"gpr	wsp	.32	248	0\n"
	"gpr	wzr	.32	272	0\n"

	"gpr	d0	.64	0	0\n"
	"gpr	d1	.64	8	0\n"
	"gpr	d2	.64	16	0\n"
	"gpr	d3	.64	24	0\n"
	"gpr	d4	.64	32	0\n"
	"gpr	d5	.64	40	0\n"
	"gpr	d6	.64	48	0\n"
	"gpr	d7	.64	56	0\n"
	"gpr	d8	.64	64	0\n"
	"gpr	d9	.64	72	0\n"
	"gpr	d10	.64	80	0\n"
	"gpr	d11	.64	88	0\n"
	"gpr	d12	.64	96	0\n"
	"gpr	d13	.64	104	0\n"
	"gpr	d14	.64	112	0\n"
	"gpr	d15	.64	120	0\n"
	"gpr	d16	.64	128	0\n"
	"gpr	d17	.64	136	0\n"
	"gpr	d18	.64	144	0\n"
	"gpr	d19	.64	152	0\n"
	"gpr	d20	.64	160	0\n"
	"gpr	d21	.64	168	0\n"
	"gpr	d22	.64	176	0\n"
	"gpr	d23	.64	184	0\n"
	"gpr	d24	.64	192	0\n"
	"gpr	d25	.64	200	0\n"
	"gpr	d26	.64	208	0\n"
	"gpr	d27	.64	216	0\n"
	"gpr	d28	.64	224	0\n"
	"gpr	d29	.64	232	0\n"
	"gpr	d30	.64	240	0\n"
	"gpr	dsp	.64	248	0\n"

	"gpr	pstate	.64	264	0\n"
	"flg	fstate	.64	264	0   _____tfiae_____________j__qvczn\n"
	"flg	vf	.1	264.28	0	overflow\n"
	"flg	cf	.1	264.29	0	carry\n"
	"flg	zf	.1	264.30	0	zero\n"
	"flg	nf	.1	264.31	0	sign\n");
