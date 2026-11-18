#include "ghidra_types.h"

extern undefined4 *DAT_005a8504;
extern undefined4 DAT_005a8508;

// USA 005A851C <- EU 005A84F4 (Ghidra, non-matching)
// GLOBAL DAT_005a8504 undefined4 *
// GLOBAL DAT_005a8508 undefined4

void func_005A851C(void)

{
  *DAT_005a8504 = DAT_005a8508;
  return;
}

