// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00354280(int param_1,float *param_2);
extern int func_00556E64(int param_1);
extern int *DAT_00354258;

// USA 003541E4 <- EU 003541C0 (Ghidra, non-matching)
// GLOBAL DAT_00354258 int *

undefined4 func_003541E4(int param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *DAT_00354258;
  if (iVar5 == 0) {
    fVar2 = *(float *)(param_1 + 0xa9c);
    fVar4 = *(float *)(param_1 + 0xaa0);
    *param_2 = *(float *)(param_1 + 0xa98);
    param_2[1] = fVar2;
    param_2[2] = fVar4;
  }
  else {
    bVar1 = func_00556E64(iVar5);
    if (bVar1) {
      fVar2 = *(float *)(param_1 + 0xc);
      fVar4 = (*(float **)(iVar5 + 0x1c))[2];
      *param_2 = **(float **)(iVar5 + 0x1c);
      param_2[1] = fVar2;
      param_2[2] = fVar4;
    }
    else {
      pfVar3 = *(float **)(iVar5 + 0x1c);
      fVar2 = *(float *)(param_1 + 0xc);
      fVar4 = pfVar3[2];
      *param_2 = *pfVar3;
      param_2[1] = fVar2;
      param_2[2] = fVar4;
      fVar2 = pfVar3[2];
      *(float *)(param_1 + 0xa98) = *pfVar3;
      *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(param_1 + 0xc);
      *(float *)(param_1 + 0xaa0) = fVar2;
    }
  }
  return func_00354280(param_1,param_2);
}

