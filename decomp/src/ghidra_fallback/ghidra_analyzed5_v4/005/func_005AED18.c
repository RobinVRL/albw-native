#include "ghidra_types.h"

extern undefined4 *DAT_005aed00;

// USA 005AED18 <- EU 005AECF0 (Ghidra, non-matching)
// GLOBAL DAT_005aed00 undefined4 *

void func_005AED18(void)

{
  *DAT_005aed00 = 0;
  return;
}

