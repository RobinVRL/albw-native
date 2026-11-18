#include "ghidra_types.h"


// USA 00492078 <- EU 00492050 (Ghidra, non-matching)

void func_00492078(float *param_1,float *param_2,float *param_3)

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
  float fVar19;
  float fVar20;
  
  fVar2 = *param_3;
  fVar1 = *param_2;
  fVar9 = param_3[1];
  fVar15 = param_2[4];
  fVar17 = param_2[8];
  fVar12 = param_3[2];
  fVar13 = param_3[5];
  fVar16 = param_2[5];
  fVar7 = param_3[3];
  fVar3 = param_2[9];
  fVar10 = param_3[4];
  fVar5 = param_2[1];
  fVar18 = param_3[8];
  fVar6 = param_2[6];
  fVar4 = param_2[10];
  fVar8 = param_2[2];
  fVar19 = *(float *)(param_3 + 6);
  fVar20 = *(float *)((char *)(param_3 + 6) + 4);
  fVar11 = param_2[7];
  fVar14 = param_2[0xb];
  param_1[3] = param_2[3];
  param_1[6] = fVar15 * fVar12 + fVar16 * fVar13 + fVar6 * fVar18;
  param_1[7] = fVar11;
  param_1[8] = fVar17 * fVar2 + fVar3 * fVar7 + fVar4 * fVar19;
  param_1[9] = fVar17 * fVar9 + fVar3 * fVar10 + fVar4 * fVar20;
  *param_1 = fVar1 * fVar2 + fVar5 * fVar7 + fVar8 * fVar19;
  param_1[1] = fVar1 * fVar9 + fVar5 * fVar10 + fVar8 * fVar20;
  param_1[2] = fVar1 * fVar12 + fVar5 * fVar13 + fVar8 * fVar18;
  param_1[4] = fVar15 * fVar2 + fVar16 * fVar7 + fVar6 * fVar19;
  param_1[5] = fVar15 * fVar9 + fVar16 * fVar10 + fVar6 * fVar20;
  param_1[10] = fVar17 * fVar12 + fVar3 * fVar13 + fVar4 * fVar18;
  param_1[0xb] = fVar14;
  return;
}

