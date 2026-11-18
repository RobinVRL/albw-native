#include "ghidra_types.h"


// USA 0036172C <- EU 003616A0 (Ghidra, function missing from the decomp table)

void func_0036172C(int param_1,float fparam_0)

{
  *(float *)(*(int *)(param_1 + 0x10) + 0x6cc) = fparam_0;
  return;
}

