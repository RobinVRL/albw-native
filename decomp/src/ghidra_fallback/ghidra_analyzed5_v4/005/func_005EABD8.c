#include "ghidra_types.h"

extern undefined4 *DAT_005eabd4;
extern undefined4 *DAT_005eabd8;

// USA 005EABD8 <- EU 005EABB0 (Ghidra, non-matching)
// GLOBAL DAT_005eabd4 undefined4 *
// GLOBAL DAT_005eabd8 undefined4 *

void func_005EABD8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eabd4;
  *DAT_005eabd4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eabd8;
  *DAT_005eabd8 = 0;
  puVar1[1] = 0;
  return;
}

