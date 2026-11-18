#include "ghidra_types.h"

extern undefined4 *DAT_005d0c84;
extern undefined4 *DAT_005d0c88;

// USA 005D0C88 <- EU 005D0C60 (Ghidra, non-matching)
// GLOBAL DAT_005d0c84 undefined4 *
// GLOBAL DAT_005d0c88 undefined4 *

void func_005D0C88(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0c84;
  *DAT_005d0c84 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0c88;
  *DAT_005d0c88 = 0;
  puVar1[1] = 0;
  return;
}

