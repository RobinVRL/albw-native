#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_002b620c;
extern undefined4 DAT_002b6210;
extern uint DAT_002b6214;
extern int *DAT_002b6218;

// USA 002B614C <- EU 002B6128 (Ghidra, non-matching)
// GLOBAL DAT_002b620c float
// GLOBAL DAT_002b6210 undefined4
// GLOBAL DAT_002b6214 uint
// GLOBAL DAT_002b6218 int *

bool func_002B614C(int param_1,float fparam_0)

{
  int iVar1;
  uint unaff_r4;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  #define fStack_1c (*(float *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  local_28 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
  local_24 = *(float *)(param_1 + 0x3d4) + DAT_002b620c;
  local_34 = *(float *)(param_1 + 0x3d0);
  uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
  local_30 = *(float *)(param_1 + 0x3d4) + DAT_002b620c;
  func_004D80A4(&fStack_1c,*(uint *)(param_1 + 1000),fparam_0);
  local_18 = DAT_002b6210;
  uVar2 = DAT_002b6210;
  func_00115C54(&local_34,&local_34,&fStack_1c);
  local_60[4] = DAT_002b6214 | unaff_r4 & 0xffff0000;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = &local_28;
  local_44 = &local_34;
  local_37 = 1;
  local_4c = 0x78;
  local_3c = uVar2;
  iVar1 = func_004A8030(*DAT_002b6218,local_60,3);
  return iVar1 != 0;
}

