#include "ghidra_types.h"

extern undefined4 *DAT_0059f6a0;
extern undefined4 *DAT_0059f6a4;

// USA 0059F6A4 <- EU 0059F67C (Ghidra, non-matching)
// GLOBAL DAT_0059f6a0 undefined4 *
// GLOBAL DAT_0059f6a4 undefined4 *

void func_0059F6A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f6a0;
  *DAT_0059f6a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f6a4;
  *DAT_0059f6a4 = 0;
  puVar1[1] = 0;
  return;
}

