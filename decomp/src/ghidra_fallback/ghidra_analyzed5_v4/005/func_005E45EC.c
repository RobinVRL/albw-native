#include "ghidra_types.h"

extern undefined4 *DAT_005e45e8;
extern undefined4 *DAT_005e45ec;

// USA 005E45EC <- EU 005E45C4 (Ghidra, non-matching)
// GLOBAL DAT_005e45e8 undefined4 *
// GLOBAL DAT_005e45ec undefined4 *

void func_005E45EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e45e8;
  *DAT_005e45e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e45ec;
  *DAT_005e45ec = 0;
  puVar1[1] = 0;
  return;
}

