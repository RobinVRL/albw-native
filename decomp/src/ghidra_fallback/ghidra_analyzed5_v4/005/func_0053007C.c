#include "ghidra_types.h"

extern float DAT_005300fc;
extern float DAT_00530100;

// USA 0053007C <- EU 00530054 (Ghidra, non-matching)
// GLOBAL DAT_005300fc float
// GLOBAL DAT_00530100 float

undefined4 func_0053007C(int param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(float *)(param_1 + 0x478) != *(float *)(param_1 + 0x49c)) ||
     (*(float *)(param_1 + 0x480) != *(float *)(param_1 + 0x4a4))) {
    fVar2 = *(float *)(param_1 + 0x49c) - *(float *)(param_1 + 0x478);
    fVar1 = *(float *)(param_1 + 0x3dc);
    if (fVar2 <= DAT_005300fc) {
      fVar2 = -fVar2;
    }
    if (fVar1 <= DAT_005300fc) {
      fVar1 = -fVar1;
    }
    if (fVar2 <= fVar1 * DAT_00530100) {
      fVar1 = *(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x480);
      fVar2 = *(float *)(param_1 + 0x3e4);
      if (fVar1 <= DAT_005300fc) {
        fVar1 = -fVar1;
      }
      if (fVar2 <= DAT_005300fc) {
        fVar2 = -fVar2;
      }
      if (fVar1 <= fVar2 * DAT_00530100) {
        return 1;
      }
    }
  }
  return 0;
}

