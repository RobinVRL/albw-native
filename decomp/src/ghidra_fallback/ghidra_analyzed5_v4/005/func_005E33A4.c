#include "ghidra_types.h"

extern undefined4 *DAT_005e33a0;
extern undefined4 *DAT_005e33a4;

// USA 005E33A4 <- EU 005E337C (Ghidra, non-matching)
// GLOBAL DAT_005e33a0 undefined4 *
// GLOBAL DAT_005e33a4 undefined4 *

void func_005E33A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e33a0;
  *DAT_005e33a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e33a4;
  *DAT_005e33a4 = 0;
  puVar1[1] = 0;
  return;
}

