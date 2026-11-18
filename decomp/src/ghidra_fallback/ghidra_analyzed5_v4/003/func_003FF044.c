#include "ghidra_types.h"

extern undefined4 DAT_003ff060;
extern undefined4 DAT_003ff064;

// USA 003FF044 <- EU 003FF024 (Ghidra, non-matching)
// GLOBAL DAT_003ff060 undefined4
// GLOBAL DAT_003ff064 undefined4

undefined4 func_003FF044(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  uVar1 = DAT_003ff060;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = 1;
  uVar1 = DAT_003ff064;
  param_1[6] = 0;
  *param_1 = uVar1;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  return (undefined4)param_1;
}

