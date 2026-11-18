#include "ghidra_types.h"

extern undefined4 *DAT_005edf40;
extern undefined4 *DAT_005edf44;

// USA 005EDF44 <- EU 005EDF1C (Ghidra, non-matching)
// GLOBAL DAT_005edf40 undefined4 *
// GLOBAL DAT_005edf44 undefined4 *

void func_005EDF44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edf40;
  *DAT_005edf40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edf44;
  *DAT_005edf44 = 0;
  puVar1[1] = 0;
  return;
}

