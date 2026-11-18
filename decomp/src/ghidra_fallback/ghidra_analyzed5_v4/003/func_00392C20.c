#include "ghidra_types.h"

extern float DAT_00392ca8;
extern float DAT_00392cac;
extern float DAT_00392cb0;
extern float DAT_00392cb4;
extern float DAT_00392cb8;

// USA 00392C20 <- EU 00392BFC (Ghidra, non-matching)
// GLOBAL DAT_00392ca8 float
// GLOBAL DAT_00392cac float
// GLOBAL DAT_00392cb0 float
// GLOBAL DAT_00392cb4 float
// GLOBAL DAT_00392cb8 float

undefined4 func_00392C20(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_00392cb4;
  uVar3 = (uint)*(byte *)(param_1 + 0xc);
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  else {
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = **(float **)(param_1 + 4);
    fVar5 = fVar5 + (DAT_00392ca8 - fVar5) * (DAT_00392cac / fVar4);
    **(float **)(param_1 + 4) = fVar5;
    *(float *)(*(int *)(param_1 + 4) + 8) = fVar5;
    *(float *)(*(int *)(param_1 + 4) + 4) = fVar5;
    fVar4 = *(float *)(*(int *)(param_1 + 8) + 4) - DAT_00392cb0;
    if (fVar4 < fVar1) {
      fVar4 = fVar1;
    }
    *(float *)(*(int *)(param_1 + 8) + 4) = fVar4;
    fVar1 = DAT_00392cb8;
    **(float **)(param_1 + 8) = **(float **)(param_1 + 8) * DAT_00392cb8;
    *(float *)(*(int *)(param_1 + 8) + 8) = *(float *)(*(int *)(param_1 + 8) + 8) * fVar1;
    *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + -1;
    uVar2 = 0;
  }
  return uVar2;
}

