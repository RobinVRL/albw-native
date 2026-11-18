#include "ghidra_types.h"

extern float DAT_005462c0;

// USA 005462CC <- EU 005462A4 (Ghidra, non-matching)
// GLOBAL DAT_005462c0 float

bool func_005462CC(int param_1)

{
  return DAT_005462c0 <= *(float *)(param_1 + 0x10);
}

