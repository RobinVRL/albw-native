#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_004905E0(float fparam_0);
extern float DAT_00454ff8;
extern float DAT_00454ffc;
extern float DAT_00455000;
extern float DAT_00455004;
extern float DAT_00455008;
extern float DAT_0045500c;
extern int DAT_00455010;
extern float DAT_00455014;
extern float DAT_00455018;
extern float DAT_0045501c;
extern float DAT_00455020;
extern float DAT_00455024;
extern float DAT_00455028;

// USA 00454CB8 <- EU 00454C90 (Ghidra, non-matching)
// GLOBAL DAT_00454ff8 float
// GLOBAL DAT_00454ffc float
// GLOBAL DAT_00455000 float
// GLOBAL DAT_00455004 float
// GLOBAL DAT_00455008 float
// GLOBAL DAT_0045500c float
// GLOBAL DAT_00455010 int
// GLOBAL DAT_00455014 float
// GLOBAL DAT_00455018 float
// GLOBAL DAT_0045501c float
// GLOBAL DAT_00455020 float
// GLOBAL DAT_00455024 float
// GLOBAL DAT_00455028 float

void func_00454CB8(int param_1)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  
  fVar12 = DAT_0045500c;
  fVar10 = DAT_00455008;
  iVar4 = *(int *)(param_1 + 0x90);
  uVar16 = CONCAT44(DAT_00455008,DAT_0045500c);
  fVar14 = (DAT_00454ff8 * *(float *)(param_1 + 0xbc) * *(float *)(iVar4 + 0x34) -
           -*(float *)(iVar4 + 0x1c)) + DAT_00454ffc;
  fVar15 = DAT_00455000 -
           (DAT_00454ff8 * *(float *)(param_1 + 0xc4) * *(float *)(iVar4 + 0x34) -
           *(float *)(iVar4 + 0x20));
  if (((((uint)ALBW_AS_U32(fVar14) < (uint)ALBW_AS_U32(DAT_00455004)) && ((int)ALBW_AS_U32(fVar14) < DAT_00455010)) &&
      ((int)ALBW_AS_U32(fVar15) < DAT_00455010 + 0x3e0000)) && ((uint)ALBW_AS_U32(fVar15) < (int)ALBW_AS_U32(DAT_00455004) - 0x3e0000U)) {
    *(float *)(param_1 + 0x80) = fVar14;
    *(float *)(param_1 + 0x84) = fVar15;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    func_002313DC(param_1 + 0x94);
  }
  else {
    uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_00455014 <= fVar14) << 0x1d;
    fVar8 = DAT_00455014;
    if ((SUB41(uVar7 >> 0x1d,0)) &&
       (uVar7 = in_fpscr & 0xfffffff | (uint)(fVar14 < DAT_00455018) << 0x1f |
                (uint)(fVar14 == DAT_00455018) << 0x1e, bVar2 = (byte)(uVar7 >> 0x18),
       fVar8 = fVar14,
       !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar14) || NAN(DAT_00455018)))) {
      fVar8 = DAT_00455018;
    }
    *(float *)(param_1 + 0x80) = fVar8;
    fVar3 = DAT_00455020;
    fVar9 = DAT_0045501c;
    uVar7 = uVar7 & 0xfffffff;
    uVar6 = uVar7 | (uint)(fVar8 < fVar12) << 0x1f;
    if (SUB41(uVar6 >> 0x1f,0) == (NAN(fVar8) || NAN(fVar12))) {
      fVar8 = fVar8 + fVar10;
    }
    else {
      fVar8 = fVar8 - fVar10;
    }
    fVar8 = (float)VectorSignedToFloat((int)fVar8,(byte)(uVar6 >> 0x15) & 3);
    uVar6 = uVar7 | (uint)(DAT_0045501c <= fVar15) << 0x1d;
    *(float *)(param_1 + 0x80) = fVar8;
    if ((SUB41(uVar6 >> 0x1d,0)) &&
       (uVar6 = uVar7 | (uint)(fVar15 < fVar3) << 0x1f | (uint)(fVar15 == fVar3) << 0x1e,
       bVar2 = (byte)(uVar6 >> 0x18), fVar9 = fVar15,
       !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar15) || NAN(fVar3)))) {
      fVar9 = fVar3;
    }
    *(float *)(param_1 + 0x84) = fVar9;
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar9 < fVar12) << 0x1f;
    uVar7 = uVar6 | (uint)(NAN(fVar9) || NAN(fVar12)) << 0x1c;
    *(undefined1 *)(param_1 + 0xcc) = 1;
    fVar14 = fVar14 - fVar8;
    if ((byte)(uVar6 >> 0x1f) == ((byte)(uVar7 >> 0x1c) & 1)) {
      fVar9 = fVar9 + fVar10;
    }
    else {
      fVar9 = fVar9 - fVar10;
    }
    fVar10 = (float)VectorSignedToFloat((int)fVar9,(byte)(uVar7 >> 0x15) & 3);
    *(float *)(param_1 + 0x84) = fVar10;
    fVar15 = fVar15 - fVar10;
    func_00231524(param_1 + 0x94);
    uVar7 = uVar7 & 0xfffffff;
    if (fVar14 == fVar12) {
      uVar7 = uVar7 | (uint)(fVar15 < fVar12) << 0x1f | (uint)(fVar15 == fVar12) << 0x1e;
      in_fpscr = uVar7 | (uint)(NAN(fVar15) || NAN(fVar12)) << 0x1c;
      bVar2 = (byte)(uVar7 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(undefined4 *)(param_1 + 200) = 0x80000000;
      }
      else {
        *(undefined4 *)(param_1 + 200) = 0;
      }
    }
    else {
      fVar14 = -fVar14;
      in_fpscr = uVar7 | (uint)(fVar15 == fVar12) << 0x1e;
      if ((SUB41(in_fpscr >> 0x1e,0)) &&
         (in_fpscr = uVar7 | (uint)(fVar14 == fVar12) << 0x1e, SUB41(in_fpscr >> 0x1e,0))) {
        iVar4 = 0;
      }
      else {
        uVar7 = in_fpscr & 0xfffffff;
        if (NAN(fVar15) || NAN(fVar12)) {
          if (NAN(fVar14) || NAN(fVar12)) {
            in_fpscr = uVar7 | (uint)(fVar15 == fVar14) << 0x1e | (uint)(fVar14 <= fVar15) << 0x1d;
            bVar2 = (byte)(in_fpscr >> 0x18);
            if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
              iVar4 = func_004905E0(fVar15 / fVar14);
              iVar4 = -0x40000000 - iVar4;
            }
            else {
              iVar4 = func_004905E0(fVar14 / fVar15);
              iVar4 = iVar4 + -0x80000000;
            }
          }
          else {
            fVar15 = -fVar15;
            uVar7 = uVar7 | (uint)(fVar15 < fVar14) << 0x1f;
            in_fpscr = uVar7 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
            if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
              iVar4 = func_004905E0(fVar14 / fVar15);
              iVar4 = -0x80000000 - iVar4;
            }
            else {
              iVar4 = func_004905E0(fVar15 / fVar14);
              iVar4 = iVar4 + 0x40000000;
            }
          }
        }
        else if (NAN(fVar14) || NAN(fVar12)) {
          fVar14 = -fVar14;
          uVar7 = uVar7 | (uint)(fVar15 < fVar14) << 0x1f;
          in_fpscr = uVar7 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
          if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            iVar4 = func_004905E0(fVar14 / fVar15);
            iVar4 = -iVar4;
          }
          else {
            iVar4 = func_004905E0(fVar15 / fVar14);
            iVar4 = iVar4 + -0x40000000;
          }
        }
        else {
          uVar7 = uVar7 | (uint)(fVar15 < fVar14) << 0x1f;
          in_fpscr = uVar7 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
          if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            iVar4 = func_004905E0(fVar14 / fVar15);
          }
          else {
            iVar4 = func_004905E0(fVar15 / fVar14);
            iVar4 = 0x40000000 - iVar4;
          }
        }
      }
      *(int *)(param_1 + 200) = iVar4;
    }
    fVar10 = DAT_00455024;
    iVar4 = *(int *)(param_1 + 200);
    iVar5 = *(int *)(param_1 + 0xd0);
    fVar14 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar5 + 0x28) = fVar12;
    fVar14 = fVar14 * fVar10;
    if (iVar4 < 0) {
      fVar14 = fVar14 - DAT_00455028;
    }
    *(float *)(iVar5 + 0x2c) = fVar12;
    *(float *)(iVar5 + 0x30) = fVar14;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
    iVar4 = *(int *)(param_1 + 0xd4);
    *(float *)(iVar4 + 0x28) = fVar12;
    *(float *)(iVar4 + 0x2c) = fVar12;
    *(float *)(iVar4 + 0x30) = fVar14;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
  }
  fVar10 = *(float *)(param_1 + 0x80);
  fVar14 = ALBW_AS_F32(uVar16);
  bVar1 = NAN(fVar10);
  fVar12 = *(float *)(param_1 + 0x84);
  iVar4 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  fVar15 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
  if (!bVar1 && !NAN(fVar14)) {
    fVar10 = fVar10 + fVar15;
  }
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar14) << 0x1f;
  *(float *)(iVar4 + 0x24) = fVar14;
  if (bVar1 || NAN(fVar14)) {
    fVar10 = fVar10 - fVar15;
  }
  uVar11 = ALBW_AS_U32(VectorSignedToFloat((int)fVar10,(byte)(uVar7 >> 0x15) & 3));
  if (SUB41(uVar7 >> 0x1f,0) == (NAN(fVar12) || NAN(fVar14))) {
    fVar12 = fVar12 + fVar15;
  }
  else {
    fVar12 = fVar12 - fVar15;
  }
  uVar13 = ALBW_AS_U32(VectorSignedToFloat((int)fVar12,(byte)(uVar7 >> 0x15) & 3));
  *(undefined4 *)(iVar4 + 0x1c) = uVar11;
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
  return;
}

