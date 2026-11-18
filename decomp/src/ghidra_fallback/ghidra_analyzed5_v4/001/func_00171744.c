#include "ghidra_types.h"

extern uint DAT_001717a4;
extern float DAT_001717a8;
extern float DAT_001717ac;

// USA 00171744 <- EU 00171744 (Ghidra, non-matching)
// GLOBAL DAT_001717a4 uint
// GLOBAL DAT_001717a8 float
// GLOBAL DAT_001717ac float

int func_00171744(uint param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = (float)VectorUnsignedToFloat
                           ((param_1 +
                            (uint)((ulonglong)param_1 * (ulonglong)DAT_001717a4 >> 0x25) * -0x3c) *
                            100,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_001717a8;
  iVar2 = (int)fVar1;
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar3 != fVar1) && (DAT_001717ac <= fVar1)) {
    iVar2 = iVar2 + 1;
  }
  return (int)(short)iVar2;
}

