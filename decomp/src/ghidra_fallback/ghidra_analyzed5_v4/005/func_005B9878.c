#include "ghidra_types.h"

extern undefined4 *DAT_005b9874;
extern undefined4 *DAT_005b9878;

// USA 005B9878 <- EU 005B9850 (Ghidra, non-matching)
// GLOBAL DAT_005b9874 undefined4 *
// GLOBAL DAT_005b9878 undefined4 *

void func_005B9878(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9874;
  *DAT_005b9874 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9878;
  *DAT_005b9878 = 0;
  puVar1[1] = 0;
  return;
}

