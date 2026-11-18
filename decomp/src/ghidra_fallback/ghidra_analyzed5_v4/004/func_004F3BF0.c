#include "ghidra_types.h"

extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern float DAT_004f3c30;
extern float DAT_004f3c34;

// USA 004F3BF0 <- EU 004F3BC8 (Ghidra, non-matching)
// GLOBAL DAT_004f3c30 float
// GLOBAL DAT_004f3c34 float

void func_004F3BF0(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar1 = 0x2d - *(int *)(param_1 + 0x8d4);
  iVar2 = iVar1;
  if (iVar1 < 2) {
    iVar2 = 1;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x4f0);
  fVar4 = fVar4 + (DAT_004f3c30 - fVar4) * (DAT_004f3c34 / fVar3);
  *(float *)(param_1 + 0x4f0) = fVar4;
  *(float *)(param_1 + 0x4f8) = fVar4;
  if (iVar1 == 0) {
    func_0066ACA4((undefined4 *)(param_1 + 0x8d4),8);
  }
  return;
}

