#include "ghidra_types.h"

extern undefined4 *DAT_005d0174;
extern undefined4 *DAT_005d0178;

// USA 005D0178 <- EU 005D0150 (Ghidra, non-matching)
// GLOBAL DAT_005d0174 undefined4 *
// GLOBAL DAT_005d0178 undefined4 *

void func_005D0178(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0174;
  *DAT_005d0174 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0178;
  *DAT_005d0178 = 0;
  puVar1[1] = 0;
  return;
}

