#include "ghidra_types.h"

extern undefined4 DAT_003595ac;

// USA 00359590 <- EU 0035956C (Ghidra, non-matching)
// GLOBAL DAT_003595ac undefined4

undefined4 func_00359590(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_003595ac;
  param_1[0xb] = 0;
  param_1[0xc] = uVar1;
  param_1[10] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  return (undefined4)param_1;
}

