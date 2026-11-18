#include "ghidra_types.h"

extern undefined4 *DAT_005edc74;
extern undefined4 *DAT_005edc78;

// USA 005EDC78 <- EU 005EDC50 (Ghidra, non-matching)
// GLOBAL DAT_005edc74 undefined4 *
// GLOBAL DAT_005edc78 undefined4 *

void func_005EDC78(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edc74;
  *DAT_005edc74 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edc78;
  *DAT_005edc78 = 0;
  puVar1[1] = 0;
  return;
}

