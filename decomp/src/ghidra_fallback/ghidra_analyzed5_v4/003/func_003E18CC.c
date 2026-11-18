#include "ghidra_types.h"

extern int func_003E1A70(float *param_1,int param_2);
extern float DAT_003e1950;
extern float DAT_003e1954;
extern float DAT_003e1958;
extern float DAT_003e195c;

// USA 003E18CC <- EU 003E18AC (Ghidra, non-matching)
// GLOBAL DAT_003e1950 float
// GLOBAL DAT_003e1954 float
// GLOBAL DAT_003e1958 float
// GLOBAL DAT_003e195c float

float * func_003E18CC(float *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2,
                     float fparam_3,float fparam_4,float fparam_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_003e1954;
  fVar2 = DAT_003e1950;
  param_1[0xe] = DAT_003e195c;
  fVar4 = DAT_003e1958;
  fVar3 = fVar2 / (fparam_1 - fparam_0);
  param_1[1] = DAT_003e1958;
  param_1[3] = fVar4;
  param_1[4] = fVar4;
  param_1[7] = fVar4;
  param_1[8] = fVar4;
  param_1[9] = fVar4;
  param_1[0xc] = fVar4;
  param_1[0xd] = fVar4;
  param_1[0xf] = fVar4;
  fVar4 = fVar2 / (fparam_3 - fparam_2);
  fVar2 = fVar2 / (fparam_5 - fparam_4);
  *param_1 = fparam_4 * fVar1 * fVar3;
  param_1[2] = (fparam_1 + fparam_0) * fVar3;
  param_1[5] = fparam_4 * fVar1 * fVar4;
  param_1[6] = (fparam_3 + fparam_2) * fVar4;
  param_1[10] = fparam_5 * fVar2;
  param_1[0xb] = fparam_5 * fparam_4 * fVar2;
  func_003E1A70(param_1,param_2);
  return param_1;
}

