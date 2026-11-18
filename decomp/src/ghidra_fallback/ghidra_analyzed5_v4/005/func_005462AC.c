#include "ghidra_types.h"

extern float DAT_005462a0;

// USA 005462AC <- EU 00546284 (Ghidra, non-matching)
// GLOBAL DAT_005462a0 float

bool func_005462AC(int param_1)

{
  return DAT_005462a0 <= *(float *)(param_1 + 0x10);
}

