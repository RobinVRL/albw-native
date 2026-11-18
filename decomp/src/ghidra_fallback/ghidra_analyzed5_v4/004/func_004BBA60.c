#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_004bbb48;
extern undefined4 *DAT_004bbb4c;
extern uint DAT_004bbb50;
extern undefined4 DAT_004bbb54;
extern int *DAT_004bbb58;
extern float DAT_004bbb5c;

// USA 004BBA60 <- EU 004BBA38 (Ghidra, non-matching)
// GLOBAL DAT_004bbb48 float
// GLOBAL DAT_004bbb4c undefined4 *
// GLOBAL DAT_004bbb50 uint
// GLOBAL DAT_004bbb54 undefined4
// GLOBAL DAT_004bbb58 int *
// GLOBAL DAT_004bbb5c float

void func_004BBA60(int param_1,uint param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(uint *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 * *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined1 *)(albw_frame + 0x48))
  #define local_17 (*(undefined1 *)(albw_frame + 0x49))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(float *)(albw_frame + 0x50))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x54))
  local_14 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_c = *(undefined4 *)(param_1 + 0x3d8);
  local_58 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_50 = *(undefined4 *)(param_1 + 0x3d8);
  local_10 = *(float *)(param_1 + 0x3d4) + DAT_004bbb48;
  local_54 = *(float *)(param_1 + 0x3d4) - DAT_004bbb48;
  local_4c = *DAT_004bbb4c;
  local_48 = ALBW_AS_F32(DAT_004bbb4c[1]);
  local_44 = DAT_004bbb4c[2];
  local_3c = 0;
  uStack_30 = param_2 & 0xffff0000 | DAT_004bbb50;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0;
  local_1c = DAT_004bbb54;
  local_18 = 0;
  local_20 = &local_14;
  local_24 = &local_58;
  local_17 = 1;
  local_2c = 0x80;
  local_40 = &local_4c;
  iVar1 = func_004A8030(*DAT_004bbb58,(int *)&local_40,0xff);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x3d4) = local_54 + local_48 + DAT_004bbb5c;
  }
  iVar1 = *(int *)(param_1 + 0x43c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  return;
}

