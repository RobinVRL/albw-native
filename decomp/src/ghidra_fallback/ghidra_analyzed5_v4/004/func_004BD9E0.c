#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);

// USA 004BD9E0 <- EU 004BD9B8 (Ghidra, non-matching)

int func_004BD9E0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_3 + 0x2c);
  func_00115C70(local_18,param_2,(float *)(param_1 + 0x3d0));
  iVar1 = func_004904CC(local_18[0],local_10);
  *(int *)(param_1 + 1000) = iVar1;
  return iVar1;
}

