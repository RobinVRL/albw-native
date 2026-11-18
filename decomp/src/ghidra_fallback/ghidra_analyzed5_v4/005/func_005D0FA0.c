#include "ghidra_types.h"

extern undefined4 *DAT_005d0f9c;
extern undefined4 *DAT_005d0fa0;

// USA 005D0FA0 <- EU 005D0F78 (Ghidra, non-matching)
// GLOBAL DAT_005d0f9c undefined4 *
// GLOBAL DAT_005d0fa0 undefined4 *

void func_005D0FA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0f9c;
  *DAT_005d0f9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0fa0;
  *DAT_005d0fa0 = 0;
  puVar1[1] = 0;
  return;
}

