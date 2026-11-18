#include "ghidra_types.h"

extern float DAT_00546380;

// USA 0054638C <- EU 00546364 (Ghidra, non-matching)
// GLOBAL DAT_00546380 float

bool func_0054638C(int param_1)

{
  return DAT_00546380 <= *(float *)(param_1 + 0x10);
}

