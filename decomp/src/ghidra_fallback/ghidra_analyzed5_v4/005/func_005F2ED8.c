#include "ghidra_types.h"

extern undefined4 *DAT_005f2ed4;
extern undefined4 *DAT_005f2ed8;

// USA 005F2ED8 <- EU 005F2EB0 (Ghidra, non-matching)
// GLOBAL DAT_005f2ed4 undefined4 *
// GLOBAL DAT_005f2ed8 undefined4 *

void func_005F2ED8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2ed4;
  *DAT_005f2ed4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2ed8;
  *DAT_005f2ed8 = 0;
  puVar1[1] = 0;
  return;
}

