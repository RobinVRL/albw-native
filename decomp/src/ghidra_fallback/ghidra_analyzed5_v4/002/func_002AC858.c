#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern float DAT_002ac8f8;
extern float DAT_002ac8fc;

// USA 002AC858 <- EU 002AC834 (Ghidra, non-matching)
// GLOBAL DAT_002ac8f8 float
// GLOBAL DAT_002ac8fc float

void func_002AC858(int param_1,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_20 = *(float *)(param_1 + 0x3c);
  local_18 = *(float *)(param_1 + 0x44);
  local_1c = DAT_002ac8f8;
  fVar3 = DAT_002ac8f8;
  func_00115DC8(&local_20);
  fVar1 = DAT_002ac8fc;
  fVar2 = *(float *)(*(int *)(param_1 + 0x34) + 0x590);
  if (local_20 * fVar2 < fVar3) {
    if (fVar2 <= fVar3) {
      fVar2 = -fVar2;
    }
    *(float *)(param_1 + 0x3c) =
         *(float *)(param_1 + 0x3c) *
         (fparam_0 + (DAT_002ac8fc - fparam_0) * (DAT_002ac8fc - fVar2));
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x34) + 0x598);
  if (local_18 * fVar2 < fVar3) {
    if (fVar2 <= fVar3) {
      fVar2 = -fVar2;
    }
    fVar2 = *(float *)(param_1 + 0x44) * (fparam_0 + (fVar1 - fparam_0) * (fVar1 - fVar2));
    *(float *)(param_1 + 0x44) = fVar2;
  }
  return;
}

