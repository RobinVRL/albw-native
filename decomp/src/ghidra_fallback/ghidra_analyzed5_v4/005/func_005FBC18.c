#include "ghidra_types.h"

extern undefined4 *DAT_005fbc14;
extern undefined4 *DAT_005fbc18;

// USA 005FBC18 <- EU 005FBBF0 (Ghidra, non-matching)
// GLOBAL DAT_005fbc14 undefined4 *
// GLOBAL DAT_005fbc18 undefined4 *

void func_005FBC18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fbc14;
  *DAT_005fbc14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fbc18;
  *DAT_005fbc18 = 0;
  puVar1[1] = 0;
  return;
}

