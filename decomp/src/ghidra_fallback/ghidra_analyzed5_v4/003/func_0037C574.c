#include "ghidra_types.h"

extern undefined4 DAT_0037c5a0;
extern float DAT_0037c5a4;

// USA 0037C574 <- EU 0037C550 (Ghidra, non-matching)
// GLOBAL DAT_0037c5a0 undefined4
// GLOBAL DAT_0037c5a4 float

void func_0037C574(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0x450) = 1;
  iVar1 = 400;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (iVar1 == 0) {
    in_s0 = DAT_0037c5a0;
  }
  *(int *)(param_1 + 0x458) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x45c) = in_s0;
  }
  else {
    fVar2 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x45c) = DAT_0037c5a4 / fVar2;
  }
  *(undefined4 *)(param_1 + 0x454) = 0;
  return;
}

