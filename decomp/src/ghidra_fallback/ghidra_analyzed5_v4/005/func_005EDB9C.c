#include "ghidra_types.h"

extern undefined4 *DAT_005edb98;
extern undefined4 *DAT_005edb9c;

// USA 005EDB9C <- EU 005EDB74 (Ghidra, non-matching)
// GLOBAL DAT_005edb98 undefined4 *
// GLOBAL DAT_005edb9c undefined4 *

void func_005EDB9C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edb98;
  *DAT_005edb98 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edb9c;
  *DAT_005edb9c = 0;
  puVar1[1] = 0;
  return;
}

