#include "ghidra_types.h"


// USA 002E11AC <- EU 002E1188 (Ghidra, non-matching)

void func_002E11AC(float *param_1,float *param_2,float param_3,float fparam_0)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (param_1[7] == 0.0) {
    *param_1 = fVar1;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = *param_2;
    param_1[4] = param_2[1];
    param_1[5] = param_2[2];
  }
  else {
    if (*param_1 <= fVar1) {
      fVar1 = *param_1;
    }
    *param_1 = fVar1;
    fVar1 = param_1[1];
    if (param_2[1] < param_1[1]) {
      fVar1 = param_2[1];
    }
    param_1[1] = fVar1;
    fVar1 = param_1[2];
    if (param_2[2] < param_1[2]) {
      fVar1 = param_2[2];
    }
    param_1[2] = fVar1;
    fVar1 = param_1[3];
    if (param_1[3] <= *param_2) {
      fVar1 = *param_2;
    }
    param_1[3] = fVar1;
    fVar1 = param_1[4];
    if (param_1[4] <= param_2[1]) {
      fVar1 = param_2[1];
    }
    param_1[4] = fVar1;
    fVar1 = param_1[5];
    if (param_1[5] <= param_2[2]) {
      fVar1 = param_2[2];
    }
    param_1[5] = fVar1;
  }
  if ((uint)ALBW_AS_U32(param_3) <= (uint)ALBW_AS_U32(param_1[7])) {
    param_3 = param_1[7];
  }
  param_1[7] = param_3;
  if (fparam_0 <= param_1[8]) {
    fparam_0 = param_1[8];
  }
  param_1[8] = fparam_0;
  return;
}

