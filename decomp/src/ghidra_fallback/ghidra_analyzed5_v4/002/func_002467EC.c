#include "ghidra_types.h"

extern float DAT_0024682c;
extern float DAT_00246830;

// USA 002467EC <- EU 002467EC (Ghidra, non-matching)
// GLOBAL DAT_0024682c float
// GLOBAL DAT_00246830 float

void func_002467EC(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(ushort *)(param_1 + 0x438) < 0x3d) {
    fVar1 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(param_1 + 0x438),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(*(int *)(param_1 + 0x410) + 0x158) = (fVar1 - DAT_0024682c) / DAT_00246830;
    *(short *)(param_1 + 0x438) = *(short *)(param_1 + 0x438) + 1;
  }
  return;
}

