#include "ghidra_types.h"

extern undefined4 *DAT_0059a1e8;

// USA 0059A200 <- EU 0059A1D8 (Ghidra, non-matching)
// GLOBAL DAT_0059a1e8 undefined4 *

void func_0059A200(void)

{
  *DAT_0059a1e8 = 0;
  return;
}

