#include "ghidra_types.h"

extern uint DAT_00523c44;
extern float DAT_00523c48;
extern float DAT_00523c4c;

// USA 00523C08 <- EU 00523BE0 (Ghidra, non-matching)
// GLOBAL DAT_00523c44 uint
// GLOBAL DAT_00523c48 float
// GLOBAL DAT_00523c4c float

int func_00523C08(int param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = (float)VectorUnsignedToFloat
                           ((*(uint *)(param_1 + 0x10) +
                            (uint)((ulonglong)*(uint *)(param_1 + 0x10) * (ulonglong)DAT_00523c44 >>
                                  0x25) * -0x3c) * 100,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_00523c48;
  iVar2 = (int)fVar1;
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar3 != fVar1) && (DAT_00523c4c <= fVar1)) {
    iVar2 = iVar2 + 1;
  }
  return (int)(short)iVar2;
}

