#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern float DAT_0048b534;
extern float DAT_0048b538;
extern float DAT_0048b53c;
extern float DAT_0048b540;
extern int DAT_0048b544;
extern float DAT_0048b548;
extern float DAT_0048b54c;
extern int DAT_0048b550;

// USA 0048B330 <- EU 0048B308 (Ghidra, non-matching)
// GLOBAL DAT_0048b534 float
// GLOBAL DAT_0048b538 float
// GLOBAL DAT_0048b53c float
// GLOBAL DAT_0048b540 float
// GLOBAL DAT_0048b544 int
// GLOBAL DAT_0048b548 float
// GLOBAL DAT_0048b54c float
// GLOBAL DAT_0048b550 int

void func_0048B330(float *param_1,float *param_2,float *param_3,float fparam_0)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  
  fVar13 = *param_2 * *param_3 + param_2[1] * param_3[1] + param_2[2] * param_3[2] +
           param_2[3] * param_3[3];
  fVar14 = DAT_0048b534;
  if (((int)ALBW_AS_U32(fVar13) < 0x3f800001) && (fVar14 = fVar13, (uint)ALBW_AS_U32(DAT_0048b538) < (uint)ALBW_AS_U32(fVar13))) {
    fVar14 = DAT_0048b53c;
  }
  uVar16 = CONCAT44(DAT_0048b540,fparam_0);
  bVar1 = fVar14 < DAT_0048b540;
  if (bVar1) {
    fVar14 = -fVar14;
  }
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar14 < DAT_0048b540) << 0x1f;
  uVar6 = uVar3 | (uint)(NAN(fVar14) || NAN(DAT_0048b540)) << 0x1c;
  fVar13 = DAT_0048b534;
  if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
    fVar9 = SQRT(DAT_0048b534 - fVar14 * fVar14);
    if (DAT_0048b544 < (int)ALBW_AS_U32(fVar14)) {
      uVar3 = func_004905E0(fVar9 / fVar14);
    }
    else {
      iVar4 = func_004905E0(fVar14 / fVar9);
      uVar3 = 0x40000000 - iVar4;
    }
  }
  else if ((uint)ALBW_AS_U32(DAT_0048b548) < (uint)ALBW_AS_U32(fVar14)) {
    iVar4 = func_004905E0(-SQRT(DAT_0048b534 - fVar14 * fVar14) / fVar14);
    uVar3 = 0x80000000 - iVar4;
  }
  else {
    iVar4 = func_004905E0(-fVar14 / SQRT(DAT_0048b534 - fVar14 * fVar14));
    uVar3 = iVar4 + 0x40000000;
  }
  pfVar5 = (float *)(DAT_0048b550 + (uVar3 >> 0x18) * 0x10);
  fVar14 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(uVar6 >> 0x15) & 3);
  fVar9 = *pfVar5 + pfVar5[1] * fVar14 * DAT_0048b54c;
  fVar8 = ALBW_AS_F32((uVar16 >> 0x20));
  uVar6 = uVar6 & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
  bVar2 = (byte)(uVar6 >> 0x18);
  fVar14 = fVar9;
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar9) || NAN(fVar8))) {
    fVar14 = -fVar9;
  }
  if ((int)ALBW_AS_U32(fVar14) < 0x34000000) {
    fVar14 = fVar13 - ALBW_AS_F32(uVar16);
  }
  else {
    fVar14 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    uVar7 = (uint)(ALBW_AS_F32(uVar16) * fVar14);
    pfVar5 = (float *)(DAT_0048b550 + (uVar3 - uVar7 >> 0x18) * 0x10);
    fVar14 = (float)VectorUnsignedToFloat(uVar3 - uVar7 & 0xffffff,(byte)(uVar6 >> 0x15) & 3);
    fVar14 = (*pfVar5 + pfVar5[1] * fVar14 * DAT_0048b54c) * (fVar13 / fVar9);
    pfVar5 = (float *)(DAT_0048b550 + (uVar7 >> 0x18) * 0x10);
    fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(uVar6 >> 0x15) & 3);
    uVar16 = (ulonglong)(uint)ALBW_AS_U32(((*pfVar5 + pfVar5[1] * fVar8 * DAT_0048b54c) * (fVar13 / fVar9)));
  }
  fVar15 = ALBW_AS_F32(uVar16);
  fVar13 = param_2[1];
  fVar9 = param_2[2];
  fVar8 = param_2[3];
  if (bVar1) {
    fVar15 = -fVar15;
  }
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  *param_1 = *param_2 * fVar14 + fVar15 * *param_3;
  param_1[1] = fVar13 * fVar14 + fVar15 * fVar10;
  param_1[2] = fVar9 * fVar14 + fVar15 * fVar11;
  param_1[3] = fVar8 * fVar14 + fVar15 * fVar12;
  return;
}

