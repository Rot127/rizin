
#ifndef RZ_HEXAGON_IL_OPS_WRITE_H
#define RZ_HEXAGON_IL_OPS_WRITE_H

#include "hexagon.h"
#include "hexagon_il.h"
#include <rz_il.h>
#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_ins_a2_tfr(HexInsn *hi) { // Rd = Rs
  rz_return_val_if_fail(hi, NULL);

  // READ
  char *rd = hi->ops[0].name;
  char *rs = hi->ops[1].name;
  RzILOpPure *op0 = REG(rs);
  // EXEC

  // WRITE
  RzILOpEffect *res = SETG(rd, op0);
  return res;
}

RzILOpEffect *hex_ins_a2_add(HexInsn *hi) { // Rd = add(Rs,Ii)
  // READ
  char *rd = hi->ops[0].name;
  char *rs = hi->ops[1].name;
  st64 ii = hi->ops[2].op.imm;
  RzILOpPure *op0 = REG(rs);
  RzILOpPure *op1 = S32(ii);

  // EXEC
  RzILOpPure *x = ADD(op0, op1);

  // WRITE
  RzILOpEffect *res = SETG(rd, x);

  return res;
}

RzILOpEffect *hex_ins_l2_loadri_io(HexInsn *hi) { // Rd = memw(Rs+Ii)
  // READ
  char *rd = hi->ops[0].name;
  char *rs = hi->ops[1].name;
  st64 ii = hi->ops[2].op.imm;
  RzILOpPure *op0 = REG(rs);
  RzILOpPure *op1 = S32(ii);

  // EXEC
  RzILOpPure *ea = ADD(op0, op1);
  RzILOpPure *ea_w = LOADW(HEX_HWORD, ea);

  //WRITE
  RzILOpEffect *res = SETG(rd, ea_w);

  return res;
}

RzILOpEffect *hex_ins_s2_storerinew_io(HexInsn *hi) { // memw(Rs+Ii) = Nt.new
  // READ
  char *rs = hi->ops[0].name;
  st64 ii = hi->ops[1].op.imm;
  char *nt = hi->ops[2].name;
  RzILOpPure *op0 = REG(rs);
  RzILOpPure *op1 = S32(ii);
  RzILOpPure *op2 = TREG(nt);

  // EXEC
  RzILOpPure *ea = ADD(op0, op1);

  //WRITE
  RzILOpEffect *res = STOREW(ea, op2);
  return res;
}

RzILOpEffect *hex_ins_j2_jumpr(HexInsn *hi) { // jumpr Rs
  return NULL;
}

RzILOpEffect *hex_ins_s2_pstorerdt_io(HexInsn *hi) { // if (Pv) memd(Rs+Ii) = Rtt
  return NULL;
}

RzILOpEffect *hex_ins_a2_tfril(HexInsn *hi) { // Rx.l = Ii
  return NULL;
}

RzILOpEffect *hex_ins_c4_cmpneq(HexInsn *hi) { // Pd = !cmp.eq(Rs,Rt)
  return NULL;
}

RzILOpEffect *hex_ins_v6_veqb(HexInsn *hi) { // Qd = vcmp.eq(Vu.b,Vv.b)
  return NULL;
}


#include <rz_il/rz_il_opbuilder_end.h>

#endif
