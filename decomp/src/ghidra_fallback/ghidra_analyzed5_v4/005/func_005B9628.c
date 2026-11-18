#include "ghidra_types.h"

extern undefined4 *DAT_005b9624;
extern undefined4 *DAT_005b9628;

// USA 005B9628 <- EU 005B9600 (Ghidra, non-matching)
// GLOBAL DAT_005b9624 undefined4 *
// GLOBAL DAT_005b9628 undefined4 *

void func_005B9628(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9624;
  *DAT_005b9624 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9628;
  *DAT_005b9628 = 0;
  puVar1[1] = 0;
  return;
}

