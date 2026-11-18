#include "ghidra_types.h"

extern undefined4 *DAT_005a8148;

// USA 005A8148 <- EU 005A8120 (Ghidra, non-matching)
// GLOBAL DAT_005a8148 undefined4 *

void func_005A8148(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8148;
  DAT_005a8148[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = 0;
  return;
}

