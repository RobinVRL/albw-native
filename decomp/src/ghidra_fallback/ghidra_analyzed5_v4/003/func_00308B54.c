#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_00308bf8;
extern undefined4 DAT_00308bfc;
extern undefined4 DAT_00308c00;
extern int *DAT_00308c04;

// USA 00308B54 <- EU 00308B30 (Ghidra, non-matching)
// GLOBAL DAT_00308bf8 float
// GLOBAL DAT_00308bfc undefined4
// GLOBAL DAT_00308c00 undefined4
// GLOBAL DAT_00308c04 int *

int func_00308B54(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((int *)(albw_frame + 0x8))
  #define local_38 (*(undefined2 *)(albw_frame + 0x18))
  #define uStack_36 (*(ushort *)(albw_frame + 0x1a))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x30))
  #define local_1f (*(undefined1 *)(albw_frame + 0x31))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(float *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x40))
  #define local_c (*(float *)(albw_frame + 0x44))
  #define uStack_8 (*(undefined4 *)(albw_frame + 0x48))
  local_1c = *param_2;
  uStack_14 = param_2[2];
  local_18 = ALBW_AS_F32(param_2[1]) + DAT_00308bf8;
  local_10 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_8 = *(undefined4 *)(param_1 + 0x3d8);
  local_c = *(float *)(param_1 + 0x3d4) + DAT_00308bf8;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_30 = 0;
  local_24 = DAT_00308c00;
  local_20 = 0;
  local_28 = &local_1c;
  local_2c = &local_10;
  local_1f = 1;
  local_48[3] = *(undefined4 *)(param_1 + 0x2cc);
  (*(undefined4 *)&local_38) = CONCAT22((ushort)((uint)DAT_00308bfc >> 0x10) | (ushort)((uint)param_3 >> 0x10),
                       *(undefined2 *)(param_1 + 0x54));
  local_34 = 0x1f;
  iVar1 = func_004A8030(*DAT_00308c04,local_48,0xf);
  return iVar1;
}

