#include "ghidra_types.h"

extern float DAT_00447948;
extern float DAT_0044794c;
extern float DAT_00447950;

// USA 004478BC <- EU 00447894 (Ghidra, non-matching)
// GLOBAL DAT_00447948 float
// GLOBAL DAT_0044794c float
// GLOBAL DAT_00447950 float

void func_004478BC(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x218);
  if ((iVar1 != 0) && (**(int **)(param_1 + 0x1c) != 0)) {
    fVar2 = *(float *)(iVar1 + 0x3c) * *(float *)(iVar1 + 0x48) * DAT_00447948;
    fVar3 = *(float *)(iVar1 + 0x40) * *(float *)(iVar1 + 0x5c) * DAT_00447948;
    fVar4 = *(float *)(iVar1 + 0x54) + fVar2 + DAT_0044794c;
    fVar2 = (*(float *)(iVar1 + 0x54) - fVar2) + DAT_0044794c;
    fVar5 = *(float *)(iVar1 + 100) + fVar3 + DAT_00447950;
    fVar3 = (*(float *)(iVar1 + 100) - fVar3) + DAT_00447950;
    if (fVar4 <= fVar2) {
      *(float *)(param_1 + 0x404) = fVar4;
      *(float *)(param_1 + 0x40c) = fVar2;
    }
    else {
      *(float *)(param_1 + 0x404) = fVar2;
      *(float *)(param_1 + 0x40c) = fVar4;
    }
    if (fVar3 < fVar5) {
      *(float *)(param_1 + 0x408) = fVar3;
      *(float *)(param_1 + 0x410) = fVar5;
    }
    else {
      *(float *)(param_1 + 0x408) = fVar5;
      *(float *)(param_1 + 0x410) = fVar3;
    }
  }
  return;
}

