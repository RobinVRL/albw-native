#include "ghidra_types.h"

extern undefined4 DAT_00404ca0;
extern undefined4 DAT_00404ca4;

// USA 00404C78 <- EU 00404C58 (Ghidra, non-matching)
// GLOBAL DAT_00404ca0 undefined4
// GLOBAL DAT_00404ca4 undefined4

undefined4 * func_00404C78(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_00404ca0;
  uVar1 = DAT_00404ca4;
  param_1[1] = 0;
  param_1[2] = param_1 + 2;
  param_1[4] = 0;
  param_1[3] = param_1 + 2;
  param_1[5] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  return param_1;
}

