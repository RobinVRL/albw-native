#include "ghidra_types.h"

extern undefined4 *DAT_005c2e6c;
extern undefined4 *DAT_005c2e70;

// USA 005C2E70 <- EU 005C2E48 (Ghidra, non-matching)
// GLOBAL DAT_005c2e6c undefined4 *
// GLOBAL DAT_005c2e70 undefined4 *

void func_005C2E70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2e6c;
  *DAT_005c2e6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2e70;
  *DAT_005c2e70 = 0;
  puVar1[1] = 0;
  return;
}

