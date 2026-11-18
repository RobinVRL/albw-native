#include "ghidra_types.h"

extern float DAT_005463a0;

// USA 005463AC <- EU 00546384 (Ghidra, non-matching)
// GLOBAL DAT_005463a0 float

bool func_005463AC(int param_1)

{
  return DAT_005463a0 <= *(float *)(param_1 + 0x10);
}

