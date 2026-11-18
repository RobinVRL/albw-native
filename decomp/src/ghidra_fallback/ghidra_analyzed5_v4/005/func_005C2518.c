#include "ghidra_types.h"

extern undefined4 *DAT_005c2500;

// USA 005C2518 <- EU 005C24F0 (Ghidra, non-matching)
// GLOBAL DAT_005c2500 undefined4 *

void func_005C2518(void)

{
  *DAT_005c2500 = 0;
  return;
}

