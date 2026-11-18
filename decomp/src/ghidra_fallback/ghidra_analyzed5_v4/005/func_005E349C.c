#include "ghidra_types.h"

extern undefined4 *DAT_005e3498;
extern undefined4 *DAT_005e349c;

// USA 005E349C <- EU 005E3474 (Ghidra, non-matching)
// GLOBAL DAT_005e3498 undefined4 *
// GLOBAL DAT_005e349c undefined4 *

void func_005E349C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e3498;
  *DAT_005e3498 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e349c;
  *DAT_005e349c = 0;
  puVar1[1] = 0;
  return;
}

