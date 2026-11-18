#include "ghidra_types.h"

extern undefined4 *DAT_005e4bc4;
extern undefined4 *DAT_005e4bc8;

// USA 005E4BC8 <- EU 005E4BA0 (Ghidra, non-matching)
// GLOBAL DAT_005e4bc4 undefined4 *
// GLOBAL DAT_005e4bc8 undefined4 *

void func_005E4BC8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4bc4;
  *DAT_005e4bc4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4bc8;
  *DAT_005e4bc8 = 0;
  puVar1[1] = 0;
  return;
}

