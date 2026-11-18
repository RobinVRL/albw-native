#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_001d4848;
extern undefined4 DAT_001d484c;
extern int *DAT_001d4850;

// USA 001D47B4 <- EU 001D47B4 (Ghidra, non-matching)
// GLOBAL DAT_001d4848 uint
// GLOBAL DAT_001d484c undefined4
// GLOBAL DAT_001d4850 int *

int func_001D47B4(int param_1,uint param_2,float fparam_0,float fparam_1,float fparam_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((int *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined1 *)(albw_frame + 0x28))
  #define local_27 (*(undefined1 *)(albw_frame + 0x29))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(float *)(albw_frame + 0x3c))
  #define fStack_10 (*(float *)(albw_frame + 0x40))
  #define fStack_c (*(float *)(albw_frame + 0x44))
  local_20 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
  local_18 = *(undefined4 *)(param_1 + 0x3d8);
  local_50[4] = param_2 & 0xffff0000 | DAT_001d4848;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_38 = 0;
  local_2c = DAT_001d484c;
  local_28 = 0;
  local_30 = &local_20;
  local_34 = &local_14;
  local_27 = 1;
  local_3c = 0x78;
  local_14 = fparam_0;
  fStack_10 = fparam_1;
  fStack_c = fparam_2;
  iVar1 = func_004A8030(*DAT_001d4850,local_50,0x33);
  return iVar1;
}

