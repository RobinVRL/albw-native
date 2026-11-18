#include "ghidra_types.h"

extern undefined4 *DAT_005de8b0;
extern undefined4 *DAT_005de8b4;

// USA 005DE8B4 <- EU 005DE88C (Ghidra, non-matching)
// GLOBAL DAT_005de8b0 undefined4 *
// GLOBAL DAT_005de8b4 undefined4 *

void func_005DE8B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005de8b0;
  *DAT_005de8b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005de8b4;
  *DAT_005de8b4 = 0;
  puVar1[1] = 0;
  return;
}

