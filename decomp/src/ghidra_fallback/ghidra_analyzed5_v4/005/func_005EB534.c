#include "ghidra_types.h"

extern undefined4 *DAT_005eb530;
extern undefined4 *DAT_005eb534;

// USA 005EB534 <- EU 005EB50C (Ghidra, non-matching)
// GLOBAL DAT_005eb530 undefined4 *
// GLOBAL DAT_005eb534 undefined4 *

void func_005EB534(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb530;
  *DAT_005eb530 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb534;
  *DAT_005eb534 = 0;
  puVar1[1] = 0;
  return;
}

