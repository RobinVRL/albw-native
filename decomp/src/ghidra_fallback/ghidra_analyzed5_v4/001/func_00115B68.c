#include "ghidra_types.h"

extern float DAT_00115bf4;
extern float DAT_00115c04;
extern float DAT_00115c08;
extern float DAT_00115c0c;
extern float *DAT_00115c10;

// USA 00115B68 <- EU 00115B68 (Ghidra, non-matching)
// GLOBAL DAT_00115bf4 float
// GLOBAL DAT_00115c04 float
// GLOBAL DAT_00115c08 float
// GLOBAL DAT_00115c0c float
// GLOBAL DAT_00115c10 float *

undefined4 func_00115B68(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar4 = *param_3;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = DAT_00115c04 + fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  if (DAT_00115bf4 < fVar7) {
    fVar7 = SQRT(fVar7 * DAT_00115c08);
    fVar8 = DAT_00115c04 / fVar7;
    fVar7 = fVar7 * DAT_00115c0c;
    *param_1 = (fVar2 * fVar6 - fVar3 * fVar5) * fVar8;
    param_1[1] = (fVar3 * fVar4 - fVar1 * fVar6) * fVar8;
    param_1[2] = (fVar1 * fVar5 - fVar2 * fVar4) * fVar8;
    param_1[3] = fVar7;
    return 1;
  }
  fVar1 = DAT_00115c10[1];
  fVar2 = DAT_00115c10[2];
  fVar3 = DAT_00115c10[3];
  *param_1 = *DAT_00115c10;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return 0;
}

