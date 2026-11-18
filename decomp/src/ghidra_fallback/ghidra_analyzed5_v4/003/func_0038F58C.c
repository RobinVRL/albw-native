#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_0038f658;
extern undefined4 *DAT_0038f65c;
extern uint DAT_0038f660;
extern undefined4 DAT_0038f664;
extern int *DAT_0038f668;
extern float DAT_0038f66c;

// USA 0038F58C <- EU 0038F568 (Ghidra, non-matching)
// GLOBAL DAT_0038f658 float
// GLOBAL DAT_0038f65c undefined4 *
// GLOBAL DAT_0038f660 uint
// GLOBAL DAT_0038f664 undefined4
// GLOBAL DAT_0038f668 int *
// GLOBAL DAT_0038f66c float

void func_0038F58C(int param_1,uint param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(uint *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 * *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined1 *)(albw_frame + 0x48))
  #define local_17 (*(undefined1 *)(albw_frame + 0x49))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(float *)(albw_frame + 0x50))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x54))
  local_14 = *(undefined4 *)(param_1 + 800);
  uStack_c = *(undefined4 *)(param_1 + 0x328);
  local_58 = *(undefined4 *)(param_1 + 800);
  uStack_50 = *(undefined4 *)(param_1 + 0x328);
  local_10 = *(float *)(param_1 + 0x324) + DAT_0038f658;
  local_54 = *(float *)(param_1 + 0x324) - DAT_0038f658;
  local_4c = *DAT_0038f65c;
  local_48 = ALBW_AS_F32(DAT_0038f65c[1]);
  local_44 = DAT_0038f65c[2];
  local_3c = 0;
  uStack_30 = param_2 & 0xffff0000 | DAT_0038f660;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0;
  local_1c = DAT_0038f664;
  local_18 = 0;
  local_20 = &local_14;
  local_24 = &local_58;
  local_17 = 1;
  local_2c = 0x80;
  local_40 = &local_4c;
  iVar1 = func_004A8030(*DAT_0038f668,(int *)&local_40,0xff);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x324) = local_54 + local_48 + DAT_0038f66c;
  }
  return;
}

