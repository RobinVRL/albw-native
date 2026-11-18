#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float DAT_0022a1c8;
extern undefined4 DAT_0022a1cc;
extern undefined4 DAT_0022a1d0;

// USA 0022A14C <- EU 0022A14C (Ghidra, non-matching)
// GLOBAL DAT_0022a1c8 float
// GLOBAL DAT_0022a1cc undefined4
// GLOBAL DAT_0022a1d0 undefined4

void func_0022A14C(int param_1)

{
  float fparam_0;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_004FC07C(param_1,5,0,0);
  func_00115C70(&local_18,(float *)(param_1 + 0xaf8),(float *)(param_1 + 0x3d0));
  fparam_0 = DAT_0022a1c8;
  *(float *)(param_1 + 0x3dc) = local_18;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_14;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_10;
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fparam_0);
  *(undefined4 *)(param_1 + 0x3e0) = DAT_0022a1cc;
  uVar1 = DAT_0022a1d0;
  *(undefined4 *)(param_1 + 0xa74) = 0xf;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(undefined1 *)(param_1 + 0xd05) = 0;
  return;
}

