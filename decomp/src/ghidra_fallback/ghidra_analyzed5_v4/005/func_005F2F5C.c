#include "ghidra_types.h"

extern undefined4 *DAT_005f2f44;

// USA 005F2F5C <- EU 005F2F34 (Ghidra, non-matching)
// GLOBAL DAT_005f2f44 undefined4 *

void func_005F2F5C(void)

{
  *DAT_005f2f44 = 0;
  return;
}

