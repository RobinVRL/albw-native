#include "ghidra_types.h"

extern float DAT_0049f290;
extern float DAT_0049f294;
extern float DAT_0049f298;

// USA 0049F090 <- EU 0049F068 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// GLOBAL DAT_0049f290 float
// GLOBAL DAT_0049f294 float
// GLOBAL DAT_0049f298 float

undefined4
func_0049F090(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6,float fparam_0,float fparam_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2;
  fVar5 = *param_1;
  if ((fVar3 < DAT_0049f294) || (DAT_0049f290 < fVar3)) {
    fVar4 = (*param_3 - fVar5) * (DAT_0049f298 / fVar3);
    fVar5 = (*param_4 - fVar5) * (DAT_0049f298 / fVar3);
    fVar3 = fVar4;
    if (fVar5 < fVar4) {
      fVar3 = fVar5;
      fVar5 = fVar4;
    }
    if (fparam_0 < fVar3) {
      fparam_0 = fVar3;
    }
    if (fVar5 < fparam_1) {
      fparam_1 = fVar5;
    }
    if (fparam_1 < fparam_0) {
      return 0;
    }
  }
  else {
    if (fVar5 < *param_3) {
      return 0;
    }
    if (*param_4 < fVar5) {
      return 0;
    }
  }
  fVar3 = param_2[1];
  if ((fVar3 < DAT_0049f294) || (DAT_0049f290 < fVar3)) {
    fVar4 = (param_3[1] - param_1[1]) * (DAT_0049f298 / fVar3);
    fVar5 = (param_4[1] - param_1[1]) * (DAT_0049f298 / fVar3);
    fVar3 = fVar4;
    if (fVar5 < fVar4) {
      fVar3 = fVar5;
      fVar5 = fVar4;
    }
    if (fparam_0 < fVar3) {
      fparam_0 = fVar3;
    }
    if (fVar5 < fparam_1) {
      fparam_1 = fVar5;
    }
    if (fparam_1 < fparam_0) {
      return 0;
    }
  }
  else {
    if (param_1[1] < param_3[1]) {
      return 0;
    }
    if (param_4[1] < param_1[1]) {
      return 0;
    }
  }
  fVar3 = param_2[2];
  bVar1 = DAT_0049f294 == fVar3;
  bVar2 = fVar3 <= DAT_0049f294;
  if (!bVar2 || bVar1) {
    bVar1 = fVar3 == DAT_0049f290;
    bVar2 = DAT_0049f290 <= fVar3;
  }
  if (bVar2 && !bVar1) {
    fVar4 = (param_3[2] - param_1[2]) * (DAT_0049f298 / fVar3);
    fVar5 = (param_4[2] - param_1[2]) * (DAT_0049f298 / fVar3);
    fVar3 = fVar4;
    if (fVar5 < fVar4) {
      fVar3 = fVar5;
      fVar5 = fVar4;
    }
    if (fparam_0 < fVar3) {
      fparam_0 = fVar3;
    }
    if (fVar5 < fparam_1) {
      fparam_1 = fVar5;
    }
    if (fparam_1 < fparam_0) {
      return 0;
    }
  }
  else if ((param_1[2] < param_3[2]) || (param_4[2] < param_1[2])) {
    return 0;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fparam_0;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fparam_1;
  }
  return 1;
}

