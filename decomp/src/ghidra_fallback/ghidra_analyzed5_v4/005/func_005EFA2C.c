#include "ghidra_types.h"

extern undefined4 *DAT_005efa28;
extern undefined4 *DAT_005efa2c;

// USA 005EFA2C <- EU 005EFA04 (Ghidra, non-matching)
// GLOBAL DAT_005efa28 undefined4 *
// GLOBAL DAT_005efa2c undefined4 *

void func_005EFA2C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005efa28;
  *DAT_005efa28 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efa2c;
  *DAT_005efa2c = 0;
  puVar1[1] = 0;
  return;
}

