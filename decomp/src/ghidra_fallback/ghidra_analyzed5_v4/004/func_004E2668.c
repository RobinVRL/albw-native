#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_004e2834;
extern float DAT_004e2838;
extern float DAT_004e283c;
extern float DAT_004e2840;
extern float DAT_004e2844;
extern float DAT_004e2848;
extern float DAT_004e284c;
extern undefined4 DAT_004e2850;
extern float DAT_004e2854;

// USA 004E2668 <- EU 004E2640 (Ghidra, non-matching)
// GLOBAL DAT_004e2834 float
// GLOBAL DAT_004e2838 float
// GLOBAL DAT_004e283c float
// GLOBAL DAT_004e2840 float
// GLOBAL DAT_004e2844 float
// GLOBAL DAT_004e2848 float
// GLOBAL DAT_004e284c float
// GLOBAL DAT_004e2850 undefined4
// GLOBAL DAT_004e2854 float

void func_004E2668(int param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(float *)(albw_frame + 0x4c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x54))
  local_6c = *param_2;
  local_64 = param_2[2];
  local_68 = DAT_004e2834;
  fVar4 = DAT_004e2834;
  func_00115DC8(&local_6c);
  local_58 = *(float *)(param_1 + 0x3dc);
  local_50 = *(float *)(param_1 + 0x3e4);
  local_54 = fVar4;
  func_00115DC8(&local_58);
  fVar3 = (DAT_004e2838 - (local_58 * local_6c + local_54 * local_68 + local_50 * local_64)) *
          DAT_004e283c;
  fVar2 = fVar4;
  if ((fVar4 <= fVar3) && (fVar2 = fVar3, DAT_004e2838 < fVar3)) {
    fVar2 = DAT_004e2838;
  }
  fVar3 = DAT_004e2844 + fVar2 * DAT_004e2840;
  fVar2 = fVar4;
  if ((fVar4 <= fVar3) && (fVar2 = fVar3, DAT_004e2838 < fVar3)) {
    fVar2 = DAT_004e2838;
  }
  fVar3 = local_6c * local_58 + local_68 * local_54 + local_64 * local_50;
  if (fVar3 <= fVar4) {
    fVar3 = -fVar3;
  }
  local_4c = fVar4;
  local_48 = fVar4;
  local_44 = fVar4;
  func_00115D70(&local_40,&local_6c,fVar3 * DAT_004e2848);
  local_30 = local_40;
  uStack_2c = uStack_3c;
  uStack_28 = local_38;
  func_00115C54(&local_40,&local_30,&local_58);
  local_4c = local_40;
  local_48 = ALBW_AS_F32(uStack_3c);
  local_44 = ALBW_AS_F32(local_38);
  func_00115DC8(&local_4c);
  *(bool *)(param_1 + 0x4e0) = fVar4 < local_50 * local_6c - local_58 * local_64;
  func_00115D70(&local_40,&local_4c,fVar2);
  local_24 = local_40;
  uStack_20 = uStack_3c;
  uStack_1c = local_38;
  func_00115D70(&local_40,&local_24,DAT_004e284c);
  uVar1 = DAT_004e2850;
  *(float *)(param_1 + 0x3dc) = local_40;
  *(undefined4 *)(param_1 + 0x3e4) = local_38;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x4f8) = local_38;
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x3dc);
  *(float *)(param_1 + 0x4f4) = fVar4;
  func_00115D70(&local_40,(float *)(param_1 + 0x4f0),DAT_004e2854);
  *(float *)(param_1 + 0x4f0) = local_40;
  *(undefined4 *)(param_1 + 0x4f4) = uStack_3c;
  *(undefined4 *)(param_1 + 0x4f8) = local_38;
  return;
}

