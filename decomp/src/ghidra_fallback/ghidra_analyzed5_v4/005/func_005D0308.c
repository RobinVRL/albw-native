#include "ghidra_types.h"

extern undefined4 *DAT_005d0304;
extern undefined4 *DAT_005d0308;

// USA 005D0308 <- EU 005D02E0 (Ghidra, non-matching)
// GLOBAL DAT_005d0304 undefined4 *
// GLOBAL DAT_005d0308 undefined4 *

void func_005D0308(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0304;
  *DAT_005d0304 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0308;
  *DAT_005d0308 = 0;
  puVar1[1] = 0;
  return;
}

