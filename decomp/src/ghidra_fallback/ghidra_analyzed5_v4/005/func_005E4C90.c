#include "ghidra_types.h"

extern undefined4 *DAT_005e4c8c;
extern undefined4 *DAT_005e4c90;

// USA 005E4C90 <- EU 005E4C68 (Ghidra, non-matching)
// GLOBAL DAT_005e4c8c undefined4 *
// GLOBAL DAT_005e4c90 undefined4 *

void func_005E4C90(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4c8c;
  *DAT_005e4c8c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4c90;
  *DAT_005e4c90 = 0;
  puVar1[1] = 0;
  return;
}

