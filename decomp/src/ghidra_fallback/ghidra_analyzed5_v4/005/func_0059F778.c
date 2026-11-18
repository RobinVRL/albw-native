#include "ghidra_types.h"

extern undefined4 *DAT_0059f760;

// USA 0059F778 <- EU 0059F750 (Ghidra, non-matching)
// GLOBAL DAT_0059f760 undefined4 *

void func_0059F778(void)

{
  *DAT_0059f760 = 0;
  return;
}

