#include "ghidra_types.h"

extern undefined4 DAT_0031e2d8;

// USA 0031E2D0 <- EU 0031E2AC (Ghidra, non-matching)
// GLOBAL DAT_0031e2d8 undefined4

undefined4 func_0031E2D0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = DAT_0031e2d8;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return (undefined4)param_1;
}

