#include "ghidra_types.h"

extern float DAT_003e1e70;
extern float DAT_003e1e74;
extern float DAT_003e1e78;

// USA 003E1DC8 <- EU 003E1DA8 (Ghidra, non-matching)
// GLOBAL DAT_003e1e70 float
// GLOBAL DAT_003e1e74 float
// GLOBAL DAT_003e1e78 float

void func_003E1DC8(float *param_1,float *param_2,int param_3)

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
  
  fVar1 = DAT_003e1e78;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar5 = param_2[2];
  fVar4 = param_2[3];
  fVar6 = DAT_003e1e70 / (fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar8 = fVar3 * fVar6;
  fVar7 = fVar5 * fVar6;
  fVar10 = fVar2 * fVar2 * fVar6;
  fVar9 = fVar4 * fVar2 * fVar6;
  fVar6 = DAT_003e1e74 - (fVar3 * fVar8 + fVar5 * fVar7);
  fVar11 = DAT_003e1e74 - (fVar10 + fVar5 * fVar7);
  fVar5 = DAT_003e1e74 - (fVar10 + fVar3 * fVar8);
  if (param_3 != 0) {
    param_1[3] = DAT_003e1e78;
    param_1[7] = fVar1;
    param_1[0xb] = fVar1;
  }
  *param_1 = fVar6;
  param_1[4] = fVar2 * fVar8 + fVar4 * fVar7;
  param_1[5] = fVar11;
  param_1[6] = fVar3 * fVar7 - fVar9;
  param_1[8] = fVar2 * fVar7 - fVar4 * fVar8;
  param_1[9] = fVar3 * fVar7 + fVar9;
  param_1[10] = fVar5;
  param_1[1] = fVar2 * fVar8 - fVar4 * fVar7;
  param_1[2] = fVar2 * fVar7 + fVar4 * fVar8;
  return;
}

