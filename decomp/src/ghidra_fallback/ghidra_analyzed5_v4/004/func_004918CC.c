#include "ghidra_types.h"


// USA 004918CC <- EU 004918A4 (Ghidra, non-matching)

void func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  *param_1 = *param_1 * fparam_0;
  param_1[4] = param_1[4] * fparam_0;
  param_1[1] = param_1[1] * fparam_1;
  param_1[5] = param_1[5] * fparam_1;
  param_1[2] = param_1[2] * fparam_2;
  param_1[6] = param_1[6] * fparam_2;
  param_1[8] = param_1[8] * fparam_0;
  param_1[9] = param_1[9] * fparam_1;
  param_1[10] = param_1[10] * fparam_2;
  return;
}

