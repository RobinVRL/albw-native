#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float DAT_00357d78;
extern float DAT_00357d7c;
extern undefined4 DAT_00357d80;

// USA 00357D3C <- EU 00357D18 (Ghidra, non-matching)
// GLOBAL DAT_00357d78 float
// GLOBAL DAT_00357d7c float
// GLOBAL DAT_00357d80 undefined4

void func_00357D3C(int param_1)

{
  float fparam_0;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x500);
  func_00115D70(&local_18,(float *)(param_1 + 0x374),DAT_00357d78);
  fparam_0 = DAT_00357d7c;
  *(float *)(param_1 + 0x3dc) = local_18;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_14;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_10;
  func_004FB4E0(param_1,fparam_0);
  uVar1 = DAT_00357d80;
  *(undefined4 *)(param_1 + 0x924) = 500;
  *(undefined4 *)(param_1 + 0x928) = uVar1;
  *(undefined4 *)(param_1 + 0x920) = 0;
  return;
}

