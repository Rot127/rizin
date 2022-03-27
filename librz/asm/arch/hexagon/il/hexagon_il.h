#ifndef HEXAGON_IL_H
#define HEXAGON_IL_H

#include "hexagon.h"
#include <rz_il.h>

#define HEX_ADDR_SIZE 39 // 7bit thread ID + 32bit vaddr
#define HEX_ADDR_MEM_BASE 0x0
#define HEX_ARCH_BITS 32

#define HEX_BYTE 8U
#define HEX_HWORD 16U
#define HEX_WORD 32U
#define HEX_DWORD 64U

// HVM Stuff
#define HEX_VMM_ADDR_SPACE_BASE 0xff000000U
#define HEX_VMM_ADDR_SPACE_END  0xffffffffU


typedef struct {
  RzILVal *dest; //< Where the data is written. Register (Global) or memory address (Local pure).
  RzILVal *data; //< What data is written. Some value (Local pure).
} HexILWriteElem;




#endif
