#include "ghidra_types.h"

extern float DAT_00523a88;
extern float DAT_00523a8c;
extern int DAT_00523a90;

// USA 00523A64 <- EU 00523A3C (Ghidra, non-matching)
// GLOBAL DAT_00523a88 float
// GLOBAL DAT_00523a8c float
// GLOBAL DAT_00523a90 int

int func_00523A64(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x2dc) == -1) {
    iVar1 = 0;
  }
  else {
    fVar2 = (float)VectorUnsignedToFloat
                             (*(int *)(param_1 + 0x2dc) - *(int *)(DAT_00523a90 + 0x10),
                              (byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar2 * DAT_00523a8c;
    if (fVar2 * DAT_00523a8c < DAT_00523a88) {
      fVar3 = DAT_00523a88;
    }
    iVar1 = (int)(short)(int)fVar3;
  }
  return iVar1;
}

