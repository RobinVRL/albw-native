#include "ghidra_types.h"

extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float DAT_0048b714;

// USA 0048B680 <- EU 0048B658 (Ghidra, non-matching)
// GLOBAL DAT_0048b714 float

void func_0048B680(float *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = fparam_2 * DAT_0048b714;
  fVar6 = DAT_0048b714;
  fVar1 = func_005909A0(fVar4);
  fVar5 = fparam_1 * fVar6;
  fVar2 = func_005909A0(fVar5);
  fVar6 = fparam_0 * fVar6;
  fVar3 = func_005909A0(fVar6);
  fVar4 = func_0059163C(fVar4);
  fVar5 = func_0059163C(fVar5);
  fVar6 = func_0059163C(fVar6);
  param_1[2] = fVar4 * fVar2 * fVar3 - fVar1 * fVar5 * fVar6;
  param_1[3] = fVar1 * fVar2 * fVar3 + fVar4 * fVar5 * fVar6;
  *param_1 = fVar1 * fVar2 * fVar6 - fVar4 * fVar5 * fVar3;
  param_1[1] = fVar1 * fVar5 * fVar3 + fVar4 * fVar2 * fVar6;
  return;
}

