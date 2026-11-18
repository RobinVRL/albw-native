#include "ghidra_types.h"

extern float DAT_003e1f10;
extern float DAT_003e1f14;
extern float DAT_003e1f18;
extern float DAT_003e1f1c;

// USA 003E1E9C <- EU 003E1E7C (Ghidra, non-matching)
// GLOBAL DAT_003e1f10 float
// GLOBAL DAT_003e1f14 float
// GLOBAL DAT_003e1f18 float
// GLOBAL DAT_003e1f1c float

void func_003E1E9C(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4,float fparam_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_003e1f14;
  fVar3 = DAT_003e1f10;
  param_1[0xe] = DAT_003e1f1c;
  fVar4 = DAT_003e1f18;
  param_1[1] = DAT_003e1f18;
  param_1[3] = fVar4;
  fVar2 = fVar3 / (fparam_1 - fparam_0);
  param_1[4] = fVar4;
  param_1[7] = fVar4;
  param_1[8] = fVar4;
  param_1[9] = fVar4;
  param_1[0xc] = fVar4;
  param_1[0xd] = fVar4;
  param_1[0xf] = fVar4;
  fVar4 = fVar3 / (fparam_3 - fparam_2);
  fVar3 = fVar3 / (fparam_5 - fparam_4);
  *param_1 = fparam_4 * fVar1 * fVar2;
  param_1[2] = (fparam_1 + fparam_0) * fVar2;
  param_1[5] = fparam_4 * fVar1 * fVar4;
  param_1[6] = (fparam_3 + fparam_2) * fVar4;
  param_1[10] = fparam_5 * fVar3;
  param_1[0xb] = fparam_5 * fparam_4 * fVar3;
  return;
}

