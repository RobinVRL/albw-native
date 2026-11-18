#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float DAT_00542d2c;
extern float DAT_00542d30;

// USA 00542C88 <- EU 00542C60 (Ghidra, non-matching)
// GLOBAL DAT_00542d2c float
// GLOBAL DAT_00542d30 float

void func_00542C88(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define fStack_4c (*(float *)(albw_frame + 0x4))
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  #define local_18 (*(float *)(albw_frame + 0x38))
  #define local_14 (*(float *)(albw_frame + 0x3c))
  #define fStack_10 (*(float *)(albw_frame + 0x40))
  #define fStack_c (*(float *)(albw_frame + 0x44))
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x8d4) + 0x24) + 0x14);
  iVar1 = iVar2 + *(int *)(param_1 + 0x8f8) * 0x30;
  iVar2 = iVar2 + *(int *)(param_1 + 0x8f4) * 0x30;
  local_38 = *(float *)(iVar1 + 0xc);
  local_34 = *(undefined4 *)(iVar1 + 0x1c);
  local_30 = *(undefined4 *)(iVar1 + 0x2c);
  local_2c = *(float *)(iVar2 + 0xc);
  local_28 = *(undefined4 *)(iVar2 + 0x1c);
  local_24 = *(undefined4 *)(iVar2 + 0x2c);
  local_20 = DAT_00542d2c;
  local_1c = DAT_00542d2c;
  local_18 = DAT_00542d2c;
  func_00115C54(&local_14,&local_38,&local_2c);
  local_44 = local_14;
  fStack_40 = fStack_10;
  fStack_3c = fStack_c;
  func_00115D88(&local_14,&local_44,DAT_00542d30);
  local_50 = local_14;
  fStack_4c = fStack_10;
  fStack_48 = fStack_c;
  func_00115C54(&local_14,&local_50,&local_20);
  *param_2 = local_14;
  param_2[1] = fStack_10;
  param_2[2] = fStack_c;
  return;
}

