#include "ghidra_types.h"

extern undefined4 *DAT_005edb40;
extern undefined4 *DAT_005edb44;

// USA 005EDB44 <- EU 005EDB1C (Ghidra, non-matching)
// GLOBAL DAT_005edb40 undefined4 *
// GLOBAL DAT_005edb44 undefined4 *

void func_005EDB44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edb40;
  *DAT_005edb40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edb44;
  *DAT_005edb44 = 0;
  puVar1[1] = 0;
  return;
}

