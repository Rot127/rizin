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

RzILOpEffect *hex_il_op_y5_l2fetch(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ

	// EXEC

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>