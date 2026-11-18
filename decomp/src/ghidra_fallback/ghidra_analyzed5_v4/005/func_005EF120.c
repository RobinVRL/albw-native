#include "ghidra_types.h"

extern undefined4 *DAT_005ef11c;
extern undefined4 *DAT_005ef120;

// USA 005EF120 <- EU 005EF0F8 (Ghidra, non-matching)
// GLOBAL DAT_005ef11c undefined4 *
// GLOBAL DAT_005ef120 undefined4 *

void func_005EF120(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ef11c;
  *DAT_005ef11c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef120;
  *DAT_005ef120 = 0;
  puVar1[1] = 0;
  return;
}

