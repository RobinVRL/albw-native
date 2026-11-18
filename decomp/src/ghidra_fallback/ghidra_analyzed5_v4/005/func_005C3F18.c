#include "ghidra_types.h"

extern undefined4 *DAT_005c3f14;
extern undefined4 *DAT_005c3f18;

// USA 005C3F18 <- EU 005C3EF0 (Ghidra, non-matching)
// GLOBAL DAT_005c3f14 undefined4 *
// GLOBAL DAT_005c3f18 undefined4 *

void func_005C3F18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c3f14;
  *DAT_005c3f14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c3f18;
  *DAT_005c3f18 = 0;
  puVar1[1] = 0;
  return;
}

