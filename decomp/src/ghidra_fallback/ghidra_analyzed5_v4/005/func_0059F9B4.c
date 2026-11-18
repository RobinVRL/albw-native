#include "ghidra_types.h"

extern undefined4 *DAT_0059f9b0;
extern undefined4 *DAT_0059f9b4;

// USA 0059F9B4 <- EU 0059F98C (Ghidra, non-matching)
// GLOBAL DAT_0059f9b0 undefined4 *
// GLOBAL DAT_0059f9b4 undefined4 *

void func_0059F9B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f9b0;
  *DAT_0059f9b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f9b4;
  *DAT_0059f9b4 = 0;
  puVar1[1] = 0;
  return;
}

