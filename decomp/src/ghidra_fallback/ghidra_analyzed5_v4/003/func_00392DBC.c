#include "ghidra_types.h"

extern float DAT_00392e18;
extern float DAT_00392e1c;
extern float DAT_00392e20;

// USA 00392DBC <- EU 00392D98 (Ghidra, non-matching)
// GLOBAL DAT_00392e18 float
// GLOBAL DAT_00392e1c float
// GLOBAL DAT_00392e20 float

bool func_00392DBC(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  
  fVar2 = DAT_00392e20;
  fVar1 = DAT_00392e1c;
  fVar5 = DAT_00392e18;
  bVar4 = *(char *)(param_1 + 0xc) == '\0';
  if (!bVar4) {
    uVar3 = **(undefined4 **)(param_1 + 4);
    (*(undefined4 **)(param_1 + 4))[2] = uVar3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = uVar3;
    fVar5 = *(float *)(*(int *)(param_1 + 8) + 4) * fVar5;
    *(float *)(*(int *)(param_1 + 8) + 4) = fVar5;
    *(float *)(*(int *)(param_1 + 8) + 4) = fVar5 - fVar1;
    **(float **)(param_1 + 8) = **(float **)(param_1 + 8) * fVar2;
    *(float *)(*(int *)(param_1 + 8) + 8) = *(float *)(*(int *)(param_1 + 8) + 8) * fVar2;
    *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + -1;
  }
  return bVar4;
}

