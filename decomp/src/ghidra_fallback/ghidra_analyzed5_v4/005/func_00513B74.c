#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00513bb4;

// USA 00513B74 <- EU 00513B4C (Ghidra, non-matching)
// GLOBAL DAT_00513bb4 undefined4

undefined4 func_00513B74(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  func_00115C70(&local_20,param_2,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x3dc) = local_20;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_1c;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_18;
  fparam_0 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  func_00115D88((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fparam_0);
  uVar1 = DAT_00513bb4;
  *(undefined4 *)(param_1 + 0x590) = param_4;
  *(undefined4 *)(param_1 + 0x594) = param_3;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  return func_0066B94C((undefined4 *)(param_1 + 0x48c),0x10);
}

