#include "ghidra_types.h"

extern float DAT_00392a74;
extern float DAT_00392a78;
extern float DAT_00392a7c;
extern float DAT_00392a80;
extern float DAT_00392a84;

// USA 003929C4 <- EU 003929A0 (Ghidra, non-matching)
// GLOBAL DAT_00392a74 float
// GLOBAL DAT_00392a78 float
// GLOBAL DAT_00392a7c float
// GLOBAL DAT_00392a80 float
// GLOBAL DAT_00392a84 float

undefined4 func_003929C4(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_00392a80;
  uVar4 = (uint)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    uVar2 = 1;
  }
  else {
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    fVar5 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = *(float *)param_1[1];
    fVar6 = fVar6 + (DAT_00392a74 - fVar6) * (DAT_00392a78 / fVar5);
    *(float *)param_1[1] = fVar6;
    *(float *)(param_1[1] + 8) = fVar6;
    *(float *)(param_1[1] + 4) = fVar6;
    fVar5 = *(float *)(param_1[2] + 4) - DAT_00392a7c;
    if (fVar5 < fVar1) {
      fVar5 = fVar1;
    }
    *(float *)(param_1[2] + 4) = fVar5;
    fVar1 = DAT_00392a84;
    *(float *)param_1[2] = *(float *)param_1[2] * DAT_00392a84;
    *(float *)(param_1[2] + 8) = *(float *)(param_1[2] + 8) * fVar1;
    cVar3 = (char)param_1[3] + -1;
    *(char *)(param_1 + 3) = cVar3;
    if ((cVar3 == '\0') && ((char)param_1[4] != '\0')) {
      (**(code **)(*(int *)(*param_1 + 800) + 0x34))((int *)(*param_1 + 800));
    }
    uVar2 = 0;
  }
  return uVar2;
}

