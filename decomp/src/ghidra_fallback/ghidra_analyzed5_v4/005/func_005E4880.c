#include "ghidra_types.h"

extern undefined4 *DAT_005e487c;
extern undefined4 *DAT_005e4880;

// USA 005E4880 <- EU 005E4858 (Ghidra, non-matching)
// GLOBAL DAT_005e487c undefined4 *
// GLOBAL DAT_005e4880 undefined4 *

void func_005E4880(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e487c;
  *DAT_005e487c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4880;
  *DAT_005e4880 = 0;
  puVar1[1] = 0;
  return;
}

