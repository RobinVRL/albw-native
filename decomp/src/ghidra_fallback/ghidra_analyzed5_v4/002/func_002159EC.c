#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_00215aa8;
extern uint DAT_00215aac;
extern undefined4 DAT_00215ab0;
extern int *DAT_00215ab4;

// USA 002159EC <- EU 002159EC (Ghidra, non-matching)
// GLOBAL DAT_00215aa8 float
// GLOBAL DAT_00215aac uint
// GLOBAL DAT_00215ab0 undefined4
// GLOBAL DAT_00215ab4 int *

void func_002159EC(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(uint *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(int *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x30))
  #define local_f (*(undefined1 *)(albw_frame + 0x31))
  local_18 = (undefined4 *)(param_1 + 0xa2c);
  *local_18 = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(param_1 + 0x3d8);
  *(float *)(param_1 + 0xa30) = *(float *)(param_1 + 0xa30) + DAT_00215aa8;
  uStack_28 = DAT_00215aac;
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_1 + 0x3d8);
  uStack_28 = param_4 & 0xffff0000 | uStack_28;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  local_14 = DAT_00215ab0;
  local_10 = 0;
  local_1c = param_1 + 0xa20;
  local_34 = param_1 + 0xb28;
  local_f = 1;
  local_24 = 0x7f;
  func_004A8030(*DAT_00215ab4,&local_38,0xf);
  *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0xa24);
  return;
}

