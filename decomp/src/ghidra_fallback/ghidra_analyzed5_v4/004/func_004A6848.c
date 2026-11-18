#include "ghidra_types.h"


// USA 004A6848 <- EU 004A6820 (Ghidra, non-matching)

undefined4 * func_004A6848(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

