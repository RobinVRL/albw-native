#include "ghidra_types.h"


// USA 00556CE4 <- EU 00556C80 (Ghidra, function missing from the decomp table)

float func_00556CE4(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x10) + 0x6cc);
}

