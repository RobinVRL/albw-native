#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0014F0B0(int param_1);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern uint DAT_0037d3d0;
extern undefined4 DAT_0037d3d4;
extern undefined4 DAT_0037d3d8;
extern float DAT_0037d3dc;
extern undefined4 DAT_0037d3e0;
extern float DAT_0037d3e4;
extern float DAT_0037d3e8;
extern int *DAT_0037d3ec;

// USA 0037D2B4 <- EU 0037D290 (Ghidra, non-matching)
// GLOBAL DAT_0037d3d0 uint
// GLOBAL DAT_0037d3d4 undefined4
// GLOBAL DAT_0037d3d8 undefined4
// GLOBAL DAT_0037d3dc float
// GLOBAL DAT_0037d3e0 undefined4
// GLOBAL DAT_0037d3e4 float
// GLOBAL DAT_0037d3e8 float
// GLOBAL DAT_0037d3ec int *

undefined4 func_0037D2B4(uint param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 ((byte *)(albw_frame + 0x0))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined1 *)(albw_frame + 0x28))
  #define local_77 (*(undefined1 *)(albw_frame + 0x29))
  #define local_74 (*(uint *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined2 *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_58 (*(undefined4 * *)(albw_frame + 0x48))
  #define local_54 (*(undefined4 * *)(albw_frame + 0x4c))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_30 (*(undefined4 *)(albw_frame + 0x70))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x78))
  #define local_24 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x84))
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_90 = DAT_0037d3d0 | param_1 & 0xffff0000;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_8c = 0xff;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = DAT_0037d3d4;
  local_78 = 0;
  local_77 = 1;
  uVar1 = DAT_0037d3d4;
  func_00110D44(&local_74,local_a0,0x2a);
  local_24 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_20 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_1c = *(undefined4 *)(param_1 + 0x3d8);
  local_30 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_28 = *(undefined4 *)(param_1 + 0x3d8);
  local_2c = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x43c) * DAT_0037d3dc;
  local_70 = *(undefined4 *)(param_1 + 0x3ec);
  local_74 = 0;
  local_54 = &local_24;
  local_58 = &local_30;
  local_48 = *(undefined4 *)(param_1 + 0x43c);
  local_40 = *(undefined4 *)(param_1 + 0x43c);
  local_68 = *(undefined4 *)(param_1 + 0x2cc);
  local_60 = DAT_0037d3e0;
  local_64 = *(undefined2 *)(param_1 + 0x54);
  local_44 = uVar1;
  local_3c = uVar1;
  func_0014F0B0(param_1);
  return func_004A9F98(*DAT_0037d3ec,&local_74,*(uint *)(param_1 + 0x3b8),DAT_0037d3e8,DAT_0037d3e4);
}

