#include "ghidra_types.h"

extern undefined4 *DAT_0059f7b4;
extern undefined4 *DAT_0059f7b8;

// USA 0059F7B8 <- EU 0059F790 (Ghidra, non-matching)
// GLOBAL DAT_0059f7b4 undefined4 *
// GLOBAL DAT_0059f7b8 undefined4 *

void func_0059F7B8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f7b4;
  *DAT_0059f7b4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f7b8;
  *DAT_0059f7b8 = 0;
  puVar1[1] = 0;
  return;
}

