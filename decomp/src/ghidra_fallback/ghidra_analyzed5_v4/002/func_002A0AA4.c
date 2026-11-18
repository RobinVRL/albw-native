#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002a0b8c;
extern float DAT_002a0b90;
extern float DAT_002a0b94;
extern float DAT_002a0b98;
extern float DAT_002a0b9c;
extern float DAT_002a0ba0;
extern float DAT_002a0ba4;
extern float DAT_002a0ba8;
extern float DAT_002a0bac;

// USA 002A0AA4 <- EU 002A0A80 (Ghidra, non-matching)
// GLOBAL DAT_002a0b8c float
// GLOBAL DAT_002a0b90 float
// GLOBAL DAT_002a0b94 float
// GLOBAL DAT_002a0b98 float
// GLOBAL DAT_002a0b9c float
// GLOBAL DAT_002a0ba0 float
// GLOBAL DAT_002a0ba4 float
// GLOBAL DAT_002a0ba8 float
// GLOBAL DAT_002a0bac float

void func_002A0AA4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  fVar3 = DAT_002a0b94;
  fVar1 = *(float *)(param_1 + 0x3e0) + DAT_002a0b8c;
  if (DAT_002a0b90 < fVar1) {
    fVar1 = DAT_002a0b90;
  }
  *(float *)(param_1 + 0x3e0) = fVar1;
  *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x3d4);
  fVar1 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x960);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x968);
  if (fVar3 < fVar1) {
    fVar1 = fVar3;
  }
  fVar1 = fVar1 * DAT_002a0b98;
  fVar3 = DAT_002a0b9c;
  if (*(int *)(param_1 + 0x95c) != 0) {
    local_20 = *(float *)(param_1 + 0x960);
    uStack_1c = *(undefined4 *)(param_1 + 0x964);
    uStack_18 = *(undefined4 *)(param_1 + 0x968);
    func_001512B4(*(int *)(param_1 + 0x95c),&local_20);
  }
  fVar2 = DAT_002a0ba0;
  if ((DAT_002a0ba4 < fVar1) && (fVar2 = fVar3, fVar1 < DAT_002a0ba0)) {
    fVar2 = (DAT_002a0bac * (fVar1 - DAT_002a0ba4)) / DAT_002a0ba8 + DAT_002a0ba0;
  }
  *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar2;
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar1)) {
    func_00661FE4((undefined4 *)(param_1 + 0x938),0);
  }
  return;
}

