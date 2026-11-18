#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int *DAT_003ebe14;

// USA 003EBDB4 <- EU 003EBD94 (Ghidra, non-matching)
// GLOBAL DAT_003ebe14 int *

uint * func_003EBDB4(int param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  
  lVar8 = func_001104E4(*param_2,*param_3);
  if ((int)((ulonglong)lVar8 >> 0x20) == 0) {
    iVar3 = *DAT_003ebe14;
    uVar1 = *(ushort *)(param_1 + 0x84);
    *(ushort *)(param_1 + 0x84) = uVar1 + 1;
    pfVar2 = (float *)(iVar3 + (uVar1 & 0xffff01ff) * 0xc);
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
    fVar4 = ALBW_AS_F32(param_3[2]);
    fVar5 = ALBW_AS_F32(param_3[3]);
    param_2[8] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[8]) + *pfVar2 * ALBW_AS_F32(param_3[1])));
    param_2[9] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[9]) + fVar6 * fVar4));
    param_2[10] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[10]) + fVar7 * fVar5));
  }
  return param_3 + 4;
}

