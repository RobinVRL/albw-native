#include "ghidra_types.h"

extern float DAT_00115da8;

// USA 00115D88 <- EU 00115D88 (Ghidra, non-matching)
// GLOBAL DAT_00115da8 float

float * func_00115D88(float *param_1,float *param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_00115da8 / fparam_0;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = *param_2 * fVar1;
  param_1[1] = fVar2 * fVar1;
  param_1[2] = fVar3 * fVar1;
  return param_1;
}

