#include "ghidra_types.h"

extern float DAT_0042142c;

// USA 00421398 <- EU 00421378 (Ghidra, non-matching)
// GLOBAL DAT_0042142c float

void func_00421398(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_4[2] - param_2[2];
  fVar4 = param_3[2] - param_2[2];
  fVar1 = fVar3 * (*param_3 - *param_2) - (*param_4 - *param_2) * fVar4;
  fVar2 = (*param_4 - *param_2) * (param_3[1] - param_2[1]) -
          (param_4[1] - param_2[1]) * (*param_3 - *param_2);
  fVar3 = (param_4[1] - param_2[1]) * fVar4 - fVar3 * (param_3[1] - param_2[1]);
  fVar4 = DAT_0042142c / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  *param_1 = fVar3 * fVar4;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar4;
  param_1[3] = -(fVar3 * fVar4 * *param_2 + fVar1 * fVar4 * param_2[1] + fVar2 * fVar4 * param_2[2])
  ;
  return;
}

