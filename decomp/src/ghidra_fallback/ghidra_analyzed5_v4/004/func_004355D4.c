#include "ghidra_types.h"

extern undefined4 DAT_004355e8;

// USA 004355D4 <- EU 004355B4 (Ghidra, non-matching)
// GLOBAL DAT_004355e8 undefined4

undefined4 func_004355D4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = DAT_004355e8;
  param_1[2] = 0;
  param_1[6] = uVar1;
  *(undefined2 *)(param_1 + 0x19) = 0x1f;
  return (undefined4)param_1;
}

