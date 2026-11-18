#include "ghidra_types.h"

extern undefined4 DAT_00410ad4;

// USA 00410AB8 <- EU 00410A98 (Ghidra, non-matching)
// GLOBAL DAT_00410ad4 undefined4

undefined4 * func_00410AB8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00410ad4;
  param_1[3] = 0;
  param_1[5] = param_2;
  param_1[4] = 0;
  *param_1 = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

