#include "ghidra_types.h"

extern undefined4 *DAT_005eac2c;
extern undefined4 *DAT_005eac30;

// USA 005EAC30 <- EU 005EAC08 (Ghidra, non-matching)
// GLOBAL DAT_005eac2c undefined4 *
// GLOBAL DAT_005eac30 undefined4 *

void func_005EAC30(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eac2c;
  *DAT_005eac2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eac30;
  *DAT_005eac30 = 0;
  puVar1[1] = 0;
  return;
}

