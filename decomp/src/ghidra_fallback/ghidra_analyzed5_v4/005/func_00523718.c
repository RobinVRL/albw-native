#include "ghidra_types.h"

extern float DAT_00523748;

// USA 00523718 <- EU 005236F0 (Ghidra, non-matching)
// GLOBAL DAT_00523748 float

float func_00523718(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  if (((*(char *)(param_1 + 0x70) == '\t') ||
      (iVar1 = *(int *)(param_1 + 0x2c0), *(int *)(param_1 + 0x2c4) == -1 && iVar1 == -1)) ||
     (iVar1 - *(int *)(param_1 + 0x2c8) < 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 - *(int *)(param_1 + 0x2c8);
  }
  fVar2 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  return fVar2 * DAT_00523748;
}

