#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_0018829c;
extern undefined4 DAT_001882a0;
extern float DAT_001882a4;
extern float DAT_001882a8;
extern int *DAT_001882ac;

// USA 001881C0 <- EU 001881C0 (Ghidra, non-matching)
// GLOBAL DAT_0018829c uint
// GLOBAL DAT_001882a0 undefined4
// GLOBAL DAT_001882a4 float
// GLOBAL DAT_001882a8 float
// GLOBAL DAT_001882ac int *

bool func_001881C0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(uint *)(albw_frame + 0x18))
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
  #define local_8 (*(undefined4 *)(albw_frame + 0x48))
  uStack_38 = DAT_0018829c | param_3 & 0xffff0000;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_24 = DAT_001882a0;
  local_20 = 0;
  local_1f = 1;
  local_1c = *(undefined4 *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d8);
  local_44 = param_1 + 0x6f0;
  local_18 = *(float *)(param_1 + 0x3d4) - DAT_001882a4;
  local_2c = &local_10;
  local_c = local_18 + DAT_001882a8;
  local_28 = &local_1c;
  local_34 = 0x10;
  local_10 = local_1c;
  local_8 = uStack_14;
  iVar1 = func_004A8030(*DAT_001882ac,&local_48,3);
  return iVar1 != 0;
}

