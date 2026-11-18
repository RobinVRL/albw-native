#include "ghidra_types.h"

extern undefined4 *DAT_005c28d0;
extern undefined4 *DAT_005c28d4;

// USA 005C28D4 <- EU 005C28AC (Ghidra, non-matching)
// GLOBAL DAT_005c28d0 undefined4 *
// GLOBAL DAT_005c28d4 undefined4 *

void func_005C28D4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c28d0;
  *DAT_005c28d0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c28d4;
  *DAT_005c28d4 = 0;
  puVar1[1] = 0;
  return;
}

