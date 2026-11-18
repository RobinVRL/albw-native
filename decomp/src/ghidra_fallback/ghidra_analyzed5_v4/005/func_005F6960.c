#include "ghidra_types.h"

extern undefined4 *DAT_005f695c;
extern undefined4 *DAT_005f6960;

// USA 005F6960 <- EU 005F6938 (Ghidra, non-matching)
// GLOBAL DAT_005f695c undefined4 *
// GLOBAL DAT_005f6960 undefined4 *

void func_005F6960(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f695c;
  *DAT_005f695c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f6960;
  *DAT_005f6960 = 0;
  puVar1[1] = 0;
  return;
}

