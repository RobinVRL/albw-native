#include "ghidra_types.h"

extern undefined4 DAT_003cc4e8;
extern float DAT_003cc4ec;
extern float DAT_003cc4f0;
extern float DAT_003cc4f4;
extern int DAT_003cc4f8;
extern float DAT_003cc4fc;
extern float DAT_003cc500;
extern int DAT_003cc504;
extern undefined4 DAT_003cc508;

// USA 003CC288 <- EU 003CC264 (Ghidra, non-matching)
// GLOBAL DAT_003cc4e8 undefined4
// GLOBAL DAT_003cc4ec float
// GLOBAL DAT_003cc4f0 float
// GLOBAL DAT_003cc4f4 float
// GLOBAL DAT_003cc4f8 int
// GLOBAL DAT_003cc4fc float
// GLOBAL DAT_003cc500 float
// GLOBAL DAT_003cc504 int
// GLOBAL DAT_003cc508 undefined4

void func_003CC288(int param_1,float *param_2,float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  
  uVar2 = DAT_003cc4e8;
  *(undefined4 *)(param_1 + 8) = 0;
  fVar3 = DAT_003cc4ec;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = DAT_003cc508;
  iVar9 = DAT_003cc504;
  fVar6 = DAT_003cc500;
  fVar5 = DAT_003cc4fc;
  iVar4 = DAT_003cc4f8;
  fVar13 = DAT_003cc4f4;
  fVar16 = DAT_003cc4f0;
  fVar17 = *param_2;
  fVar14 = param_2[1] - fVar17;
  if (fVar14 == fVar3 || (uint)((int)ALBW_AS_U32(fVar14) << 1) >> 0x18 == 0xff) {
    uVar10 = 0;
  }
  else {
    fVar15 = (fVar14 + DAT_003cc4f0) * DAT_003cc500;
    fVar14 = fVar3;
    if (fVar3 <= fVar15) {
      bVar12 = SBORROW4((int)ALBW_AS_U32(fVar15),0x46000000);
      iVar11 = (int)ALBW_AS_U32(fVar15) + -0x46000000;
      fVar14 = DAT_003cc4f4;
      if ((int)ALBW_AS_U32(fVar15) < 0x46000000) {
        bVar12 = SBORROW4((int)ALBW_AS_U32(fVar15),DAT_003cc4f8);
        iVar11 = (int)ALBW_AS_U32(fVar15) - DAT_003cc4f8;
        fVar14 = fVar15;
      }
      if (iVar11 < 0 == bVar12) {
        uVar10 = VectorFloatToUnsigned(fVar14 - DAT_003cc4fc,3);
        goto LAB_003cc30c;
      }
    }
    uVar10 = VectorFloatToUnsigned(fVar14 + DAT_003cc4fc,3);
  }
LAB_003cc30c:
  if ((fVar17 <= fVar3) || ((uint)((int)ALBW_AS_U32(fVar17) << 1) >> 0x18 == 0xff)) {
    iVar11 = 0;
  }
  else {
    iVar11 = DAT_003cc504;
    if ((int)ALBW_AS_U32((fVar17 * DAT_003cc500)) < 0x45000000) {
      iVar11 = VectorFloatToUnsigned(fVar17 * DAT_003cc500,3);
    }
  }
  *(uint *)(param_1 + 0x10) = uVar10 | iVar11 << 0xd;
  iVar11 = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  puVar7 = (uint *)(param_1 + 0x18);
  do {
    puVar8 = puVar7;
    fVar14 = param_2[iVar11];
    if ((fVar14 <= fVar3) || ((uint)((int)ALBW_AS_U32(fVar14) << 1) >> 0x18 == 0xff)) {
      iVar18 = 0;
    }
    else {
      iVar18 = iVar9;
      if ((int)ALBW_AS_U32((fVar14 * fVar6)) < 0x45000000) {
        iVar18 = VectorFloatToUnsigned(fVar14 * fVar6,3);
      }
    }
    fVar14 = (param_2 + iVar11)[1] - fVar14;
    if (fVar14 == fVar3 || (uint)((int)ALBW_AS_U32(fVar14) << 1) >> 0x18 == 0xff) {
      uVar10 = 0;
    }
    else {
      fVar17 = (fVar14 + fVar16) * fVar6;
      fVar14 = fVar3;
      if (fVar3 <= fVar17) {
        bVar12 = SBORROW4((int)ALBW_AS_U32(fVar17),0x46000000);
        iVar1 = (int)ALBW_AS_U32(fVar17) + -0x46000000;
        fVar14 = fVar13;
        if ((int)ALBW_AS_U32(fVar17) < 0x46000000) {
          bVar12 = SBORROW4((int)ALBW_AS_U32(fVar17),iVar4);
          iVar1 = (int)ALBW_AS_U32(fVar17) - iVar4;
          fVar14 = fVar17;
        }
        if (iVar1 < 0 == bVar12) {
          uVar10 = VectorFloatToUnsigned(fVar14 - fVar5,3);
          goto LAB_003cc41c;
        }
      }
      uVar10 = VectorFloatToUnsigned(fVar14 + fVar5,3);
    }
LAB_003cc41c:
    iVar11 = iVar11 + 1;
    *puVar8 = uVar10 | iVar18 << 0xd;
    puVar7 = puVar8 + 1;
  } while (iVar11 < 0x7f);
  if (fparam_0 == fVar3 || (uint)((int)ALBW_AS_U32(fparam_0) << 1) >> 0x18 == 0xff) {
    uVar10 = 0;
  }
  else {
    fVar14 = (fparam_0 + fVar16) * fVar6;
    fVar16 = fVar3;
    if (fVar3 <= fVar14) {
      bVar12 = SBORROW4((int)ALBW_AS_U32(fVar14),0x46000000);
      iVar18 = (int)ALBW_AS_U32(fVar14) + -0x46000000;
      if ((int)ALBW_AS_U32(fVar14) < 0x46000000) {
        bVar12 = SBORROW4((int)ALBW_AS_U32(fVar14),iVar4);
        iVar18 = (int)ALBW_AS_U32(fVar14) - iVar4;
        fVar13 = fVar14;
      }
      fVar16 = fVar13;
      if (iVar18 < 0 == bVar12) {
        uVar10 = VectorFloatToUnsigned(fVar13 - fVar5,3);
        goto LAB_003cc498;
      }
    }
    uVar10 = VectorFloatToUnsigned(fVar16 + fVar5,3);
  }
LAB_003cc498:
  fVar13 = param_2[iVar11];
  if ((fVar13 <= fVar3) || ((uint)((int)ALBW_AS_U32(fVar13) << 1) >> 0x18 == 0xff)) {
    iVar9 = 0;
  }
  else if ((int)ALBW_AS_U32((fVar13 * fVar6)) < 0x45000000) {
    iVar9 = VectorFloatToUnsigned(fVar13 * fVar6,3);
  }
  puVar8[1] = uVar10 | iVar9 << 0xd;
  puVar8[2] = 0;
  return;
}

