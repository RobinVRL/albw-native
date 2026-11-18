#include "ghidra_types.h"


// USA 00115DAC <- EU 00115DAC (Ghidra, non-matching)

float * func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  *param_1 = *param_3 + *param_2 * fparam_0;
  param_1[1] = fVar3 + fVar1 * fparam_0;
  param_1[2] = fVar4 + fVar2 * fparam_0;
  return param_1;
}

