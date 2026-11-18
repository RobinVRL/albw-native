#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_001a5520;
extern uint DAT_001a5524;
extern undefined4 DAT_001a5528;
extern int *DAT_001a552c;
extern int DAT_001a5530;

// USA 001A5458 <- EU 001A5458 (Ghidra, non-matching)
// GLOBAL DAT_001a5520 float
// GLOBAL DAT_001a5524 uint
// GLOBAL DAT_001a5528 undefined4
// GLOBAL DAT_001a552c int *
// GLOBAL DAT_001a5530 int

int func_001A5458(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 ((int *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_18 (*(undefined1 * *)(albw_frame + 0x38))
  #define local_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  #define local_f (*(undefined1 *)(albw_frame + 0x41))
  local_18 = (undefined1 *)&local_50;
  local_50 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_48 = *(undefined4 *)(param_1 + 0x3d8);
  local_44 = *param_2;
  local_3c = param_2[2];
  local_4c = *(float *)(param_1 + 0x3d4) + DAT_001a5520;
  local_38[4] = DAT_001a5524 | param_3 & 0xffff0000;
  local_40 = ALBW_AS_F32(param_2[1]) + DAT_001a5520;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_20 = 0;
  local_14 = DAT_001a5528;
  local_10 = 0;
  local_1c = &local_44;
  local_f = 1;
  local_24 = 0x78;
  iVar1 = func_004A8030(*DAT_001a552c,local_38,0x3f);
  if (iVar1 != 0) {
    *(undefined2 *)(DAT_001a5530 + param_1) = 0x50;
  }
  return iVar1;
}

