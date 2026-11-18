#include "ghidra_types.h"


// USA 00492604 <- EU 004925DC (Ghidra, non-matching)

void func_00492604(float *param_1,float *param_2,float *param_3)

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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar26 = param_2[8];
  fVar11 = *param_2;
  fVar24 = param_2[4];
  fVar27 = param_2[0xc];
  fVar4 = param_3[1];
  fVar8 = *param_3;
  fVar1 = param_3[2];
  fVar17 = param_2[1];
  fVar9 = param_2[5];
  fVar5 = param_3[5];
  fVar13 = param_2[9];
  fVar23 = param_2[0xd];
  fVar21 = param_3[7];
  fVar19 = param_3[4];
  fVar2 = param_3[6];
  fVar6 = param_3[3];
  fVar10 = param_2[2];
  fVar3 = param_3[0xb];
  fVar18 = param_2[7];
  fVar20 = param_2[0xb];
  fVar22 = param_2[0xf];
  fVar12 = param_2[6];
  fVar7 = param_3[8];
  fVar14 = param_2[10];
  fVar16 = param_3[9];
  fVar15 = param_2[0xe];
  fVar25 = param_3[10];
  param_1[3] = fVar17 * fVar21 + fVar10 * fVar3 + param_2[3] + fVar11 * fVar6;
  param_1[7] = fVar9 * fVar21 + fVar12 * fVar3 + fVar18 + fVar24 * fVar6;
  param_1[0xb] = fVar13 * fVar21 + fVar14 * fVar3 + fVar20 + fVar26 * fVar6;
  param_1[0xc] = fVar27 * fVar8 + fVar23 * fVar19 + fVar15 * fVar7;
  param_1[0xd] = fVar27 * fVar4 + fVar23 * fVar5 + fVar15 * fVar16;
  param_1[0xe] = fVar27 * fVar1 + fVar23 * fVar2 + fVar15 * fVar25;
  param_1[0xf] = fVar23 * fVar21 + fVar15 * fVar3 + fVar22 + fVar27 * fVar6;
  *param_1 = fVar11 * fVar8 + fVar17 * fVar19 + fVar10 * fVar7;
  param_1[1] = fVar11 * fVar4 + fVar17 * fVar5 + fVar10 * fVar16;
  param_1[2] = fVar11 * fVar1 + fVar17 * fVar2 + fVar10 * fVar25;
  param_1[4] = fVar24 * fVar8 + fVar9 * fVar19 + fVar12 * fVar7;
  param_1[5] = fVar24 * fVar4 + fVar9 * fVar5 + fVar12 * fVar16;
  param_1[6] = fVar24 * fVar1 + fVar9 * fVar2 + fVar12 * fVar25;
  param_1[8] = fVar26 * fVar8 + fVar13 * fVar19 + fVar14 * fVar7;
  param_1[9] = fVar26 * fVar4 + fVar13 * fVar5 + fVar14 * fVar16;
  param_1[10] = fVar26 * fVar1 + fVar13 * fVar2 + fVar14 * fVar25;
  return;
}

