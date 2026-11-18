#include "ghidra_types.h"

extern undefined4 *DAT_005b2388;
extern undefined4 *DAT_005b238c;

// USA 005B238C <- EU 005B2364 (Ghidra, non-matching)
// GLOBAL DAT_005b2388 undefined4 *
// GLOBAL DAT_005b238c undefined4 *

void func_005B238C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b2388;
  *DAT_005b2388 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b238c;
  *DAT_005b238c = 0;
  puVar1[1] = 0;
  return;
}

