#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0053ED3C(int param_1);
extern int func_0053ED74(int param_1);
extern int func_0053F534(int param_1,undefined4 *param_2);
extern float DAT_0052e3e0;
extern float DAT_0052e3e4;

// USA 0052E334 <- EU 0052E30C (Ghidra, non-matching)
// GLOBAL DAT_0052e3e0 float
// GLOBAL DAT_0052e3e4 float

void func_0052E334(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define fStack_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define fStack_1c (*(float *)(albw_frame + 0x44))
  #define fStack_18 (*(float *)(albw_frame + 0x48))
  iVar1 = func_0053ED74(*(int *)(param_1 + 0x600));
  iVar2 = func_0053ED3C(*(int *)(param_1 + 0x600));
  local_44 = *(float *)(iVar1 + 0xc);
  local_40 = *(undefined4 *)(iVar1 + 0x1c);
  local_3c = *(undefined4 *)(iVar1 + 0x2c);
  local_2c = *(float *)(iVar2 + 0xc);
  local_28 = *(undefined4 *)(iVar2 + 0x1c);
  local_24 = *(undefined4 *)(iVar2 + 0x2c);
  local_38 = DAT_0052e3e0;
  local_34 = DAT_0052e3e0;
  local_30 = DAT_0052e3e0;
  func_0053F534(*(int *)(param_1 + 0x614),&local_38);
  func_00115C54(&local_20,&local_44,&local_2c);
  local_50 = local_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  func_00115D88(&local_20,&local_50,DAT_0052e3e4);
  local_5c = local_20;
  fStack_58 = fStack_1c;
  fStack_54 = fStack_18;
  func_00115C54(&local_20,&local_5c,&local_38);
  *param_2 = local_20;
  param_2[1] = fStack_1c;
  param_2[2] = fStack_18;
  return;
}

