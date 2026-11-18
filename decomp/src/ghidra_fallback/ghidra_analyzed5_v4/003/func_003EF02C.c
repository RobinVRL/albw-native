#include "ghidra_types.h"


// USA 003EF02C <- EU 003EF00C (Ghidra, non-matching)

void func_003EF02C(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_1 + 0x138);
  fVar3 = *(float *)(iVar1 + 0x304);
  if (*(char *)(iVar1 + 0x17b) != '\0') {
    pfVar2 = *(float **)(param_1 + 0x130);
    fVar4 = *(float *)(iVar1 + 0x308);
    fVar5 = *(float *)(iVar1 + 0x30c);
    fVar10 = pfVar2[6];
    fVar11 = pfVar2[5];
    fVar6 = pfVar2[10];
    fVar7 = pfVar2[9];
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    *(float *)(param_1 + 0x20) =
         fVar4 * pfVar2[4] + fVar5 * pfVar2[8] + *(float *)(param_1 + 0x20) + fVar3 * *pfVar2;
    *(float *)(param_1 + 0x24) =
         fVar4 * fVar11 + fVar5 * fVar7 + *(float *)(param_1 + 0x24) + fVar3 * fVar8;
    *(float *)(param_1 + 0x28) =
         fVar4 * fVar10 + fVar5 * fVar6 + *(float *)(param_1 + 0x28) + fVar3 * fVar9;
    return;
  }
  fVar4 = *(float *)(iVar1 + 0x308);
  fVar5 = *(float *)(iVar1 + 0x30c);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar3;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fVar4;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar5;
  return;
}

