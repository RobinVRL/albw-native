#include "ghidra_types.h"

extern undefined4 *DAT_005e4b40;
extern undefined4 *DAT_005e4b44;

// USA 005E4B44 <- EU 005E4B1C (Ghidra, non-matching)
// GLOBAL DAT_005e4b40 undefined4 *
// GLOBAL DAT_005e4b44 undefined4 *

void func_005E4B44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4b40;
  *DAT_005e4b40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4b44;
  *DAT_005e4b44 = 0;
  puVar1[1] = 0;
  return;
}

