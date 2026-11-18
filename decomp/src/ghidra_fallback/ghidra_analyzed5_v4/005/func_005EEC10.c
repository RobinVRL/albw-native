#include "ghidra_types.h"

extern undefined4 *DAT_005eec0c;
extern undefined4 *DAT_005eec10;

// USA 005EEC10 <- EU 005EEBE8 (Ghidra, non-matching)
// GLOBAL DAT_005eec0c undefined4 *
// GLOBAL DAT_005eec10 undefined4 *

void func_005EEC10(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eec0c;
  *DAT_005eec0c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eec10;
  *DAT_005eec10 = 0;
  puVar1[1] = 0;
  return;
}

