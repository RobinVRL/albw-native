#include "ghidra_types.h"

extern undefined4 *DAT_005f3030;
extern undefined4 *DAT_005f3034;

// USA 005F3034 <- EU 005F300C (Ghidra, non-matching)
// GLOBAL DAT_005f3030 undefined4 *
// GLOBAL DAT_005f3034 undefined4 *

void func_005F3034(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f3030;
  *DAT_005f3030 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f3034;
  *DAT_005f3034 = 0;
  puVar1[1] = 0;
  return;
}

