#include "ghidra_types.h"

extern float DAT_00546300;

// USA 0054630C <- EU 005462E4 (Ghidra, non-matching)
// GLOBAL DAT_00546300 float

bool func_0054630C(int param_1)

{
  return DAT_00546300 <= *(float *)(param_1 + 0x10);
}

