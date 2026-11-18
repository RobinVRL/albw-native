#include "ghidra_types.h"

extern int func_001E5B90(int param_1,undefined1 param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4);
extern undefined4 DAT_00241000;
extern float DAT_00241004;
extern float DAT_00241008;

// USA 00240FD8 <- EU 00240FD8 (Ghidra, non-matching)
// GLOBAL DAT_00241000 undefined4
// GLOBAL DAT_00241004 float
// GLOBAL DAT_00241008 float

undefined4 func_00240FD8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00241000;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00241000;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_001E5B90(param_1,0,*(float *)(param_1 + 0x3d0),*(float *)(param_1 + 0x3d4),
                *(float *)(param_1 + 0x3d8),DAT_00241008,DAT_00241004);
  return (undefined4)param_1;
}

