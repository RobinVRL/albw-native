#include "ghidra_types.h"

extern undefined4 DAT_002319b4;

// USA 00231994 <- EU 00231994 (Ghidra, non-matching)
// GLOBAL DAT_002319b4 undefined4

undefined4 func_00231994(undefined2 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002319b4;
  *param_1 = 0;
  param_1[1] = 0xffff;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return (undefined4)param_1;
}

