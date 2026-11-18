#include "ghidra_types.h"

extern undefined4 *DAT_005a3920;

// USA 005A3938 <- EU 005A3910 (Ghidra, non-matching)
// GLOBAL DAT_005a3920 undefined4 *

void func_005A3938(void)

{
  *DAT_005a3920 = 0;
  return;
}

