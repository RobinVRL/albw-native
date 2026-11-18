#include "ghidra_types.h"

extern float func_0058A404(int param_1);
extern float DAT_00548e90;

// USA 00548E78 <- EU 00548E50 (Ghidra, non-matching)
// GLOBAL DAT_00548e90 float

int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = func_0058A404(param_1);
  fVar3 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  return (int)((DAT_00548e90 - (DAT_00548e90 - fVar1)) * fVar3 + (DAT_00548e90 - fVar1) * fVar2);
}

