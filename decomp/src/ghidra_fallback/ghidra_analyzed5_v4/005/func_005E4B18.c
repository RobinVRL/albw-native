#include "ghidra_types.h"

extern undefined4 *DAT_005e4b14;
extern undefined4 *DAT_005e4b18;

// USA 005E4B18 <- EU 005E4AF0 (Ghidra, non-matching)
// GLOBAL DAT_005e4b14 undefined4 *
// GLOBAL DAT_005e4b18 undefined4 *

void func_005E4B18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4b14;
  *DAT_005e4b14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4b18;
  *DAT_005e4b18 = 0;
  puVar1[1] = 0;
  return;
}

