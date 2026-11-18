#include "ghidra_types.h"

extern undefined4 *DAT_005ebaa0;
extern undefined4 *DAT_005ebaa4;

// USA 005EBAA4 <- EU 005EBA7C (Ghidra, non-matching)
// GLOBAL DAT_005ebaa0 undefined4 *
// GLOBAL DAT_005ebaa4 undefined4 *

void func_005EBAA4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ebaa0;
  *DAT_005ebaa0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ebaa4;
  *DAT_005ebaa4 = 0;
  puVar1[1] = 0;
  return;
}

