#include "ghidra_types.h"

extern undefined4 *DAT_005a3b90;
extern undefined4 *DAT_005a3b94;

// USA 005A3B94 <- EU 005A3B6C (Ghidra, non-matching)
// GLOBAL DAT_005a3b90 undefined4 *
// GLOBAL DAT_005a3b94 undefined4 *

void func_005A3B94(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a3b90;
  *DAT_005a3b90 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3b94;
  *DAT_005a3b94 = 0;
  puVar1[1] = 0;
  return;
}

