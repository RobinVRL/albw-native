#include "ghidra_types.h"

extern undefined4 *DAT_005b9540;
extern undefined4 *DAT_005b9544;

// USA 005B9544 <- EU 005B951C (Ghidra, non-matching)
// GLOBAL DAT_005b9540 undefined4 *
// GLOBAL DAT_005b9544 undefined4 *

void func_005B9544(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9540;
  *DAT_005b9540 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9544;
  *DAT_005b9544 = 0;
  puVar1[1] = 0;
  return;
}

