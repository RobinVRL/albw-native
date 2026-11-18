#include "ghidra_types.h"

extern undefined4 *DAT_0059f874;
extern undefined4 *DAT_0059f878;

// USA 0059F878 <- EU 0059F850 (Ghidra, non-matching)
// GLOBAL DAT_0059f874 undefined4 *
// GLOBAL DAT_0059f878 undefined4 *

void func_0059F878(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f874;
  *DAT_0059f874 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f878;
  *DAT_0059f878 = 0;
  puVar1[1] = 0;
  return;
}

