#include "ghidra_types.h"

extern int func_00663E64(undefined4 *param_1,undefined1 param_2);
extern float DAT_002e52d8;
extern float DAT_002e52dc;
extern float DAT_002e52e0;

// USA 002E5268 <- EU 002E5244 (Ghidra, non-matching)
// GLOBAL DAT_002e52d8 float
// GLOBAL DAT_002e52dc float
// GLOBAL DAT_002e52e0 float

undefined4 func_002E5268(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_002e52d8;
  fVar3 = DAT_002e52d8 + (*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x908)) * DAT_002e52dc;
  *(float *)(param_1 + 0x4f0) = fVar3;
  fVar2 = DAT_002e52e0;
  if (fVar3 < fVar1) {
    *(float *)(param_1 + 0x4f0) = fVar1;
  }
  if (*(float *)(param_1 + 0x3e0) <= fVar2) {
    *(float *)(param_1 + 0x3dc) = fVar2;
    *(float *)(param_1 + 0x3e0) = fVar2;
    *(float *)(param_1 + 0x3e4) = fVar2;
    *(undefined1 *)(param_1 + 0x916) = 1;
    if (*(uint *)(param_1 + 0x8fc) <= *(uint *)(param_1 + 0x8f8)) {
      return func_00663E64((undefined4 *)(param_1 + 0x8cc),3);
    }
    *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8f8) + 1;
    return 0;
  }
  return 0;
}

