#include "ghidra_types.h"

extern float DAT_00115398;
extern float DAT_0011539c;

// USA 001153A0 <- EU 001153A0 (Ghidra, non-matching)
// GLOBAL DAT_00115398 float
// GLOBAL DAT_0011539c float

void func_001153A0(float *param_1,float *param_2)

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
  
  fVar2 = DAT_0011539c;
  fVar1 = DAT_00115398;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = param_2[6];
  fVar10 = param_2[7];
  fVar11 = param_2[8];
  fVar12 = (fVar3 * fVar7 * fVar11 - fVar9 * fVar7 * fVar5) +
           (fVar4 * fVar8 * fVar9 - fVar6 * fVar4 * fVar11) +
           (fVar5 * fVar6 * fVar10 - fVar3 * fVar10 * fVar8);
  if (fVar12 == -0.0 || fVar12 == 0.0) {
    *param_1 = DAT_00115398;
    param_1[1] = fVar2;
    param_1[2] = fVar2;
    param_1[3] = fVar2;
    param_1[4] = fVar1;
    param_1[5] = fVar2;
    param_1[6] = fVar2;
    param_1[7] = fVar2;
    param_1[8] = fVar1;
    return;
  }
  fVar12 = DAT_00115398 / fVar12;
  *param_1 = (fVar7 * fVar11 - fVar10 * fVar8) * fVar12;
  param_1[1] = -((fVar6 * fVar11 - fVar9 * fVar8) * fVar12);
  param_1[2] = (fVar6 * fVar10 - fVar9 * fVar7) * fVar12;
  param_1[3] = -((fVar4 * fVar11 - fVar10 * fVar5) * fVar12);
  param_1[4] = (fVar3 * fVar11 - fVar9 * fVar5) * fVar12;
  param_1[5] = -((fVar3 * fVar10 - fVar9 * fVar4) * fVar12);
  param_1[6] = (fVar4 * fVar8 - fVar7 * fVar5) * fVar12;
  param_1[7] = -((fVar3 * fVar8 - fVar6 * fVar5) * fVar12);
  param_1[8] = (fVar3 * fVar7 - fVar6 * fVar4) * fVar12;
  return;
}

