#include "ghidra_types.h"

extern undefined4 DAT_001e5be0;

// USA 001E5B90 <- EU 001E5B90 (Ghidra, non-matching)
// GLOBAL DAT_001e5be0 undefined4

undefined4 func_001E5B90(int param_1,undefined1 param_2,float fparam_0,float fparam_1,float fparam_2,
                  float fparam_3,float fparam_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x475) = param_2;
  *(float *)(param_1 + 0x478) = fparam_0;
  *(float *)(param_1 + 0x47c) = fparam_1;
  *(float *)(param_1 + 0x480) = fparam_2;
  *(float *)(param_1 + 0x484) = fparam_0;
  *(float *)(param_1 + 0x488) = fparam_1;
  *(float *)(param_1 + 0x48c) = fparam_2;
  *(float *)(param_1 + 0x490) = fparam_0;
  *(float *)(param_1 + 0x494) = fparam_1;
  *(float *)(param_1 + 0x498) = fparam_2;
  *(float *)(param_1 + 0x49c) = fparam_0;
  *(float *)(param_1 + 0x4a0) = fparam_1;
  *(float *)(param_1 + 0x4a4) = fparam_2;
  *(float *)(param_1 + 0x4a4) = fparam_2 + fparam_3;
  uVar1 = DAT_001e5be0;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001e5be0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(float *)(param_1 + 0x3e4) = fparam_4;
  return (undefined4)param_1;
}

