#include "ghidra_types.h"

extern undefined4 *DAT_005fe624;
extern undefined4 *DAT_005fe628;

// USA 005FE628 <- EU 005FE600 (Ghidra, non-matching)
// GLOBAL DAT_005fe624 undefined4 *
// GLOBAL DAT_005fe628 undefined4 *

void func_005FE628(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fe624;
  *DAT_005fe624 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fe628;
  *DAT_005fe628 = 0;
  puVar1[1] = 0;
  return;
}

