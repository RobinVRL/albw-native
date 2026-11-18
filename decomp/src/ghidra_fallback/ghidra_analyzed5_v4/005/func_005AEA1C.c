#include "ghidra_types.h"

extern undefined4 *DAT_005aea04;

// USA 005AEA1C <- EU 005AE9F4 (Ghidra, non-matching)
// GLOBAL DAT_005aea04 undefined4 *

void func_005AEA1C(void)

{
  *DAT_005aea04 = 0;
  return;
}

