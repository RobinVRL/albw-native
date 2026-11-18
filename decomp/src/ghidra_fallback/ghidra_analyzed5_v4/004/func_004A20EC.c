#include "ghidra_types.h"


// USA 004A20EC <- EU 004A20C4 (Ghidra, non-matching)

undefined4 * func_004A20EC(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

