#include "ghidra_types.h"

extern undefined4 *DAT_005eaa9c;
extern undefined4 *DAT_005eaaa0;

// USA 005EAAA0 <- EU 005EAA78 (Ghidra, non-matching)
// GLOBAL DAT_005eaa9c undefined4 *
// GLOBAL DAT_005eaaa0 undefined4 *

void func_005EAAA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eaa9c;
  *DAT_005eaa9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eaaa0;
  *DAT_005eaaa0 = 0;
  puVar1[1] = 0;
  return;
}

