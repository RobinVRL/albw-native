#include "ghidra_types.h"

extern undefined4 *DAT_005c2564;

// USA 005C2570 <- EU 005C2548 (Ghidra, non-matching)
// GLOBAL DAT_005c2564 undefined4 *

void func_005C2570(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2564;
  *DAT_005c2564 = 0;
  puVar1[1] = puVar1;
  return;
}

