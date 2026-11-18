#include "ghidra_types.h"

extern undefined4 *DAT_005c1b70;
extern undefined4 *DAT_005c1b74;

// USA 005C1B74 <- EU 005C1B4C (Ghidra, non-matching)
// GLOBAL DAT_005c1b70 undefined4 *
// GLOBAL DAT_005c1b74 undefined4 *

void func_005C1B74(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1b70;
  *DAT_005c1b70 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1b74;
  *DAT_005c1b74 = 0;
  puVar1[1] = 0;
  return;
}

