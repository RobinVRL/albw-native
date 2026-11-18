#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002adf50;

// USA 002ADF60 <- EU 002ADF3C (Ghidra, non-matching)
// GLOBAL DAT_002adf50 float

void func_002ADF60(int param_1)

{
  func_002B0D7C(param_1,3,8,0,DAT_002adf50);
  return;
}

