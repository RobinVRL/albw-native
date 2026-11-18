#include "ghidra_types.h"

extern float DAT_005463c0;

// USA 005463CC <- EU 005463A4 (Ghidra, non-matching)
// GLOBAL DAT_005463c0 float

bool func_005463CC(int param_1)

{
  return DAT_005463c0 <= *(float *)(param_1 + 0x10);
}

