#include "ghidra_types.h"

extern float DAT_002809d8;
extern float DAT_002809dc;
extern float DAT_002809e0;
extern float DAT_002809e4;
extern float DAT_002809e8;

// USA 00280948 <- EU 00280970 (Ghidra, non-matching)
// GLOBAL DAT_002809d8 float
// GLOBAL DAT_002809dc float
// GLOBAL DAT_002809e0 float
// GLOBAL DAT_002809e4 float
// GLOBAL DAT_002809e8 float

void func_00280948(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x468);
  fVar1 = DAT_002809e0;
  if ((DAT_002809d8 < fVar2) && (fVar1 = DAT_002809e4, fVar2 < DAT_002809dc)) {
    fVar1 = (DAT_002809e8 * (fVar2 - DAT_002809d8)) / DAT_002809dc + DAT_002809e0;
  }
  *(float *)(param_1 + 0x458) = fVar1;
  *(float *)(param_1 + 0x45c) = fVar1;
  *(float *)(param_1 + 0x460) = fVar1;
  return;
}

