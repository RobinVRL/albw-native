#include "ghidra_types.h"

extern undefined4 *DAT_005c24d4;
extern undefined4 *DAT_005c24d8;

// USA 005C24D8 <- EU 005C24B0 (Ghidra, non-matching)
// GLOBAL DAT_005c24d4 undefined4 *
// GLOBAL DAT_005c24d8 undefined4 *

void func_005C24D8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c24d4;
  *DAT_005c24d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c24d8;
  *DAT_005c24d8 = 0;
  puVar1[1] = 0;
  return;
}

