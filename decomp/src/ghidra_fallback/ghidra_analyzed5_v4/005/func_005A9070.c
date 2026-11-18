#include "ghidra_types.h"

extern undefined4 *DAT_005a906c;
extern undefined4 *DAT_005a9070;

// USA 005A9070 <- EU 005A9048 (Ghidra, non-matching)
// GLOBAL DAT_005a906c undefined4 *
// GLOBAL DAT_005a9070 undefined4 *

void func_005A9070(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a906c;
  *DAT_005a906c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a9070;
  *DAT_005a9070 = 0;
  puVar1[1] = 0;
  return;
}

