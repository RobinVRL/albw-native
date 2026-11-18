#include "ghidra_types.h"

extern int func_002E11AC(float *param_1,float *param_2,float param_3,float fparam_0);
extern float DAT_002e1184;

// USA 002E11A0 <- EU 002E117C (Ghidra, non-matching)
// GLOBAL DAT_002e1184 float

void func_002E11A0(float *param_1,float *param_2,float param_3)

{
  func_002E11AC(param_1,param_2,param_3,DAT_002e1184);
  return;
}

