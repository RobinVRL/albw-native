#include "ghidra_types.h"

extern undefined4 *DAT_005ebd14;
extern undefined4 *DAT_005ebd18;

// USA 005EBD18 <- EU 005EBCF0 (Ghidra, non-matching)
// GLOBAL DAT_005ebd14 undefined4 *
// GLOBAL DAT_005ebd18 undefined4 *

void func_005EBD18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ebd14;
  *DAT_005ebd14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ebd18;
  *DAT_005ebd18 = 0;
  puVar1[1] = 0;
  return;
}

