#include "ghidra_types.h"

extern float DAT_004915f0;
extern float DAT_004915f4;
extern float DAT_004915f8;

// USA 004914B4 <- EU 0049148C (Ghidra, non-matching)
// GLOBAL DAT_004915f0 float
// GLOBAL DAT_004915f4 float
// GLOBAL DAT_004915f8 float

void func_004914B4(float *param_1,float *param_2)

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
  
  fVar9 = *param_2;
  fVar8 = param_2[4];
  fVar1 = param_2[8];
  fVar2 = param_2[7];
  fVar3 = param_2[5];
  fVar4 = param_2[2];
  fVar5 = param_2[6];
  fVar6 = param_2[3];
  fVar7 = param_2[1];
  fVar10 = fVar9 + fVar8 + fVar1;
  if (fVar10 <= DAT_004915f0) {
    if (fVar8 <= fVar9) {
      if (fVar1 <= fVar9) {
        fVar1 = SQRT((fVar9 - (fVar8 + fVar1)) + DAT_004915f4);
        fVar8 = fVar1 * DAT_004915f8;
        if (fVar1 != DAT_004915f0) {
          fVar1 = DAT_004915f8 / fVar1;
        }
        fVar9 = (fVar2 - fVar3) * fVar1;
        fVar10 = (fVar7 + fVar6) * fVar1;
        fVar1 = (fVar4 + fVar5) * fVar1;
        goto LAB_004915e4;
      }
    }
    else if (fVar1 <= fVar8) {
      fVar8 = SQRT((fVar8 - (fVar1 + fVar9)) + DAT_004915f4);
      fVar10 = fVar8 * DAT_004915f8;
      if (fVar8 != DAT_004915f0) {
        fVar8 = DAT_004915f8 / fVar8;
      }
      fVar1 = (fVar3 + fVar2) * fVar8;
      fVar9 = (fVar4 - fVar5) * fVar8;
      fVar8 = (fVar6 + fVar7) * fVar8;
      goto LAB_004915e4;
    }
    fVar10 = SQRT((fVar1 - (fVar9 + fVar8)) + DAT_004915f4);
    fVar1 = fVar10 * DAT_004915f8;
    if (fVar10 != DAT_004915f0) {
      fVar10 = DAT_004915f8 / fVar10;
    }
    fVar9 = (fVar6 - fVar7) * fVar10;
    fVar8 = (fVar5 + fVar4) * fVar10;
    fVar10 = (fVar2 + fVar3) * fVar10;
  }
  else {
    fVar9 = SQRT(fVar10 + DAT_004915f4);
    fVar1 = DAT_004915f8 / fVar9;
    fVar9 = fVar9 * DAT_004915f8;
    fVar8 = (fVar2 - fVar3) * fVar1;
    fVar10 = (fVar4 - fVar5) * fVar1;
    fVar1 = (fVar6 - fVar7) * fVar1;
  }
LAB_004915e4:
  param_1[3] = fVar9;
  *param_1 = fVar8;
  param_1[1] = fVar10;
  param_1[2] = fVar1;
  return;
}

