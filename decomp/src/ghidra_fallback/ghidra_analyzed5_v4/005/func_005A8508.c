#include "ghidra_types.h"

extern undefined4 *DAT_005a84f0;

// USA 005A8508 <- EU 005A84E0 (Ghidra, non-matching)
// GLOBAL DAT_005a84f0 undefined4 *

void func_005A8508(void)

{
  *DAT_005a84f0 = 0;
  return;
}

