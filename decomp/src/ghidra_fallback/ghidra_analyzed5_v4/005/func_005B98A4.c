#include "ghidra_types.h"

extern undefined4 *DAT_005b98a0;
extern undefined4 *DAT_005b98a4;

// USA 005B98A4 <- EU 005B987C (Ghidra, non-matching)
// GLOBAL DAT_005b98a0 undefined4 *
// GLOBAL DAT_005b98a4 undefined4 *

void func_005B98A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b98a0;
  *DAT_005b98a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b98a4;
  *DAT_005b98a4 = 0;
  puVar1[1] = 0;
  return;
}

