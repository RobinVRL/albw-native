#include "ghidra_types.h"

extern undefined4 DAT_00498140;

// USA 00498130 <- EU 00498108 (Ghidra, non-matching)
// GLOBAL DAT_00498140 undefined4

undefined4 * func_00498130(undefined4 *param_1,int param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = param_1 + 5;
  param_1[5] = DAT_00498140;
  param_1[6] = param_2;
  param_1[7] = 0;
  **(undefined1 **)(param_2 + 4) = 0;
  return param_1;
}

