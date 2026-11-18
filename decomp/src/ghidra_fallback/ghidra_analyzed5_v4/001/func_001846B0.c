#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_00184794;
extern undefined4 DAT_00184798;
extern undefined4 DAT_0018479c;
extern undefined4 *DAT_001847a0;
extern int *DAT_001847a4;

// USA 001846B0 <- EU 001846B0 (Ghidra, non-matching)
// GLOBAL DAT_00184794 uint
// GLOBAL DAT_00184798 undefined4
// GLOBAL DAT_0018479c undefined4
// GLOBAL DAT_001847a0 undefined4 *
// GLOBAL DAT_001847a4 int *

bool func_001846B0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,float fparam_0)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x30))
  #define local_2f (*(undefined1 *)(albw_frame + 0x31))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(float *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x54))
  uStack_48 = DAT_00184794 | param_4 & 0xffff0000;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_34 = DAT_00184798;
  local_30 = 0;
  local_2f = 1;
  local_2c = *(undefined4 *)(param_1 + 0x3d0);
  local_24 = *(undefined4 *)(param_1 + 0x3d8);
  local_38 = &local_2c;
  local_28 = *(float *)(param_1 + 0x3d4) + fparam_0;
  local_20 = *param_2;
  local_18 = param_2[2];
  local_3c = &local_20;
  local_44 = DAT_0018479c;
  local_14 = *DAT_001847a0;
  uStack_10 = DAT_001847a0[1];
  uStack_c = DAT_001847a0[2];
  local_58 = &local_14;
  local_1c = local_28;
  iVar1 = func_004A8030(*DAT_001847a4,(int *)&local_58,3);
  return iVar1 != 0;
}

