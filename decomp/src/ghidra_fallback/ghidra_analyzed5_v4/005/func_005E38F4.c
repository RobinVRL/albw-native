#include "ghidra_types.h"

extern undefined4 *DAT_005e38f0;
extern undefined4 *DAT_005e38f4;

// USA 005E38F4 <- EU 005E38CC (Ghidra, non-matching)
// GLOBAL DAT_005e38f0 undefined4 *
// GLOBAL DAT_005e38f4 undefined4 *

void func_005E38F4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e38f0;
  *DAT_005e38f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e38f4;
  *DAT_005e38f4 = 0;
  puVar1[1] = 0;
  return;
}

