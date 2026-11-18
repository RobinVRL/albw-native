#include "ghidra_types.h"

extern undefined4 DAT_001097ec;
extern undefined4 DAT_001097f0;
extern undefined4 DAT_001097f4;
extern undefined4 DAT_001097f8;

// USA 001097A4 <- EU 001097A4 (Ghidra, non-matching)
// GLOBAL DAT_001097ec undefined4
// GLOBAL DAT_001097f0 undefined4
// GLOBAL DAT_001097f4 undefined4
// GLOBAL DAT_001097f8 undefined4

undefined4 func_001097A4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_001097ec;
  *param_1 = DAT_001097f0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = DAT_001097f4;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = uVar2;
  uVar1 = DAT_001097f8;
  param_1[10] = 0;
  param_1[9] = uVar1;
  param_1[0xb] = 0;
  return (undefined4)param_1;
}

