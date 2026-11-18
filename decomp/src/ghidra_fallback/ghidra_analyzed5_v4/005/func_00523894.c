#include "ghidra_types.h"

extern float DAT_005238b0;
extern float DAT_005238b4;
extern int DAT_005238b8;

// USA 00523894 <- EU 0052386C (Ghidra, non-matching)
// GLOBAL DAT_005238b0 float
// GLOBAL DAT_005238b4 float
// GLOBAL DAT_005238b8 int

int func_00523894(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  fVar3 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0x2d8),(byte)(in_fpscr >> 0x15) & 3);
  iVar1 = (int)(short)(int)(fVar3 * DAT_005238b0 * DAT_005238b4);
  iVar2 = (int)((ulonglong)((longlong)DAT_005238b8 * (longlong)iVar1) >> 0x20);
  return iVar1 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -100;
}

