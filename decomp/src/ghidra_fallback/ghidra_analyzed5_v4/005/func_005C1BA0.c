#include "ghidra_types.h"

extern undefined4 *DAT_005c1b9c;
extern undefined4 *DAT_005c1ba0;

// USA 005C1BA0 <- EU 005C1B78 (Ghidra, non-matching)
// GLOBAL DAT_005c1b9c undefined4 *
// GLOBAL DAT_005c1ba0 undefined4 *

void func_005C1BA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1b9c;
  *DAT_005c1b9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1ba0;
  *DAT_005c1ba0 = 0;
  puVar1[1] = 0;
  return;
}

