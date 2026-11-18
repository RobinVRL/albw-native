#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined *DAT_004335a0;
extern undefined4 DAT_004335a4;
extern undefined4 DAT_004335a8;
extern float DAT_004335ac;
extern float *DAT_004335b0;

// USA 004331F4 <- EU 004331D4 (Ghidra, non-matching)
// GLOBAL DAT_004335a0 undefined *
// GLOBAL DAT_004335a4 undefined4
// GLOBAL DAT_004335a8 undefined4
// GLOBAL DAT_004335ac float
// GLOBAL DAT_004335b0 float *

void func_004331F4(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
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
  
  *(int **)(param_1 + 0xb4) = param_2;
  *(int *)(param_1 + 0xb8) = *param_2;
  *(int *)(param_1 + 0xbc) = param_2[1];
  *(int *)(param_1 + 0xc0) = param_2[2];
  *(int *)(param_1 + 0xc4) = param_2[3];
  *param_2 = *param_2 + (int)param_2;
  param_2[1] = param_2[1] + (int)param_2;
  param_2[2] = param_2[2] + (int)param_2;
  param_2[3] = param_2[3] + (int)param_2;
  uVar1 = (uint)(*(int *)(*(int *)(param_1 + 0xb4) + 0xc) - *(int *)(*(int *)(param_1 + 0xb4) + 8))
          >> 4;
  if (uVar1 != 0) {
    iVar3 = func_0010CEE0(uVar1 << 3,param_4,4);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = func_00100118(iVar3,DAT_004335a0,8,uVar1);
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0xcc) = iVar4;
      *(uint *)(param_1 + 200) = uVar1;
    }
  }
  uVar2 = DAT_004335a4;
  iVar4 = 1;
  *(undefined4 *)(param_1 + 0xd0) = DAT_004335a4;
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  uVar2 = DAT_004335a8;
  *(undefined4 *)(param_1 + 0xdc) = DAT_004335a8;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  fVar12 = DAT_004335ac;
  if (1 < *(int *)(param_1 + 200)) {
    do {
      piVar5 = *(int **)(param_1 + 0xb4);
      iVar3 = piVar5[1];
      pfVar6 = (float *)(piVar5[2] + iVar4 * 0x10);
      pfVar7 = (float *)(iVar3 + (uint)*(ushort *)((int)pfVar6 + 6) * 0xc);
      pfVar9 = (float *)(iVar3 + (uint)*(ushort *)(pfVar6 + 2) * 0xc);
      pfVar8 = (float *)(iVar3 + (uint)*(ushort *)(pfVar6 + 3) * 0xc);
      pfVar10 = (float *)(*piVar5 + (uint)*(ushort *)(pfVar6 + 1) * 0xc);
      fVar20 = *pfVar10;
      fVar11 = pfVar10[1];
      fVar18 = pfVar10[2];
      fVar23 = pfVar7[1] * *pfVar9 - *pfVar7 * pfVar9[1];
      pfVar10 = (float *)(iVar3 + (uint)*(ushort *)((int)pfVar6 + 10) * 0xc);
      fVar21 = pfVar7[2] * pfVar9[1] - pfVar7[1] * pfVar9[2];
      fVar22 = *pfVar7 * pfVar9[2] - pfVar7[2] * *pfVar9;
      fVar13 = fVar21 * *pfVar8 + fVar22 * pfVar8[1] + fVar23 * pfVar8[2];
      fVar14 = fVar11;
      fVar15 = fVar18;
      fVar16 = fVar20;
      if (fVar12 < fVar13) {
        fVar13 = *pfVar6 / fVar13;
        fVar14 = fVar11 + fVar22 * fVar13;
        fVar15 = fVar18 + fVar23 * fVar13;
        fVar16 = fVar20 + fVar21 * fVar13;
      }
      fVar23 = pfVar10[2] * pfVar7[1] - pfVar10[1] * pfVar7[2];
      fVar19 = *pfVar10 * pfVar7[2] - pfVar10[2] * *pfVar7;
      fVar24 = pfVar10[1] * *pfVar7 - *pfVar10 * pfVar7[1];
      fVar17 = fVar23 * *pfVar8 + fVar19 * *(float *)(pfVar8 + 1) +
               fVar24 * *(float *)((char *)(pfVar8 + 1) + 4);
      fVar13 = fVar18;
      fVar21 = fVar20;
      fVar22 = fVar11;
      if (fVar12 < fVar17) {
        fVar17 = *pfVar6 / fVar17;
        fVar13 = fVar18 + fVar24 * fVar17;
        fVar21 = fVar20 + fVar23 * fVar17;
        fVar22 = fVar11 + fVar19 * fVar17;
      }
      fVar23 = *(float *)(param_1 + 0xd0);
      if (fVar20 < *(float *)(param_1 + 0xd0)) {
        fVar23 = fVar20;
      }
      *(float *)(param_1 + 0xd0) = fVar23;
      fVar17 = *(float *)(param_1 + 0xd4);
      if (fVar11 < *(float *)(param_1 + 0xd4)) {
        fVar17 = fVar11;
      }
      *(float *)(param_1 + 0xd4) = fVar17;
      fVar19 = *(float *)(param_1 + 0xd8);
      if (fVar18 < *(float *)(param_1 + 0xd8)) {
        fVar19 = fVar18;
      }
      *(float *)(param_1 + 0xd8) = fVar19;
      fVar24 = *(float *)(param_1 + 0xdc);
      if (*(float *)(param_1 + 0xdc) <= fVar20) {
        fVar24 = fVar20;
      }
      *(float *)(param_1 + 0xdc) = fVar24;
      if (fVar11 < *(float *)(param_1 + 0xe0)) {
        fVar11 = *(float *)(param_1 + 0xe0);
      }
      *(float *)(param_1 + 0xe0) = fVar11;
      if (fVar18 < *(float *)(param_1 + 0xe4)) {
        fVar18 = *(float *)(param_1 + 0xe4);
      }
      *(float *)(param_1 + 0xe4) = fVar18;
      fVar20 = fVar16;
      if (fVar23 <= fVar16) {
        fVar20 = fVar23;
      }
      *(float *)(param_1 + 0xd0) = fVar20;
      if (fVar14 < fVar17) {
        fVar17 = fVar14;
      }
      *(float *)(param_1 + 0xd4) = fVar17;
      if (fVar15 < fVar19) {
        fVar19 = fVar15;
      }
      *(float *)(param_1 + 0xd8) = fVar19;
      if (fVar16 < fVar24) {
        fVar16 = fVar24;
      }
      *(float *)(param_1 + 0xdc) = fVar16;
      if (fVar11 <= fVar14) {
        fVar11 = fVar14;
      }
      *(float *)(param_1 + 0xe0) = fVar11;
      if (fVar15 < fVar18) {
        fVar15 = fVar18;
      }
      *(float *)(param_1 + 0xe4) = fVar15;
      if (fVar21 < fVar20) {
        fVar20 = fVar21;
      }
      *(float *)(param_1 + 0xd0) = fVar20;
      if (fVar22 < fVar17) {
        fVar17 = fVar22;
      }
      *(float *)(param_1 + 0xd4) = fVar17;
      if (fVar13 < fVar19) {
        fVar19 = fVar13;
      }
      *(float *)(param_1 + 0xd8) = fVar19;
      if (fVar16 <= fVar21) {
        fVar16 = fVar21;
      }
      *(float *)(param_1 + 0xdc) = fVar16;
      if (fVar11 <= fVar22) {
        fVar11 = fVar22;
      }
      iVar4 = iVar4 + 1;
      *(float *)(param_1 + 0xe0) = fVar11;
      if (fVar15 <= fVar13) {
        fVar15 = fVar13;
      }
      *(float *)(param_1 + 0xe4) = fVar15;
    } while (iVar4 < *(int *)(param_1 + 200));
  }
  pfVar6 = DAT_004335b0;
  fVar12 = *(float *)(*(int *)(param_1 + 0xb4) + 0x38);
  *(float *)(param_1 + 0xe8) = fVar12 * fVar12;
  fVar12 = *pfVar6;
  if (ALBW_AS_F32(param_2[0xe]) < *pfVar6) {
    fVar12 = ALBW_AS_F32(param_2[0xe]);
  }
  *pfVar6 = fVar12;
  fVar12 = pfVar6[1];
  if (ALBW_AS_F32(param_2[4]) < pfVar6[1]) {
    fVar12 = ALBW_AS_F32(param_2[4]);
  }
  pfVar6[1] = fVar12;
  return;
}

