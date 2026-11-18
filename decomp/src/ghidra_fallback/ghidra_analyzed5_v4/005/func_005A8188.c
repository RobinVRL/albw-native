#include "ghidra_types.h"

extern undefined4 *DAT_005a8170;

// USA 005A8188 <- EU 005A8160 (Ghidra, non-matching)
// GLOBAL DAT_005a8170 undefined4 *

void func_005A8188(void)

{
  *DAT_005a8170 = 0;
  return;
}

