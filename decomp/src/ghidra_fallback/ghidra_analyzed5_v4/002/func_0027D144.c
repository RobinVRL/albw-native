#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_0027d298;
extern float DAT_0027d29c;
extern float DAT_0027d2a0;
extern float DAT_0027d2a4;
extern undefined4 DAT_0027d2a8;

// USA 0027D144 <- EU 0027D16C (Ghidra, non-matching)
// GLOBAL DAT_0027d298 float
// GLOBAL DAT_0027d29c float
// GLOBAL DAT_0027d2a0 float
// GLOBAL DAT_0027d2a4 float
// GLOBAL DAT_0027d2a8 undefined4

void func_0027D144(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  fVar2 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x58c) + -1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_0027d298 * DAT_0027d29c;
  if (fVar2 < DAT_0027d2a0) {
    fVar2 = DAT_0027d2a0;
  }
  fVar2 = DAT_0027d2a4 + fVar2;
  fVar3 = DAT_0027d298;
  fparam_0 = DAT_0027d29c;
  func_004D80A4(&local_50,*(uint *)(param_1 + 1000),DAT_0027d2a4);
  local_4c = DAT_0027d2a8;
  local_40 = DAT_0027d2a8;
  func_004D80A4(&local_44,*(uint *)(param_1 + 1000),fVar2);
  local_38 = *(float *)(param_1 + 0x3d0);
  uStack_30 = *(undefined4 *)(param_1 + 0x3d8);
  local_34 = *(float *)(param_1 + 0x3d4) + fVar3;
  func_00115C54(&local_50,&local_50,&local_38);
  func_00115C54(&local_44,&local_44,&local_38);
  iVar1 = *(int *)(param_1 + 0x574);
  *(float *)(iVar1 + 0x58) = local_44;
  *(undefined4 *)(iVar1 + 0x5c) = local_40;
  *(undefined4 *)(iVar1 + 0x60) = uStack_3c;
  *(float *)(iVar1 + 100) = local_50;
  *(undefined4 *)(iVar1 + 0x68) = local_4c;
  *(undefined4 *)(iVar1 + 0x6c) = uStack_48;
  *(float *)(iVar1 + 0x70) = fVar3;
  iVar1 = *(int *)(param_1 + 0x574);
  func_00115C54(&local_2c,&local_44,&local_50);
  local_5c = local_2c;
  uStack_58 = uStack_28;
  uStack_54 = uStack_24;
  func_00115D88(&local_2c,&local_5c,fparam_0);
  *(float *)(iVar1 + 4) = local_2c;
  *(undefined4 *)(iVar1 + 8) = uStack_28;
  *(undefined4 *)(iVar1 + 0xc) = uStack_24;
  return;
}

