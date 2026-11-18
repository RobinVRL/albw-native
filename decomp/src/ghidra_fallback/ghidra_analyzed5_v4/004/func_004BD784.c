#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_004bd864;
extern undefined4 DAT_004bd868;
extern undefined4 *DAT_004bd86c;
extern int *DAT_004bd870;

// USA 004BD784 <- EU 004BD75C (Ghidra, non-matching)
// GLOBAL DAT_004bd864 uint
// GLOBAL DAT_004bd868 undefined4
// GLOBAL DAT_004bd86c undefined4 *
// GLOBAL DAT_004bd870 int *

void func_004BD784(int param_1,uint param_2,float fparam_0,float fparam_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x30))
  #define local_2f (*(undefined1 *)(albw_frame + 0x31))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define fStack_1c (*(float *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x54))
  if (fparam_0 <= fparam_1) {
    return;
  }
  uStack_48 = DAT_004bd864 | param_2 & 0xffff0000;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_34 = DAT_004bd868;
  local_30 = 0;
  local_2f = 1;
  local_2c = *(undefined4 *)(param_1 + 0x3d0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d8);
  local_38 = &local_2c;
  local_28 = *(float *)(param_1 + 0x3d4) + fparam_0;
  fStack_1c = *(float *)(param_1 + 0x3d4) + fparam_1;
  *(float *)(param_1 + 0x3d4) = fStack_1c;
  local_20 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
  local_3c = &local_20;
  local_14 = *DAT_004bd86c;
  local_10 = DAT_004bd86c[1];
  uStack_c = DAT_004bd86c[2];
  local_58 = &local_14;
  local_44 = 7;
  iVar1 = func_004A8030(*DAT_004bd870,(int *)&local_58,3);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + ALBW_AS_F32(local_58[1]);
  }
  return;
}

