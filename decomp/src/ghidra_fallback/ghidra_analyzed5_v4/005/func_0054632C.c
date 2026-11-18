#include "ghidra_types.h"

extern float DAT_00546320;

// USA 0054632C <- EU 00546304 (Ghidra, non-matching)
// GLOBAL DAT_00546320 float

bool func_0054632C(int param_1)

{
  return DAT_00546320 <= *(float *)(param_1 + 0x10);
}

