#include "ghidra_types.h"

extern float DAT_0011ff60;
extern float DAT_0011ff64;

// USA 0011FE98 <- EU 0011FE98 (Ghidra, non-matching)
// GLOBAL DAT_0011ff60 float
// GLOBAL DAT_0011ff64 float

void func_0011FE98(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_0011ff64;
  fVar1 = DAT_0011ff60;
  if (param_1 != (float *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[1] * fVar2 + param_2[2] * fVar1 + param_2[3] + *param_2 * fVar1;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[5] * fVar2 + param_2[6] * fVar1 + param_2[7] + param_2[4] * fVar1;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[9] * fVar2 + param_2[10] * fVar1 + param_2[0xb] + param_2[8] * fVar1;
  }
  return;
}

