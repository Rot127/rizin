#ifndef HEXAGON_IL_H
#define HEXAGON_IL_H

#include "hexagon.h"
#include <rz_il.h>

typedef struct {
  RzILVal *dest; //< Where the data is written. Register (Global) or memory address (Local pure).
  RzILVal *data; //< What data is written. Some value (Local pure).
} HexILWriteElem;




#endif
