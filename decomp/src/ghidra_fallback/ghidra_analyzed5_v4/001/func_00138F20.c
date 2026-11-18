#include "ghidra_types.h"

extern int func_006571B4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00138fe0;
extern float DAT_00138fe4;

// USA 00138F20 <- EU 00138F20 (Ghidra, non-matching)
// GLOBAL DAT_00138fe0 float
// GLOBAL DAT_00138fe4 float

void func_00138F20(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar2 = DAT_00138fe4;
  fVar1 = DAT_00138fe0;
  iVar3 = 0x5a - *(int *)(param_1 + 0x40c);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = *(float *)(param_1 + 0x450);
  *(float *)(param_1 + 0x450) = fVar5 + (DAT_00138fe4 - fVar5) * (DAT_00138fe0 / fVar4);
  fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = *(float *)(param_1 + 0x454);
  *(float *)(param_1 + 0x454) = fVar5 + (fVar2 - fVar5) * (fVar1 / fVar4);
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x458);
  *(float *)(param_1 + 0x458) = fVar4 + (fVar2 - fVar4) * (fVar1 / fVar5);
  if (*(int *)(param_1 + 0x40c) == 0x5a) {
    func_006571B4((undefined4 *)(param_1 + 0x40c),2);
  }
  return;
}

