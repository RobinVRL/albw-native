#include "ghidra_types.h"

extern float DAT_0049279c;

// USA 00492780 <- EU 00492758 (Ghidra, non-matching)
// GLOBAL DAT_0049279c float

undefined4 func_00492780(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (*(float *)(param_2 + 0x10) - *(float *)(param_2 + 8)) * DAT_0049279c;
  fVar1 = (*(float *)(param_2 + 0xc) - *(float *)(param_2 + 4)) * DAT_0049279c;
  *(float *)(param_1 + 0xa8) = fVar1;
  *(float *)(param_1 + 0x9c) = fVar2;
  *(float *)(param_1 + 0xa0) = -fVar2;
  *(float *)(param_1 + 0xa4) = -fVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  return (undefined4)param_1;
}

