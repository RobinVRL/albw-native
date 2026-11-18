#include "ghidra_types.h"

extern undefined4 *DAT_005fdbe4;
extern undefined4 *DAT_005fdbe8;

// USA 005FDBE8 <- EU 005FDBC0 (Ghidra, non-matching)
// GLOBAL DAT_005fdbe4 undefined4 *
// GLOBAL DAT_005fdbe8 undefined4 *

void func_005FDBE8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fdbe4;
  *DAT_005fdbe4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fdbe8;
  *DAT_005fdbe8 = 0;
  puVar1[1] = 0;
  return;
}

