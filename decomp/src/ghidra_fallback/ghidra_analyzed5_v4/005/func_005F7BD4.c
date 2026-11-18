#include "ghidra_types.h"

extern undefined4 *DAT_005f7bd0;
extern undefined4 *DAT_005f7bd4;

// USA 005F7BD4 <- EU 005F7BAC (Ghidra, non-matching)
// GLOBAL DAT_005f7bd0 undefined4 *
// GLOBAL DAT_005f7bd4 undefined4 *

void func_005F7BD4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f7bd0;
  *DAT_005f7bd0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7bd4;
  *DAT_005f7bd4 = 0;
  puVar1[1] = 0;
  return;
}

