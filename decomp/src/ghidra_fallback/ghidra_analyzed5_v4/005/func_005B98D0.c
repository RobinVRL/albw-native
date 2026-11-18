#include "ghidra_types.h"

extern undefined4 *DAT_005b98cc;
extern undefined4 *DAT_005b98d0;

// USA 005B98D0 <- EU 005B98A8 (Ghidra, non-matching)
// GLOBAL DAT_005b98cc undefined4 *
// GLOBAL DAT_005b98d0 undefined4 *

void func_005B98D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b98cc;
  *DAT_005b98cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b98d0;
  *DAT_005b98d0 = 0;
  puVar1[1] = 0;
  return;
}

