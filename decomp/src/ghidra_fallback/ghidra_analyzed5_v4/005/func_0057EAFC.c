#include "ghidra_types.h"

extern float DAT_0057eb94;
extern float DAT_0057eb98;
extern float DAT_0057eb9c;

// USA 0057EAFC <- EU 0057EAD4 (Ghidra, non-matching)
// GLOBAL DAT_0057eb94 float
// GLOBAL DAT_0057eb98 float
// GLOBAL DAT_0057eb9c float

undefined4 func_0057EAFC(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_0057eb98;
  fVar5 = DAT_0057eb94;
  fVar4 = (*(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xa8)) * DAT_0057eb94;
  fVar3 = (*(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xa0)) * DAT_0057eb94;
  fVar6 = (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa4)) * DAT_0057eb94;
  *param_2 = DAT_0057eb98 / fVar6;
  fVar2 = DAT_0057eb9c;
  param_2[1] = DAT_0057eb9c;
  param_2[2] = fVar2;
  param_2[3] = -fVar4 / fVar6;
  fVar4 = *(float *)(param_1 + 0x9c);
  fVar6 = *(float *)(param_1 + 0xa0);
  param_2[4] = fVar2;
  fVar5 = (fVar4 - fVar6) * fVar5;
  param_2[5] = fVar1 / fVar5;
  param_2[6] = fVar2;
  param_2[7] = -fVar3 / fVar5;
  fVar4 = *(float *)(param_1 + 0x98);
  fVar5 = *(float *)(param_1 + 0x94);
  param_2[8] = fVar2;
  param_2[9] = fVar2;
  fVar4 = fVar1 / (fVar4 - fVar5);
  param_2[10] = -fVar4;
  param_2[0xb] = -(*(float *)(param_1 + 0x94) * fVar4);
  param_2[0xc] = fVar2;
  param_2[0xd] = fVar2;
  param_2[0xe] = fVar2;
  param_2[0xf] = fVar1;
  return (undefined4)param_1;
}

