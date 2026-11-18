#include "ghidra_types.h"

extern undefined4 *DAT_005f8f14;
extern undefined4 *DAT_005f8f18;

// USA 005F8F18 <- EU 005F8EF0 (Ghidra, non-matching)
// GLOBAL DAT_005f8f14 undefined4 *
// GLOBAL DAT_005f8f18 undefined4 *

void func_005F8F18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f8f14;
  *DAT_005f8f14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8f18;
  *DAT_005f8f18 = 0;
  puVar1[1] = 0;
  return;
}

