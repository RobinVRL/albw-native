#include "ghidra_types.h"

extern float DAT_004d8624;

// USA 004D8548 <- EU 004D8520 (Ghidra, non-matching)
// GLOBAL DAT_004d8624 float

void func_004D8548(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1,
                  float fparam_2,float fparam_3,float fparam_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_004d8624;
  fVar2 = *param_2;
  if (fVar2 == *param_3) {
    *param_1 = fVar2;
  }
  else {
    fVar3 = (fparam_0 - fparam_1) / (fparam_3 - fparam_1);
    fVar5 = fVar3 * fVar3 - fVar3;
    fVar4 = fVar5 * fVar3;
    fVar3 = fVar3 * fVar3 - fVar4 * DAT_004d8624;
    *param_1 = (fVar2 - fVar3 * fVar2) + fVar3 * *param_3 + (fVar4 - fVar5) * fparam_2 +
               fVar4 * fparam_4;
  }
  fVar2 = param_2[1];
  if (fVar2 == param_3[1]) {
    param_1[1] = fVar2;
  }
  else {
    fVar3 = (fparam_0 - fparam_1) / (fparam_3 - fparam_1);
    fVar4 = fVar3 * fVar3 - fVar3;
    fVar5 = fVar4 * fVar3;
    fVar3 = fVar3 * fVar3 - fVar5 * fVar1;
    param_1[1] = (fVar2 - fVar3 * fVar2) + fVar3 * param_3[1] + (fVar5 - fVar4) * fparam_2 +
                 fVar5 * fparam_4;
  }
  fVar2 = param_2[2];
  if (fVar2 == param_3[2]) {
    param_1[2] = fVar2;
  }
  else {
    fVar3 = (fparam_0 - fparam_1) / (fparam_3 - fparam_1);
    fVar5 = fVar3 * fVar3 - fVar3;
    fVar4 = fVar5 * fVar3;
    fVar1 = fVar3 * fVar3 - fVar4 * fVar1;
    param_1[2] = (fVar2 - fVar1 * fVar2) + fVar1 * param_3[2] + (fVar4 - fVar5) * fparam_2 +
                 fVar4 * fparam_4;
  }
  return;
}

