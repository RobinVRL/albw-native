#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004356B4(int *param_1);
extern float DAT_00385c1c;
extern float DAT_00385c20;
extern float DAT_00385c24;
extern float DAT_00385c28;

// USA 00385B10 <- EU 00385AEC (Ghidra, non-matching)
// GLOBAL DAT_00385c1c float
// GLOBAL DAT_00385c20 float
// GLOBAL DAT_00385c24 float
// GLOBAL DAT_00385c28 float

undefined4 func_00385B10(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
          *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x130) * 0x30;
  local_40 = *(float *)(iVar4 + 0xc);
  local_3c = *(undefined4 *)(iVar4 + 0x1c);
  local_38 = *(undefined4 *)(iVar4 + 0x2c);
  local_28 = *(float *)(iVar3 + 0xc);
  local_24 = *(undefined4 *)(iVar3 + 0x1c);
  local_20 = *(undefined4 *)(iVar3 + 0x2c);
  func_00115C70(&local_1c,&local_28,&local_40);
  local_34 = local_1c;
  uStack_30 = uStack_18;
  uStack_2c = uStack_14;
  func_00115DC8(&local_34);
  func_00115D70(&local_1c,&local_34,DAT_00385c1c);
  local_50 = local_1c;
  uStack_4c = uStack_18;
  uStack_48 = uStack_14;
  func_00115C54(&local_1c,&local_40,&local_50);
  fVar5 = DAT_00385c24;
  fVar1 = DAT_00385c20;
  *(float *)(param_1 + 0x4c) = local_1c;
  *(undefined4 *)(param_1 + 0x50) = uStack_18;
  *(undefined4 *)(param_1 + 0x54) = uStack_14;
  fVar2 = DAT_00385c28;
  *(float *)(param_1 + 0x50) = *(float *)(*(int *)(param_1 + 4) + 0x3d4) + fVar1;
  fVar5 = *(float *)(param_1 + 0x148) * fVar5;
  *(float *)(param_1 + 0xa0) = fVar5;
  *(float *)(param_1 + 0xa4) = fVar5 * fVar2;
  *(float *)(param_1 + 0xa8) = fVar5;
  return func_004356B4((int *)(param_1 + 0x48));
}

