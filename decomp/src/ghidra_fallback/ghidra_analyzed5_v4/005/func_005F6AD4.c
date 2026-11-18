#include "ghidra_types.h"

extern undefined4 *DAT_005f6ad0;
extern undefined4 *DAT_005f6ad4;

// USA 005F6AD4 <- EU 005F6AAC (Ghidra, non-matching)
// GLOBAL DAT_005f6ad0 undefined4 *
// GLOBAL DAT_005f6ad4 undefined4 *

void func_005F6AD4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f6ad0;
  *DAT_005f6ad0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f6ad4;
  *DAT_005f6ad4 = 0;
  puVar1[1] = 0;
  return;
}

