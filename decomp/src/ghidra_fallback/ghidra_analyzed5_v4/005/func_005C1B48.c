#include "ghidra_types.h"

extern undefined4 *DAT_005c1b44;
extern undefined4 *DAT_005c1b48;

// USA 005C1B48 <- EU 005C1B20 (Ghidra, non-matching)
// GLOBAL DAT_005c1b44 undefined4 *
// GLOBAL DAT_005c1b48 undefined4 *

void func_005C1B48(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c1b44;
  *DAT_005c1b44 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c1b48;
  *DAT_005c1b48 = 0;
  puVar1[1] = 0;
  return;
}

