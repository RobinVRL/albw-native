#include "ghidra_types.h"

extern undefined4 *DAT_005a8550;

// USA 005A8568 <- EU 005A8540 (Ghidra, non-matching)
// GLOBAL DAT_005a8550 undefined4 *

void func_005A8568(void)

{
  *DAT_005a8550 = 0;
  return;
}

