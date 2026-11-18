#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern uint DAT_0023ba28;
extern undefined4 DAT_0023ba2c;
extern undefined4 DAT_0023ba30;
extern undefined4 DAT_0023ba34;
extern float DAT_0023ba38;
extern float DAT_0023ba3c;
extern int *DAT_0023ba40;

// USA 0023B910 <- EU 0023B910 (Ghidra, non-matching)
// GLOBAL DAT_0023ba28 uint
// GLOBAL DAT_0023ba2c undefined4
// GLOBAL DAT_0023ba30 undefined4
// GLOBAL DAT_0023ba34 undefined4
// GLOBAL DAT_0023ba38 float
// GLOBAL DAT_0023ba3c float
// GLOBAL DAT_0023ba40 int *

int func_0023B910(int param_1,uint param_2,uint param_3,float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 ((byte *)(albw_frame + 0x0))
  #define uStack_90 (*(uint *)(albw_frame + 0x10))
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
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(int *)(albw_frame + 0x48))
  #define local_54 (*(undefined4 * *)(albw_frame + 0x4c))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_28 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x80))
  uStack_90 = param_3 & 0xffff0000 | DAT_0023ba28;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_8c = 0xff;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = DAT_0023ba2c;
  local_78 = 0;
  local_77 = 1;
  uVar2 = DAT_0023ba2c;
  func_00110D44(&local_74,local_a0,0x2a);
  local_58 = param_1 + 0x3d0;
  local_28 = *(undefined4 *)(param_1 + 0x368);
  uStack_24 = *(undefined4 *)(param_1 + 0x36c);
  uStack_20 = *(undefined4 *)(param_1 + 0x370);
  local_70 = *(undefined4 *)(param_1 + 0x3ec);
  local_54 = &local_28;
  local_68 = *(undefined4 *)(param_1 + 0x2cc);
  local_60 = DAT_0023ba34;
  local_64 = *(undefined2 *)(param_1 + 0x54);
  local_5c = *(undefined4 *)(param_1 + 0x3a0);
  local_74 = param_2;
  local_48 = fparam_0;
  local_44 = uVar2;
  fStack_40 = fparam_0;
  local_3c = uVar2;
  iVar1 = func_004A9F98(*DAT_0023ba40,&local_74,0xff,DAT_0023ba3c,DAT_0023ba38);
  return iVar1;
}

