#include "ghidra_types.h"

extern undefined4 *DAT_005a7e94;
extern undefined4 *DAT_005a7e98;

// USA 005A7E98 <- EU 005A7E70 (Ghidra, non-matching)
// GLOBAL DAT_005a7e94 undefined4 *
// GLOBAL DAT_005a7e98 undefined4 *

void func_005A7E98(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7e94;
  *DAT_005a7e94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7e98;
  *DAT_005a7e98 = 0;
  puVar1[1] = 0;
  return;
}

