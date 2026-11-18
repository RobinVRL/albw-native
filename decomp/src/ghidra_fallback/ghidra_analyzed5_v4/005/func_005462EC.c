#include "ghidra_types.h"

extern float DAT_005462e0;

// USA 005462EC <- EU 005462C4 (Ghidra, non-matching)
// GLOBAL DAT_005462e0 float

bool func_005462EC(int param_1)

{
  return DAT_005462e0 < *(float *)(param_1 + 0x10);
}

