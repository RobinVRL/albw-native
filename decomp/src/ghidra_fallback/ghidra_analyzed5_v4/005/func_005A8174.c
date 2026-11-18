#include "ghidra_types.h"

extern undefined4 *DAT_005a815c;

// USA 005A8174 <- EU 005A814C (Ghidra, non-matching)
// GLOBAL DAT_005a815c undefined4 *

void func_005A8174(void)

{
  *DAT_005a815c = 0;
  return;
}

