#include "ghidra_types.h"

extern undefined4 *DAT_005a21d4;
extern undefined4 *DAT_005a21d8;

// USA 005A21D8 <- EU 005A21B0 (Ghidra, non-matching)
// GLOBAL DAT_005a21d4 undefined4 *
// GLOBAL DAT_005a21d8 undefined4 *

void func_005A21D8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a21d4;
  *DAT_005a21d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a21d8;
  *DAT_005a21d8 = 0;
  puVar1[1] = 0;
  return;
}

