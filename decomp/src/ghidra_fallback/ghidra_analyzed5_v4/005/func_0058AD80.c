#include "ghidra_types.h"

extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern float DAT_0058adb0;
extern int *DAT_0058adb4;

// USA 0058AD80 <- EU 0058AD58 (Ghidra, non-matching)
// GLOBAL DAT_0058adb0 float
// GLOBAL DAT_0058adb4 int *

undefined4 func_0058AD80(int param_1,float fparam_0)

{
  undefined4 uVar1;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  #define local_8 (*(undefined4 *)(albw_frame + 0x8))
  local_10 = *(float *)(param_1 + 0x3d0);
  if (fparam_0 <= DAT_0058adb0) {
    fparam_0 = -fparam_0;
  }
  fparam_0_00 = *(float *)(param_1 + 0x4c4) + fparam_0;
  local_8 = *(undefined4 *)(param_1 + 0x3d8);
  local_c = *(float *)(param_1 + 0x3d4) + fparam_0_00;
  uVar1 = func_0051E6D0(*DAT_0058adb4,&local_10,fparam_0_00);
  return uVar1;
}

