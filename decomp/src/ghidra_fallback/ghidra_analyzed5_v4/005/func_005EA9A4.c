#include "ghidra_types.h"

extern undefined4 *DAT_005ea9a0;
extern undefined4 *DAT_005ea9a4;

// USA 005EA9A4 <- EU 005EA97C (Ghidra, non-matching)
// GLOBAL DAT_005ea9a0 undefined4 *
// GLOBAL DAT_005ea9a4 undefined4 *

void func_005EA9A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ea9a0;
  *DAT_005ea9a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea9a4;
  *DAT_005ea9a4 = 0;
  puVar1[1] = 0;
  return;
}

