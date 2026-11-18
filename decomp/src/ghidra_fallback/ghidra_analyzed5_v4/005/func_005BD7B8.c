#include "ghidra_types.h"

extern undefined4 *DAT_005bd7b4;
extern undefined4 *DAT_005bd7b8;

// USA 005BD7B8 <- EU 005BD790 (Ghidra, non-matching)
// GLOBAL DAT_005bd7b4 undefined4 *
// GLOBAL DAT_005bd7b8 undefined4 *

void func_005BD7B8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bd7b4;
  *DAT_005bd7b4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bd7b8;
  *DAT_005bd7b8 = 0;
  puVar1[1] = 0;
  return;
}

