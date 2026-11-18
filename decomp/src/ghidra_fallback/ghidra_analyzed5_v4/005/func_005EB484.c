#include "ghidra_types.h"

extern undefined4 *DAT_005eb480;
extern undefined4 *DAT_005eb484;

// USA 005EB484 <- EU 005EB45C (Ghidra, non-matching)
// GLOBAL DAT_005eb480 undefined4 *
// GLOBAL DAT_005eb484 undefined4 *

void func_005EB484(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb480;
  *DAT_005eb480 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb484;
  *DAT_005eb484 = 0;
  puVar1[1] = 0;
  return;
}

