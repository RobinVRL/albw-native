#include "ghidra_types.h"

extern undefined4 *DAT_005a59dc;
extern undefined4 *DAT_005a59e0;

// USA 005A59E0 <- EU 005A59B8 (Ghidra, non-matching)
// GLOBAL DAT_005a59dc undefined4 *
// GLOBAL DAT_005a59e0 undefined4 *

void func_005A59E0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a59dc;
  *DAT_005a59dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a59e0;
  *DAT_005a59e0 = 0;
  puVar1[1] = 0;
  return;
}

