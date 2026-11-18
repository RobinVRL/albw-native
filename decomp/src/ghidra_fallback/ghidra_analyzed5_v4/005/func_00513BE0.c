#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_00513c98;
extern undefined4 DAT_00513c9c;
extern undefined4 DAT_00513ca0;
extern undefined4 DAT_00513ca4;
extern float DAT_00513ca8;

// USA 00513BE0 <- EU 00513BB8 (Ghidra, non-matching)
// GLOBAL DAT_00513c98 float
// GLOBAL DAT_00513c9c undefined4
// GLOBAL DAT_00513ca0 undefined4
// GLOBAL DAT_00513ca4 undefined4
// GLOBAL DAT_00513ca8 float

void func_00513BE0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  local_58 = DAT_00513c98;
  local_54 = DAT_00513c98;
  local_4c = DAT_00513c98;
  local_48 = DAT_00513c98;
  local_50 = DAT_00513c9c;
  local_44 = DAT_00513ca0;
  func_00491938(afStack_40,*(uint *)(param_1 + 0x4c4),*(uint *)(param_1 + 1000),0);
  func_00115D18(&local_58,afStack_40,&local_58);
  func_00115D18(&local_4c,afStack_40,&local_4c);
  func_00115C54(&local_58,&local_58,(float *)(param_1 + 0x3d0));
  func_00115C54(&local_4c,&local_4c,(float *)(param_1 + 0x3d0));
  uVar1 = DAT_00513ca4;
  iVar2 = *(int *)(param_1 + 0x4d0);
  *(float *)(iVar2 + 0x58) = local_58;
  *(float *)(iVar2 + 0x5c) = local_54;
  *(undefined4 *)(iVar2 + 0x60) = local_50;
  *(float *)(iVar2 + 100) = local_4c;
  *(float *)(iVar2 + 0x68) = local_48;
  *(undefined4 *)(iVar2 + 0x6c) = local_44;
  *(undefined4 *)(iVar2 + 0x70) = uVar1;
  iVar2 = *(int *)(param_1 + 0x4d0);
  func_00115C54(&local_70,&local_58,&local_4c);
  local_64 = local_70;
  uStack_60 = uStack_6c;
  uStack_5c = uStack_68;
  func_00115D88(&local_70,&local_64,DAT_00513ca8);
  *(float *)(iVar2 + 4) = local_70;
  *(undefined4 *)(iVar2 + 8) = uStack_6c;
  *(undefined4 *)(iVar2 + 0xc) = uStack_68;
  return;
}

