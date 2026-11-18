#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002af614;

// USA 002AF624 <- EU 002AF600 (Ghidra, non-matching)
// GLOBAL DAT_002af614 float

void func_002AF624(int param_1)

{
  func_002B0D7C(param_1,9,0,0,DAT_002af614);
  return;
}

