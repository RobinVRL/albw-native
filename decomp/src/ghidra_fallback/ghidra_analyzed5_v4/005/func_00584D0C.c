#include "ghidra_types.h"


// USA 00584D0C <- EU 00584CE4 (Ghidra, non-matching)

float func_00584D0C(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x10) + 0x134);
}

