#include "ghidra_types.h"

extern undefined4 *DAT_005dcf84;
extern undefined4 *DAT_005dcf88;

// USA 005DCF88 <- EU 005DCF60 (Ghidra, non-matching)
// GLOBAL DAT_005dcf84 undefined4 *
// GLOBAL DAT_005dcf88 undefined4 *

void func_005DCF88(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005dcf84;
  *DAT_005dcf84 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005dcf88;
  *DAT_005dcf88 = 0;
  puVar1[1] = 0;
  return;
}

