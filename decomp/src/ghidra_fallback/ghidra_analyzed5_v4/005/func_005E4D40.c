#include "ghidra_types.h"

extern undefined4 *DAT_005e4d3c;
extern undefined4 *DAT_005e4d40;

// USA 005E4D40 <- EU 005E4D18 (Ghidra, non-matching)
// GLOBAL DAT_005e4d3c undefined4 *
// GLOBAL DAT_005e4d40 undefined4 *

void func_005E4D40(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4d3c;
  *DAT_005e4d3c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4d40;
  *DAT_005e4d40 = 0;
  puVar1[1] = 0;
  return;
}

