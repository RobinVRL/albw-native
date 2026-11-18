#include "ghidra_types.h"

extern float DAT_002d3c0c;

// USA 002D3C14 <- EU 002D3BF0 (Ghidra, non-matching)
// GLOBAL DAT_002d3c0c float

undefined4 func_002D3C14(int param_1)

{
  float fVar1;
  
  fVar1 = DAT_002d3c0c;
  *(undefined4 *)(param_1 + 0x1c) = 0x3c;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - fVar1;
  return (undefined4)param_1;
}

