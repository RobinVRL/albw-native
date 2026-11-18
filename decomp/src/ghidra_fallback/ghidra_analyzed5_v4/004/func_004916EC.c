#include "ghidra_types.h"


// USA 004916EC <- EU 004916C4 (Ghidra, non-matching)

void func_004916EC(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar2 = *param_3;
  fVar1 = *param_2;
  fVar13 = param_2[4];
  fVar15 = param_2[8];
  fVar9 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[5];
  fVar14 = param_2[5];
  fVar7 = param_3[3];
  fVar3 = param_2[9];
  fVar10 = param_3[4];
  fVar5 = param_2[1];
  fVar16 = param_3[8];
  fVar4 = param_2[6];
  fVar6 = param_2[10];
  fVar8 = param_2[2];
  fVar17 = *(float *)(param_3 + 6);
  fVar18 = *(float *)((char *)(param_3 + 6) + 4);
  param_1[5] = fVar13 * fVar11 + fVar14 * fVar12 + fVar4 * fVar16;
  param_1[6] = fVar15 * fVar2 + fVar3 * fVar7 + fVar6 * fVar17;
  param_1[7] = fVar15 * fVar9 + fVar3 * fVar10 + fVar6 * fVar18;
  param_1[8] = fVar15 * fVar11 + fVar3 * fVar12 + fVar6 * fVar16;
  *param_1 = fVar1 * fVar2 + fVar5 * fVar7 + fVar8 * fVar17;
  param_1[1] = fVar1 * fVar9 + fVar5 * fVar10 + fVar8 * fVar18;
  param_1[2] = fVar1 * fVar11 + fVar5 * fVar12 + fVar8 * fVar16;
  param_1[3] = fVar13 * fVar2 + fVar14 * fVar7 + fVar4 * fVar17;
  param_1[4] = fVar13 * fVar9 + fVar14 * fVar10 + fVar4 * fVar18;
  return;
}

