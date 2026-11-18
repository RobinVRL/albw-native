#include "ghidra_types.h"

extern undefined4 *DAT_005b9650;
extern undefined4 *DAT_005b9654;

// USA 005B9654 <- EU 005B962C (Ghidra, non-matching)
// GLOBAL DAT_005b9650 undefined4 *
// GLOBAL DAT_005b9654 undefined4 *

void func_005B9654(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9650;
  *DAT_005b9650 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9654;
  *DAT_005b9654 = 0;
  puVar1[1] = 0;
  return;
}

