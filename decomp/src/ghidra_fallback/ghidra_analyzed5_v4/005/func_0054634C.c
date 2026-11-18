#include "ghidra_types.h"

extern float DAT_00546340;

// USA 0054634C <- EU 00546324 (Ghidra, non-matching)
// GLOBAL DAT_00546340 float

bool func_0054634C(int param_1)

{
  return DAT_00546340 <= *(float *)(param_1 + 0x10);
}

