#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_004e1f98;
extern undefined4 DAT_004e1f9c;
extern float DAT_004e1fa0;

// USA 004E1EB4 <- EU 004E1E8C (Ghidra, non-matching)
// GLOBAL DAT_004e1f98 float
// GLOBAL DAT_004e1f9c undefined4
// GLOBAL DAT_004e1fa0 float

void func_004E1EB4(int param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  fparam_0 = *(float *)(param_1 + 0x538) + DAT_004e1f98;
  func_004D80A4(&local_50,*(uint *)(param_1 + 1000),DAT_004e1f98 - *(float *)(param_1 + 0x538));
  local_4c = DAT_004e1f9c;
  uVar2 = DAT_004e1f9c;
  func_004D80A4(&local_44,*(uint *)(param_1 + 1000),fparam_0);
  local_40 = uVar2;
  func_00115C54(&local_50,&local_50,param_2);
  func_00115C54(&local_44,&local_44,param_2);
  iVar1 = *(int *)(param_1 + 0x45c);
  uVar2 = *(undefined4 *)(param_1 + 0x530);
  *(float *)(iVar1 + 0x58) = local_50;
  *(undefined4 *)(iVar1 + 0x5c) = local_4c;
  *(undefined4 *)(iVar1 + 0x60) = local_48;
  *(float *)(iVar1 + 100) = local_44;
  *(undefined4 *)(iVar1 + 0x68) = local_40;
  *(undefined4 *)(iVar1 + 0x6c) = local_3c;
  *(undefined4 *)(iVar1 + 0x70) = uVar2;
  iVar1 = *(int *)(param_1 + 0x45c);
  func_00115C54(&local_2c,&local_50,&local_44);
  local_38 = local_2c;
  uStack_34 = uStack_28;
  uStack_30 = uStack_24;
  func_00115D88(&local_2c,&local_38,DAT_004e1fa0);
  *(float *)(iVar1 + 4) = local_2c;
  *(undefined4 *)(iVar1 + 8) = uStack_28;
  *(undefined4 *)(iVar1 + 0xc) = uStack_24;
  return;
}

