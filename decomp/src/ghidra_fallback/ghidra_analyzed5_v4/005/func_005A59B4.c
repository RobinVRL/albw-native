#include "ghidra_types.h"

extern undefined4 *DAT_005a59b0;
extern undefined4 *DAT_005a59b4;

// USA 005A59B4 <- EU 005A598C (Ghidra, non-matching)
// GLOBAL DAT_005a59b0 undefined4 *
// GLOBAL DAT_005a59b4 undefined4 *

void func_005A59B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a59b0;
  *DAT_005a59b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a59b4;
  *DAT_005a59b4 = 0;
  puVar1[1] = 0;
  return;
}

