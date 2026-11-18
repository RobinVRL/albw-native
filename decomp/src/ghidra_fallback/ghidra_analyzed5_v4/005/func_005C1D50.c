#include "ghidra_types.h"

extern undefined4 *DAT_005c1d4c;
extern undefined4 *DAT_005c1d50;

// USA 005C1D50 <- EU 005C1D28 (Ghidra, non-matching)
// GLOBAL DAT_005c1d4c undefined4 *
// GLOBAL DAT_005c1d50 undefined4 *

void func_005C1D50(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1d4c;
  *DAT_005c1d4c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1d50;
  *DAT_005c1d50 = 0;
  puVar1[1] = 0;
  return;
}

