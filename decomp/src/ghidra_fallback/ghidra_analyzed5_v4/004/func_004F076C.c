#include "ghidra_types.h"

extern float DAT_004f07e0;
extern float DAT_004f07e4;

// USA 004F076C <- EU 004F0744 (Ghidra, non-matching)
// GLOBAL DAT_004f07e0 float
// GLOBAL DAT_004f07e4 float

void func_004F076C(int param_1)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_004f07e4;
  fVar4 = DAT_004f07e0;
  if (*(char *)(param_1 + 0x134) != '\0') {
    iVar2 = *(int *)(param_1 + 0x130) + 1;
    *(int *)(param_1 + 0x130) = iVar2;
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 300),(byte)(in_fpscr >> 0x15) & 3);
    if (fVar3 != fVar4) {
      fVar4 = (fVar1 * (fVar5 - fVar4)) / fVar3 + fVar4;
    }
    *(float *)(param_1 + 0x128) =
         *(float *)(param_1 + 0x120) +
         (*(float *)(param_1 + 0x124) - *(float *)(param_1 + 0x120)) * fVar4;
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),0);
    *(bool *)(param_1 + 0x134) = *(int *)(param_1 + 0x130) != *(int *)(param_1 + 300);
  }
  return;
}

