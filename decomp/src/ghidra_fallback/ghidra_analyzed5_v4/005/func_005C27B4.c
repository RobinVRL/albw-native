#include "ghidra_types.h"

extern undefined4 *DAT_005c27b0;
extern undefined4 *DAT_005c27b4;

// USA 005C27B4 <- EU 005C278C (Ghidra, non-matching)
// GLOBAL DAT_005c27b0 undefined4 *
// GLOBAL DAT_005c27b4 undefined4 *

void func_005C27B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c27b0;
  *DAT_005c27b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c27b4;
  *DAT_005c27b4 = 0;
  puVar1[1] = 0;
  return;
}

