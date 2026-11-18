#include "ghidra_types.h"

extern undefined4 *DAT_005aed20;

// USA 005AED2C <- EU 005AED04 (Ghidra, non-matching)
// GLOBAL DAT_005aed20 undefined4 *

void func_005AED2C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_005aed20;
  puVar2 = DAT_005aed20 + 1;
  DAT_005aed20[1] = puVar2;
  *puVar1 = 0;
  puVar1[2] = puVar2;
  return;
}

