#include "ghidra_types.h"

extern undefined4 DAT_00288060;
extern undefined4 DAT_00288064;

// USA 00288020 <- EU 00288048 (Ghidra, non-matching)
// GLOBAL DAT_00288060 undefined4
// GLOBAL DAT_00288064 undefined4

undefined4 func_00288020(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00288064;
  uVar1 = DAT_00288060;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00288060;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return (undefined4)param_1;
}

