#include "ghidra_types.h"

extern float DAT_003252e0;

// USA 003252B8 <- EU 00325294 (Ghidra, non-matching)
// GLOBAL DAT_003252e0 float

undefined4 func_003252B8(int param_1,int param_2,float fparam_0)

{
  float fVar1;
  
  fVar1 = DAT_003252e0;
  *(float *)(param_1 + 0x3e4) = DAT_003252e0;
  if (param_2 == 0) {
    fparam_0 = fVar1 + fparam_0;
  }
  *(float *)(param_1 + 0x3dc) = fVar1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      fVar1 = fVar1 + fparam_0;
    }
    else {
      if (param_2 == 2) {
        fparam_0 = fVar1 - fparam_0;
        goto LAB_003252d8;
      }
      if (param_2 != 3) {
        return (undefined4)param_1;
      }
      fVar1 = fVar1 - fparam_0;
    }
    *(float *)(param_1 + 0x3dc) = fVar1;
    return (undefined4)param_1;
  }
LAB_003252d8:
  *(float *)(param_1 + 0x3e4) = fparam_0;
  return (undefined4)param_1;
}

