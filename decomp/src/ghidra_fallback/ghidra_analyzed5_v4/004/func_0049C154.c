#include "ghidra_types.h"

extern float DAT_0049c1a4;
extern float DAT_0049c1a8;

// USA 0049C154 <- EU 0049C12C (Ghidra, non-matching)
// GLOBAL DAT_0049c1a4 float
// GLOBAL DAT_0049c1a8 float

void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0)

{
  float fVar1;
  
  fVar1 = DAT_0049c1a4;
  if ((DAT_0049c1a4 <= fparam_0) && (fVar1 = fparam_0, DAT_0049c1a8 < fparam_0)) {
    fVar1 = DAT_0049c1a8;
  }
  param_1[3] = param_2[3] + (param_3[3] - param_2[3]) * fVar1;
  *param_1 = *param_2 + (*param_3 - *param_2) * fVar1;
  param_1[1] = param_2[1] + (param_3[1] - param_2[1]) * fVar1;
  param_1[2] = param_2[2] + (param_3[2] - param_2[2]) * fVar1;
  return;
}

