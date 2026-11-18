#include "ghidra_types.h"

extern undefined4 *DAT_005eff44;
extern undefined4 *DAT_005eff48;

// USA 005EFF48 <- EU 005EFF20 (Ghidra, non-matching)
// GLOBAL DAT_005eff44 undefined4 *
// GLOBAL DAT_005eff48 undefined4 *

void func_005EFF48(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eff44;
  *DAT_005eff44 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eff48;
  *DAT_005eff48 = 0;
  puVar1[1] = 0;
  return;
}

