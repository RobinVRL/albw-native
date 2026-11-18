#include "ghidra_types.h"

extern float DAT_00546400;

// USA 0054640C <- EU 005463E4 (Ghidra, non-matching)
// GLOBAL DAT_00546400 float

bool func_0054640C(int param_1)

{
  return DAT_00546400 <= *(float *)(param_1 + 0x10);
}

