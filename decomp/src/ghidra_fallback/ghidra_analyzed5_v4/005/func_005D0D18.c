#include "ghidra_types.h"

extern undefined4 *DAT_005d0d14;
extern undefined4 *DAT_005d0d18;

// USA 005D0D18 <- EU 005D0CF0 (Ghidra, non-matching)
// GLOBAL DAT_005d0d14 undefined4 *
// GLOBAL DAT_005d0d18 undefined4 *

void func_005D0D18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0d14;
  *DAT_005d0d14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0d18;
  *DAT_005d0d18 = 0;
  puVar1[1] = 0;
  return;
}

