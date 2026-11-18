#include "ghidra_types.h"


// USA 004212DC <- EU 004212BC (Ghidra, non-matching)

float * func_004212DC(float *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  uVar1 = 1;
  *param_1 = *param_2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  param_1[3] = *param_2;
  param_1[4] = fVar3;
  param_1[5] = fVar4;
  if (1 < param_3) {
    do {
      pfVar2 = param_2 + uVar1 * 3;
      fVar3 = *pfVar2;
      if (fVar3 < *param_1) {
        *param_1 = fVar3;
      }
      else {
        if (fVar3 <= param_1[3]) {
          fVar3 = param_1[3];
        }
        param_1[3] = fVar3;
      }
      fVar3 = pfVar2[1];
      if (fVar3 < param_1[1]) {
        param_1[1] = fVar3;
      }
      else {
        if (fVar3 <= param_1[4]) {
          fVar3 = param_1[4];
        }
        param_1[4] = fVar3;
      }
      fVar3 = pfVar2[2];
      if (fVar3 < param_1[2]) {
        param_1[2] = fVar3;
      }
      else {
        if (fVar3 <= param_1[5]) {
          fVar3 = param_1[5];
        }
        param_1[5] = fVar3;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return param_1;
}

