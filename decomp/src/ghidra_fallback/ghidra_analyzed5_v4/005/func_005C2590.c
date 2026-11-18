#include "ghidra_types.h"

extern undefined4 *DAT_005c2578;

// USA 005C2590 <- EU 005C2568 (Ghidra, non-matching)
// GLOBAL DAT_005c2578 undefined4 *

void func_005C2590(void)

{
  *DAT_005c2578 = 0;
  return;
}

