#include "ghidra_types.h"


// USA 00491F5C <- EU 00491F34 (Ghidra, non-matching)

void func_00491F5C(float *param_1,float *param_2,float *param_3)

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
  float fVar21;
  
  fVar12 = *param_2;
  fVar9 = *param_3;
  fVar8 = param_3[1];
  fVar4 = param_2[3];
  fVar13 = param_3[2];
  fVar14 = param_3[3];
  fVar7 = param_2[6];
  fVar20 = param_3[5];
  fVar21 = param_3[6];
  fVar1 = param_2[1];
  fVar16 = param_3[4];
  fVar18 = param_3[7];
  fVar5 = param_2[4];
  fVar10 = param_2[7];
  fVar3 = param_2[2];
  fVar19 = param_3[10];
  fVar17 = param_3[0xb];
  fVar15 = param_3[8];
  fVar2 = param_2[5];
  fVar11 = param_3[9];
  fVar6 = param_2[8];
  param_1[2] = fVar12 * fVar13 + fVar1 * fVar21 + fVar3 * fVar19;
  param_1[3] = fVar12 * fVar14 + fVar1 * fVar18 + fVar3 * fVar17;
  param_1[4] = fVar4 * fVar9 + fVar5 * fVar16 + fVar2 * fVar15;
  param_1[5] = fVar4 * fVar8 + fVar5 * fVar20 + fVar2 * fVar11;
  param_1[6] = fVar4 * fVar13 + fVar5 * fVar21 + fVar2 * fVar19;
  param_1[7] = fVar4 * fVar14 + fVar5 * fVar18 + fVar2 * fVar17;
  param_1[8] = fVar7 * fVar9 + fVar10 * fVar16 + fVar6 * fVar15;
  param_1[0xb] = fVar7 * fVar14 + fVar10 * fVar18 + fVar6 * fVar17;
  *param_1 = fVar12 * fVar9 + fVar1 * fVar16 + fVar3 * fVar15;
  param_1[1] = fVar12 * fVar8 + fVar1 * fVar20 + fVar3 * fVar11;
  param_1[9] = fVar7 * fVar8 + fVar10 * fVar20 + fVar6 * fVar11;
  param_1[10] = fVar7 * fVar13 + fVar10 * fVar21 + fVar6 * fVar19;
  return;
}

