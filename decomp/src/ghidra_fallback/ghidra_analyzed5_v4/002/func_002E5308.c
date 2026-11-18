#include "ghidra_types.h"

extern int func_00663E64(undefined4 *param_1,undefined1 param_2);
extern float DAT_002e534c;
extern float DAT_002e5350;

// USA 002E5308 <- EU 002E52E4 (Ghidra, non-matching)
// GLOBAL DAT_002e534c float
// GLOBAL DAT_002e5350 float

void func_002E5308(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar1 = 0x4b - *(int *)(param_1 + 0x8cc);
  iVar2 = iVar1;
  if (iVar1 < 2) {
    iVar2 = 1;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x4f0);
  fVar4 = fVar4 + (DAT_002e534c - fVar4) * (DAT_002e5350 / fVar3);
  *(float *)(param_1 + 0x4f0) = fVar4;
  *(float *)(param_1 + 0x4f8) = fVar4;
  if (iVar1 == 0) {
    func_00663E64((undefined4 *)(param_1 + 0x8cc),8);
  }
  return;
}

