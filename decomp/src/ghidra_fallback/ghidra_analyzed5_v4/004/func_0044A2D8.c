#include "ghidra_types.h"

extern float DAT_0044a348;

// USA 0044A2D8 <- EU 0044A2B0 (Ghidra, non-matching)
// GLOBAL DAT_0044a348 float

float func_0044A2D8(int param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar5 = 0;
  fVar6 = DAT_0044a348;
  do {
    uVar4 = *(uint *)(param_1 + 0x1ac);
    if (uVar5 < uVar4) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar5 * 4);
    }
    else {
      iVar2 = 0;
    }
    uVar3 = (uint)*(byte *)(iVar2 + 0x6c);
    if (uVar3 != 0) {
      if (uVar5 < uVar4) {
        uVar1 = *(uint *)(param_1 + 0x1b4);
      }
      else {
        uVar3 = 0;
        uVar1 = uVar4;
      }
      if (uVar5 < uVar4) {
        uVar3 = *(uint *)(uVar1 + uVar5 * 4);
      }
      fVar8 = *(float *)(uVar3 + 0x90);
      fVar9 = *(float *)(uVar3 + 0x94);
      fVar10 = *param_2 - fVar8;
      fVar7 = param_2[1] - fVar9;
      fVar11 = SQRT(fVar10 * fVar10 + fVar7 * fVar7);
      if (fVar11 < fVar6) {
        if (param_3 != (float *)0x0) {
          *param_3 = fVar10;
          param_3[1] = fVar7;
        }
        fVar6 = fVar11;
        if (param_4 != (float *)0x0) {
          *param_4 = fVar8;
          param_4[1] = fVar9;
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x14);
  return fVar6;
}

