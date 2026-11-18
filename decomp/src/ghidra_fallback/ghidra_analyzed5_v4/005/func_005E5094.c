#include "ghidra_types.h"

extern undefined4 *DAT_005e5090;
extern undefined4 *DAT_005e5094;

// USA 005E5094 <- EU 005E506C (Ghidra, non-matching)
// GLOBAL DAT_005e5090 undefined4 *
// GLOBAL DAT_005e5094 undefined4 *

void func_005E5094(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e5090;
  *DAT_005e5090 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e5094;
  *DAT_005e5094 = 0;
  puVar1[1] = 0;
  return;
}

