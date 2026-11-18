#include "ghidra_types.h"

extern float DAT_0057f790;
extern float DAT_0057f794;
extern float DAT_0057f798;
extern float DAT_0057f79c;
extern float DAT_0057f7a0;

// USA 0057F6C0 <- EU 0057F698 (Ghidra, non-matching)
// GLOBAL DAT_0057f790 float
// GLOBAL DAT_0057f794 float
// GLOBAL DAT_0057f798 float
// GLOBAL DAT_0057f79c float
// GLOBAL DAT_0057f7a0 float

undefined4 func_0057F6C0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = DAT_0057f798;
  fVar2 = DAT_0057f790;
  fVar1 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8) * DAT_0057f790;
  fVar5 = fVar1 * *(float *)(param_1 + 0xac);
  fVar4 = *(float *)(param_1 + 0xb0) * fVar5;
  fVar5 = fVar5 * DAT_0057f794;
  fVar7 = fVar4 - fVar5;
  fVar5 = fVar5 + fVar4;
  fVar6 = *(float *)(param_1 + 0xb4) * fVar1;
  fVar8 = DAT_0057f798 / (fVar5 - fVar7);
  fVar4 = fVar1 * DAT_0057f794 + fVar6;
  fVar6 = fVar6 - fVar1 * DAT_0057f794;
  *param_2 = *(float *)(param_1 + 0x94) * fVar8 * DAT_0057f790;
  fVar1 = DAT_0057f79c;
  param_2[1] = DAT_0057f79c;
  param_2[2] = (fVar5 + fVar7) * fVar8;
  fVar5 = fVar3 / (fVar4 - fVar6);
  param_2[3] = fVar1;
  param_2[4] = fVar1;
  param_2[5] = *(float *)(param_1 + 0x94) * fVar5 * fVar2;
  param_2[6] = (fVar4 + fVar6) * fVar5;
  param_2[7] = fVar1;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar4 = *(float *)(param_1 + 0x94);
  param_2[8] = fVar1;
  param_2[9] = fVar1;
  fVar3 = fVar3 / (fVar2 - fVar4);
  param_2[10] = -(*(float *)(param_1 + 0x98) * fVar3);
  param_2[0xb] = -(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x94) * fVar3);
  fVar2 = DAT_0057f7a0;
  param_2[0xc] = fVar1;
  param_2[0xd] = fVar1;
  param_2[0xe] = fVar2;
  param_2[0xf] = fVar1;
  return (undefined4)param_1;
}

