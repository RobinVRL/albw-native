#include "ghidra_types.h"

extern undefined4 *DAT_005aeacc;

// USA 005AEAE4 <- EU 005AEABC (Ghidra, non-matching)
// GLOBAL DAT_005aeacc undefined4 *

void func_005AEAE4(void)

{
  *DAT_005aeacc = 0;
  return;
}

