#include "ghidra_types.h"

extern undefined4 *DAT_005e391c;
extern undefined4 *DAT_005e3920;

// USA 005E3920 <- EU 005E38F8 (Ghidra, non-matching)
// GLOBAL DAT_005e391c undefined4 *
// GLOBAL DAT_005e3920 undefined4 *

void func_005E3920(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e391c;
  *DAT_005e391c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e3920;
  *DAT_005e3920 = 0;
  puVar1[1] = 0;
  return;
}

