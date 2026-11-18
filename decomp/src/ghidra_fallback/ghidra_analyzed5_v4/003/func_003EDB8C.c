#include "ghidra_types.h"


// USA 003EDB8C <- EU 003EDB6C (Ghidra, non-matching)

void func_003EDB8C(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = ALBW_AS_F32(param_2[8]);
  pfVar2 = (float *)param_2[0x4d];
  param_2[2] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[2]) + fVar4));
  fVar5 = ALBW_AS_F32(param_2[9]);
  param_2[3] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[3]) + fVar5));
  fVar6 = ALBW_AS_F32(param_2[10]);
  param_2[4] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[4]) + fVar6));
  iVar1 = param_2[0x4e];
  if (*(char *)(iVar1 + 0x17b) == '\0') {
    param_2[8] = (int)ALBW_AS_U32((fVar4 + *(float *)(iVar1 + 0x304)));
    param_2[9] = (int)ALBW_AS_U32((fVar5 + *(float *)(iVar1 + 0x308)));
    fVar6 = fVar6 + *(float *)(iVar1 + 0x30c);
  }
  else {
    pfVar3 = (float *)param_2[0x4c];
    param_2[8] = (int)ALBW_AS_U32((*(float *)(iVar1 + 0x308) * pfVar3[4] + *(float *)(iVar1 + 0x30c) * pfVar3[8]
                      + fVar4 + *(float *)(iVar1 + 0x304) * *pfVar3));
    param_2[9] = (int)ALBW_AS_U32((*(float *)(iVar1 + 0x308) * pfVar3[5] + *(float *)(iVar1 + 0x30c) * pfVar3[9]
                      + fVar5 + *(float *)(iVar1 + 0x304) * pfVar3[1]));
    fVar6 = *(float *)(iVar1 + 0x308) * pfVar3[6] + *(float *)(iVar1 + 0x30c) * pfVar3[10] +
            fVar6 + *(float *)(iVar1 + 0x304) * pfVar3[2];
  }
  param_2[10] = (int)ALBW_AS_U32(fVar6);
  param_2[8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[8]) * *(float *)(iVar1 + 0x300)));
  param_2[9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[9]) * *(float *)(iVar1 + 0x300)));
  param_2[10] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[10]) * *(float *)(iVar1 + 0x300)));
  param_2[0x13] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x13]) + ALBW_AS_F32(param_2[0x16])));
  fVar4 = *(float *)(iVar1 + 0x538);
  param_2[0x14] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x14]) * fVar4));
  param_2[0x15] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x15]) * fVar4));
  param_2[0x16] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x16]) * fVar4));
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    pfVar3 = (float *)param_2[0x18];
    if ((int)ALBW_AS_U32(pfVar3[2]) < *param_2) {
      if ((int)ALBW_AS_U32(pfVar3[3]) < *param_2) {
        param_2[0x17] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x17]) + pfVar3[1]));
      }
    }
    else {
      param_2[0x17] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x17]) + *pfVar3));
    }
  }
  if (*(char *)(param_1 + 0x2ad) != '\0') {
    pfVar3 = (float *)param_2[0x1b];
    if ((int)ALBW_AS_U32(pfVar3[4]) < *param_2) {
      if ((int)ALBW_AS_U32(pfVar3[5]) < *param_2) {
        param_2[0x19] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x19]) + pfVar3[2]));
        param_2[0x1a] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x1a]) + pfVar3[3]));
      }
    }
    else {
      param_2[0x19] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x19]) + *pfVar3));
      param_2[0x1a] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x1a]) + pfVar3[1]));
    }
  }
  fVar4 = ALBW_AS_F32(param_2[3]);
  fVar6 = ALBW_AS_F32(param_2[4]);
  fVar5 = ALBW_AS_F32(param_2[2]);
  param_2[0xb] = (int)ALBW_AS_U32((pfVar2[1] * fVar4 + pfVar2[2] * fVar6 + pfVar2[3] + *pfVar2 * fVar5));
  param_2[0xc] = (int)ALBW_AS_U32((pfVar2[5] * fVar4 + pfVar2[6] * fVar6 + pfVar2[7] + pfVar2[4] * fVar5));
  param_2[0xd] = (int)ALBW_AS_U32((pfVar2[9] * fVar4 + pfVar2[10] * fVar6 + pfVar2[0xb] + pfVar2[8] * fVar5));
  *param_2 = *param_2 + 1;
  return;
}

