#include "ghidra_types.h"

extern undefined4 *DAT_005b3690;
extern undefined4 *DAT_005b3694;

// USA 005B3694 <- EU 005B366C (Ghidra, non-matching)
// GLOBAL DAT_005b3690 undefined4 *
// GLOBAL DAT_005b3694 undefined4 *

void func_005B3694(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b3690;
  *DAT_005b3690 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b3694;
  *DAT_005b3694 = 0;
  puVar1[1] = 0;
  return;
}

