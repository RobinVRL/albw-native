#include "ghidra_types.h"

extern float DAT_005463e0;

// USA 005463EC <- EU 005463C4 (Ghidra, non-matching)
// GLOBAL DAT_005463e0 float

bool func_005463EC(int param_1)

{
  return DAT_005463e0 <= *(float *)(param_1 + 0x10);
}

