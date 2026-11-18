#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_002EC1B8(int param_1,int param_2);
extern int func_0036B708(int param_1);
extern int func_0036BE78();
extern int func_00437874(float *param_1,float *param_2,float fparam_0);
extern int func_004E9CD4(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern undefined4 uRam002ea618;
extern int *DAT_002ea5f0;
extern int *DAT_002ea5f4;
extern float DAT_002ea5f8;
extern float DAT_002ea5fc;
extern float DAT_002ea600;
extern float DAT_002ea604;
extern float DAT_002ea608;
extern float *DAT_002ea60c;
extern float DAT_002ea610;
extern float DAT_002ea614;
extern undefined4 DAT_002ea61c;
extern undefined4 *DAT_002ea620;
extern int DAT_002ea624;

// USA 002EA2F8 <- EU 002EA2D4 (Ghidra, non-matching)
// GLOBAL DAT_002ea5f0 int *
// GLOBAL DAT_002ea5f4 int *
// GLOBAL DAT_002ea5f8 float
// GLOBAL DAT_002ea5fc float
// GLOBAL DAT_002ea600 float
// GLOBAL DAT_002ea604 float
// GLOBAL DAT_002ea608 float
// GLOBAL DAT_002ea60c float *
// GLOBAL DAT_002ea610 float
// GLOBAL DAT_002ea614 float
// GLOBAL DAT_002ea61c undefined4
// GLOBAL DAT_002ea620 undefined4 *
// GLOBAL DAT_002ea624 int
// GLOBAL UNK_002ea618 undefined4

undefined4 func_002EA2F8(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float in_s0;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  piVar2 = DAT_002ea5f0;
  iVar5 = func_0052FBA0(*DAT_002ea5f0 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  if (iVar5 != 0) {
    *(uint *)(iVar5 + 0x2e0) = *(uint *)(iVar5 + 0x2e0) | 2;
  }
  if (*(int *)(param_1 + 0x8c8) == 10) {
    func_004E9CD4(*DAT_002ea5f4);
  }
  iVar5 = func_0036BE78(param_1 + 0x964);
  fVar18 = DAT_002ea600;
  fVar16 = DAT_002ea5fc;
  fVar17 = DAT_002ea5f8;
  iVar8 = *(int *)(param_1 + 0xb7c);
  piVar11 = (int *)(param_1 + 0xb7c);
  iVar12 = 0;
  if (iVar8 == 0) {
    lVar19 = func_0058ACC8(param_1,DAT_002ea614);
    if ((int)lVar19 == 0) {
      return 0;
    }
    *piVar11 = *(int *)(param_1 + 0xb7c) + 1;
    *(float *)(param_1 + 0xd50) = fVar17;
    *(float *)(param_1 + 0xc08) = fVar17;
  }
  else {
    puVar10 = (uint *)(param_1 + 0xb0c);
    if (iVar8 == 1) {
      fVar17 = DAT_002ea5fc;
      fVar16 = DAT_002ea5f8;
      fVar15 = func_0058AC38(param_1);
      fVar14 = func_0058AA40(param_1);
      fVar15 = fVar15 - fVar14;
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar16) << 0x1f |
              (uint)(fVar15 == fVar16) << 0x1e;
      bVar1 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar15) || NAN(fVar16))) {
        *(float *)(param_1 + 0xd4c) = fVar17;
      }
      else {
        iVar5 = (int)fVar15;
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
        fVar14 = *(float *)(param_1 + 0xd4c);
        *(float *)(param_1 + 0xd4c) = fVar14 + (fVar17 - fVar14) * (fVar18 / fVar16);
      }
      iVar5 = func_0058A8F0(param_1);
      if (iVar5 != 0) {
        func_004FABDC(param_1,0x18,0xffffffff,0);
        uVar3 = uRam002ea618;
        *(undefined4 *)(param_1 + 0xb10) = 0x3c;
        *(undefined4 *)(param_1 + 0xb14) = uVar3;
        *puVar10 = 0;
        *piVar11 = *(int *)(param_1 + 0xb7c) + 1;
      }
    }
    else if (iVar8 == 2) {
      if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
        *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
      }
      else {
        func_0036B708(param_1 + 0x964);
        uVar3 = DAT_002ea61c;
        *(undefined4 *)(param_1 + 0xb10) = 0x1e;
        *(undefined4 *)(param_1 + 0xb14) = uVar3;
        *puVar10 = 0;
        iVar5 = DAT_002ea624;
        puVar4 = DAT_002ea620;
        *piVar11 = *(int *)(param_1 + 0xb7c) + 1;
        iVar8 = *piVar2;
        piVar11 = (int *)func_005841A8(iVar8,*puVar4,*(int **)(iVar5 + iVar8));
        bVar13 = piVar11 != *(int **)(*piVar2 + 0x3dbc8);
        if (bVar13) {
          piVar11 = (int *)*piVar11;
        }
        if (bVar13 && piVar11 != (int *)0x0) {
          *(int *)(param_1 + 0xcac) = piVar11[0xb3];
        }
      }
    }
    else {
      if (iVar8 != 3) {
        return 0;
      }
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
        *(undefined1 *)(*(int *)(param_1 + 0x970) + 0x13) = 6;
        func_006640EC((undefined4 *)(param_1 + 0x8c8),0xd,in_s0);
      }
      uVar6 = *(uint *)(param_1 + 0xb0c);
      uVar9 = *(uint *)(param_1 + 0xb10);
      if (uVar6 < uVar9) {
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + 0xb0c) = uVar6;
      }
      if (uVar9 != 0) {
        uVar6 = *puVar10;
      }
      fVar14 = fVar17;
      if ((uVar9 != 0 && uVar6 != 0) && (fVar14 = fVar18, uVar6 < uVar9)) {
        fVar14 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = fVar14 * *(float *)(param_1 + 0xb14);
      }
      fVar18 = fVar18 - fVar14;
      pfVar7 = (float *)func_00520FC0();
      func_00115C70(&local_40,pfVar7,(float *)(param_1 + 0x3d0));
      local_40 = local_40 + fVar16;
      local_38 = local_38 + DAT_002ea604;
      local_3c = fVar17;
      func_00437874(&local_40,DAT_002ea60c,DAT_002ea608);
      func_00115DAC((float *)(param_1 + 0x3dc),&local_40,(float *)(param_1 + 0x3dc),
                    fVar18 * DAT_002ea610);
      iVar12 = 1;
    }
  }
  return func_002EC1B8(param_1,iVar12);
}

