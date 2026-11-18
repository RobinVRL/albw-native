#include "ghidra_types.h"

extern float DAT_003e2104;
extern int DAT_003e2108;
extern float DAT_003e210c;
extern int DAT_003e2110;

// USA 003E1F40 <- EU 003E1F20 (Ghidra, non-matching)
// GLOBAL DAT_003e2104 float
// GLOBAL DAT_003e2108 int
// GLOBAL DAT_003e210c float
// GLOBAL DAT_003e2110 int

float func_003E1F40(float *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar6 = ABS(fparam_1);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_003e2104 <= fparam_2) << 0x1d;
  fVar8 = ABS(fparam_2);
  for (fVar5 = ABS(fparam_0); DAT_003e2108 <= (int)ALBW_AS_U32(fVar5); fVar5 = fVar5 - DAT_003e210c) {
  }
  for (; DAT_003e2108 <= (int)ALBW_AS_U32(fVar6); fVar6 = fVar6 - DAT_003e210c) {
  }
  for (; DAT_003e2108 <= (int)ALBW_AS_U32(fVar8); fVar8 = fVar8 - DAT_003e210c) {
  }
  uVar10 = VectorFloatToUnsigned(fVar5,3);
  uVar11 = VectorFloatToUnsigned(fVar6,3);
  uVar12 = VectorFloatToUnsigned(fVar8,3);
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(DAT_003e2110 + (uVar10 & 0xff) * 0x10);
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar4 = (float *)(DAT_003e2110 + (uVar11 & 0xff) * 0x10);
  pfVar2 = (float *)(DAT_003e2110 + (uVar12 & 0xff) * 0x10);
  fVar13 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar9 = *pfVar3 + (fVar5 - fVar14) * pfVar3[2];
  fVar7 = *pfVar2 + (fVar8 - fVar13) * pfVar2[2];
  fVar14 = pfVar3[1] + (fVar5 - fVar14) * pfVar3[3];
  fVar5 = *pfVar4 + (fVar6 - fVar15) * pfVar4[2];
  fVar8 = pfVar2[1] + (fVar8 - fVar13) * pfVar2[3];
  fVar6 = pfVar4[1] + (fVar6 - fVar15) * pfVar4[3];
  if (fparam_0 < DAT_003e2104) {
    fVar9 = -fVar9;
  }
  if (fparam_1 < DAT_003e2104) {
    fVar5 = -fVar5;
  }
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar7 = -fVar7;
  }
  param_1[8] = -fVar5;
  *param_1 = fVar8 * fVar6;
  param_1[4] = fVar7 * fVar6;
  param_1[1] = fVar9 * fVar8 * fVar5 - fVar14 * fVar7;
  param_1[6] = fVar14 * fVar7 * fVar5 - fVar9 * fVar8;
  param_1[2] = fVar9 * fVar7 + fVar14 * fVar8 * fVar5;
  param_1[5] = fVar14 * fVar8 + fVar9 * fVar7 * fVar5;
  param_1[9] = fVar9 * fVar6;
  param_1[10] = fVar14 * fVar6;
  if (param_2 != 0) {
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[0xb] = 0.0;
  }
  return fVar5;
}

