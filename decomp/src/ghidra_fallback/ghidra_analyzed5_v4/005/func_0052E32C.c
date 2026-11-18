#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0053ED3C(int param_1);
extern int func_0053ED74(int param_1);
extern int func_0053F534(int param_1,undefined4 *param_2);
extern float DAT_0052e3e0;
extern float DAT_0052e3e4;

// USA 0052E32C <- EU 0052E304 (Ghidra, non-matching)
// GLOBAL DAT_0052e3e0 float
// GLOBAL DAT_0052e3e4 float

void func_0052E32C(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define fStack_5c (*(float *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  #define fStack_34 (*(float *)(albw_frame + 0x2c))
  #define fStack_30 (*(float *)(albw_frame + 0x30))
  #define fStack_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define fStack_20 (*(float *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = func_0053ED74(*(int *)(iVar1 + 0x600));
  iVar3 = func_0053ED3C(*(int *)(iVar1 + 0x600));
  fStack_44 = *(float *)(iVar2 + 0xc);
  uStack_40 = *(undefined4 *)(iVar2 + 0x1c);
  uStack_3c = *(undefined4 *)(iVar2 + 0x2c);
  fStack_2c = *(float *)(iVar3 + 0xc);
  uStack_28 = *(undefined4 *)(iVar3 + 0x1c);
  uStack_24 = *(undefined4 *)(iVar3 + 0x2c);
  fStack_38 = DAT_0052e3e0;
  fStack_34 = DAT_0052e3e0;
  fStack_30 = DAT_0052e3e0;
  func_0053F534(*(int *)(iVar1 + 0x614),&fStack_38);
  func_00115C54(&fStack_20,&fStack_44,&fStack_2c);
  fStack_50 = fStack_20;
  uStack_4c = uStack_1c;
  uStack_48 = uStack_18;
  func_00115D88(&fStack_20,&fStack_50,DAT_0052e3e4);
  fStack_5c = fStack_20;
  uStack_58 = uStack_1c;
  uStack_54 = uStack_18;
  func_00115C54(&fStack_20,&fStack_5c,&fStack_38);
  *param_2 = ALBW_AS_U32(fStack_20);
  param_2[1] = uStack_1c;
  param_2[2] = uStack_18;
  return;
}

