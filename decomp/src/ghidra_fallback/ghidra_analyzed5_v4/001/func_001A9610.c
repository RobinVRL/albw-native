#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern uint DAT_001a9728;
extern undefined4 DAT_001a972c;
extern float DAT_001a9730;
extern float DAT_001a9734;
extern float DAT_001a9738;
extern undefined4 DAT_001a973c;
extern int *DAT_001a9740;

// USA 001A9610 <- EU 001A9610 (Ghidra, non-matching)
// GLOBAL DAT_001a9728 uint
// GLOBAL DAT_001a972c undefined4
// GLOBAL DAT_001a9730 float
// GLOBAL DAT_001a9734 float
// GLOBAL DAT_001a9738 float
// GLOBAL DAT_001a973c undefined4
// GLOBAL DAT_001a9740 int *

bool func_001A9610(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(int *)(albw_frame + 0x4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(uint *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(float * *)(albw_frame + 0x1c))
  #define local_50 (*(float * *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined1 *)(albw_frame + 0x28))
  #define local_47 (*(undefined1 *)(albw_frame + 0x29))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define fStack_2c (*(float *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_20 (*(float *)(albw_frame + 0x50))
  #define local_1c (*(float *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x58))
  local_60 = DAT_001a9728 | param_1 & 0xffff0000;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0xff;
  uStack_58 = 0;
  local_54 = (float *)0x0;
  local_50 = (float *)0x0;
  local_4c = DAT_001a972c;
  local_48 = 0;
  local_47 = 1;
  uVar2 = DAT_001a972c;
  func_004D80A4(&fStack_2c,*(uint *)(param_1 + 1000),DAT_001a9730);
  local_28 = uVar2;
  func_00115C54(&local_20,(float *)(param_1 + 0x3d0),&fStack_2c);
  local_40 = local_1c - DAT_001a9734;
  local_3c = local_18;
  local_44 = local_20;
  local_38 = local_20;
  local_30 = local_18;
  local_54 = &local_38;
  local_6c = param_1 + 0x924;
  local_34 = local_40 + DAT_001a9738;
  local_50 = &local_44;
  local_5c = DAT_001a973c;
  local_70 = 0;
  iVar1 = func_004A8030(*DAT_001a9740,&local_70,3);
  return iVar1 != 0;
}

