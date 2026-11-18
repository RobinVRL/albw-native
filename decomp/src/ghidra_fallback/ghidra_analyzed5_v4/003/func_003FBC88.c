#include "ghidra_types.h"

extern float DAT_003fbd00;
extern float DAT_003fbd04;

// USA 003FBC88 <- EU 003FBC68 (Ghidra, non-matching)
// GLOBAL DAT_003fbd00 float
// GLOBAL DAT_003fbd04 float

void func_003FBC88(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = DAT_003fbd04;
  fVar1 = DAT_003fbd00;
  fVar6 = *param_2 * *(float *)(param_3 + 4) + param_2[1] * *(float *)(param_3 + 0x14) +
          param_2[2] * *(float *)(param_3 + 0x24);
  fVar7 = param_2[4] * *(float *)(param_3 + 4) + param_2[5] * *(float *)(param_3 + 0x14) +
          param_2[6] * *(float *)(param_3 + 0x24);
  fVar3 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar5 = DAT_003fbd04;
  fVar4 = DAT_003fbd00;
  if (fVar3 != DAT_003fbd00) {
    fVar4 = DAT_003fbd04 / SQRT(fVar3);
    fVar5 = fVar7 * fVar4;
    fVar4 = fVar6 * fVar4;
  }
  *param_1 = fVar5;
  param_1[5] = fVar5;
  param_1[1] = fVar4;
  param_1[10] = fVar2;
  param_1[2] = fVar1;
  param_1[6] = fVar1;
  param_1[8] = fVar1;
  param_1[9] = fVar1;
  param_1[4] = -fVar4;
  return;
}

