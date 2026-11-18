#include "ghidra_types.h"

extern undefined4 *DAT_005bd6d8;
extern undefined4 *DAT_005bd6dc;

// USA 005BD6DC <- EU 005BD6B4 (Ghidra, non-matching)
// GLOBAL DAT_005bd6d8 undefined4 *
// GLOBAL DAT_005bd6dc undefined4 *

void func_005BD6DC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bd6d8;
  *DAT_005bd6d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bd6dc;
  *DAT_005bd6dc = 0;
  puVar1[1] = 0;
  return;
}

