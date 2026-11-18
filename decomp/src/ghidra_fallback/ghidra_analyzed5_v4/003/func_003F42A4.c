#include "ghidra_types.h"

extern float func_00590DEC(undefined4 param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1);
extern float DAT_003f43ac;
extern float DAT_003f43b0;
extern float DAT_003f43b4;
extern float DAT_003f43b8;

// USA 003F42A4 <- EU 003F4284 (Ghidra, non-matching)
// GLOBAL DAT_003f43ac float
// GLOBAL DAT_003f43b0 float
// GLOBAL DAT_003f43b4 float
// GLOBAL DAT_003f43b8 float

float func_003F42A4(uint *param_1,undefined4 param_2,undefined4 param_3,float fparam_0)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  pfVar3 = (float *)(param_1 + 5);
  if (*param_1 == 1) {
LAB_003f42e0:
    return ALBW_AS_F32(param_1[6]);
  }
  pfVar2 = pfVar3 + *param_1 * 2 + -2;
  if (param_1[3] == 0) {
    if (fparam_0 <= *pfVar3) goto LAB_003f42e0;
    if (*pfVar2 <= fparam_0) goto LAB_003f4360;
  }
  else {
    fparam_0 = func_00590DEC(pfVar2,param_1[3],param_3,fparam_0,*pfVar2);
    pfVar2 = pfVar3;
    if (fparam_0 <= *pfVar3) goto LAB_003f4360;
  }
  uVar5 = *param_1;
  iVar4 = -1;
  uVar1 = 0;
  if (uVar5 != 0) {
    do {
      if (fparam_0 < pfVar3[uVar1 * 2]) break;
      uVar1 = uVar1 + 1;
      iVar4 = iVar4 + 1;
    } while (uVar1 < uVar5);
  }
  pfVar2 = pfVar3 + iVar4 * 2;
  pfVar3 = pfVar2;
  if (uVar5 != iVar4 + 1U) {
    pfVar3 = pfVar2 + 2;
  }
  fVar6 = *pfVar3 - *pfVar2;
  if (fVar6 != DAT_003f43ac) {
    fVar6 = (fparam_0 - *pfVar2) / fVar6;
    if (param_1[1] == 1) {
      fVar6 = fVar6 * fVar6 * (DAT_003f43b4 - fVar6 * DAT_003f43b0);
    }
    return pfVar2[1] * (DAT_003f43b8 - fVar6) + pfVar3[1] * fVar6;
  }
LAB_003f4360:
  return pfVar2[1];
}

