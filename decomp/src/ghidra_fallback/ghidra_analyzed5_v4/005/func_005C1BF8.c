#include "ghidra_types.h"

extern undefined4 *DAT_005c1bf4;
extern undefined4 *DAT_005c1bf8;

// USA 005C1BF8 <- EU 005C1BD0 (Ghidra, non-matching)
// GLOBAL DAT_005c1bf4 undefined4 *
// GLOBAL DAT_005c1bf8 undefined4 *

void func_005C1BF8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1bf4;
  *DAT_005c1bf4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1bf8;
  *DAT_005c1bf8 = 0;
  puVar1[1] = 0;
  return;
}

