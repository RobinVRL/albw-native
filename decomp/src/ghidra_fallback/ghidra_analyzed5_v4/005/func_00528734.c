#include "ghidra_types.h"

extern int DAT_005287c0;
extern float DAT_005287c4;
extern float DAT_005287c8;

// USA 00528734 <- EU 0052870C (Ghidra, non-matching)
// GLOBAL DAT_005287c0 int
// GLOBAL DAT_005287c4 float
// GLOBAL DAT_005287c8 float

float func_00528734(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40c) + 0x24);
  iVar2 = *(int *)(iVar1 + 0x14) + *(int *)(param_1 + 0x930) * 0x30;
  fVar4 = *(float *)(iVar2 + 0xc) - *param_2;
  fVar3 = *(float *)(iVar2 + 0x2c) - param_2[2];
  if (param_3 == 0) {
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
  }
  else {
    fVar5 = *(float *)(*(int *)(iVar1 + 0x14) + *(int *)(param_1 + 0x930) * 0x30 + 0x1c) -
            param_2[1];
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  }
  fVar3 = SQRT(fVar3) / (*(float *)(DAT_005287c0 + 8) * DAT_005287c4);
  if (DAT_005287c8 < fVar3) {
    fVar3 = DAT_005287c8;
  }
  return fVar3;
}

