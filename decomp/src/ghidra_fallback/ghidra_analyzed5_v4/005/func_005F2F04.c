#include "ghidra_types.h"

extern undefined4 *DAT_005f2f00;
extern undefined4 *DAT_005f2f04;

// USA 005F2F04 <- EU 005F2EDC (Ghidra, non-matching)
// GLOBAL DAT_005f2f00 undefined4 *
// GLOBAL DAT_005f2f04 undefined4 *

void func_005F2F04(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2f00;
  *DAT_005f2f00 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2f04;
  *DAT_005f2f04 = 0;
  puVar1[1] = 0;
  return;
}

