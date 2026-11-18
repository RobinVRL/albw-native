#include "ghidra_types.h"

extern undefined4 *DAT_005eb72c;

// USA 005EB744 <- EU 005EB71C (Ghidra, non-matching)
// GLOBAL DAT_005eb72c undefined4 *

void func_005EB744(void)

{
  *DAT_005eb72c = 0;
  return;
}

