#include "ghidra_types.h"

extern undefined4 *DAT_005af150;
extern undefined4 *DAT_005af154;

// USA 005AF154 <- EU 005AF12C (Ghidra, non-matching)
// GLOBAL DAT_005af150 undefined4 *
// GLOBAL DAT_005af154 undefined4 *

void func_005AF154(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005af150;
  *DAT_005af150 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005af154;
  *DAT_005af154 = 0;
  puVar1[1] = 0;
  return;
}

