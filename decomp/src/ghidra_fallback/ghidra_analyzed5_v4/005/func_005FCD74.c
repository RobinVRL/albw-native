#include "ghidra_types.h"

extern undefined4 *DAT_005fcd70;
extern undefined4 *DAT_005fcd74;

// USA 005FCD74 <- EU 005FCD4C (Ghidra, non-matching)
// GLOBAL DAT_005fcd70 undefined4 *
// GLOBAL DAT_005fcd74 undefined4 *

void func_005FCD74(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fcd70;
  *DAT_005fcd70 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fcd74;
  *DAT_005fcd74 = 0;
  puVar1[1] = 0;
  return;
}

