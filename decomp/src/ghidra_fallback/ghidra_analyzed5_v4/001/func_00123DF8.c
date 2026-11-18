#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_00123eb4;
extern uint DAT_00123eb8;
extern undefined4 DAT_00123ebc;
extern int *DAT_00123ec0;

// USA 00123DF8 <- EU 00123DF8 (Ghidra, non-matching)
// GLOBAL DAT_00123eb4 float
// GLOBAL DAT_00123eb8 uint
// GLOBAL DAT_00123ebc undefined4
// GLOBAL DAT_00123ec0 int *

int func_00123DF8(int param_1)

{
  int iVar1;
  uint unaff_r4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(float * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x30))
  #define local_2f (*(undefined1 *)(albw_frame + 0x31))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  #define afStack_14 ((float *)(albw_frame + 0x4c))
  local_20 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
  local_2c = *(float *)(param_1 + 0x3d0);
  uStack_28 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d8);
  func_00115D70(afStack_14,(float *)(param_1 + 0x930),DAT_00123eb4);
  func_00115C54(&local_2c,&local_2c,afStack_14);
  local_58[4] = DAT_00123eb8 | unaff_r4 & 0xffff0000;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_40 = 0;
  local_34 = DAT_00123ebc;
  local_30 = 0;
  local_38 = &local_20;
  local_3c = &local_2c;
  local_2f = 1;
  local_44 = 0x78;
  iVar1 = func_004A8030(*DAT_00123ec0,local_58,0x33);
  return iVar1;
}

