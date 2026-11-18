#include "ghidra_types.h"

extern undefined4 *DAT_005a81c4;
extern undefined4 *DAT_005a81c8;

// USA 005A81C8 <- EU 005A81A0 (Ghidra, non-matching)
// GLOBAL DAT_005a81c4 undefined4 *
// GLOBAL DAT_005a81c8 undefined4 *

void func_005A81C8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a81c4;
  *DAT_005a81c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a81c8;
  *DAT_005a81c8 = 0;
  puVar1[1] = 0;
  return;
}

