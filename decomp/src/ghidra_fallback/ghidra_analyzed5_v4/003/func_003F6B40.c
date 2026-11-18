#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int DAT_003f6dd8;
extern int DAT_003f6ddc;
extern int DAT_003f6de0;

// USA 003F6B40 <- EU 003F6B20 (Ghidra, non-matching)
// GLOBAL DAT_003f6dd8 int
// GLOBAL DAT_003f6ddc int
// GLOBAL DAT_003f6de0 int

void func_003F6B40(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  
  uVar4 = param_1[0x4e];
  uVar6 = param_1[1];
  lVar19 = func_001104E4(uVar6,*(uint *)(uVar4 + DAT_003f6dd8 + param_2 * 4));
  uVar5 = (uint)lVar19;
  if ((uint)lVar19 == 0) {
    uVar5 = uVar6;
  }
  uVar6 = *param_1;
  if (*(int *)(uVar4 + param_2 * 4 + 0x4b0) != 0) {
    uVar6 = uVar6 + (param_1[0x54] >> 6);
  }
  lVar19 = func_001104E4(uVar6,uVar5);
  iVar1 = (int)((ulonglong)lVar19 >> 0x20);
  iVar8 = param_2 * 0x30 + 0x434;
  iVar3 = param_2 * 0x30 + 0x438;
  iVar11 = (int)((ulonglong)
                 ((longlong)DAT_003f6ddc *
                 (longlong)(int)(*(int *)(uVar4 + param_2 * 4 + 0x490) * uVar5)) >> 0x20);
  iVar2 = param_2 * 0x30 + 0x430;
  iVar11 = (iVar11 >> 5) - (iVar11 >> 0x1f);
  if (iVar11 <= iVar1) {
    iVar12 = param_2 * 0x30 + 0x448;
    iVar9 = (int)((ulonglong)
                  ((longlong)DAT_003f6ddc *
                  (longlong)(int)(*(int *)(uVar4 + DAT_003f6de0 + param_2 * 4) * uVar5)) >> 0x20);
    iVar7 = param_2 * 0x30 + 0x444;
    iVar10 = param_2 * 0x30 + 0x440;
    iVar9 = (iVar9 >> 5) - (iVar9 >> 0x1f);
    if (iVar1 < iVar9) {
      fVar14 = (float)VectorSignedToFloat(iVar1 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat(iVar9 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = *(float *)(uVar4 + iVar2);
      fVar18 = *(float *)(uVar4 + iVar7);
      fVar17 = *(float *)(iVar8 + uVar4);
      fVar15 = *(float *)(iVar12 + uVar4);
      fVar14 = fVar14 / fVar16;
      fVar16 = *(float *)(uVar4 + iVar3);
      param_1[param_2 * 4 + 0x2c] = (uint)ALBW_AS_U32((fVar13 + (*(float *)(uVar4 + iVar10) - fVar13) * fVar14));
      param_1[param_2 * 4 + 0x2d] =
           (uint)ALBW_AS_U32((*(float *)(iVar8 + param_1[0x4e]) + (fVar18 - fVar17) * fVar14));
      fVar14 = *(float *)(param_1[0x4e] + iVar3) + (fVar15 - fVar16) * fVar14;
    }
    else {
      iVar11 = (int)((ulonglong)
                     ((longlong)DAT_003f6ddc *
                     (longlong)(int)(*(int *)(uVar4 + param_2 * 4 + 0x4a0) * uVar5)) >> 0x20);
      iVar3 = param_2 * 0x30 + 0x450;
      iVar8 = (DAT_003f6ddc >> 0x1a | 0x450U) + param_2 * 0x30;
      iVar2 = param_2 * 0x30 + 0x458;
      iVar11 = (iVar11 >> 5) - (iVar11 >> 0x1f);
      if (iVar11 <= iVar1) {
        param_1[param_2 * 4 + 0x2c] = *(uint *)(uVar4 + iVar3);
        param_1[param_2 * 4 + 0x2d] = *(uint *)(param_1[0x4e] + iVar8);
        param_1[param_2 * 4 + 0x2e] = *(uint *)(param_1[0x4e] + iVar2);
        return;
      }
      fVar14 = (float)VectorSignedToFloat(iVar1 - iVar9,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = *(float *)(iVar10 + uVar4);
      fVar17 = *(float *)(uVar4 + iVar8);
      fVar16 = (float)VectorSignedToFloat(iVar11 - iVar9,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = *(float *)(uVar4 + iVar7);
      fVar15 = *(float *)(iVar2 + uVar4);
      fVar14 = fVar14 / fVar16;
      fVar16 = *(float *)(uVar4 + iVar12);
      param_1[param_2 * 4 + 0x2c] = (uint)ALBW_AS_U32((fVar13 + (*(float *)(uVar4 + iVar3) - fVar13) * fVar14));
      param_1[param_2 * 4 + 0x2d] =
           (uint)ALBW_AS_U32((*(float *)(param_1[0x4e] + iVar7) + (fVar17 - fVar18) * fVar14));
      fVar14 = *(float *)(param_1[0x4e] + iVar12) + (fVar15 - fVar16) * fVar14;
    }
    param_1[param_2 * 4 + 0x2e] = (uint)ALBW_AS_U32(fVar14);
    return;
  }
  param_1[param_2 * 4 + 0x2c] = *(uint *)(uVar4 + iVar2);
  param_1[param_2 * 4 + 0x2d] = *(uint *)(param_1[0x4e] + iVar8);
  param_1[param_2 * 4 + 0x2e] = *(uint *)(param_1[0x4e] + iVar3);
  return;
}

