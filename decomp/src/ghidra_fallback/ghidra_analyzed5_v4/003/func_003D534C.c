#include "ghidra_types.h"

extern float DAT_003d5580;
extern float DAT_003d5584;

// USA 003D534C <- EU 003D532C (Ghidra, non-matching)
// GLOBAL DAT_003d5580 float
// GLOBAL DAT_003d5584 float

float * func_003D534C(float *param_1,float fparam_0)

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
  
  fVar2 = DAT_003d5584;
  fVar1 = DAT_003d5580;
  do {
    fVar6 = *param_1;
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    fVar5 = fVar1 / SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
    *param_1 = fVar6 * fVar5;
    param_1[1] = fVar3 * fVar5;
    param_1[2] = fVar4 * fVar5;
    fVar6 = param_1[3];
    fVar3 = param_1[4];
    fVar4 = param_1[5];
    fVar5 = fVar1 / SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
    param_1[3] = fVar6 * fVar5;
    param_1[4] = fVar3 * fVar5;
    param_1[5] = fVar4 * fVar5;
    fVar6 = param_1[6];
    fVar5 = param_1[7];
    fVar3 = param_1[8];
    fVar4 = fVar1 / SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
    param_1[6] = fVar6 * fVar4;
    param_1[7] = fVar5 * fVar4;
    param_1[8] = fVar3 * fVar4;
    fVar18 = param_1[7];
    fVar17 = param_1[5];
    fVar5 = param_1[6];
    fVar3 = param_1[8];
    fVar4 = param_1[1];
    fVar12 = *param_1;
    fVar6 = fVar17 * fVar5 - param_1[3] * fVar3;
    fVar9 = fVar18 * param_1[2] - fVar3 * fVar4;
    fVar14 = param_1[2];
    fVar10 = param_1[4] * fVar3 - fVar17 * fVar18;
    fVar7 = param_1[3] * fVar18 - param_1[4] * fVar5;
    fVar3 = fVar3 * fVar12 - fVar5 * fVar14;
    fVar5 = fVar5 * fVar4 - fVar18 * fVar12;
    fVar8 = fVar4 * fVar17 - fVar14 * param_1[4];
    fVar4 = fVar14 * param_1[3] - fVar12 * fVar17;
    fVar16 = fVar12 * param_1[4] - param_1[1] * param_1[3];
    fVar15 = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar7 * fVar7);
    fVar11 = SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar5 * fVar5);
    fVar13 = fVar1 / fVar15;
    fVar14 = SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar16 * fVar16);
    *param_1 = (fVar12 + fVar13 * fVar10) * fVar2;
    param_1[1] = (param_1[1] + fVar13 * fVar6) * fVar2;
    fVar6 = fVar1 / fVar11;
    param_1[2] = (param_1[2] + fVar13 * fVar7) * fVar2;
    param_1[3] = (param_1[3] + fVar6 * fVar9) * fVar2;
    param_1[4] = (param_1[4] + fVar6 * fVar3) * fVar2;
    fVar3 = fVar1 / fVar14;
    param_1[5] = (fVar17 + fVar6 * fVar5) * fVar2;
    param_1[6] = (param_1[6] + fVar3 * fVar8) * fVar2;
    param_1[7] = (fVar18 + fVar3 * fVar4) * fVar2;
    param_1[8] = (param_1[8] + fVar3 * fVar16) * fVar2;
  } while (fVar15 + fVar11 + fVar14 < fparam_0);
  return param_1;
}

