#include "ghidra_types.h"


// USA 004288EC <- EU 004288CC (Ghidra, non-matching)

void func_004288EC(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    fVar3 = *(float *)(param_1 + 8);
    bVar1 = *(float *)(iVar2 + 0xc0) != fVar3;
    *(byte *)(iVar2 + 0xf4) = *(byte *)(iVar2 + 0xf4) | bVar1 << 2;
    if (bVar1) {
      *(float *)(iVar2 + 0xc0) = fVar3;
    }
  }
  return;
}

