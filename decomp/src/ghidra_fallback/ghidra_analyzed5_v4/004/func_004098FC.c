#include "ghidra_types.h"

extern float DAT_0040991c;

// USA 004098FC <- EU 004098DC (Ghidra, non-matching)
// GLOBAL DAT_0040991c float

undefined4 func_004098FC(undefined4 param_1,int param_2,undefined4 param_3,float *param_4,float fparam_0)

{
  float fVar1;
  
  fVar1 = DAT_0040991c;
  if (*(float *)(param_2 + 0x4c) < fparam_0) {
    fVar1 = ((fparam_0 - *(float *)(param_2 + 0x4c)) / *(float *)(param_2 + 0x50)) *
            *(float *)(param_2 + 0x58);
    if (*(float *)(param_2 + 0x5c) < fVar1) {
      fVar1 = *(float *)(param_2 + 0x5c);
    }
  }
  *param_4 = fVar1;
  return (undefined4)param_1;
}

