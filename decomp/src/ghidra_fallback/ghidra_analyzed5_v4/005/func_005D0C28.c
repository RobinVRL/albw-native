#include "ghidra_types.h"

extern undefined4 *DAT_005d0c30;

// USA 005D0C28 <- EU 005D0C00 (Ghidra, non-matching)
// GLOBAL DAT_005d0c30 undefined4 *

void func_005D0C28(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0c30;
  DAT_005d0c30[10] = *DAT_005d0c30;
  puVar1[0x10] = puVar1[2];
  puVar1[0x18] = puVar1[1];
  puVar1[0x1a] = puVar1[3];
  return;
}

