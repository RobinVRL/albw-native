#include "ghidra_types.h"

extern float DAT_0067bb24;
extern float DAT_0067bb28;
extern float DAT_0067bb2c;
extern float DAT_0067bb30;
extern float DAT_0067bb34;

// USA 0067BA30 <- EU 0067BA08 (Ghidra, non-matching)
// GLOBAL DAT_0067bb24 float
// GLOBAL DAT_0067bb28 float
// GLOBAL DAT_0067bb2c float
// GLOBAL DAT_0067bb30 float
// GLOBAL DAT_0067bb34 float

undefined4 func_0067BA30(int *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1)

{
  char cVar1;
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
  
  fVar6 = *param_3 + *param_2 + fparam_0;
  fVar8 = param_3[2] + *param_2 + fparam_0;
  fVar4 = fVar6;
  if (fVar6 <= fparam_1) {
    fVar4 = fVar8;
  }
  if ((fVar6 > fparam_1 || fVar8 < fparam_1) || fparam_1 == fVar4) {
    return 0;
  }
  *param_1 = (int)(param_3 + 2);
  fVar3 = DAT_0067bb34;
  fVar2 = DAT_0067bb30;
  fVar9 = DAT_0067bb2c;
  fVar7 = DAT_0067bb28;
  fVar4 = DAT_0067bb24;
  cVar1 = *(char *)(param_2 + 3);
  if (cVar1 == '\0') {
    fVar7 = param_3[1];
    param_1[2] = (int)ALBW_AS_U32(fVar6);
    param_1[3] = (int)ALBW_AS_U32(fVar8);
    param_1[4] = (int)ALBW_AS_U32(fVar7);
    param_1[5] = (int)ALBW_AS_U32(fVar4);
    param_1[6] = (int)ALBW_AS_U32(fVar4);
  }
  else {
    if (cVar1 == '\x01') {
      fVar7 = param_3[1];
      fVar9 = param_3[3];
      param_1[2] = (int)ALBW_AS_U32(fVar6);
      param_1[3] = (int)ALBW_AS_U32(fVar8);
      param_1[4] = (int)ALBW_AS_U32(fVar7);
      param_1[5] = (int)ALBW_AS_U32(((fVar9 - fVar7) / (fVar8 - fVar6)));
      param_1[6] = (int)ALBW_AS_U32(fVar4);
      param_1[7] = (int)ALBW_AS_U32(fVar4);
      return 1;
    }
    if (cVar1 != '\x02') {
      return 1;
    }
    fVar5 = fVar8 - fVar6;
    fVar10 = param_3[1];
    fVar11 = param_3[3];
    param_1[2] = (int)ALBW_AS_U32(fVar6);
    param_1[3] = (int)ALBW_AS_U32(fVar8);
    fVar11 = fVar10 - fVar11;
    param_1[4] = (int)ALBW_AS_U32(fVar10);
    fVar7 = fVar7 / fVar5;
    param_1[5] = (int)ALBW_AS_U32(fVar4);
    fVar8 = fVar5 * fVar9 * fVar4;
    fVar6 = fVar5 * fVar4;
    fVar4 = (fVar11 * fVar2 + fVar5 * fVar4 + fVar5 * fVar4) * fVar7 * fVar7 * fVar7;
    param_1[6] = (int)ALBW_AS_U32((((fVar8 - fVar11 * fVar3) - fVar6) * fVar7 * fVar7));
  }
  param_1[7] = (int)ALBW_AS_U32(fVar4);
  return 1;
}

