#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002acb9c;

// USA 002ACBAC <- EU 002ACB88 (Ghidra, non-matching)
// GLOBAL DAT_002acb9c float

void func_002ACBAC(int param_1)

{
  func_002B0D7C(param_1,4,0x10,0,DAT_002acb9c);
  return;
}

