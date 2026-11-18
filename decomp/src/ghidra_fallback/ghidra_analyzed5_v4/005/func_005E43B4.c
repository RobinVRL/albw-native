#include "ghidra_types.h"

extern undefined4 *DAT_005e43b0;
extern undefined4 *DAT_005e43b4;

// USA 005E43B4 <- EU 005E438C (Ghidra, non-matching)
// GLOBAL DAT_005e43b0 undefined4 *
// GLOBAL DAT_005e43b4 undefined4 *

void func_005E43B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e43b0;
  *DAT_005e43b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e43b4;
  *DAT_005e43b4 = 0;
  puVar1[1] = 0;
  return;
}

