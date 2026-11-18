#include "ghidra_types.h"

extern float DAT_002d3bec;

// USA 002D3BF4 <- EU 002D3BD0 (Ghidra, non-matching)
// GLOBAL DAT_002d3bec float

undefined4 func_002D3BF4(int param_1)

{
  float fVar1;
  
  fVar1 = DAT_002d3bec;
  *(undefined4 *)(param_1 + 0x1c) = 0x3c;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - fVar1;
  return (undefined4)param_1;
}

