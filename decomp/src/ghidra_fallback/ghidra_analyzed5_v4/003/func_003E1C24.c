#include "ghidra_types.h"

extern float DAT_003e1d9c;
extern float DAT_003e1da0;
extern float DAT_003e1da4;

// USA 003E1C24 <- EU 003E1C04 (Ghidra, non-matching)
// GLOBAL DAT_003e1d9c float
// GLOBAL DAT_003e1da0 float
// GLOBAL DAT_003e1da4 float

void func_003E1C24(float *param_1,float *param_2)

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
  
  fVar8 = *param_2;
  fVar9 = param_2[5];
  fVar1 = param_2[10];
  fVar2 = param_2[9];
  fVar3 = param_2[6];
  fVar4 = param_2[2];
  fVar5 = param_2[8];
  fVar6 = param_2[4];
  fVar7 = param_2[1];
  fVar10 = fVar8 + fVar9 + fVar1;
  if (DAT_003e1d9c < fVar10) {
    fVar8 = SQRT(fVar10 + DAT_003e1da0);
    fVar1 = DAT_003e1da4 / fVar8;
    param_1[3] = fVar8 * DAT_003e1da4;
    *param_1 = (fVar2 - fVar3) * fVar1;
    param_1[1] = (fVar4 - fVar5) * fVar1;
    param_1[2] = (fVar6 - fVar7) * fVar1;
    return;
  }
  if (fVar9 <= fVar8) {
    if (fVar1 <= fVar8) {
      fVar1 = SQRT((fVar8 - (fVar9 + fVar1)) + DAT_003e1da0);
      fVar8 = fVar1 * DAT_003e1da4;
      if (fVar1 != DAT_003e1d9c) {
        fVar1 = DAT_003e1da4 / fVar1;
      }
      *param_1 = fVar8;
      param_1[1] = (fVar7 + fVar6) * fVar1;
      param_1[2] = (fVar4 + fVar5) * fVar1;
      param_1[3] = (fVar2 - fVar3) * fVar1;
      return;
    }
  }
  else if (fVar1 <= fVar9) {
    fVar1 = SQRT((fVar9 - (fVar1 + fVar8)) + DAT_003e1da0);
    fVar8 = fVar1 * DAT_003e1da4;
    if (fVar1 != DAT_003e1d9c) {
      fVar1 = DAT_003e1da4 / fVar1;
    }
    param_1[1] = fVar8;
    param_1[3] = (fVar4 - fVar5) * fVar1;
    param_1[2] = (fVar3 + fVar2) * fVar1;
    *param_1 = (fVar6 + fVar7) * fVar1;
    return;
  }
  fVar1 = SQRT((fVar1 - (fVar8 + fVar9)) + DAT_003e1da0);
  fVar8 = fVar1 * DAT_003e1da4;
  if (fVar1 != DAT_003e1d9c) {
    fVar1 = DAT_003e1da4 / fVar1;
  }
  param_1[2] = fVar8;
  param_1[3] = (fVar6 - fVar7) * fVar1;
  *param_1 = (fVar5 + fVar4) * fVar1;
  param_1[1] = (fVar2 + fVar3) * fVar1;
  return;
}

