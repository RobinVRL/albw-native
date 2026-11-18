#include "ghidra_types.h"

extern undefined4 *DAT_005f2494;
extern undefined4 *DAT_005f2498;

// USA 005F2498 <- EU 005F2470 (Ghidra, non-matching)
// GLOBAL DAT_005f2494 undefined4 *
// GLOBAL DAT_005f2498 undefined4 *

void func_005F2498(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2494;
  *DAT_005f2494 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2498;
  *DAT_005f2498 = 0;
  puVar1[1] = 0;
  return;
}

