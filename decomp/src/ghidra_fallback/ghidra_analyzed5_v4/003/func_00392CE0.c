#include "ghidra_types.h"

extern float DAT_00392d8c;
extern float DAT_00392d90;
extern float DAT_00392d94;

// USA 00392CE0 <- EU 00392CBC (Ghidra, non-matching)
// GLOBAL DAT_00392d8c float
// GLOBAL DAT_00392d90 float
// GLOBAL DAT_00392d94 float

undefined4 func_00392CE0(int *param_1,float fparam_0,float fparam_1)

{
  char cVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 3);
  if (uVar2 != 0) {
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = *(float *)param_1[1];
    fVar4 = fVar4 + (DAT_00392d8c - fVar4) * (DAT_00392d90 / fVar3);
    *(float *)param_1[1] = fVar4;
    *(float *)(param_1[1] + 8) = fVar4;
    *(float *)(param_1[1] + 4) = fVar4;
    fVar3 = DAT_00392d94;
    fVar4 = *(float *)(param_1[2] + 4) - fparam_0;
    if (fVar4 < -fparam_1) {
      fVar4 = -fparam_1;
    }
    *(float *)(param_1[2] + 4) = fVar4;
    *(float *)param_1[2] = *(float *)param_1[2] * fVar3;
    *(float *)(param_1[2] + 8) = *(float *)(param_1[2] + 8) * fVar3;
    cVar1 = (char)param_1[3] + -1;
    *(char *)(param_1 + 3) = cVar1;
    if ((cVar1 == '\0') && ((char)param_1[4] != '\0')) {
      (**(code **)(*(int *)(*param_1 + 800) + 0x34))((int *)(*param_1 + 800));
    }
    return 0;
  }
  return 1;
}

