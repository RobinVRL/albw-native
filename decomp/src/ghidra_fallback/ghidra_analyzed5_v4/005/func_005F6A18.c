#include "ghidra_types.h"

extern undefined4 *DAT_005f6a14;
extern undefined4 *DAT_005f6a18;

// USA 005F6A18 <- EU 005F69F0 (Ghidra, non-matching)
// GLOBAL DAT_005f6a14 undefined4 *
// GLOBAL DAT_005f6a18 undefined4 *

void func_005F6A18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f6a14;
  *DAT_005f6a14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f6a18;
  *DAT_005f6a18 = 0;
  puVar1[1] = 0;
  return;
}

