#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0053ECF8(int param_1);
extern float DAT_0028fa64;
extern float DAT_0028fa68;

// USA 0028F968 <- EU 0028F990 (Ghidra, non-matching)
// GLOBAL DAT_0028fa64 float
// GLOBAL DAT_0028fa68 float

void func_0028F968(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  #define fStack_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define fStack_28 (*(float *)(albw_frame + 0x38))
  #define fStack_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  iVar2 = *(int *)(param_1 + 0x10);
  local_30 = *(undefined4 *)(iVar2 + 0x3d8);
  local_38 = *(float *)(iVar2 + 0x3d0);
  uStack_34 = *(undefined4 *)(iVar2 + 0x3d4);
  iVar2 = func_0053ECF8(*(int *)(param_1 + 0x18));
  local_20 = *(float *)(iVar2 + 0xc);
  local_1c = *(undefined4 *)(iVar2 + 0x1c);
  local_18 = *(undefined4 *)(iVar2 + 0x2c);
  func_00115D70(&local_2c,&local_38,*(float *)(param_1 + 0xb4));
  local_44 = local_2c;
  fStack_40 = fStack_28;
  fStack_3c = fStack_24;
  func_00115D70(&local_2c,&local_20,DAT_0028fa64 - *(float *)(param_1 + 0xb4));
  local_58 = local_2c;
  fStack_54 = fStack_28;
  fStack_50 = fStack_24;
  func_00115C54(&local_2c,&local_44,&local_58);
  fVar1 = DAT_0028fa68;
  *param_2 = local_2c;
  param_2[1] = fStack_28;
  param_2[2] = fStack_24;
  if (*(float *)(param_1 + 0xb4) != fVar1) {
    param_2[1] = *(float *)(*(int *)(param_1 + 0x10) + 0x3d4);
  }
  return;
}

