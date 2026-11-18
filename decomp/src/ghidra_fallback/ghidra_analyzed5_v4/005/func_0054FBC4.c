#include "ghidra_types.h"

extern float DAT_0054fc54;
extern float DAT_0054fc58;

// USA 0054FBC4 <- EU 0054FB9C (Ghidra, non-matching)
// GLOBAL DAT_0054fc54 float
// GLOBAL DAT_0054fc58 float

uint func_0054FBC4(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 != (float *)0x0) {
    *param_3 = DAT_0054fc54;
  }
  uVar3 = 0xffffffff;
  uVar1 = 0;
  fVar5 = DAT_0054fc58;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar2 = param_1 + 0x10;
      if (uVar1 < 0x14) {
        iVar2 = iVar2 + uVar1 * 0x34;
      }
      fVar4 = *(float *)(iVar2 + 0x18) - *param_2;
      fVar6 = *(float *)(iVar2 + 0x20) - param_2[2];
      fVar6 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
      fVar4 = fVar5;
      if ((fVar6 < fVar5) && (uVar3 = uVar1, fVar4 = fVar6, param_3 != (float *)0x0)) {
        *param_3 = fVar5 - fVar6;
      }
      uVar1 = uVar1 + 1;
      fVar5 = fVar4;
    } while ((int)uVar1 < *(int *)(param_1 + 0xc));
  }
  if (*(uint *)(param_1 + 0xc) <= uVar3) {
    uVar3 = 0;
  }
  return uVar3;
}

