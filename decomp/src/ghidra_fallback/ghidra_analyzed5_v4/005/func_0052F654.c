#include "ghidra_types.h"

extern float DAT_0052f660;

// USA 0052F654 <- EU 0052F62C (Ghidra, non-matching)
// GLOBAL DAT_0052f660 float

int func_0052F654(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18),
                                     (byte)(in_fpscr >> 0x15) & 3);
  return (int)(fVar1 * (DAT_0052f660 - *(float *)(param_1 + 0x10))) + *(int *)(param_1 + 0x18);
}

