#include "ghidra_types.h"

extern float DAT_0029fa7c;

// USA 0029FA1C <- EU 0029F9F8 (Ghidra, non-matching)
// GLOBAL DAT_0029fa7c float

undefined4 func_0029FA1C(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  fVar1 = DAT_0029fa7c;
  iVar2 = *(int *)(param_1 + 0x14);
  if (0 < iVar2) {
    if (*(int *)(param_1 + 0x18) < 1) {
      iVar3 = iVar2;
      if (iVar2 < 2) {
        iVar3 = 1;
      }
      iVar4 = iVar2;
      if (iVar2 < 2) {
        iVar4 = 1;
      }
      fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 8) =
           *(float *)(param_1 + 8) +
           (*(float *)(param_1 + 4) - *(float *)(param_1 + 8)) * (DAT_0029fa7c / fVar5);
      fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x10) =
           *(float *)(param_1 + 0x10) +
           (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10)) * (fVar1 / fVar5);
      *(int *)(param_1 + 0x14) = iVar2 + -1;
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return (undefined4)param_1;
}

