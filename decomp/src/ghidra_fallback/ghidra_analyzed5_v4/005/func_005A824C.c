#include "ghidra_types.h"

extern undefined4 *DAT_005a8248;
extern undefined4 *DAT_005a824c;

// USA 005A824C <- EU 005A8224 (Ghidra, non-matching)
// GLOBAL DAT_005a8248 undefined4 *
// GLOBAL DAT_005a824c undefined4 *

void func_005A824C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8248;
  *DAT_005a8248 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a824c;
  *DAT_005a824c = 0;
  puVar1[1] = 0;
  return;
}

