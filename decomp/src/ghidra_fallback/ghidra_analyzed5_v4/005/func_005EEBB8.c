#include "ghidra_types.h"

extern undefined4 *DAT_005eebb4;
extern undefined4 *DAT_005eebb8;

// USA 005EEBB8 <- EU 005EEB90 (Ghidra, non-matching)
// GLOBAL DAT_005eebb4 undefined4 *
// GLOBAL DAT_005eebb8 undefined4 *

void func_005EEBB8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eebb4;
  *DAT_005eebb4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eebb8;
  *DAT_005eebb8 = 0;
  puVar1[1] = 0;
  return;
}

