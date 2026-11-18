#include "ghidra_types.h"

extern float DAT_0057f070;
extern float DAT_0057f074;
extern float DAT_0057f078;
extern float DAT_0057f07c;

// USA 0057EFC0 <- EU 0057EF98 (Ghidra, non-matching)
// GLOBAL DAT_0057f070 float
// GLOBAL DAT_0057f074 float
// GLOBAL DAT_0057f078 float
// GLOBAL DAT_0057f07c float

undefined4 func_0057EFC0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = DAT_0057f074;
  fVar4 = DAT_0057f070;
  fVar2 = DAT_0057f070 / (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa4));
  *param_2 = *(float *)(param_1 + 0x94) * fVar2 * DAT_0057f074;
  fVar1 = DAT_0057f078;
  param_2[1] = DAT_0057f078;
  param_2[2] = (*(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xa8)) * fVar2;
  param_2[3] = fVar1;
  fVar2 = *(float *)(param_1 + 0x9c);
  fVar5 = *(float *)(param_1 + 0xa0);
  param_2[4] = fVar1;
  fVar2 = fVar4 / (fVar2 - fVar5);
  param_2[5] = *(float *)(param_1 + 0x94) * fVar2 * fVar3;
  param_2[6] = (*(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xa0)) * fVar2;
  param_2[7] = fVar1;
  fVar3 = *(float *)(param_1 + 0x98);
  fVar2 = *(float *)(param_1 + 0x94);
  param_2[8] = fVar1;
  param_2[9] = fVar1;
  fVar4 = fVar4 / (fVar3 - fVar2);
  param_2[10] = -(*(float *)(param_1 + 0x98) * fVar4);
  param_2[0xb] = -(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x94) * fVar4);
  fVar4 = DAT_0057f07c;
  param_2[0xc] = fVar1;
  param_2[0xd] = fVar1;
  param_2[0xe] = fVar4;
  param_2[0xf] = fVar1;
  return (undefined4)param_1;
}

