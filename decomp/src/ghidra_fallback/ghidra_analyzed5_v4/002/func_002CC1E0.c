#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_002CBFF4(int param_1,float param_2,float *param_3,float fparam_0,float fparam_1);
extern int func_004905E0(float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern float DAT_002cc42c;
extern float DAT_002cc430;
extern float DAT_002cc434;
extern float DAT_002cc438;
extern float DAT_002cc43c;

// USA 002CC1E0 <- EU 002CC1BC (Ghidra, non-matching)
// GLOBAL DAT_002cc42c float
// GLOBAL DAT_002cc430 float
// GLOBAL DAT_002cc434 float
// GLOBAL DAT_002cc438 float
// GLOBAL DAT_002cc43c float

void func_002CC1E0(int param_1)

{
  int iVar1;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(undefined4 *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define fStack_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x40))
  #define fStack_5c (*(float *)(albw_frame + 0x44))
  #define afStack_58 ((float *)(albw_frame + 0x48))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x70))
  #define afStack_2c ((float *)(albw_frame + 0x74))
  fparam_1 = DAT_002cc42c;
  func_002CBFF4(param_1,*(float *)(param_1 + 0xdb4),&local_88,*(float *)(param_1 + 0xdb8),
                DAT_002cc42c);
  func_002CBFF4(param_1,*(float *)(param_1 + 0xdb4),afStack_58,*(float *)(param_1 + 0xdb8),
                DAT_002cc430);
  func_002CBFF4(param_1,local_4c,afStack_2c,local_48,fparam_1);
  local_38 = *(float *)(param_1 + 0x3d0);
  uStack_34 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_30 = *(undefined4 *)(param_1 + 0x3d8);
  func_00115C54(&local_44,(float *)(param_1 + 0xda8),&local_88);
  local_98 = local_44;
  local_94 = local_40;
  local_90 = local_3c;
  func_00115C54(&local_44,&local_98,afStack_58);
  local_64 = local_44;
  uStack_60 = local_40;
  fStack_5c = local_3c;
  func_00115C54(&local_44,&local_64,afStack_2c);
  local_70 = local_44;
  uStack_6c = local_40;
  fStack_68 = local_3c;
  func_00115D88(&local_44,&local_70,DAT_002cc434);
  *(float *)(param_1 + 0x3d0) = local_44;
  *(undefined4 *)(param_1 + 0x3d4) = local_40;
  *(float *)(param_1 + 0x3d8) = local_3c;
  *(float *)(param_1 + 0xda8) = local_88;
  *(undefined4 *)(param_1 + 0xdac) = local_84;
  *(undefined4 *)(param_1 + 0xdb0) = local_80;
  *(undefined4 *)(param_1 + 0xdb4) = local_7c;
  *(undefined4 *)(param_1 + 0xdb8) = local_78;
  func_00115C70(&local_44,(float *)(param_1 + 0x3d0),&local_38);
  local_98 = local_44;
  local_94 = local_40;
  local_90 = local_3c;
  if (local_3c == DAT_002cc438 && local_44 == DAT_002cc438) {
    iVar1 = 0;
  }
  else if (local_3c < DAT_002cc438) {
    if (local_44 < DAT_002cc438) {
      if (local_44 < local_3c) {
        iVar1 = func_004905E0(local_3c / local_44);
        iVar1 = -0x40000000 - iVar1;
      }
      else {
        iVar1 = func_004905E0(local_44 / local_3c);
        iVar1 = iVar1 + -0x80000000;
      }
    }
    else {
      local_3c = -local_3c;
      if (local_3c < local_44) {
        iVar1 = func_004905E0(local_3c / local_44);
        iVar1 = iVar1 + 0x40000000;
      }
      else {
        iVar1 = func_004905E0(local_44 / local_3c);
        iVar1 = -0x80000000 - iVar1;
      }
    }
  }
  else if (local_44 < DAT_002cc438) {
    local_44 = -local_44;
    if (local_3c < local_44) {
      iVar1 = func_004905E0(local_3c / local_44);
      iVar1 = iVar1 + -0x40000000;
    }
    else {
      iVar1 = func_004905E0(local_44 / local_3c);
      iVar1 = -iVar1;
    }
  }
  else if (local_3c < local_44) {
    iVar1 = func_004905E0(local_3c / local_44);
    iVar1 = 0x40000000 - iVar1;
  }
  else {
    iVar1 = func_004905E0(local_44 / local_3c);
  }
  *(int *)(param_1 + 1000) = iVar1;
  func_0051D2CC((int *)(param_1 + 0x9e0),iVar1,DAT_002cc43c);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x9e0);
  return;
}

