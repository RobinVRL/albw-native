#include "ghidra_types.h"

extern undefined4 *DAT_005ecab0;
extern undefined4 *DAT_005ecab4;

// USA 005ECAB4 <- EU 005ECA8C (Ghidra, non-matching)
// GLOBAL DAT_005ecab0 undefined4 *
// GLOBAL DAT_005ecab4 undefined4 *

void func_005ECAB4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ecab0;
  *DAT_005ecab0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ecab4;
  *DAT_005ecab4 = 0;
  puVar1[1] = 0;
  return;
}

