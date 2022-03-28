#ifndef HEXAGON_IL_REGS_H
#define HEXAGON_IL_REGS_H

#include <rz_il/rz_il_opbuilder_begin.h>

#define TREG(x) VARG(strcat(x, "_tmp")) // tmp register
#define REG(x)  VARG(x) // register

#include <rz_il/rz_il_opbuilder_end.h>

#endif /* HEXAGON_IL_REGS_H */
