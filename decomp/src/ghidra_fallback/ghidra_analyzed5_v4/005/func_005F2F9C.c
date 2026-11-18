#include "ghidra_types.h"

extern undefined4 *DAT_005f2f84;

// USA 005F2F9C <- EU 005F2F74 (Ghidra, non-matching)
// GLOBAL DAT_005f2f84 undefined4 *

void func_005F2F9C(void)

{
  *DAT_005f2f84 = 0;
  return;
}

