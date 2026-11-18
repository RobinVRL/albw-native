#include "ghidra_types.h"

extern undefined4 *DAT_0059f8d8;
extern undefined4 *DAT_0059f8dc;

// USA 0059F8DC <- EU 0059F8B4 (Ghidra, non-matching)
// GLOBAL DAT_0059f8d8 undefined4 *
// GLOBAL DAT_0059f8dc undefined4 *

void func_0059F8DC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f8d8;
  *DAT_0059f8d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f8dc;
  *DAT_0059f8dc = 0;
  puVar1[1] = 0;
  return;
}

