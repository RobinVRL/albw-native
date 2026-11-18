#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_0028aba4;
extern undefined4 DAT_0028aba8;
extern float DAT_0028abac;
extern float DAT_0028abb0;
extern int *DAT_0028abb4;

// USA 0028AAA8 <- EU 0028AAD0 (Ghidra, non-matching)
// GLOBAL DAT_0028aba4 uint
// GLOBAL DAT_0028aba8 undefined4
// GLOBAL DAT_0028abac float
// GLOBAL DAT_0028abb0 float
// GLOBAL DAT_0028abb4 int *

bool func_0028AAA8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c ((int *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_1c (*(undefined1 * *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_13 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_10 (*(undefined4 *)(albw_frame + 0x40))
  #define local_c (*(float *)(albw_frame + 0x44))
  #define local_8 (*(float *)(albw_frame + 0x48))
  local_1c = (undefined1 *)&local_48;
  local_3c[4] = DAT_0028aba4 | param_3 & 0xffff0000;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_24 = 0;
  local_18 = DAT_0028aba8;
  local_14 = 0;
  local_13 = 1;
  local_48 = *(undefined4 *)(param_1 + 0x3d0);
  local_40 = *(float *)(param_1 + 0x3d8);
  local_20 = &local_10;
  local_44 = *(float *)(param_1 + 0x3d4) + DAT_0028abac;
  local_8 = local_40 - DAT_0028abb0;
  local_28 = 0x78;
  local_10 = local_48;
  local_c = local_44;
  iVar1 = func_004A8030(*DAT_0028abb4,local_3c,3);
  return iVar1 != 0;
}

