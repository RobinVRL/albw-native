#include "ghidra_types.h"

extern undefined4 *DAT_005edbc4;
extern undefined4 *DAT_005edbc8;

// USA 005EDBC8 <- EU 005EDBA0 (Ghidra, non-matching)
// GLOBAL DAT_005edbc4 undefined4 *
// GLOBAL DAT_005edbc8 undefined4 *

void func_005EDBC8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edbc4;
  *DAT_005edbc4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edbc8;
  *DAT_005edbc8 = 0;
  puVar1[1] = 0;
  return;
}

