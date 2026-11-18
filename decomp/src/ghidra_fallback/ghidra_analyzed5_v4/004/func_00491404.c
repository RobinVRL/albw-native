#include "ghidra_types.h"

extern float DAT_00491484;
extern float DAT_00491488;

// USA 00491404 <- EU 004913DC (Ghidra, non-matching)
// GLOBAL DAT_00491484 float
// GLOBAL DAT_00491488 float

void func_00491404(float *param_1,float *param_2)

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
  
  fVar8 = DAT_00491488;
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar9 = DAT_00491484 - DAT_00491488 * fVar10 * fVar10;
  fVar16 = fVar10 * fVar11 * DAT_00491488;
  fVar14 = fVar10 * fVar12 * DAT_00491488;
  fVar15 = fVar11 * fVar12 * DAT_00491488;
  fVar4 = DAT_00491488 * fVar11 * fVar11;
  fVar1 = DAT_00491488 * fVar13 * fVar12;
  fVar5 = DAT_00491488 * fVar12 * fVar12;
  fVar6 = DAT_00491488 * fVar13 * fVar11;
  fVar7 = DAT_00491488 * fVar13 * fVar12;
  fVar2 = DAT_00491488 * fVar13 * fVar11;
  fVar3 = DAT_00491488 * fVar13 * fVar10;
  *param_1 = (DAT_00491484 - DAT_00491488 * fVar11 * fVar11) - DAT_00491488 * fVar12 * fVar12;
  param_1[1] = fVar16 - fVar7;
  param_1[2] = fVar14 + fVar2;
  param_1[3] = fVar16 + fVar1;
  param_1[4] = fVar9 - fVar5;
  param_1[5] = fVar15 - fVar8 * fVar13 * fVar10;
  param_1[8] = fVar9 - fVar4;
  param_1[6] = fVar14 - fVar6;
  param_1[7] = fVar15 + fVar3;
  return;
}

