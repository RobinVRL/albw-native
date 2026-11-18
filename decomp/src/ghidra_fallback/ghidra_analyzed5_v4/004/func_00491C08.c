#include "ghidra_types.h"

extern float DAT_00491d44;
extern float DAT_00491d48;
extern float DAT_00491d4c;

// USA 00491C08 <- EU 00491BE0 (Ghidra, non-matching)
// GLOBAL DAT_00491d44 float
// GLOBAL DAT_00491d48 float
// GLOBAL DAT_00491d4c float

void func_00491C08(float *param_1,float *param_2)

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
  fVar8 = param_2[5];
  fVar1 = param_2[10];
  fVar2 = param_2[9];
  fVar3 = param_2[6];
  fVar4 = param_2[2];
  fVar5 = param_2[8];
  fVar6 = param_2[4];
  fVar7 = param_2[1];
  fVar10 = fVar9 + fVar8 + fVar1;
  if (fVar10 <= DAT_00491d44) {
    if (fVar8 <= fVar9) {
      if (fVar1 <= fVar9) {
        fVar1 = SQRT((fVar9 - (fVar8 + fVar1)) + DAT_00491d48);
        fVar8 = fVar1 * DAT_00491d4c;
        if (fVar1 != DAT_00491d44) {
          fVar1 = DAT_00491d4c / fVar1;
        }
        fVar9 = (fVar2 - fVar3) * fVar1;
        fVar10 = (fVar7 + fVar6) * fVar1;
        fVar1 = (fVar4 + fVar5) * fVar1;
        goto LAB_00491d38;
      }
    }
    else if (fVar1 <= fVar8) {
      fVar8 = SQRT((fVar8 - (fVar1 + fVar9)) + DAT_00491d48);
      fVar10 = fVar8 * DAT_00491d4c;
      if (fVar8 != DAT_00491d44) {
        fVar8 = DAT_00491d4c / fVar8;
      }
      fVar1 = (fVar3 + fVar2) * fVar8;
      fVar9 = (fVar4 - fVar5) * fVar8;
      fVar8 = (fVar6 + fVar7) * fVar8;
      goto LAB_00491d38;
    }
    fVar10 = SQRT((fVar1 - (fVar9 + fVar8)) + DAT_00491d48);
    fVar1 = fVar10 * DAT_00491d4c;
    if (fVar10 != DAT_00491d44) {
      fVar10 = DAT_00491d4c / fVar10;
    }
    fVar9 = (fVar6 - fVar7) * fVar10;
    fVar8 = (fVar5 + fVar4) * fVar10;
    fVar10 = (fVar2 + fVar3) * fVar10;
  }
  else {
    fVar9 = SQRT(fVar10 + DAT_00491d48);
    fVar1 = DAT_00491d4c / fVar9;
    fVar9 = fVar9 * DAT_00491d4c;
    fVar8 = (fVar2 - fVar3) * fVar1;
    fVar10 = (fVar4 - fVar5) * fVar1;
    fVar1 = (fVar6 - fVar7) * fVar1;
  }
LAB_00491d38:
  param_1[3] = fVar9;
  *param_1 = fVar8;
  param_1[1] = fVar10;
  param_1[2] = fVar1;
  return;
}

