#include "ghidra_types.h"

extern float func_005670A0(float *param_1,float fparam_0);

// USA 006911F4 <- EU 006911CC (Ghidra, non-matching)

int func_006911F4(int param_1,undefined4 *param_2,float fparam_0)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0xc),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xc);
    }
    *param_2 = ALBW_AS_U32(fVar1);
  }
  return ~(*(uint *)(param_1 + 8) & 0xf00) << 8;
}

