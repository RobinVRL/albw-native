#include "ghidra_types.h"

extern undefined4 *DAT_005edf6c;
extern undefined4 *DAT_005edf70;

// USA 005EDF70 <- EU 005EDF48 (Ghidra, non-matching)
// GLOBAL DAT_005edf6c undefined4 *
// GLOBAL DAT_005edf70 undefined4 *

void func_005EDF70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edf6c;
  *DAT_005edf6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edf70;
  *DAT_005edf70 = 0;
  puVar1[1] = 0;
  return;
}

