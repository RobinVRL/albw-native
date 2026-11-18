#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int DAT_003f69e4;
extern int DAT_003f69e8;
extern int DAT_003f69ec;

// USA 003F6740 <- EU 003F6720 (Ghidra, non-matching)
// GLOBAL DAT_003f69e4 int
// GLOBAL DAT_003f69e8 int
// GLOBAL DAT_003f69ec int

void func_003F6740(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  
  iVar4 = param_1[0x4e];
  uVar6 = param_1[1];
  lVar19 = func_001104E4(uVar6,*(uint *)(iVar4 + DAT_003f69e4 + param_2 * 4));
  uVar5 = (uint)lVar19;
  if ((uint)lVar19 == 0) {
    uVar5 = uVar6;
  }
  uVar6 = *param_1 - 1;
  if (*(int *)(iVar4 + param_2 * 4 + 0x4b0) != 0) {
    uVar6 = *param_1 + -1 + ((uint)param_1[0x54] >> 6);
  }
  lVar19 = func_001104E4(uVar6,uVar5);
  iVar1 = (int)((ulonglong)lVar19 >> 0x20);
  iVar8 = param_2 * 0x30 + 0x434;
  iVar3 = param_2 * 0x30 + 0x438;
  iVar11 = (int)((ulonglong)
                 ((longlong)DAT_003f69e8 *
                 (longlong)(int)(*(int *)(iVar4 + param_2 * 4 + 0x490) * uVar5)) >> 0x20);
  iVar2 = param_2 * 0x30 + 0x430;
  iVar11 = (iVar11 >> 5) - (iVar11 >> 0x1f);
  if (iVar1 < iVar11) {
    param_1[param_2 * 4 + 0x2c] = *(int *)(iVar4 + iVar2);
    param_1[param_2 * 4 + 0x2d] = *(int *)(param_1[0x4e] + iVar8);
    param_1[param_2 * 4 + 0x2e] = *(int *)(param_1[0x4e] + iVar3);
    return;
  }
  iVar12 = param_2 * 0x30 + 0x448;
  iVar9 = (int)((ulonglong)
                ((longlong)DAT_003f69e8 *
                (longlong)(int)(*(int *)(iVar4 + DAT_003f69ec + param_2 * 4) * uVar5)) >> 0x20);
  iVar7 = param_2 * 0x30 + 0x444;
  iVar10 = param_2 * 0x30 + 0x440;
  iVar9 = (iVar9 >> 5) - (iVar9 >> 0x1f);
  if (iVar1 < iVar9) {
    fVar14 = (float)VectorSignedToFloat(iVar1 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorSignedToFloat(iVar9 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = *(float *)(iVar4 + iVar2);
    fVar18 = *(float *)(iVar4 + iVar7);
    fVar17 = *(float *)(iVar8 + iVar4);
    fVar15 = *(float *)(iVar12 + iVar4);
    fVar14 = fVar14 / fVar16;
    fVar16 = *(float *)(iVar4 + iVar3);
    param_1[param_2 * 4 + 0x2c] = (int)ALBW_AS_U32((fVar13 + (*(float *)(iVar4 + iVar10) - fVar13) * fVar14));
    param_1[param_2 * 4 + 0x2d] =
         (int)ALBW_AS_U32((*(float *)(iVar8 + param_1[0x4e]) + (fVar18 - fVar17) * fVar14));
    param_1[param_2 * 4 + 0x2e] =
         (int)ALBW_AS_U32((*(float *)(param_1[0x4e] + iVar3) + (fVar15 - fVar16) * fVar14));
    return;
  }
  iVar11 = (int)((ulonglong)
                 ((longlong)DAT_003f69e8 *
                 (longlong)(int)(*(int *)(iVar4 + param_2 * 4 + 0x4a0) * uVar5)) >> 0x20);
  iVar3 = param_2 * 0x30 + 0x450;
  iVar8 = (DAT_003f69e8 >> 0x1a | 0x450U) + param_2 * 0x30;
  iVar2 = param_2 * 0x30 + 0x458;
  iVar11 = (iVar11 >> 5) - (iVar11 >> 0x1f);
  if (iVar11 <= iVar1) {
    param_1[param_2 * 4 + 0x2c] = *(int *)(iVar4 + iVar3);
    param_1[param_2 * 4 + 0x2d] = *(int *)(param_1[0x4e] + iVar8);
    param_1[param_2 * 4 + 0x2e] = *(int *)(param_1[0x4e] + iVar2);
    return;
  }
  fVar14 = (float)VectorSignedToFloat(iVar1 - iVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = *(float *)(iVar10 + iVar4);
  fVar16 = (float)VectorSignedToFloat(iVar11 - iVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = *(float *)(iVar4 + iVar8);
  fVar18 = *(float *)(iVar4 + iVar7);
  fVar15 = *(float *)(iVar2 + iVar4);
  fVar14 = fVar14 / fVar16;
  fVar16 = *(float *)(iVar4 + iVar12);
  param_1[param_2 * 4 + 0x2c] = (int)ALBW_AS_U32((fVar13 + (*(float *)(iVar4 + iVar3) - fVar13) * fVar14));
  param_1[param_2 * 4 + 0x2d] =
       (int)ALBW_AS_U32((*(float *)(param_1[0x4e] + iVar7) + (fVar17 - fVar18) * fVar14));
  param_1[param_2 * 4 + 0x2e] =
       (int)ALBW_AS_U32((*(float *)(param_1[0x4e] + iVar12) + (fVar15 - fVar16) * fVar14));
  return;
}

