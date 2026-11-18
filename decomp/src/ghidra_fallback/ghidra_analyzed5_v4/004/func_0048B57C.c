#include "ghidra_types.h"

extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float DAT_0048b5a8;

// USA 0048B57C <- EU 0048B554 (Ghidra, non-matching)
// GLOBAL DAT_0048b5a8 float

void func_0048B57C(float *param_1,float *param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = fparam_0 * DAT_0048b5a8;
  fVar1 = func_005909A0(fVar5);
  fVar5 = func_0059163C(fVar5);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  param_1[3] = fVar1;
  param_1[2] = fVar4 * fVar5;
  *param_1 = fVar2 * fVar5;
  param_1[1] = fVar3 * fVar5;
  return;
}

