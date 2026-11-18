#include "ghidra_types.h"

extern undefined4 *DAT_005ca194;
extern undefined4 *DAT_005ca198;

// USA 005CA198 <- EU 005CA170 (Ghidra, non-matching)
// GLOBAL DAT_005ca194 undefined4 *
// GLOBAL DAT_005ca198 undefined4 *

void func_005CA198(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca194;
  *DAT_005ca194 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca198;
  *DAT_005ca198 = 0;
  puVar1[1] = 0;
  return;
}

