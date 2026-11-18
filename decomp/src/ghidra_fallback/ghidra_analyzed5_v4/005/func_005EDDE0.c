#include "ghidra_types.h"

extern undefined4 *DAT_005edddc;
extern undefined4 *DAT_005edde0;

// USA 005EDDE0 <- EU 005EDDB8 (Ghidra, non-matching)
// GLOBAL DAT_005edddc undefined4 *
// GLOBAL DAT_005edde0 undefined4 *

void func_005EDDE0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edddc;
  *DAT_005edddc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edde0;
  *DAT_005edde0 = 0;
  puVar1[1] = 0;
  return;
}

