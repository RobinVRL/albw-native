#include "ghidra_types.h"

extern float DAT_001d15e4;
extern float DAT_001d15e8;
extern float DAT_001d15ec;
extern float DAT_001d15f0;

// USA 001D1598 <- EU 001D1598 (Ghidra, non-matching)
// GLOBAL DAT_001d15e4 float
// GLOBAL DAT_001d15e8 float
// GLOBAL DAT_001d15ec float
// GLOBAL DAT_001d15f0 float

void func_001D1598(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (DAT_001d15f0 *
          ((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x5c8)) - DAT_001d15e8)) /
          DAT_001d15ec + DAT_001d15e4;
  fVar1 = DAT_001d15e4;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar2)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x5cc) = fVar2;
  *(float *)(param_1 + 0x5cc) = fVar1;
  return;
}

