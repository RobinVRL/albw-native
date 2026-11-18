#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0058E2B8(int *param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0032bcc4;
extern float DAT_0032bcc8;
extern int *DAT_0032bccc;
extern float DAT_0032bcd0;

// USA 0032BA20 <- EU 0032B9FC (Ghidra, non-matching)
// GLOBAL DAT_0032bcc4 float
// GLOBAL DAT_0032bcc8 float
// GLOBAL DAT_0032bccc int *
// GLOBAL DAT_0032bcd0 float

undefined4 func_0032BA20(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((int *)(albw_frame + 0x0))
  #define afStack_44 ((float *)(albw_frame + 0xc))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  *(undefined1 *)(param_1 + 0xc93) = 1;
  *(undefined4 *)(param_1 + 0xc84) = 5;
  fVar17 = DAT_0032bcc8;
  fVar15 = DAT_0032bcc4;
  uVar10 = 0xffffffff;
  pfVar7 = *(float **)(*DAT_0032bccc + 0x1c);
  uVar5 = *(uint *)(*(int *)(param_1 + 0xa94) + 0x20);
  uVar2 = 1;
  *(undefined4 *)(param_1 + 0xc70) = 0xffffffff;
  if (1 < (int)uVar5) {
    do {
      iVar12 = *(int *)(*(int *)(param_1 + 0xa94) + 0x28);
      if (((iVar12 != 0) && (uVar2 < *(uint *)(*(int *)(param_1 + 0xa94) + 0x20))) &&
         (iVar12 = *(int *)(iVar12 + uVar2 * 4), iVar12 != 0)) {
        fVar16 = *(float *)(iVar12 + 0x18);
        fVar14 = *(float *)(iVar12 + 0x20);
        fVar18 = fVar16 - *pfVar7;
        fVar19 = fVar14 - pfVar7[2];
        fVar18 = fVar18 * fVar18 + fVar19 * fVar19;
        if (fVar15 < fVar18) {
          *(uint *)(param_1 + 0xc70) = uVar2;
        }
        if (fVar15 < fVar18) {
          fVar15 = fVar18;
        }
        fVar16 = fVar16 - *(float *)(param_1 + 0x3d0);
        fVar14 = fVar14 - *(float *)(param_1 + 0x3d8);
        fVar14 = fVar16 * fVar16 + fVar14 * fVar14;
        if (fVar14 < fVar18 && fVar14 < fVar17) {
          uVar10 = uVar2;
          fVar17 = fVar14;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar5);
    if (0 < *(int *)(param_1 + 0xc70)) {
      if (uVar10 == 1) {
        uVar11 = 2;
        uVar2 = uVar5;
      }
      else {
        uVar2 = uVar10;
        if (uVar10 == uVar5 - 1) {
          uVar11 = 1;
        }
        else {
          uVar11 = uVar10 + 1;
        }
      }
      uVar2 = uVar2 - 1;
      iVar12 = *(int *)(param_1 + 0xa94);
      iVar13 = *(int *)(iVar12 + 0x28);
      if (iVar13 != 0) {
        uVar5 = *(uint *)(iVar12 + 0x20);
      }
      if (iVar13 != 0 && uVar2 < uVar5) {
        iVar3 = *(int *)(iVar13 + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      if ((iVar13 == 0) || (*(uint *)(iVar12 + 0x20) <= uVar11)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar13 + uVar11 * 4);
      }
      if (iVar3 == 0 || iVar6 == 0) {
        *(uint *)(param_1 + 0xc58) = uVar10;
        *(uint *)(param_1 + 0xc5c) = uVar11;
      }
      else {
        if ((iVar13 == 0) || (*(uint *)(iVar12 + 0x20) <= uVar10)) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(iVar13 + uVar10 * 4);
        }
        pfVar4 = (float *)(iVar3 + 0x18);
        fVar15 = *pfVar4 - *pfVar7;
        fVar17 = *(float *)(iVar3 + 0x20) - pfVar7[2];
        fVar16 = *(float *)(iVar6 + 0x20) - pfVar7[2];
        fVar14 = *(float *)(iVar6 + 0x18) - *pfVar7;
        bVar1 = fVar15 * fVar15 + fVar17 * fVar17 < fVar14 * fVar14 + fVar16 * fVar16;
        if (bVar1) {
          pfVar4 = (float *)(iVar6 + 0x18);
        }
        func_00115C70(afStack_44,(float *)(param_1 + 0x3d0),(float *)(iVar12 + 0x18));
        func_00115C70(afStack_38,pfVar4,(float *)(iVar12 + 0x18));
        iVar12 = func_0068C690(afStack_44);
        local_50[0] = func_0068C690(afStack_38);
        local_50[0] = iVar12 - local_50[0];
        uVar5 = func_0058E2B8(local_50);
        if (uVar5 < 0x40000000) {
          if (!bVar1) {
            uVar11 = uVar2;
          }
          *(uint *)(param_1 + 0xc5c) = uVar10;
          *(uint *)(param_1 + 0xc58) = uVar11;
        }
        else {
          if (bVar1) {
            uVar11 = uVar2;
          }
          *(uint *)(param_1 + 0xc58) = uVar10;
          *(uint *)(param_1 + 0xc5c) = uVar11;
        }
      }
      fVar15 = DAT_0032bcd0;
      uVar5 = *(uint *)(param_1 + 0xa94);
      iVar12 = *(int *)(uVar5 + 0x28);
      if (iVar12 != 0) {
        uVar5 = *(uint *)(uVar5 + 0x20);
      }
      if (iVar12 != 0 && *(uint *)(param_1 + 0xc58) < uVar5) {
        iVar12 = *(int *)(iVar12 + *(uint *)(param_1 + 0xc58) * 4);
      }
      else {
        iVar12 = 0;
      }
      uVar8 = *(undefined4 *)(iVar12 + 0x18);
      uVar9 = *(undefined4 *)(iVar12 + 0x1c);
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(iVar12 + 0x20);
      *(undefined4 *)(param_1 + 0xc24) = uVar8;
      *(undefined4 *)(param_1 + 0xc28) = uVar9;
      *(float *)(param_1 + 0xc28) = *(float *)(param_1 + 0xc) + fVar15;
      return 0;
    }
  }
  return func_00665670((undefined4 *)(param_1 + 0xba8),6);
}

