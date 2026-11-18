#include "ghidra_types.h"

extern undefined4 *DAT_005c2834;
extern undefined4 *DAT_005c2838;

// USA 005C2838 <- EU 005C2810 (Ghidra, non-matching)
// GLOBAL DAT_005c2834 undefined4 *
// GLOBAL DAT_005c2838 undefined4 *

void func_005C2838(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2834;
  *DAT_005c2834 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2838;
  *DAT_005c2838 = 0;
  puVar1[1] = 0;
  return;
}

