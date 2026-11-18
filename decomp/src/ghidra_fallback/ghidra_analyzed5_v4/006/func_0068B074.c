#include "ghidra_types.h"

extern float DAT_0068b104;
extern float DAT_0068b108;

// USA 0068B074 <- EU 0068B04C (Ghidra, non-matching)
// GLOBAL DAT_0068b104 float
// GLOBAL DAT_0068b108 float

undefined4 func_0068B074(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar2 = param_1[3] * fVar3 + param_1[4] * fVar4 + param_1[5] * fVar5;
  if ((DAT_0068b108 <= fVar2) && (fVar2 <= DAT_0068b104)) {
    fVar2 = (fVar3 * *param_1 + fVar4 * *(float *)(param_1 + 1) +
            fVar5 * *(float *)((char *)(param_1 + 1) + 4)) - param_2[3];
    if ((fVar2 < DAT_0068b108) || (DAT_0068b104 < fVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 3;
    }
    return uVar1;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = -((fVar3 * *param_1 + fVar4 * param_1[1] + fVar5 * param_1[2]) - param_2[3]) / fVar2;
  }
  return 1;
}

