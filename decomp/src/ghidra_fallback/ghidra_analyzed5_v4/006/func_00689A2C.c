#include "ghidra_types.h"

extern undefined4 DAT_00689a38;

// USA 00689A2C <- EU 00689A04 (Ghidra, non-matching)
// GLOBAL DAT_00689a38 undefined4

undefined4 * func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00689a38;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = uVar1;
  if (param_3 < 1) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *(undefined1 *)(param_3 + param_1[1] + -1) = 0;
  }
  return param_1;
}

