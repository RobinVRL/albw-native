#include "ghidra_types.h"

extern undefined4 *DAT_005edf98;
extern undefined4 *DAT_005edf9c;

// USA 005EDF9C <- EU 005EDF74 (Ghidra, non-matching)
// GLOBAL DAT_005edf98 undefined4 *
// GLOBAL DAT_005edf9c undefined4 *

void func_005EDF9C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edf98;
  *DAT_005edf98 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edf9c;
  *DAT_005edf9c = 0;
  puVar1[1] = 0;
  return;
}

