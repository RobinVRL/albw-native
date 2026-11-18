#include "ghidra_types.h"

extern undefined4 *DAT_005b956c;
extern undefined4 *DAT_005b9570;

// USA 005B9570 <- EU 005B9548 (Ghidra, non-matching)
// GLOBAL DAT_005b956c undefined4 *
// GLOBAL DAT_005b9570 undefined4 *

void func_005B9570(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b956c;
  *DAT_005b956c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9570;
  *DAT_005b9570 = 0;
  puVar1[1] = 0;
  return;
}

