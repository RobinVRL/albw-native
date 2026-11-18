#include "ghidra_types.h"

extern undefined4 DAT_004a25b8;

// USA 004A25C8 <- EU 004A25A0 (Ghidra, non-matching)
// GLOBAL DAT_004a25b8 undefined4

undefined4 * func_004A25C8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004a25b8;
  *param_1 = DAT_004a25b8;
  param_1[1] = uVar1;
  param_1[8] = param_2;
  param_1[9] = param_3;
  return param_1;
}

