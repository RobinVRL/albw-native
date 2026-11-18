#include "ghidra_types.h"

extern float DAT_00327a20;
extern float DAT_00327a24;

// USA 00327978 <- EU 00327954 (Ghidra, non-matching)
// GLOBAL DAT_00327a20 float
// GLOBAL DAT_00327a24 float

undefined4 func_00327978(int param_1)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = DAT_00327a24;
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x14) * DAT_00327a20;
  fVar7 = -(*(float *)(param_1 + 0x14) * DAT_00327a20);
  fVar6 = *(float *)(param_1 + 0x1c) * DAT_00327a20;
  fVar8 = -(*(float *)(param_1 + 0x1c) * DAT_00327a20);
  pfVar3 = (float *)(param_1 + 0x40c);
  bVar1 = fVar4 < DAT_00327a24;
  if (fVar5 < fVar7) {
    *pfVar3 = fVar5;
    *(float *)(param_1 + 0x418) = fVar7;
  }
  else {
    *pfVar3 = fVar7;
    *(float *)(param_1 + 0x418) = fVar5;
  }
  if (bVar1) {
    *(float *)(param_1 + 0x410) = fVar4;
    *(float *)(param_1 + 0x41c) = fVar2;
  }
  else {
    *(float *)(param_1 + 0x410) = fVar2;
    *(float *)(param_1 + 0x41c) = fVar4;
  }
  if (fVar6 < fVar8) {
    *(float *)(param_1 + 0x414) = fVar6;
    *(float *)(param_1 + 0x420) = fVar8;
  }
  else {
    *(float *)(param_1 + 0x414) = fVar8;
    *(float *)(param_1 + 0x420) = fVar6;
  }
  *pfVar3 = *pfVar3 + *(float *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x410) = *(float *)(param_1 + 0x410) + *(float *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x414) = *(float *)(param_1 + 0x414) + *(float *)(param_1 + 0x3d8);
  *(float *)(param_1 + 0x418) = *(float *)(param_1 + 0x418) + *(float *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x41c) = *(float *)(param_1 + 0x41c) + *(float *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x420) = *(float *)(param_1 + 0x420) + *(float *)(param_1 + 0x3d8);
  return (undefined4)param_1;
}

