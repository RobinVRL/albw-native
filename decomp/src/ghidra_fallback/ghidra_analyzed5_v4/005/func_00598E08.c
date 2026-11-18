#include "ghidra_types.h"

extern undefined4 *DAT_00598e04;
extern undefined4 *DAT_00598e08;

// USA 00598E08 <- EU 00598DE0 (Ghidra, non-matching)
// GLOBAL DAT_00598e04 undefined4 *
// GLOBAL DAT_00598e08 undefined4 *

void func_00598E08(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00598e04;
  *DAT_00598e04 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_00598e08;
  *DAT_00598e08 = 0;
  puVar1[1] = 0;
  return;
}

