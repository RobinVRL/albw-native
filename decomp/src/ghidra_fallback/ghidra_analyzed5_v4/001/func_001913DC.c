#include "ghidra_types.h"

extern float DAT_0019148c;
extern float DAT_00191490;

// USA 001913DC <- EU 001913DC (Ghidra, non-matching)
// GLOBAL DAT_0019148c float
// GLOBAL DAT_00191490 float

undefined4 func_001913DC(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_00191490;
  fVar1 = DAT_0019148c;
  iVar3 = 0x3c - *(int *)(param_1 + 0x4f8);
  iVar4 = iVar3;
  if (iVar3 < 2) {
    iVar4 = 1;
  }
  fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  fVar6 = *(float *)(param_1 + 0x5b4);
  *(float *)(param_1 + 0x5b4) = fVar6 + (DAT_0019148c - fVar6) * (DAT_00191490 / fVar5);
  fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = *(float *)(param_1 + 0x5b8);
  *(float *)(param_1 + 0x5b8) = fVar6 + (fVar1 - fVar6) * (fVar2 / fVar5);
  fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = *(float *)(param_1 + 0x5bc);
  *(float *)(param_1 + 0x5bc) = fVar5 + (fVar1 - fVar5) * (fVar2 / fVar6);
  if (*(int *)(param_1 + 0x4f8) == 0x3c) {
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  return (undefined4)param_1;
}

