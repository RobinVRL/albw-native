#include "ghidra_types.h"

extern undefined4 *DAT_005ee310;
extern undefined4 *DAT_005ee314;

// USA 005EE314 <- EU 005EE2EC (Ghidra, non-matching)
// GLOBAL DAT_005ee310 undefined4 *
// GLOBAL DAT_005ee314 undefined4 *

void func_005EE314(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ee310;
  *DAT_005ee310 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ee314;
  *DAT_005ee314 = 0;
  puVar1[1] = 0;
  return;
}

