#include "ghidra_types.h"

extern undefined4 *DAT_005c2540;
extern undefined4 DAT_005c2544;

// USA 005C2558 <- EU 005C2530 (Ghidra, non-matching)
// GLOBAL DAT_005c2540 undefined4 *
// GLOBAL DAT_005c2544 undefined4

void func_005C2558(void)

{
  *DAT_005c2540 = DAT_005c2544;
  return;
}

