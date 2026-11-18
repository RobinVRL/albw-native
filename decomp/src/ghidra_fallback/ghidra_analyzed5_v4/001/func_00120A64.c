#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_00120b30;
extern undefined4 DAT_00120b34;
extern float DAT_00120b38;
extern undefined4 DAT_00120b3c;
extern int *DAT_00120b40;

// USA 00120A64 <- EU 00120A64 (Ghidra, non-matching)
// GLOBAL DAT_00120b30 uint
// GLOBAL DAT_00120b34 undefined4
// GLOBAL DAT_00120b38 float
// GLOBAL DAT_00120b3c undefined4
// GLOBAL DAT_00120b40 int *

int func_00120A64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x30))
  #define local_2f (*(undefined1 *)(albw_frame + 0x31))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  #define local_14 (*(float *)(albw_frame + 0x4c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x50))
  local_58[4] = DAT_00120b30 | param_4 & 0xffff0000;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_40 = 0;
  local_34 = DAT_00120b34;
  local_30 = 0;
  local_2f = 1;
  local_24 = *param_1;
  local_1c = param_1[2];
  local_18 = *param_2;
  local_10 = param_2[2];
  local_20 = ALBW_AS_F32(param_1[1]) + DAT_00120b38;
  local_38 = &local_24;
  local_14 = ALBW_AS_F32(param_2[1]) + DAT_00120b38;
  local_3c = &local_18;
  local_44 = DAT_00120b3c;
  iVar1 = func_004A8030(*DAT_00120b40,local_58,0xf);
  return iVar1;
}

