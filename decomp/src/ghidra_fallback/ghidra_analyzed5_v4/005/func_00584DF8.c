#include "ghidra_types.h"


// USA 00584DF8 <- EU 00584DD0 (Ghidra, non-matching)

float func_00584DF8(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x10) + 0x138);
}

