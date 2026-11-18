#include "ghidra_types.h"

extern int DAT_004e1e74;
extern float DAT_004e1e78;
extern float DAT_004e1e7c;
extern float DAT_004e1e80;
extern float DAT_004e1e84;
extern float DAT_004e1e88;

// USA 004E1DDC <- EU 004E1DB4 (Ghidra, non-matching)
// GLOBAL DAT_004e1e74 int
// GLOBAL DAT_004e1e78 float
// GLOBAL DAT_004e1e7c float
// GLOBAL DAT_004e1e80 float
// GLOBAL DAT_004e1e84 float
// GLOBAL DAT_004e1e88 float

void * func_004E1DDC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_1 + 0x420);
  iVar1 = *(int *)(param_1 + 0x50c);
  if (iVar3 < 0x2b) {
    iVar2 = (int)((ulonglong)((longlong)DAT_004e1e74 * (longlong)iVar3) >> 0x20);
    iVar2 = iVar2 - (iVar2 >> 0x1f);
    fVar4 = (float)VectorSignedToFloat(iVar2 * -3 + iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * DAT_004e1e78;
    fVar6 = (float)VectorSignedToFloat(0x2a - iVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)(fVar6 * DAT_004e1e7c * DAT_004e1e80 * DAT_004e1e84);
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)((DAT_004e1e88 - fVar4) * fVar6);
    if (iVar2 % 2 == 0) {
      if ((int)ALBW_AS_U32(fVar4) < 0x3f000001) {
        iVar3 = (int)(fVar5 * fVar4);
      }
      iVar1 = iVar1 + iVar3;
    }
    else if ((int)ALBW_AS_U32(fVar4) < 0x3f000001) {
      iVar1 = iVar1 - (int)(fVar5 * fVar4);
    }
    else {
      iVar1 = iVar1 - iVar3;
    }
  }
  *(int *)(param_1 + 1000) = iVar1;
  return (void *)param_1;
}

