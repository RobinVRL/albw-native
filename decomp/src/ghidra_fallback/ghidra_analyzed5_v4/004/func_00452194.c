#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float DAT_004522cc;
extern float DAT_004522d0;
extern float DAT_004522d4;
extern float DAT_004522d8;
extern float DAT_004522dc;

// USA 00452194 <- EU 0045216C (Ghidra, non-matching)
// GLOBAL DAT_004522cc float
// GLOBAL DAT_004522d0 float
// GLOBAL DAT_004522d4 float
// GLOBAL DAT_004522d8 float
// GLOBAL DAT_004522dc float

void func_00452194(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_1c (*(float *)(albw_frame + 0x24))
  if (*(int *)(param_1 + 0x1d0) == 0) {
    return;
  }
  func_001119F4(local_38,(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x48));
  fVar2 = DAT_004522d4;
  fVar4 = *(float *)(*(int *)(param_1 + 0x1d0) + 0x40) * local_24 * DAT_004522cc;
  fVar3 = *(float *)(*(int *)(param_1 + 0x1d0) + 0x3c) * local_38[0] * DAT_004522cc;
  if ((uint)ALBW_AS_U32(DAT_004522d0) <= (uint)ALBW_AS_U32((local_1c + fVar4))) {
    fVar2 = (*(float *)(param_1 + 0x274) - *(float *)(param_1 + 0x26c)) * DAT_004522d4;
    fVar3 = (*(float *)(param_1 + 0x26c) + *(float *)(param_1 + 0x274)) * DAT_004522cc;
    *(float *)(param_1 + 0x26c) = fVar3 - fVar2;
    *(float *)(param_1 + 0x274) = fVar3 + fVar2;
    return;
  }
  if ((uint)ALBW_AS_U32((local_1c - fVar4)) < (uint)ALBW_AS_U32(DAT_004522d0)) {
    fVar5 = (local_1c - fVar4) + DAT_004522dc;
    fVar6 = local_2c + fVar3 + DAT_004522d8;
    fVar2 = (local_2c - fVar3) + DAT_004522d8;
    local_1c = local_1c + fVar4 + DAT_004522dc;
    if (fVar6 <= fVar2) {
      *(float *)(param_1 + 0x26c) = fVar6;
      *(float *)(param_1 + 0x274) = fVar2;
    }
    else {
      *(float *)(param_1 + 0x26c) = fVar2;
      *(float *)(param_1 + 0x274) = fVar6;
    }
    if (local_1c <= fVar5) {
      *(float *)(param_1 + 0x270) = local_1c;
      *(float *)(param_1 + 0x278) = fVar5;
      return;
    }
    *(float *)(param_1 + 0x270) = fVar5;
  }
  else {
    local_1c = local_1c + fVar4 + DAT_004522dc;
    fVar4 = local_2c + fVar3 + DAT_004522d8;
    fVar3 = (local_2c - fVar3) + DAT_004522d8;
    bVar1 = local_1c <= DAT_004522d4;
    if (fVar3 < fVar4) {
      *(float *)(param_1 + 0x26c) = fVar3;
      *(float *)(param_1 + 0x274) = fVar4;
    }
    else {
      *(float *)(param_1 + 0x26c) = fVar4;
      *(float *)(param_1 + 0x274) = fVar3;
    }
    if (bVar1) {
      *(float *)(param_1 + 0x270) = local_1c;
      *(float *)(param_1 + 0x278) = fVar2;
      return;
    }
    *(float *)(param_1 + 0x270) = fVar2;
  }
  *(float *)(param_1 + 0x278) = local_1c;
  return;
}

