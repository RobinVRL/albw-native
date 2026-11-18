#include "ghidra_types.h"


// USA 00409250 <- EU 00409230 (Ghidra, non-matching)

void func_00409250(int param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  
  pfVar1 = *(float **)(param_1 + 0x10);
  fVar4 = pfVar1[0xc];
  fVar2 = pfVar1[0xd];
  fVar3 = pfVar1[0xe];
  fVar5 = -(*param_2 * param_2[3] + param_2[4] * param_2[7]) + -(param_2[8] * param_2[0xb]);
  pfVar1[0xc] = fVar5;
  pfVar1[0xd] = -(param_2[1] * param_2[3] + param_2[5] * param_2[7]) + -(param_2[9] * param_2[0xb]);
  pfVar1[0xe] = -(param_2[2] * param_2[3] + param_2[6] * param_2[7]) + -(param_2[10] * param_2[0xb])
  ;
  if (*(char *)(pfVar1 + 0x18) != '\0') {
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    fVar5 = param_2[4];
    fVar6 = param_2[5];
    fVar7 = param_2[6];
    fVar8 = param_2[7];
    *pfVar1 = *param_2;
    pfVar1[1] = fVar2;
    pfVar1[2] = fVar3;
    pfVar1[3] = fVar4;
    pfVar1[4] = fVar5;
    pfVar1[5] = fVar6;
    pfVar1[6] = fVar7;
    pfVar1[7] = fVar8;
    fVar2 = param_2[9];
    fVar3 = param_2[10];
    fVar4 = param_2[0xb];
    pfVar1[8] = param_2[8];
    pfVar1[9] = fVar2;
    pfVar1[10] = fVar3;
    pfVar1[0xb] = fVar4;
    *(undefined1 *)(pfVar1 + 0x18) = 0;
    return;
  }
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  *pfVar1 = *param_2;
  pfVar1[1] = fVar6;
  pfVar1[2] = fVar7;
  pfVar1[3] = fVar8;
  pfVar1[4] = fVar9;
  pfVar1[5] = fVar10;
  pfVar1[6] = fVar11;
  pfVar1[7] = fVar12;
  fVar6 = param_2[8];
  fVar7 = param_2[9];
  fVar8 = param_2[10];
  fVar9 = param_2[0xb];
  pfVar1[0xf] = fVar5 - fVar4;
  pfVar1[8] = fVar6;
  pfVar1[9] = fVar7;
  pfVar1[10] = fVar8;
  pfVar1[0xb] = fVar9;
  pfVar1[0x10] = pfVar1[0xd] - fVar2;
  pfVar1[0x11] = pfVar1[0xe] - fVar3;
  return;
}

