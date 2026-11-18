#include "ghidra_types.h"

extern undefined4 *DAT_005eba48;
extern undefined4 *DAT_005eba4c;

// USA 005EBA4C <- EU 005EBA24 (Ghidra, non-matching)
// GLOBAL DAT_005eba48 undefined4 *
// GLOBAL DAT_005eba4c undefined4 *

void func_005EBA4C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eba48;
  *DAT_005eba48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eba4c;
  *DAT_005eba4c = 0;
  puVar1[1] = 0;
  return;
}

