#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern undefined4 DAT_00247f30;
extern undefined4 DAT_00247f34;
extern undefined4 DAT_00247f38;
extern int DAT_00247f54;
extern char s_SE_FirePiller_BURN_END_00247f3c[];

// USA 00247E7C <- EU 00247E7C (Ghidra, non-matching)
// GLOBAL DAT_00247f30 undefined4
// GLOBAL DAT_00247f34 undefined4
// GLOBAL DAT_00247f38 undefined4
// GLOBAL DAT_00247f54 int
// GLOBAL s_SE_FirePiller_BURN_END_00247f3c string

undefined4 func_00247E7C(int *param_1)

{
  uint unaff_r4;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((uint *)(albw_frame + 0x0))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  local_80[1] = 3;
  local_78 = &local_74;
  local_80[0] = 1;
  local_2c = 10;
  local_28 = 0;
  local_74 = 0;
  local_60 = unaff_r4 | 0xff;
  local_70 = DAT_00247f34;
  uStack_6c = DAT_00247f30;
  uStack_68 = DAT_00247f38;
  uStack_64 = DAT_00247f30;
  uVar1 = DAT_00247f30;
  func_0016898C(param_1[0x10f],local_80);
  local_20 = DAT_00247f54;
  *(undefined4 *)(*(int *)(param_1[0x10f] + 0x14) + 0x10) = uVar1;
  local_1c = s_SE_FirePiller_BURN_END_00247f3c;
  return func_00150A84(param_1,&local_20,0);
}

