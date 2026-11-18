#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00215F70(int param_1);
extern undefined4 DAT_002159dc;
extern float DAT_002159e0;
extern float DAT_002159e4;
extern float DAT_002159e8;

// USA 002158D8 <- EU 002158D8 (Ghidra, non-matching)
// GLOBAL DAT_002159dc undefined4
// GLOBAL DAT_002159e0 float
// GLOBAL DAT_002159e4 float
// GLOBAL DAT_002159e8 float

void func_002158D8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_d8;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  iVar1 = *(int *)(param_1 + 0x964);
  fparam_0 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  if (*(int *)(param_1 + 0x960) <= iVar1) {
    iVar1 = iVar1 - *(int *)(param_1 + 0x960);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x95c) + iVar1 * 0x28 + 0x18);
  local_20 = *(float *)(iVar1 + 0xe4);
  local_1c = *(undefined4 *)(iVar1 + 0xf0);
  local_18 = *(undefined4 *)(iVar1 + 0xfc);
  uVar2 = DAT_002159dc;
  iVar1 = func_00215F70(param_1);
  if (iVar1 != 0) {
    fparam_0 = DAT_002159e0;
  }
  local_50 = *(float *)(param_1 + 0x3d0);
  uStack_4c = *(undefined4 *)(param_1 + 0x3d4);
  uStack_48 = *(undefined4 *)(param_1 + 0x3d8);
  if (iVar1 == 0) {
    fparam_0 = DAT_002159e4;
  }
  func_00115D70(&local_2c,&local_20,DAT_002159e8);
  local_38 = local_2c;
  uStack_34 = uStack_28;
  uStack_30 = uStack_24;
  func_00115D70(&local_2c,&local_38,fparam_0);
  local_44 = local_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  func_00115C54(&local_50,&local_50,&local_44);
  *(float *)(param_1 + 0x368) = local_50;
  *(undefined4 *)(param_1 + 0x36c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x370) = uStack_48;
  *(float *)(param_1 + 0x3d0) = local_50;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_4c;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_48;
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffc73;
  return;
}

