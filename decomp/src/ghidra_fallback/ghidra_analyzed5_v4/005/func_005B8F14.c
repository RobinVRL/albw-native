#include "ghidra_types.h"

extern undefined4 *DAT_005b8f10;
extern undefined4 *DAT_005b8f14;

// USA 005B8F14 <- EU 005B8EEC (Ghidra, non-matching)
// GLOBAL DAT_005b8f10 undefined4 *
// GLOBAL DAT_005b8f14 undefined4 *

void func_005B8F14(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8f10;
  *DAT_005b8f10 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8f14;
  *DAT_005b8f14 = 0;
  puVar1[1] = 0;
  return;
}

