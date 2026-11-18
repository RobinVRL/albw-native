#include "ghidra_types.h"


// USA 003EBD0C <- EU 003EBCEC (Ghidra, non-matching)

float * func_003EBD0C(undefined4 param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = *param_3;
  if (*(char *)(param_3 + 3) == '\0') {
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + fVar3;
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + fVar4;
  }
  else {
    pfVar1 = *(float **)(param_2 + 0x130);
    fVar4 = param_3[1];
    fVar3 = param_3[2];
    fVar10 = pfVar1[6];
    fVar9 = pfVar1[1];
    fVar7 = pfVar1[9];
    fVar8 = pfVar1[2];
    fVar6 = pfVar1[10];
    fVar5 = pfVar1[5];
    *(float *)(param_2 + 8) =
         *(float *)(param_2 + 8) + fVar2 * *pfVar1 + pfVar1[4] * fVar4 + fVar3 * pfVar1[8];
    *(float *)(param_2 + 0xc) =
         *(float *)(param_2 + 0xc) + fVar2 * fVar9 + fVar5 * fVar4 + fVar3 * fVar7;
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) + fVar2 * fVar8 + fVar10 * fVar4 + fVar3 * fVar6;
  }
  return param_3 + 4;
}

