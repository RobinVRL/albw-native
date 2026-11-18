#include "ghidra_types.h"


// USA 0048B620 <- EU 0048B5F8 (Ghidra, non-matching)

void func_0048B620(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar1 = param_2[3];
  fVar4 = param_3[3];
  fVar8 = param_2[2];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  *param_1 = (fVar1 * fVar5 + fVar2 * fVar4 + fVar3 * fVar7) - fVar8 * fVar6;
  param_1[1] = (fVar1 * fVar6 - fVar2 * fVar7) + fVar3 * fVar4 + fVar8 * fVar5;
  param_1[2] = ((fVar1 * fVar7 + fVar2 * fVar6) - fVar3 * fVar5) + fVar8 * fVar4;
  param_1[3] = ((fVar1 * fVar4 - fVar2 * fVar5) - fVar3 * fVar6) - fVar8 * fVar7;
  return;
}

