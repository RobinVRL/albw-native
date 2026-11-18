#include "ghidra_types.h"

extern float DAT_0051e8e8;
extern float DAT_0051e8ec;

// USA 0051E8AC <- EU 0051E884 (Ghidra, non-matching)
// GLOBAL DAT_0051e8e8 float
// GLOBAL DAT_0051e8ec float

float func_0051E8AC(int param_1,float *param_2,float fparam_0,float fparam_1)

{
  float fVar1;
  
  fVar1 = DAT_0051e8e8;
  if (*(int *)(param_1 + 0x2b80) != 0) {
    fVar1 = *(float *)(param_1 + 0x2b74) * *param_2 + *(float *)(param_1 + 0x2b78) * param_2[1] +
            *(float *)(param_1 + 0x2b7c) * param_2[2];
    if (fVar1 < DAT_0051e8ec) {
      fVar1 = DAT_0051e8ec;
    }
    fVar1 = ((fparam_0 * fparam_1 - fparam_0) * (fVar1 - DAT_0051e8ec)) / DAT_0051e8e8 + fparam_0;
  }
  return fVar1;
}

