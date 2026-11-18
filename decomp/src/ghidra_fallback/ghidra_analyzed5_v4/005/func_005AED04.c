#include "ghidra_types.h"

extern undefined4 *DAT_005aecec;

// USA 005AED04 <- EU 005AECDC (Ghidra, non-matching)
// GLOBAL DAT_005aecec undefined4 *

void func_005AED04(void)

{
  *DAT_005aecec = 0;
  return;
}

