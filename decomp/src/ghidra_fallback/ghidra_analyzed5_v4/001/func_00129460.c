#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int *DAT_00129528;
extern float DAT_0012952c;
extern uint DAT_00129530;
extern undefined4 DAT_00129534;
extern int *DAT_00129538;

// USA 00129460 <- EU 00129460 (Ghidra, non-matching)
// GLOBAL DAT_00129528 int *
// GLOBAL DAT_0012952c float
// GLOBAL DAT_00129530 uint
// GLOBAL DAT_00129534 undefined4
// GLOBAL DAT_00129538 int *

undefined4 func_00129460(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 ((int *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_10 (*(undefined1 * *)(albw_frame + 0x40))
  #define local_c (*(undefined4 *)(albw_frame + 0x44))
  #define local_8 (*(undefined1 *)(albw_frame + 0x48))
  #define local_7 (*(undefined1 *)(albw_frame + 0x49))
  if (2 < (int)*(char *)(*DAT_00129528 + 0x18) - 0x18U) {
    local_10 = (undefined1 *)&local_48;
    local_48 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_40 = *(undefined4 *)(param_1 + 0x3d8);
    local_3c = *param_2;
    local_34 = param_2[2];
    local_44 = *(float *)(param_1 + 0x3d4) + DAT_0012952c;
    local_30[4] = DAT_00129530 | param_4 & 0xffff0000;
    local_38 = ALBW_AS_F32(param_2[1]) + DAT_0012952c;
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    local_18 = 0;
    local_c = DAT_00129534;
    local_8 = 0;
    local_14 = &local_3c;
    local_7 = 1;
    local_1c = 0x78;
    iVar1 = func_004A8030(*DAT_00129538,local_30,0x3f);
    return iVar1;
  }
  return 0;
}

