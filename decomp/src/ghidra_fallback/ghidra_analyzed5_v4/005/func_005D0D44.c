#include "ghidra_types.h"

extern undefined4 *DAT_005d0d40;
extern undefined4 *DAT_005d0d44;

// USA 005D0D44 <- EU 005D0D1C (Ghidra, non-matching)
// GLOBAL DAT_005d0d40 undefined4 *
// GLOBAL DAT_005d0d44 undefined4 *

void func_005D0D44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0d40;
  *DAT_005d0d40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0d44;
  *DAT_005d0d44 = 0;
  puVar1[1] = 0;
  return;
}

