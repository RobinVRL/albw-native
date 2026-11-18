#include "ghidra_types.h"

extern uint DAT_00523b6c;
extern float DAT_00523b70;
extern float DAT_00523b74;

// USA 00523B24 <- EU 00523AFC (Ghidra, non-matching)
// GLOBAL DAT_00523b6c uint
// GLOBAL DAT_00523b70 float
// GLOBAL DAT_00523b74 float

int func_00523B24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2dc);
  if (uVar1 == 0xffffffff) {
    iVar2 = 0;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uVar1 + (uint)((ulonglong)uVar1 * (ulonglong)DAT_00523b6c >> 0x25) *
                                       -0x3c) * 100,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * DAT_00523b70;
    iVar2 = (int)fVar3;
    fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    if ((fVar4 != fVar3) && (DAT_00523b74 <= fVar3)) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = (int)(short)iVar2;
  }
  return iVar2;
}

