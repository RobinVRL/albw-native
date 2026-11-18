#include "ghidra_types.h"

extern undefined4 *DAT_005c24ec;

// USA 005C2504 <- EU 005C24DC (Ghidra, non-matching)
// GLOBAL DAT_005c24ec undefined4 *

void func_005C2504(void)

{
  *DAT_005c24ec = 0;
  return;
}

