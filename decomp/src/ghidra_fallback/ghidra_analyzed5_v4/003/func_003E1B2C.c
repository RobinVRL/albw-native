#include "ghidra_types.h"

extern float DAT_003e1c00;

// USA 003E1B2C <- EU 003E1B0C (Ghidra, non-matching)
// GLOBAL DAT_003e1c00 float

void func_003E1B2C(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar4 = fVar6 - *param_4;
  fVar2 = fVar7 - param_4[1];
  fVar1 = fVar8 - param_4[2];
  fVar3 = DAT_003e1c00 / SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = fVar1 * fVar3;
  fVar2 = fVar2 * fVar3;
  fVar4 = fVar4 * fVar3;
  fVar10 = param_3[1] * fVar1 - param_3[2] * fVar2;
  fVar3 = *param_3 * fVar2 - param_3[1] * fVar4;
  fVar5 = param_3[2] * fVar4 - *param_3 * fVar1;
  fVar9 = DAT_003e1c00 / SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar3 = fVar3 * fVar9;
  fVar10 = fVar10 * fVar9;
  fVar5 = fVar5 * fVar9;
  *param_1 = fVar10;
  param_1[1] = fVar5;
  param_1[2] = fVar3;
  param_1[8] = fVar4;
  param_1[9] = fVar2;
  param_1[10] = fVar1;
  fVar9 = fVar2 * fVar3 - fVar1 * fVar5;
  fVar11 = fVar1 * fVar10 - fVar4 * fVar3;
  fVar12 = fVar4 * fVar5 - fVar2 * fVar10;
  param_1[4] = fVar9;
  param_1[5] = fVar11;
  param_1[6] = fVar12;
  param_1[3] = -(fVar6 * fVar10 + fVar7 * fVar5 + fVar8 * fVar3);
  param_1[7] = -(fVar6 * fVar9 + fVar7 * fVar11 + fVar8 * fVar12);
  param_1[0xb] = -(fVar6 * fVar4 + fVar7 * fVar2 + fVar8 * fVar1);
  return;
}

