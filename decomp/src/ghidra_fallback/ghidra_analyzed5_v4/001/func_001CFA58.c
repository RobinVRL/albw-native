#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_001cfb28;
extern float DAT_001cfb2c;
extern uint DAT_001cfb30;
extern int *DAT_001cfb34;

// USA 001CFA58 <- EU 001CFA58 (Ghidra, non-matching)
// GLOBAL DAT_001cfb28 float
// GLOBAL DAT_001cfb2c float
// GLOBAL DAT_001cfb30 uint
// GLOBAL DAT_001cfb34 int *

int func_001CFA58(int param_1,uint param_2,float fparam_0)

{
  int iVar1;
  uint unaff_r4;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x4c))
  local_1c = *(undefined4 *)(param_1 + 0x3d0);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d8);
  local_20 = fparam_0 + DAT_001cfb2c;
  local_2c = *(undefined4 *)(param_1 + 0x3d8);
  local_34 = *(float *)(param_1 + 0x3d0);
  uStack_30 = *(undefined4 *)(param_1 + 0x3d4);
  local_28 = DAT_001cfb28;
  local_24 = DAT_001cfb28;
  fVar2 = DAT_001cfb28;
  func_004D7F70(&local_28,param_2);
  func_00115C54(&local_34,&local_34,&local_28);
  local_60[4] = DAT_001cfb30 | unaff_r4 & 0xffff0000;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = &local_1c;
  local_44 = &local_34;
  local_37 = 1;
  local_4c = 0x78;
  local_3c = fVar2;
  iVar1 = func_004A8030(*DAT_001cfb34,local_60,0x33);
  return iVar1;
}

