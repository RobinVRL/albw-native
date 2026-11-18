#include "ghidra_types.h"


// USA 00115D70 <- EU 00115D70 (Ghidra, non-matching)

float * func_00115D70(float *param_1,float *param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 * fparam_0;
  param_1[1] = fVar1 * fparam_0;
  param_1[2] = fVar2 * fparam_0;
  return param_1;
}

