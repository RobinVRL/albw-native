#include "ghidra_types.h"

extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);

// USA 00491D78 <- EU 00491D50 (Ghidra, non-matching)

void func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = func_0059163C(*param_3);
  fVar2 = func_0059163C(param_3[1]);
  fVar3 = func_0059163C(param_3[2]);
  fVar4 = func_005909A0(*param_3);
  fVar5 = func_005909A0(param_3[1]);
  fVar6 = func_005909A0(param_3[2]);
  fVar8 = *param_2;
  fVar7 = param_2[1];
  fVar9 = param_2[2];
  *param_1 = fVar5 * fVar6 * fVar8;
  param_1[4] = fVar5 * fVar3 * fVar8;
  param_1[8] = -(fVar8 * fVar2);
  param_1[5] = fVar7 * (fVar4 * fVar6 + fVar1 * fVar2 * fVar3);
  param_1[9] = fVar1 * fVar5 * fVar7;
  param_1[6] = (fVar2 * fVar4 * fVar3 - fVar1 * fVar6) * fVar9;
  param_1[10] = fVar4 * fVar5 * fVar9;
  param_1[1] = fVar7 * (fVar1 * fVar2 * fVar6 - fVar4 * fVar3);
  param_1[2] = (fVar1 * fVar3 + fVar4 * fVar6 * fVar2) * fVar9;
  param_1[3] = *param_4;
  param_1[7] = param_4[1];
  param_1[0xb] = param_4[2];
  return;
}

