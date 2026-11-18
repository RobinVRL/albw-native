#include "ghidra_types.h"

extern float DAT_004c0388;
extern float DAT_004c038c;

// USA 004C0350 <- EU 004C0328 (Ghidra, non-matching)
// GLOBAL DAT_004c0388 float
// GLOBAL DAT_004c038c float

void func_004C0350(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((uint)*(byte *)(param_1 + 0x852) == (int)*(char *)(param_1 + 0x85c)) {
    fVar1 = *(float *)(param_1 + 0x8b8);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x8b4);
  }
  fVar2 = (fVar1 - DAT_004c0388) * DAT_004c038c;
  fVar3 = *(float *)(param_1 + 0x834);
  if (fVar2 < fVar1 - fVar3) {
    fVar1 = fVar3 + fVar2;
  }
  else if (fVar1 - fVar3 < -fVar2) {
    fVar1 = fVar3 - fVar2;
  }
  *(float *)(param_1 + 0x834) = fVar1;
  return;
}

