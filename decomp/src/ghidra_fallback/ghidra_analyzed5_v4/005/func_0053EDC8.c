#include "ghidra_types.h"


// USA 0053EDC8 <- EU 0053ED84 (Ghidra, function missing from the decomp table)

float func_0053EDC8(int param_1)

{
  return *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x14) + 0x14);
}

