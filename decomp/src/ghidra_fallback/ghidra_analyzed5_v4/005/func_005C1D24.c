#include "ghidra_types.h"

extern undefined4 *DAT_005c1d20;
extern undefined4 *DAT_005c1d24;

// USA 005C1D24 <- EU 005C1CFC (Ghidra, non-matching)
// GLOBAL DAT_005c1d20 undefined4 *
// GLOBAL DAT_005c1d24 undefined4 *

void func_005C1D24(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1d20;
  *DAT_005c1d20 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1d24;
  *DAT_005c1d24 = 0;
  puVar1[1] = 0;
  return;
}

