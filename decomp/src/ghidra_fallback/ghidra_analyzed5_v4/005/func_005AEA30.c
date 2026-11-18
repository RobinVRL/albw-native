#include "ghidra_types.h"

extern undefined4 *DAT_005aea18;

// USA 005AEA30 <- EU 005AEA08 (Ghidra, non-matching)
// GLOBAL DAT_005aea18 undefined4 *

void func_005AEA30(void)

{
  *DAT_005aea18 = 0;
  return;
}

