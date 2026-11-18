#include "ghidra_types.h"

extern undefined4 *DAT_005b981c;
extern undefined4 *DAT_005b9820;

// USA 005B9820 <- EU 005B97F8 (Ghidra, non-matching)
// GLOBAL DAT_005b981c undefined4 *
// GLOBAL DAT_005b9820 undefined4 *

void func_005B9820(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b981c;
  *DAT_005b981c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9820;
  *DAT_005b9820 = 0;
  puVar1[1] = 0;
  return;
}

