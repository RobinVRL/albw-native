#include "ghidra_types.h"

extern undefined4 *DAT_005a38dc;
extern undefined4 *DAT_005a38e0;

// USA 005A38E0 <- EU 005A38B8 (Ghidra, non-matching)
// GLOBAL DAT_005a38dc undefined4 *
// GLOBAL DAT_005a38e0 undefined4 *

void func_005A38E0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a38dc;
  *DAT_005a38dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a38e0;
  *DAT_005a38e0 = 0;
  puVar1[1] = 0;
  return;
}

