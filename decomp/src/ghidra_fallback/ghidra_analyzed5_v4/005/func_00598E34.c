#include "ghidra_types.h"

extern undefined4 *DAT_00598e30;
extern undefined4 *DAT_00598e34;

// USA 00598E34 <- EU 00598E0C (Ghidra, non-matching)
// GLOBAL DAT_00598e30 undefined4 *
// GLOBAL DAT_00598e34 undefined4 *

void func_00598E34(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00598e30;
  *DAT_00598e30 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_00598e34;
  *DAT_00598e34 = 0;
  puVar1[1] = 0;
  return;
}

