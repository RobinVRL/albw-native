#include "ghidra_types.h"

extern undefined4 *DAT_005eac00;
extern undefined4 *DAT_005eac04;

// USA 005EAC04 <- EU 005EABDC (Ghidra, non-matching)
// GLOBAL DAT_005eac00 undefined4 *
// GLOBAL DAT_005eac04 undefined4 *

void func_005EAC04(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eac00;
  *DAT_005eac00 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eac04;
  *DAT_005eac04 = 0;
  puVar1[1] = 0;
  return;
}

