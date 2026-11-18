#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_001144f4;
extern float DAT_001144f8;
extern float DAT_001144fc;
extern float DAT_00114500;
extern int DAT_00114504;
extern float DAT_00114508;
extern float DAT_0011450c;
extern int DAT_00114510;

// USA 0011410C <- EU 0011410C (Ghidra, non-matching)
// GLOBAL DAT_001144f4 float
// GLOBAL DAT_001144f8 float
// GLOBAL DAT_001144fc float
// GLOBAL DAT_00114500 float
// GLOBAL DAT_00114504 int
// GLOBAL DAT_00114508 float
// GLOBAL DAT_0011450c float
// GLOBAL DAT_00114510 int

void func_0011410C(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
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
  undefined8 uVar23;
  
  fVar7 = DAT_00114500;
  fVar8 = DAT_001144fc;
  fVar6 = DAT_001144f8;
  fVar14 = DAT_001144f4;
  *(float *)(param_1 + 0xa4) = DAT_001144f4;
  *(float *)(param_1 + 0xa8) = fVar14;
  *(float *)(param_1 + 0xac) = fVar14;
  iVar1 = DAT_00114504;
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
    fVar9 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = *(int *)(param_1 + 0x88) * DAT_00114504 + 0x3039;
    *(int *)(param_1 + 0x88) = iVar2;
    iVar5 = *(int *)(param_1 + 0xd8);
    iVar1 = iVar2 * iVar1 + 0x3039;
    *(float *)(param_1 + 0xb0) = (fVar9 * fVar6 * fVar8 - fVar7) * *(float *)(iVar5 + 0x22c);
    *(int *)(param_1 + 0x88) = iVar1;
    fVar9 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_2 = iVar1 * DAT_00114504 + 0x3039;
    *(float *)(param_1 + 0xb4) = (fVar9 * fVar6 * fVar8 - fVar7) * *(float *)(iVar5 + 0x230);
    *(uint *)(param_1 + 0x88) = param_2;
    fVar9 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (fVar9 * fVar6 * fVar8 - fVar7) * *(float *)(iVar5 + 0x234);
  }
  else {
    *(float *)(param_1 + 0xb0) = fVar14;
    *(float *)(param_1 + 0xb4) = fVar14;
    fVar9 = fVar14;
  }
  *(float *)(param_1 + 0xb8) = fVar9;
  iVar1 = DAT_00114504;
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    fVar9 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = *(int *)(param_1 + 0x88) * DAT_00114504 + 0x3039;
    *(int *)(param_1 + 0x88) = iVar2;
    iVar5 = *(int *)(param_1 + 0xd8);
    iVar1 = iVar2 * iVar1 + 0x3039;
    *(float *)(param_1 + 0xbc) = (fVar9 * fVar6 * fVar8 - fVar7) * *(float *)(iVar5 + 0x238);
    *(int *)(param_1 + 0x88) = iVar1;
    fVar9 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_2 = iVar1 * DAT_00114504 + 0x3039;
    *(float *)(param_1 + 0xc0) = (fVar9 * fVar6 * fVar8 - fVar7) * *(float *)(iVar5 + 0x23c);
    *(uint *)(param_1 + 0x88) = param_2;
    fVar9 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (fVar9 * fVar6 * fVar8 - fVar7) * *(float *)(iVar5 + 0x240);
  }
  else {
    *(float *)(param_1 + 0xbc) = fVar14;
    *(float *)(param_1 + 0xc0) = fVar14;
    fVar6 = fVar14;
  }
  fVar8 = DAT_00114508;
  *(float *)(param_1 + 0xc4) = fVar6;
  iVar1 = *(int *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0xd8);
  fVar22 = *(float *)(iVar1 + 0x208) + fVar14;
  fVar17 = *(float *)(iVar1 + 0x210) + fVar14;
  fVar14 = *(float *)(iVar1 + 0x20c) + fVar14;
  fVar21 = *(float *)(iVar2 + 0x214) + *(float *)(param_1 + 0xb0);
  iVar1 = *(int *)(param_1 + 0xd8);
  fVar19 = *(float *)(iVar2 + 0x218) + *(float *)(param_1 + 0xb4);
  fVar20 = *(float *)(iVar2 + 0x21c) + *(float *)(param_1 + 0xb8);
  fVar18 = *(float *)(iVar1 + 0x228) + *(float *)(param_1 + 0xc4);
  fVar15 = *(float *)(iVar1 + 0x220) + *(float *)(param_1 + 0xbc);
  fVar16 = *(float *)(iVar1 + 0x224) + *(float *)(param_1 + 0xc0);
  uVar23 = func_00114608((uint)ALBW_AS_U32((fVar21 * fVar8)),param_2);
  iVar1 = DAT_00114510;
  uVar4 = (uint)uVar23 & 0xffffff;
  pfVar3 = (float *)(DAT_00114510 + ((uint)uVar23 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = *pfVar3 + pfVar3[1] * fVar6 * DAT_0011450c;
  fVar13 = pfVar3[2] + pfVar3[3] * fVar6 * DAT_0011450c;
  fVar6 = DAT_0011450c;
  uVar23 = func_00114608((uint)ALBW_AS_U32((fVar19 * fVar8)),uVar4);
  uVar4 = (uint)uVar23 & 0xffffff;
  pfVar3 = (float *)(iVar1 + ((uint)uVar23 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = *pfVar3 + pfVar3[1] * fVar7 * fVar6;
  fVar11 = pfVar3[2] + pfVar3[3] * fVar7 * fVar6;
  uVar23 = func_00114608((uint)ALBW_AS_U32((fVar20 * fVar8)),uVar4);
  uVar4 = (uint)uVar23 & 0xffffff;
  pfVar3 = (float *)(iVar1 + ((uint)uVar23 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = pfVar3[2] + pfVar3[3] * fVar7 * fVar6;
  fVar7 = *pfVar3 + pfVar3[1] * fVar7 * fVar6;
  *(float *)(param_1 + 0x1fc) = fVar11 * fVar9 * fVar22;
  *(float *)(param_1 + 0x20c) = fVar11 * fVar7 * fVar22;
  *(float *)(param_1 + 0x21c) = -(fVar22 * fVar12);
  *(float *)(param_1 + 0x200) = fVar14 * (fVar10 * fVar12 * fVar9 - fVar13 * fVar7);
  *(float *)(param_1 + 0x210) = fVar14 * (fVar13 * fVar9 + fVar10 * fVar12 * fVar7);
  *(float *)(param_1 + 0x220) = fVar10 * fVar11 * fVar14;
  *(float *)(param_1 + 0x204) = (fVar10 * fVar7 + fVar13 * fVar9 * fVar12) * fVar17;
  *(float *)(param_1 + 0x214) = (fVar12 * fVar13 * fVar7 - fVar10 * fVar9) * fVar17;
  *(float *)(param_1 + 0x224) = fVar13 * fVar11 * fVar17;
  *(float *)(param_1 + 0x208) = fVar15;
  *(float *)(param_1 + 0x218) = fVar16;
  *(float *)(param_1 + 0x228) = fVar18;
  uVar23 = func_00114608((uint)ALBW_AS_U32((fVar21 * fVar8)),uVar4);
  uVar4 = (uint)uVar23 & 0xffffff;
  pfVar3 = (float *)(iVar1 + ((uint)uVar23 >> 0x18) * 0x10);
  fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = *pfVar3 + pfVar3[1] * fVar14 * fVar6;
  fVar11 = pfVar3[2] + pfVar3[3] * fVar14 * fVar6;
  uVar23 = func_00114608((uint)ALBW_AS_U32((fVar19 * fVar8)),uVar4);
  uVar4 = (uint)uVar23 & 0xffffff;
  pfVar3 = (float *)(iVar1 + ((uint)uVar23 >> 0x18) * 0x10);
  fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = *pfVar3 + pfVar3[1] * fVar14 * fVar6;
  fVar10 = pfVar3[2] + pfVar3[3] * fVar14 * fVar6;
  uVar23 = func_00114608((uint)ALBW_AS_U32((fVar20 * fVar8)),uVar4);
  pfVar3 = (float *)(iVar1 + ((uint)uVar23 >> 0x18) * 0x10);
  fVar14 = (float)VectorUnsignedToFloat((uint)uVar23 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = *pfVar3 + pfVar3[1] * fVar14 * fVar6;
  fVar14 = pfVar3[2] + pfVar3[3] * fVar14 * fVar6;
  *(float *)(param_1 + 0x1cc) = fVar10 * fVar14;
  *(float *)(param_1 + 0x1dc) = fVar10 * fVar8;
  *(float *)(param_1 + 0x1ec) = -fVar9;
  *(float *)(param_1 + 0x1d0) = fVar7 * fVar9 * fVar14 - fVar11 * fVar8;
  *(float *)(param_1 + 0x1e0) = fVar11 * fVar14 + fVar7 * fVar9 * fVar8;
  *(float *)(param_1 + 0x1f0) = fVar7 * fVar10;
  *(float *)(param_1 + 0x1d4) = fVar7 * fVar8 + fVar11 * fVar14 * fVar9;
  *(float *)(param_1 + 0x1e4) = fVar9 * fVar11 * fVar8 - fVar7 * fVar14;
  *(float *)(param_1 + 500) = fVar11 * fVar10;
  *(float *)(param_1 + 0x1d8) = fVar15;
  *(float *)(param_1 + 0x1e8) = fVar16;
  *(float *)(param_1 + 0x1f8) = fVar18;
  return;
}

