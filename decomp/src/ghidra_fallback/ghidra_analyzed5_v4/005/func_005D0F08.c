#include "ghidra_types.h"

extern undefined4 *DAT_005d0f04;
extern undefined4 *DAT_005d0f08;

// USA 005D0F08 <- EU 005D0EE0 (Ghidra, non-matching)
// GLOBAL DAT_005d0f04 undefined4 *
// GLOBAL DAT_005d0f08 undefined4 *

void func_005D0F08(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0f04;
  *DAT_005d0f04 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0f08;
  *DAT_005d0f08 = 0;
  puVar1[1] = 0;
  return;
}

