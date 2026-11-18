#include "ghidra_types.h"

extern undefined4 *DAT_005eca84;
extern undefined4 *DAT_005eca88;

// USA 005ECA88 <- EU 005ECA60 (Ghidra, non-matching)
// GLOBAL DAT_005eca84 undefined4 *
// GLOBAL DAT_005eca88 undefined4 *

void func_005ECA88(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eca84;
  *DAT_005eca84 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eca88;
  *DAT_005eca88 = 0;
  puVar1[1] = 0;
  return;
}

