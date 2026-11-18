#include "ghidra_types.h"

extern undefined4 *DAT_005a3724;
extern undefined4 *DAT_005a3728;

// USA 005A3728 <- EU 005A3700 (Ghidra, non-matching)
// GLOBAL DAT_005a3724 undefined4 *
// GLOBAL DAT_005a3728 undefined4 *

void func_005A3728(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a3724;
  *DAT_005a3724 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3728;
  *DAT_005a3728 = 0;
  puVar1[1] = 0;
  return;
}

