#include "ghidra_types.h"

extern undefined4 *DAT_005a9290;
extern undefined4 *DAT_005a9294;

// USA 005A9294 <- EU 005A926C (Ghidra, non-matching)
// GLOBAL DAT_005a9290 undefined4 *
// GLOBAL DAT_005a9294 undefined4 *

void func_005A9294(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a9290;
  *DAT_005a9290 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a9294;
  *DAT_005a9294 = 0;
  puVar1[1] = 0;
  return;
}

