#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern undefined4 DAT_001989d4;
extern uint DAT_001989d8;
extern undefined4 DAT_001989dc;
extern undefined4 DAT_001989e0;
extern undefined4 DAT_001989e4;
extern undefined4 DAT_001989e8;
extern float DAT_001989ec;
extern float DAT_001989f0;
extern int *DAT_001989f4;

// USA 001988CC <- EU 001988CC (Ghidra, non-matching)
// GLOBAL DAT_001989d4 undefined4
// GLOBAL DAT_001989d8 uint
// GLOBAL DAT_001989dc undefined4
// GLOBAL DAT_001989e0 undefined4
// GLOBAL DAT_001989e4 undefined4
// GLOBAL DAT_001989e8 undefined4
// GLOBAL DAT_001989ec float
// GLOBAL DAT_001989f0 float
// GLOBAL DAT_001989f4 int *

undefined4 func_001988CC(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 ((byte *)(albw_frame + 0x8))
  #define local_88 (*(uint *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x30))
  #define local_6f (*(undefined1 *)(albw_frame + 0x31))
  #define local_6c (*(uint *)(albw_frame + 0x34))
  #define local_68 (*(int *)(albw_frame + 0x38))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define local_50 (*(int *)(albw_frame + 0x50))
  #define local_4c (*(int *)(albw_frame + 0x54))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  local_88 = DAT_001989d8 | param_1 & 0xffff0000;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  local_84 = 0xff;
  uStack_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = DAT_001989dc;
  local_70 = 0;
  local_6f = 1;
  uVar2 = DAT_001989d4;
  uVar1 = DAT_001989dc;
  func_00110D44(&local_6c,local_98,0x2a);
  local_4c = param_1 + 0x368;
  local_50 = param_1 + 0x3d0;
  local_68 = param_1 + 0x410;
  local_6c = 0;
  uStack_38 = uVar1;
  if (*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0x478)) {
    uStack_38 = DAT_001989e4;
  }
  local_60 = *(undefined4 *)(param_1 + 0x2cc);
  local_58 = DAT_001989e8;
  local_40 = uVar2;
  local_3c = uVar1;
  local_34 = uVar1;
  return func_004A9F98(*DAT_001989f4,&local_6c,0xf,DAT_001989f0,DAT_001989ec);
}

