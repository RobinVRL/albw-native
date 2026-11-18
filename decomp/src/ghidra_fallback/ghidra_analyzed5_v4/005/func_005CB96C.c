#include "ghidra_types.h"

extern undefined4 *DAT_005cb954;

// USA 005CB96C <- EU 005CB944 (Ghidra, non-matching)
// GLOBAL DAT_005cb954 undefined4 *

void func_005CB96C(void)

{
  *DAT_005cb954 = 0;
  return;
}

