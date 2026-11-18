#include "ghidra_types.h"

extern undefined4 *DAT_005b9410;

// USA 005B9428 <- EU 005B9400 (Ghidra, non-matching)
// GLOBAL DAT_005b9410 undefined4 *

void func_005B9428(void)

{
  *DAT_005b9410 = 0;
  return;
}

