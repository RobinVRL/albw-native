#include "ghidra_types.h"

extern uint DAT_00523cb4;
extern float DAT_00523cb8;
extern float DAT_00523cbc;

// USA 00523C78 <- EU 00523C50 (Ghidra, non-matching)
// GLOBAL DAT_00523cb4 uint
// GLOBAL DAT_00523cb8 float
// GLOBAL DAT_00523cbc float

int func_00523C78(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = (float)VectorUnsignedToFloat
                           ((*(uint *)(param_1 + 0x2d8) +
                            (uint)((ulonglong)*(uint *)(param_1 + 0x2d8) * (ulonglong)DAT_00523cb4
                                  >> 0x25) * -0x3c) * 100,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_00523cb8;
  iVar2 = (int)fVar1;
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar3 != fVar1) && (DAT_00523cbc <= fVar1)) {
    iVar2 = iVar2 + 1;
  }
  return (int)(short)iVar2;
}

