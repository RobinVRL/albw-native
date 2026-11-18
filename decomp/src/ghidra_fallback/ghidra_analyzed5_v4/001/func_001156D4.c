#include "ghidra_types.h"

extern float DAT_00115398;
extern float DAT_0011539c;
extern float DAT_001157f8;

// USA 001156D4 <- EU 001156D4 (Ghidra, non-matching)
// GLOBAL DAT_00115398 float
// GLOBAL DAT_0011539c float
// GLOBAL DAT_001157f8 float

void func_001156D4(float *param_1,float *param_2)

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
  float fVar13;
  
  fVar3 = DAT_001157f8;
  fVar2 = DAT_0011539c;
  fVar1 = DAT_00115398;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = param_2[6];
  fVar10 = param_2[8];
  fVar11 = param_2[9];
  fVar12 = param_2[10];
  fVar13 = (fVar4 * fVar8 * fVar12 - fVar10 * fVar8 * fVar6) +
           (fVar5 * fVar9 * fVar10 - fVar7 * fVar5 * fVar12) +
           (fVar6 * fVar7 * fVar11 - fVar4 * fVar11 * fVar9);
  if (fVar13 == -0.0 || fVar13 == 0.0) {
    *param_1 = DAT_00115398;
    param_1[1] = fVar2;
    param_1[2] = fVar2;
    param_1[3] = fVar2;
    param_1[4] = fVar2;
    param_1[5] = fVar1;
    param_1[6] = fVar2;
    param_1[7] = fVar2;
    param_1[8] = fVar2;
    param_1[9] = fVar2;
    param_1[10] = fVar1;
    param_1[0xb] = fVar2;
    return;
  }
  fVar13 = DAT_00115398 / fVar13;
  *param_1 = (fVar8 * fVar12 - fVar11 * fVar9) * fVar13;
  param_1[1] = -((fVar7 * fVar12 - fVar10 * fVar9) * fVar13);
  param_1[2] = (fVar7 * fVar11 - fVar10 * fVar8) * fVar13;
  param_1[3] = fVar3;
  param_1[4] = -((fVar5 * fVar12 - fVar11 * fVar6) * fVar13);
  param_1[5] = (fVar4 * fVar12 - fVar10 * fVar6) * fVar13;
  param_1[6] = -((fVar4 * fVar11 - fVar10 * fVar5) * fVar13);
  param_1[7] = fVar3;
  param_1[8] = (fVar5 * fVar9 - fVar8 * fVar6) * fVar13;
  param_1[9] = -((fVar4 * fVar9 - fVar7 * fVar6) * fVar13);
  param_1[10] = (fVar4 * fVar8 - fVar7 * fVar5) * fVar13;
  param_1[0xb] = fVar3;
  return;
}

