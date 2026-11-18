#include "ghidra_types.h"

extern float DAT_00249614;
extern float DAT_00249618;

// USA 0024959C <- EU 0024959C (Ghidra, non-matching)
// GLOBAL DAT_00249614 float
// GLOBAL DAT_00249618 float

void func_0024959C(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  if (*(uint *)(param_1 + 0x4c8) < *(uint *)(param_1 + 0x4cc)) {
    iVar1 = *(uint *)(param_1 + 0x4cc) - *(uint *)(param_1 + 0x4c8);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = *(float *)(param_1 + 0x4d8);
    fVar3 = fVar3 + (DAT_00249614 - fVar3) * (DAT_00249618 / fVar2);
    *(float *)(param_1 + 0x4d8) = fVar3;
    if (*(uint *)(param_1 + 0x4c8) < *(uint *)(param_1 + 0x4cc)) {
      *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) + 1;
    }
    *(float *)(param_1 + 0x4ac) = fVar3;
    *(float *)(param_1 + 0x4b0) = fVar3;
    *(float *)(param_1 + 0x4b4) = fVar3;
  }
  return;
}

