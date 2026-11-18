#include "ghidra_types.h"

extern float DAT_0068b2b0;

// USA 0068B294 <- EU 0068B26C (Ghidra, non-matching)
// GLOBAL DAT_0068b2b0 float

void func_0068B294(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[2];
  fVar4 = *param_2;
  fVar5 = fparam_0 * DAT_0068b2b0;
  fVar6 = fparam_1 * DAT_0068b2b0;
  fVar3 = fparam_2 * DAT_0068b2b0;
  fVar2 = param_2[1];
  *param_1 = fVar4 - fVar5;
  param_1[1] = fVar2 - fVar6;
  param_1[2] = fVar1 - fVar3;
  param_1[3] = fVar4 + fVar5;
  param_1[4] = fVar2 + fVar6;
  param_1[5] = fVar1 + fVar3;
  return;
}

