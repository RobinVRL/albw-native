#include "ghidra_types.h"

extern undefined4 *DAT_005e34c4;
extern undefined4 *DAT_005e34c8;

// USA 005E34C8 <- EU 005E34A0 (Ghidra, non-matching)
// GLOBAL DAT_005e34c4 undefined4 *
// GLOBAL DAT_005e34c8 undefined4 *

void func_005E34C8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e34c4;
  *DAT_005e34c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e34c8;
  *DAT_005e34c8 = 0;
  puVar1[1] = 0;
  return;
}

