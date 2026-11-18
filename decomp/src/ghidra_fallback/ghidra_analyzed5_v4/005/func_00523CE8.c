#include "ghidra_types.h"

extern float DAT_00523d48;
extern float DAT_00523d4c;
extern int DAT_00523d50;
extern float DAT_00523d54;
extern float DAT_00523d58;
extern int DAT_00523d5c;

// USA 00523CE8 <- EU 00523CC0 (Ghidra, non-matching)
// GLOBAL DAT_00523d48 float
// GLOBAL DAT_00523d4c float
// GLOBAL DAT_00523d50 int
// GLOBAL DAT_00523d54 float
// GLOBAL DAT_00523d58 float
// GLOBAL DAT_00523d5c int

int func_00523CE8(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x2dc) == -1) {
    iVar2 = 0;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat
                             (*(int *)(param_1 + 0x2dc) - *(int *)(DAT_00523d50 + 0x10),
                              (byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar3 * DAT_00523d4c * DAT_00523d54;
    fVar3 = DAT_00523d48;
    if (DAT_00523d48 <= fVar4) {
      fVar3 = fVar4;
    }
    if (DAT_00523d48 <= fVar3) {
      fVar3 = fVar3 + DAT_00523d58;
    }
    else {
      fVar3 = fVar3 - DAT_00523d58;
    }
    lVar1 = (longlong)DAT_00523d5c * (longlong)(int)fVar3;
    iVar2 = (int)(short)((short)(int)fVar3 +
                        ((short)(int)(lVar1 >> 0x25) - (short)(lVar1 >> 0x3f)) * -100);
  }
  return iVar2;
}

