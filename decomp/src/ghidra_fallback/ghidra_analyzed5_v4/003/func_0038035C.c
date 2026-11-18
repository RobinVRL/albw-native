#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float *DAT_003803c8;
extern undefined4 DAT_003803cc;

// USA 0038035C <- EU 00380338 (Ghidra, non-matching)
// GLOBAL DAT_003803c8 float *
// GLOBAL DAT_003803cc undefined4

void func_0038035C(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  func_004FC07C(param_1,10,0,0);
  pfVar2 = DAT_003803c8;
  *(undefined1 *)(param_1 + 0xb2c) = 0;
  *(undefined1 *)(param_1 + 0xb2d) = 0;
  local_20 = *pfVar2;
  fStack_1c = pfVar2[1];
  fStack_18 = pfVar2[2];
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,pfVar2,(float *)(param_1 + 0x3d0));
  iVar3 = func_0068C690(&local_20);
  *(int *)(param_1 + 1000) = iVar3;
  uVar1 = DAT_003803cc;
  *(undefined4 *)(param_1 + 0xa18) = 0;
  *(undefined1 *)(param_1 + 0xb2f) = 0;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  func_004FAD90(param_1);
  return;
}

