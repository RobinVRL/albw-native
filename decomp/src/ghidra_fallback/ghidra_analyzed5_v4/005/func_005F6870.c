#include "ghidra_types.h"

extern undefined4 *DAT_005f686c;
extern undefined4 *DAT_005f6870;

// USA 005F6870 <- EU 005F6848 (Ghidra, non-matching)
// GLOBAL DAT_005f686c undefined4 *
// GLOBAL DAT_005f6870 undefined4 *

void func_005F6870(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f686c;
  *DAT_005f686c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f6870;
  *DAT_005f6870 = 0;
  puVar1[1] = 0;
  return;
}

