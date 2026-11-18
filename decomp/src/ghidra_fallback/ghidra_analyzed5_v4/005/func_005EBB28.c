#include "ghidra_types.h"

extern undefined4 *DAT_005ebb24;
extern undefined4 *DAT_005ebb28;

// USA 005EBB28 <- EU 005EBB00 (Ghidra, non-matching)
// GLOBAL DAT_005ebb24 undefined4 *
// GLOBAL DAT_005ebb28 undefined4 *

void func_005EBB28(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ebb24;
  *DAT_005ebb24 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ebb28;
  *DAT_005ebb28 = 0;
  puVar1[1] = 0;
  return;
}

