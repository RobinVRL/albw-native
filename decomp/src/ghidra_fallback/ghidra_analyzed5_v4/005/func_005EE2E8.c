#include "ghidra_types.h"

extern undefined4 *DAT_005ee2e4;
extern undefined4 *DAT_005ee2e8;

// USA 005EE2E8 <- EU 005EE2C0 (Ghidra, non-matching)
// GLOBAL DAT_005ee2e4 undefined4 *
// GLOBAL DAT_005ee2e8 undefined4 *

void func_005EE2E8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ee2e4;
  *DAT_005ee2e4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ee2e8;
  *DAT_005ee2e8 = 0;
  puVar1[1] = 0;
  return;
}

