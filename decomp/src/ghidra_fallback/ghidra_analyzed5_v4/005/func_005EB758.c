#include "ghidra_types.h"

extern undefined4 *DAT_005eb740;

// USA 005EB758 <- EU 005EB730 (Ghidra, non-matching)
// GLOBAL DAT_005eb740 undefined4 *

void func_005EB758(void)

{
  *DAT_005eb740 = 0;
  return;
}

