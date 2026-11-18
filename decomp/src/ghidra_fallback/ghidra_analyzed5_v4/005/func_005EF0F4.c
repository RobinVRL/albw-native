#include "ghidra_types.h"

extern undefined4 *DAT_005ef0f0;
extern undefined4 *DAT_005ef0f4;

// USA 005EF0F4 <- EU 005EF0CC (Ghidra, non-matching)
// GLOBAL DAT_005ef0f0 undefined4 *
// GLOBAL DAT_005ef0f4 undefined4 *

void func_005EF0F4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ef0f0;
  *DAT_005ef0f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef0f4;
  *DAT_005ef0f4 = 0;
  puVar1[1] = 0;
  return;
}

