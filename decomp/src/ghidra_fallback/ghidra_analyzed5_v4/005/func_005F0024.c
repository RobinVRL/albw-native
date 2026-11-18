#include "ghidra_types.h"

extern undefined4 *DAT_005f0020;
extern undefined4 *DAT_005f0024;

// USA 005F0024 <- EU 005EFFFC (Ghidra, non-matching)
// GLOBAL DAT_005f0020 undefined4 *
// GLOBAL DAT_005f0024 undefined4 *

void func_005F0024(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f0020;
  *DAT_005f0020 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f0024;
  *DAT_005f0024 = 0;
  puVar1[1] = 0;
  return;
}

