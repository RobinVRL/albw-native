#include "ghidra_types.h"

extern float func_0059069C(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_004098d8;

// USA 00409838 <- EU 00409818 (Ghidra, non-matching)
// GLOBAL DAT_004098d8 float

void func_00409838(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1,
                  float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_004098d8;
  fVar3 = DAT_004098d8;
  if (fparam_0 != DAT_004098d8) {
    fVar4 = *param_1;
    fVar1 = param_1[2];
    fVar3 = SQRT(fVar4 * fVar4 + DAT_004098d8 * DAT_004098d8 + fVar1 * fVar1);
    if (fparam_1 < fVar3) {
      fVar3 = fparam_1 / fVar3;
      fVar4 = fVar3 * fVar4;
      fVar1 = fVar3 * fVar1;
    }
    fparam_2 = param_1[2];
    fVar3 = SQRT(fVar4 * fVar4 + DAT_004098d8 * DAT_004098d8 + fVar1 * fVar1);
    fVar1 = (*param_1 * fVar3) / fparam_0;
    fVar3 = (fparam_2 * fVar3) / fparam_0;
  }
  fVar4 = DAT_004098d8;
  fVar2 = func_0059069C(fVar1,-fVar3,fparam_2,fparam_0);
  *param_2 = fVar2;
  *param_3 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) / fparam_1;
  return;
}

