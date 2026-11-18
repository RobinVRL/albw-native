#include "ghidra_types.h"

extern undefined4 *DAT_005f68f0;
extern undefined4 *DAT_005f68f4;

// USA 005F68F4 <- EU 005F68CC (Ghidra, non-matching)
// GLOBAL DAT_005f68f0 undefined4 *
// GLOBAL DAT_005f68f4 undefined4 *

void func_005F68F4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f68f0;
  *DAT_005f68f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f68f4;
  *DAT_005f68f4 = 0;
  puVar1[1] = 0;
  return;
}

