#include "ghidra_types.h"

extern undefined4 *DAT_005b97f0;
extern undefined4 *DAT_005b97f4;

// USA 005B97F4 <- EU 005B97CC (Ghidra, non-matching)
// GLOBAL DAT_005b97f0 undefined4 *
// GLOBAL DAT_005b97f4 undefined4 *

void func_005B97F4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b97f0;
  *DAT_005b97f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b97f4;
  *DAT_005b97f4 = 0;
  puVar1[1] = 0;
  return;
}

