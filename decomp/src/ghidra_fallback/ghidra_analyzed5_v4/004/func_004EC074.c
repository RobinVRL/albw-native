#include "ghidra_types.h"

extern int func_00256870(int param_1,int param_2,float fparam_0);

// USA 004EC074 <- EU 004EC04C (Ghidra, non-matching)

undefined4 func_004EC074(int param_1,int param_2,float fparam_0)

{
  return func_00256870(*(int *)(param_1 + 0x34),param_2,fparam_0);
}

