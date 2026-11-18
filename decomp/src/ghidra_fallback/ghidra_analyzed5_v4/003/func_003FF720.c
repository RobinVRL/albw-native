#include "ghidra_types.h"

extern float DAT_003ff860;
extern float DAT_003ff864;
extern float DAT_003ff868;
extern float DAT_003ff86c;
extern float DAT_003ff870;
extern float DAT_003ff874;

// USA 003FF720 <- EU 003FF700 (Ghidra, non-matching)
// GLOBAL DAT_003ff860 float
// GLOBAL DAT_003ff864 float
// GLOBAL DAT_003ff868 float
// GLOBAL DAT_003ff86c float
// GLOBAL DAT_003ff870 float
// GLOBAL DAT_003ff874 float

float func_003FF720(float *param_1,int param_2,float fparam_0,float fparam_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  bVar8 = param_2 != 0;
  bVar7 = param_2 == 1;
  if (!bVar7) {
    bVar7 = fparam_0 == *param_1;
    bVar8 = *param_1 <= fparam_0;
  }
  if (!bVar8 || bVar7) {
    return param_1[1];
  }
  if (param_1[param_2 * 3 + -3] <= fparam_0) {
    return param_1[param_2 * 3 + -2];
  }
  uVar2 = param_2 - 1;
  uVar5 = 0;
  while (uVar4 = uVar2, uVar5 != uVar4 - 1 && uVar5 != uVar4) {
    uVar1 = (int)(uVar5 + uVar4) / 2;
    uVar2 = uVar1;
    if (param_1[uVar1 * 3] < fparam_0) {
      uVar2 = uVar4;
      uVar5 = uVar1;
    }
  }
  pfVar6 = param_1 + uVar4 * 3;
  fVar9 = *pfVar6;
  pfVar3 = param_1 + uVar5 * 3;
  if (DAT_003ff864 < fparam_0 - fVar9 && fparam_0 - fVar9 < DAT_003ff860) {
    if ((uVar4 < param_2 - 1U) && (fVar9 == pfVar6[3])) {
      fVar9 = pfVar6[4];
    }
    else {
      fVar9 = pfVar6[1];
    }
    return fVar9;
  }
  fVar11 = fparam_0 - *pfVar3;
  fVar10 = DAT_003ff868 / (fVar9 - *pfVar3);
  fVar12 = fVar11 * fVar11 * fVar10;
  fVar13 = fVar12 * fVar10;
  fVar9 = fVar11 * fVar13;
  return ((fVar9 * fVar10 * DAT_003ff86c - fVar13 * DAT_003ff870) + DAT_003ff868) * pfVar3[1] +
         pfVar6[1] * (fVar9 * fVar10 * DAT_003ff874 + fVar13 * DAT_003ff870) +
         pfVar3[2] * ((fVar9 - fVar12 * DAT_003ff86c) + fVar11) + pfVar6[2] * (fVar9 - fVar12);
}

