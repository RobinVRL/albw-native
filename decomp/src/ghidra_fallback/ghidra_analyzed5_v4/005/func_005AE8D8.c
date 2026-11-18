#include "ghidra_types.h"

extern undefined4 *DAT_005ae8d4;
extern undefined4 *DAT_005ae8d8;

// USA 005AE8D8 <- EU 005AE8B0 (Ghidra, non-matching)
// GLOBAL DAT_005ae8d4 undefined4 *
// GLOBAL DAT_005ae8d8 undefined4 *

void func_005AE8D8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae8d4;
  *DAT_005ae8d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae8d8;
  *DAT_005ae8d8 = 0;
  puVar1[1] = 0;
  return;
}

