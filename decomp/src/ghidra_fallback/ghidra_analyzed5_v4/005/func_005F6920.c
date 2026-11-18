#include "ghidra_types.h"

extern undefined4 *DAT_005f6908;

// USA 005F6920 <- EU 005F68F8 (Ghidra, non-matching)
// GLOBAL DAT_005f6908 undefined4 *

void func_005F6920(void)

{
  *DAT_005f6908 = 0;
  return;
}

