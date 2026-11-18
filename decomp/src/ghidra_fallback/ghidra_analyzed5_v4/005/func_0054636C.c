#include "ghidra_types.h"

extern float DAT_00546360;

// USA 0054636C <- EU 00546344 (Ghidra, non-matching)
// GLOBAL DAT_00546360 float

bool func_0054636C(int param_1)

{
  return DAT_00546360 <= *(float *)(param_1 + 0x10);
}

