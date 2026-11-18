#include "ghidra_types.h"

extern float DAT_00491bd4;
extern float DAT_00491bd8;
extern float DAT_00491bdc;

// USA 00491B3C <- EU 00491B14 (Ghidra, non-matching)
// GLOBAL DAT_00491bd4 float
// GLOBAL DAT_00491bd8 float
// GLOBAL DAT_00491bdc float

void func_00491B3C(float *param_1,float *param_2)

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
  
  fVar7 = DAT_00491bdc;
  fVar14 = param_2[1];
  fVar12 = *param_2;
  fVar9 = param_2[2];
  fVar15 = param_2[3];
  fVar11 = fVar12 * fVar14 * DAT_00491bd4;
  fVar10 = fVar12 * fVar9 * DAT_00491bd4;
  fVar8 = DAT_00491bd8 - DAT_00491bd4 * fVar12 * fVar12;
  fVar13 = fVar14 * fVar9 * DAT_00491bd4;
  fVar1 = DAT_00491bd4 * fVar15 * fVar9;
  fVar4 = DAT_00491bd4 * fVar15 * fVar14;
  fVar5 = DAT_00491bd4 * fVar15 * fVar9;
  fVar2 = DAT_00491bd4 * fVar15 * fVar14;
  fVar3 = DAT_00491bd4 * fVar15 * fVar12;
  fVar12 = DAT_00491bd4 * fVar15 * fVar12;
  fVar15 = DAT_00491bd4 * fVar14 * fVar14;
  fVar6 = DAT_00491bd4 * fVar9 * fVar9;
  *param_1 = (DAT_00491bd8 - DAT_00491bd4 * fVar14 * fVar14) - DAT_00491bd4 * fVar9 * fVar9;
  param_1[1] = fVar11 - fVar5;
  param_1[2] = fVar10 + fVar2;
  param_1[3] = fVar7;
  param_1[4] = fVar11 + fVar1;
  param_1[5] = fVar8 - fVar6;
  param_1[6] = fVar13 - fVar12;
  param_1[7] = fVar7;
  param_1[8] = fVar10 - fVar4;
  param_1[9] = fVar13 + fVar3;
  param_1[10] = fVar8 - fVar15;
  param_1[0xb] = fVar7;
  return;
}

