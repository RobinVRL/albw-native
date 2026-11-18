#include "ghidra_types.h"

extern float DAT_0053002c;
extern float DAT_00530030;
extern int *DAT_00530034;
extern float DAT_00530038;

// USA 0052FFD0 <- EU 0052FFA8 (Ghidra, non-matching)
// GLOBAL DAT_0053002c float
// GLOBAL DAT_00530030 float
// GLOBAL DAT_00530034 int *
// GLOBAL DAT_00530038 float

void func_0052FFD0(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  
  *param_2 = *(float *)(param_1 + 0x490);
  param_2[1] = *(float *)(param_1 + 0x494);
  fVar1 = *(float *)(param_1 + 0x498);
  param_2[2] = fVar1;
  if (*(char *)(param_1 + 0x475) == '\x01') {
    if (**(float **)(*DAT_00530034 + 0x1c) < *(float *)(param_1 + 0x490)) {
      fVar2 = *param_2 - DAT_00530030;
    }
    else {
      fVar2 = *param_2 + DAT_00530030;
    }
    *param_2 = fVar2;
    param_2[2] = fVar1 + DAT_00530038;
  }
  else {
    param_2[2] = fVar1 + DAT_0053002c;
  }
  *param_3 = 0x80000000;
  return;
}

