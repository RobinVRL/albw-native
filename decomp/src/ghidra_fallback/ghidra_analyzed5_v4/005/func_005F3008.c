#include "ghidra_types.h"

extern undefined4 *DAT_005f3004;
extern undefined4 *DAT_005f3008;

// USA 005F3008 <- EU 005F2FE0 (Ghidra, non-matching)
// GLOBAL DAT_005f3004 undefined4 *
// GLOBAL DAT_005f3008 undefined4 *

void func_005F3008(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f3004;
  *DAT_005f3004 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f3008;
  *DAT_005f3008 = 0;
  puVar1[1] = 0;
  return;
}

