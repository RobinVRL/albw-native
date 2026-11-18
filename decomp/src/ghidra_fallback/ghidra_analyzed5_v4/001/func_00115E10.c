#include "ghidra_types.h"


// USA 00115E10 <- EU 00115E10 (Ghidra, non-matching)

float * func_00115E10(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  *param_1 = fVar2 * fVar6 - fVar3 * fVar5;
  param_1[1] = fVar3 * fVar4 - fVar1 * fVar6;
  param_1[2] = fVar1 * fVar5 - fVar2 * fVar4;
  return param_1;
}

