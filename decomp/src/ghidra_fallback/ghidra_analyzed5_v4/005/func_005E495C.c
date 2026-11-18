#include "ghidra_types.h"

extern undefined4 *DAT_005e4944;
extern undefined4 DAT_005e4948;

// USA 005E495C <- EU 005E4934 (Ghidra, non-matching)
// GLOBAL DAT_005e4944 undefined4 *
// GLOBAL DAT_005e4948 undefined4

void func_005E495C(void)

{
  *DAT_005e4944 = DAT_005e4948;
  return;
}

