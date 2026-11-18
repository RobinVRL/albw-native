#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_0011f870;
extern undefined4 DAT_0011f874;
extern float DAT_0011f878;
extern undefined4 DAT_0011f87c;
extern undefined4 *DAT_0011f880;
extern undefined4 DAT_0011f884;
extern undefined4 DAT_0011f888;
extern int *DAT_0011f88c;

// USA 0011F714 <- EU 0011F714 (Ghidra, non-matching)
// GLOBAL DAT_0011f870 uint
// GLOBAL DAT_0011f874 undefined4
// GLOBAL DAT_0011f878 float
// GLOBAL DAT_0011f87c undefined4
// GLOBAL DAT_0011f880 undefined4 *
// GLOBAL DAT_0011f884 undefined4
// GLOBAL DAT_0011f888 undefined4
// GLOBAL DAT_0011f88c int *

uint func_0011F714(float *param_1,float *param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(undefined4 *)(albw_frame + 0x0))
  #define puStack_7c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(ushort *)(albw_frame + 0x18))
  #define local_66 (*(char *)(albw_frame + 0x1a))
  #define local_65 (*(char *)(albw_frame + 0x1b))
  #define local_64 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(uint *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(float * *)(albw_frame + 0x3c))
  #define local_40 (*(float * *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(undefined1 *)(albw_frame + 0x48))
  #define local_37 (*(undefined1 *)(albw_frame + 0x49))
  #define local_34 (*(float *)(albw_frame + 0x4c))
  #define fStack_30 (*(float *)(albw_frame + 0x50))
  #define fStack_2c (*(float *)(albw_frame + 0x54))
  #define local_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  #define local_20 (*(float *)(albw_frame + 0x60))
  #define fStack_1c (*(float *)(albw_frame + 0x64))
  local_50 = DAT_0011f870 | (uint)param_1 & 0xffff0000;
  local_60 = 0;
  local_5c = (undefined1 *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0xff;
  uStack_48 = 0;
  local_44 = (float *)0x0;
  local_40 = (float *)0x0;
  local_3c = DAT_0011f874;
  local_38 = 0;
  local_37 = 1;
  local_34 = *param_1;
  fStack_30 = param_1[1];
  fStack_2c = param_1[2];
  func_00115C54(&local_34,&local_34,param_2);
  local_24 = local_34;
  fStack_1c = fStack_2c;
  local_40 = &local_34;
  local_20 = fStack_30 - DAT_0011f878;
  local_44 = &local_24;
  local_4c = DAT_0011f87c;
  uStack_78 = *DAT_0011f880;
  uStack_74 = DAT_0011f880[1];
  local_80 = DAT_0011f884;
  local_70 = DAT_0011f888;
  local_6c = DAT_0011f888;
  local_28 = 0x1f;
  local_64 = 0;
  local_68 = 0x1f;
  local_66 = '\0';
  local_65 = '\0';
  puStack_7c = (undefined1 *)&local_80;
  local_5c = (undefined1 *)&local_80;
  uVar1 = func_004A8030(*DAT_0011f88c,&local_60,0xf);
  bVar2 = (local_68 & 0x7e0) == 0x180;
  if (bVar2) {
    local_68 = local_68 & 0x1f;
  }
  if (param_3 != (undefined1 *)0x0) {
    if (local_66 == '\0') {
      *param_3 = 1;
    }
    else {
      *param_3 = 0;
    }
  }
  return uVar1 & ~((int)local_65 | (uint)(bVar2 && local_68 == 7));
}

