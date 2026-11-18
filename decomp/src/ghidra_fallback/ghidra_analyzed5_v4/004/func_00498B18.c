#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float DAT_00498e1c;
extern undefined4 DAT_00498e20;
extern float DAT_00498e24;
extern undefined4 DAT_00498e28;
extern undefined4 DAT_00498e2c;
extern undefined4 DAT_00498e30;

// USA 00498B18 <- EU 00498AF0 (Ghidra, non-matching)
// GLOBAL DAT_00498e1c float
// GLOBAL DAT_00498e20 undefined4
// GLOBAL DAT_00498e24 float
// GLOBAL DAT_00498e28 undefined4
// GLOBAL DAT_00498e2c undefined4
// GLOBAL DAT_00498e30 undefined4

void func_00498B18(int param_1,short *param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong in_d9;
  undefined8 in_d10;
  float fVar19;
  undefined4 uVar20;
  undefined8 in_d11;
  undefined8 uVar21;
  float fVar22;
  undefined8 in_d12;
  float fVar23;
  longlong lVar24;
  
  iVar4 = param_3 * param_4;
  if (param_1 != 0) {
    uVar20 = (int)((ulonglong)in_d11 >> 0x20);
    fVar23 = ALBW_AS_F32(((ulonglong)in_d12 >> 0x20));
    if (0 < param_4) {
      uVar20 = DAT_00498e28;
      fVar23 = DAT_00498e24;
    }
    uVar21 = CONCAT44(uVar20,DAT_00498e20);
    uVar12 = 0;
    fVar22 = DAT_00498e1c;
    if (0 < param_4) {
      do {
        fVar19 = ALBW_AS_F32(((ulonglong)in_d10 >> 0x20));
        fVar15 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorSignedToFloat(uVar12 + 1,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (fVar16 / (fVar15 + fVar22) - ALBW_AS_F32(uVar21)) * fVar23;
        fVar15 = func_0059163C(fVar16);
        fVar15 = fVar15 * ALBW_AS_F32(uVar21);
        fVar16 = func_005909A0(fVar16);
        fVar17 = ALBW_AS_F32(uVar21);
        if (0 < (int)param_3) {
          in_d9 = (ulonglong)(uint)ALBW_AS_U32((fVar15 + fVar17)) << 0x20;
          fVar19 = fVar17 - fVar15;
        }
        in_d10 = CONCAT44(fVar19,fVar16 * fVar17);
        iVar7 = 0;
        if (0 < (int)param_3) {
          do {
            fVar19 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
            fVar16 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
            fVar17 = ALBW_AS_F32(((ulonglong)uVar21 >> 0x20));
            fVar16 = (fVar19 * fVar17) / fVar16;
            if ((uVar12 & 1) == 0) {
              fVar19 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
              fVar16 = fVar16 - (fVar17 / fVar19) * ALBW_AS_F32(uVar21);
            }
            in_d9 = CONCAT44((int)((ulonglong)in_d9 >> 0x20),fVar16);
            fVar16 = func_005909A0(fVar16);
            fVar16 = fVar16 * ALBW_AS_F32(in_d10);
            fVar19 = func_0059163C(ALBW_AS_F32(in_d9));
            iVar8 = iVar7 + 1;
            pfVar5 = (float *)(param_1 + (uVar12 * param_3 + iVar7) * 0x24);
            fVar18 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
            fVar17 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
            *pfVar5 = fVar16;
            pfVar5[1] = fVar15;
            pfVar5[2] = fVar19 * ALBW_AS_F32(in_d10);
            pfVar5[3] = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
            pfVar5[4] = fVar18 / fVar17;
            pfVar5[5] = ALBW_AS_F32(((ulonglong)in_d10 >> 0x20));
            iVar7 = iVar8;
          } while (iVar8 < (int)param_3);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < param_4);
    }
    uVar3 = DAT_00498e30;
    uVar20 = DAT_00498e2c;
    puVar6 = (undefined4 *)(param_1 + iVar4 * 0x24);
    *puVar6 = DAT_00498e30;
    puVar6[1] = uVar20;
    puVar6[2] = uVar3;
    puVar6[3] = uVar3;
    uVar20 = (undefined4)uVar21;
    puVar6[4] = uVar20;
    puVar6[5] = ALBW_AS_U32(fVar22);
    puVar6 = (undefined4 *)(param_1 + (iVar4 + 1) * 0x24);
    *puVar6 = uVar3;
    puVar6[1] = uVar20;
    puVar6[2] = uVar3;
    puVar6[3] = ALBW_AS_U32(fVar22);
    puVar6[4] = uVar20;
    puVar6[5] = uVar3;
  }
  if (param_2 != (short *)0x0) {
    if (0 < (int)param_3) {
      uVar14 = 1;
      sVar10 = 0;
      psVar9 = param_2;
      uVar12 = param_3;
      do {
        *psVar9 = (short)iVar4;
        psVar9[1] = sVar10;
        lVar24 = func_001104E4(uVar14,param_3);
        psVar9[2] = (short)((ulonglong)lVar24 >> 0x20);
        uVar12 = uVar12 - 1;
        uVar14 = uVar14 + 1;
        sVar10 = sVar10 + 1;
        psVar9 = psVar9 + 3;
      } while (uVar12 != 0);
    }
    iVar7 = param_4 + -1;
    iVar8 = 0;
    sVar10 = (short)param_3;
    if (0 < iVar7) {
      do {
        if (0 < (int)param_3) {
          uVar14 = 1;
          iVar13 = 0;
          psVar9 = param_2 + (iVar8 * 6 + 3) * param_3;
          sVar11 = (short)iVar8;
          uVar12 = param_3;
          do {
            *psVar9 = sVar11 * sVar10 + (short)iVar13;
            lVar24 = func_001104E4(iVar13 + iVar8 % 2,param_3);
            sVar1 = (sVar11 + 1) * sVar10 + (short)((ulonglong)lVar24 >> 0x20);
            psVar9[1] = sVar1;
            lVar24 = func_001104E4(uVar14,param_3);
            sVar2 = sVar11 * sVar10 + (short)((ulonglong)lVar24 >> 0x20);
            psVar9[2] = sVar2;
            psVar9[3] = sVar1;
            lVar24 = func_001104E4(uVar14 + iVar8 % 2,param_3);
            psVar9[5] = sVar2;
            uVar12 = uVar12 - 1;
            psVar9[4] = (sVar11 + 1) * sVar10 + (short)((ulonglong)lVar24 >> 0x20);
            uVar14 = uVar14 + 1;
            iVar13 = iVar13 + 1;
            psVar9 = psVar9 + 6;
          } while (uVar12 != 0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    if (0 < (int)param_3) {
      uVar14 = 1;
      sVar11 = 0;
      psVar9 = param_2 + param_3 * 3 + param_3 * iVar7 * 6;
      uVar12 = param_3;
      do {
        *psVar9 = (short)iVar4 + 1;
        lVar24 = func_001104E4(uVar14,param_3);
        uVar12 = uVar12 - 1;
        uVar14 = uVar14 + 1;
        psVar9[1] = sVar10 * (short)iVar7 + (short)((ulonglong)lVar24 >> 0x20);
        sVar1 = sVar10 * (short)iVar7 + sVar11;
        sVar11 = sVar11 + 1;
        psVar9[2] = sVar1;
        psVar9 = psVar9 + 3;
      } while (uVar12 != 0);
    }
  }
  return;
}

