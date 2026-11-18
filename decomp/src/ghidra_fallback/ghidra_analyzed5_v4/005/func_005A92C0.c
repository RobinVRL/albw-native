#include "ghidra_types.h"

extern undefined4 *DAT_005a92bc;
extern undefined4 *DAT_005a92c0;

// USA 005A92C0 <- EU 005A9298 (Ghidra, non-matching)
// GLOBAL DAT_005a92bc undefined4 *
// GLOBAL DAT_005a92c0 undefined4 *

void func_005A92C0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a92bc;
  *DAT_005a92bc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a92c0;
  *DAT_005a92c0 = 0;
  puVar1[1] = 0;
  return;
}

