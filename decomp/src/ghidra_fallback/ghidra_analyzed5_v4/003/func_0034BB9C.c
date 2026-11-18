#include "ghidra_types.h"

extern int func_0034C57C(int param_1,int param_2);
extern int func_00533060(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_00533090(undefined4 param_1,int param_2,undefined4 param_3);
extern float DAT_0034be88;
extern float DAT_0034be8c;
extern float DAT_0034be90;
extern float DAT_0034be94;
extern int DAT_0034be98;
extern int DAT_0034be9c;
extern float DAT_0034bea0;
extern float DAT_0034bea4;
extern float DAT_0034bea8;
extern int DAT_0034beac;

// USA 0034BB9C <- EU 0034BB78 (Ghidra, non-matching)
// GLOBAL DAT_0034be88 float
// GLOBAL DAT_0034be8c float
// GLOBAL DAT_0034be90 float
// GLOBAL DAT_0034be94 float
// GLOBAL DAT_0034be98 int
// GLOBAL DAT_0034be9c int
// GLOBAL DAT_0034bea0 float
// GLOBAL DAT_0034bea4 float
// GLOBAL DAT_0034bea8 float
// GLOBAL DAT_0034beac int

undefined4 func_0034BB9C(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint in_fpscr;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  
  fVar23 = DAT_0034be8c;
  fVar22 = DAT_0034be88;
  iVar7 = *(int *)(param_1 + 0x4c);
  if (iVar7 == 0) {
    return 1;
  }
  uVar26 = *(undefined4 *)(param_1 + 0x44);
  fVar24 = *(float *)(param_1 + 0x48);
  fVar21 = (float)VectorSignedToFloat(uVar26,(byte)(in_fpscr >> 0x15) & 3);
  bVar1 = fVar24 < fVar21;
  uVar8 = in_fpscr & 0xfffffff;
  fVar21 = (float)VectorSignedToFloat(uVar26,(byte)(uVar8 >> 0x15) & 3);
  fVar21 = fVar21 - fVar24;
  uVar20 = uVar8 | (uint)(fVar21 < DAT_0034be8c) << 0x1f;
  if (fVar21 == DAT_0034be8c || SUB41(uVar20 >> 0x1f,0) != (NAN(fVar21) || NAN(DAT_0034be8c))) {
    fVar21 = -fVar21;
  }
  fVar27 = (float)VectorUnsignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
  fVar21 = fVar21 / fVar27;
  uVar20 = uVar8 | (uint)(DAT_0034be88 < fVar21) << 0x1f;
  fVar27 = DAT_0034be88;
  if (DAT_0034be88 == fVar21 || SUB41(uVar20 >> 0x1f,0) != (NAN(DAT_0034be88) || NAN(fVar21))) {
    fVar27 = fVar21;
  }
  fVar21 = (float)VectorSignedToFloat(uVar26,(byte)(uVar20 >> 0x15) & 3);
  uVar20 = uVar8 | (uint)(fVar24 < fVar21) << 0x1f;
  if (fVar21 <= fVar24) {
    if (fVar24 == fVar21 || SUB41(uVar20 >> 0x1f,0) != (NAN(fVar24) || NAN(fVar21)))
    goto LAB_0034bc44;
    fVar27 = fVar24 - fVar27;
    if ((fVar27 <= fVar21) ||
       (uVar8 = uVar8 | (uint)(fVar27 < fVar24) << 0x1f,
       fVar27 != fVar24 && SUB41(uVar8 >> 0x1f,0) == (NAN(fVar27) || NAN(fVar24))))
    goto LAB_0034bc38;
  }
  else {
    fVar27 = fVar24 + fVar27;
    if ((fVar21 <= fVar27) ||
       (uVar8 = uVar8 | (uint)(fVar24 < fVar27) << 0x1f,
       fVar24 != fVar27 && SUB41(uVar8 >> 0x1f,0) == (NAN(fVar24) || NAN(fVar27)))) {
LAB_0034bc38:
      *(float *)(param_1 + 0x48) = fVar21;
      uVar20 = uVar8;
      goto LAB_0034bc44;
    }
  }
  *(float *)(param_1 + 0x48) = fVar27;
  uVar20 = uVar8;
LAB_0034bc44:
  fVar24 = *(float *)(param_1 + 0x48);
  iVar10 = 0;
  uVar20 = uVar20 & 0xfffffff;
  uVar8 = uVar20 | (uint)(fVar23 < fVar24) << 0x1f;
  fVar21 = fVar23;
  if (fVar23 == fVar24 || SUB41(uVar8 >> 0x1f,0) != (NAN(fVar23) || NAN(fVar24))) {
    fVar21 = fVar24;
  }
  *(float *)(param_1 + 0x48) = fVar21;
  *(int *)(param_1 + 0x4c) = iVar7 + -1;
  fVar6 = DAT_0034bea8;
  fVar5 = DAT_0034bea4;
  fVar27 = DAT_0034bea0;
  iVar4 = DAT_0034be9c;
  iVar3 = DAT_0034be98;
  fVar24 = DAT_0034be90;
  if (iVar7 + -1 != 0) {
    fVar25 = (float)VectorSignedToFloat(uVar26,(byte)(uVar8 >> 0x15) & 3);
    uVar8 = uVar20;
    if (((fVar21 - fVar25 < DAT_0034be94) || (DAT_0034be90 < fVar21 - fVar25)) &&
       (fVar25 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),
                                            (byte)(uVar20 >> 0x15) & 3), fVar21 < fVar25)) {
      iVar7 = (int)fVar21;
      fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
      if (bVar1) {
        if ((fVar25 != fVar21) && (fVar23 <= fVar21)) {
          iVar7 = iVar7 + 1;
        }
      }
      else if ((fVar25 != fVar21) && (fVar21 < fVar23)) {
        iVar7 = iVar7 + -1;
      }
      iVar15 = *(int *)(param_1 + 0x34);
      iVar14 = *(int *)(param_1 + 0x38);
      iVar16 = *(int *)(param_1 + 0x40);
      iVar18 = 0;
      uVar8 = 0;
      if (iVar15 != 0) {
        iVar17 = (int)ALBW_AS_U32(DAT_0034bea0) + 0x80000000;
        do {
          iVar11 = (int)((ulonglong)((longlong)DAT_0034beac * (longlong)iVar7) >> 0x20);
          iVar11 = (iVar11 >> 2) - (iVar11 >> 0x1f);
          iVar7 = iVar7 + iVar11 * -10;
          cVar2 = *(char *)(iVar16 + iVar18);
          if (cVar2 == '\0') {
            if (iVar7 == 0) {
              piVar9 = (int *)(iVar14 + iVar10 * 4);
              if (0x41000000 < *piVar9) {
                *piVar9 = iVar3;
              }
            }
            else if ((iVar7 == 9) && (piVar9 = (int *)(iVar14 + iVar10 * 4), *piVar9 < 0x40000000))
            {
              *piVar9 = iVar4;
            }
            pfVar13 = (float *)(iVar14 + iVar10 * 4);
            fVar28 = *pfVar13;
            fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
            uVar19 = uVar20 & 0xfffffff;
            uVar20 = uVar19 | (uint)(fVar28 < fVar25) << 0x1f;
            if (fVar25 <= fVar28) {
              if (fVar28 != fVar25 && SUB41(uVar20 >> 0x1f,0) == (NAN(fVar28) || NAN(fVar25))) {
                fVar30 = fVar28 - fVar22;
                if ((fVar30 <= fVar25) ||
                   (uVar19 = uVar19 | (uint)(fVar30 < fVar28) << 0x1f,
                   fVar30 != fVar28 && SUB41(uVar19 >> 0x1f,0) == (NAN(fVar30) || NAN(fVar28))))
                goto LAB_0034bf28;
                goto LAB_0034bf30;
              }
            }
            else {
              fVar30 = fVar28 + fVar22;
              if ((fVar25 <= fVar30) ||
                 (uVar19 = uVar19 | (uint)(fVar28 < fVar30) << 0x1f,
                 fVar28 != fVar30 && SUB41(uVar19 >> 0x1f,0) == (NAN(fVar28) || NAN(fVar30)))) {
LAB_0034bf28:
                *pfVar13 = fVar25;
                uVar20 = uVar19;
              }
              else {
LAB_0034bf30:
                *pfVar13 = fVar30;
                uVar20 = uVar19;
              }
            }
            pfVar13 = (float *)(iVar14 + iVar10 * 4);
            fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
            fVar25 = *pfVar13 - fVar25;
            if (((uint)ALBW_AS_U32(fVar25) <= (uint)ALBW_AS_U32(fVar27)) && ((int)ALBW_AS_U32(fVar25) <= iVar17)) {
              fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
              *pfVar13 = fVar25;
            }
          }
          else {
            if (cVar2 == '\x01') {
              iVar29 = (int)fVar21;
              fVar28 = (float)VectorSignedToFloat(iVar29,(byte)(uVar20 >> 0x15) & 3);
              iVar7 = (int)((ulonglong)((longlong)DAT_0034beac * (longlong)iVar29) >> 0x20);
              iVar12 = iVar10 << 2;
              fVar25 = (float)VectorSignedToFloat(iVar29 + ((iVar7 >> 2) - (iVar7 >> 0x1f)) * -10,
                                                  (byte)(uVar20 >> 0x15) & 3);
              fVar25 = fVar25 + (fVar21 - fVar28);
            }
            else {
              iVar12 = iVar10 * 4;
              fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
            }
            *(float *)(iVar14 + iVar12) = fVar25;
          }
          fVar30 = *(float *)(iVar14 + iVar10 * 4);
          iVar7 = (int)fVar30;
          fVar28 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
          uVar20 = uVar20 & 0xfffffff;
          fVar25 = fVar28;
          if (fVar28 != fVar30) {
            fVar25 = fVar23;
          }
          if (fVar30 <= fVar25 && (fVar28 != fVar30 && fVar23 != fVar30)) {
            iVar7 = iVar7 + -1;
          }
          fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
          fVar30 = fVar30 - fVar25;
          if ((int)uVar8 < (int)*(uint *)(param_1 + 0x20)) {
            if (uVar8 < *(uint *)(param_1 + 0x20)) {
              iVar12 = *(int *)(*(int *)(param_1 + 0x28) + uVar8 * 4);
            }
            else {
              iVar12 = 0;
            }
            if (iVar7 < 9) {
              if (iVar7 < -1) {
                iVar7 = -1;
              }
              fVar28 = (float)VectorSignedToFloat(iVar7,(byte)(uVar20 >> 0x15) & 3);
              fVar25 = fVar23;
              if ((fVar23 <= fVar30) &&
                 (uVar20 = uVar20 | (uint)(fVar30 < fVar5) << 0x1f, fVar25 = fVar30,
                 fVar30 != fVar5 && SUB41(uVar20 >> 0x1f,0) == (NAN(fVar30) || NAN(fVar5)))) {
                fVar25 = fVar5;
              }
              fVar25 = fVar6 + (fVar28 + fVar25) * fVar6;
            }
            else {
              fVar25 = fVar23;
              if ((fVar23 <= fVar30) &&
                 (uVar20 = uVar20 | (uint)(fVar30 < fVar5) << 0x1f, fVar25 = fVar30,
                 fVar30 != fVar5 && SUB41(uVar20 >> 0x1f,0) == (NAN(fVar30) || NAN(fVar5)))) {
                fVar25 = fVar5;
              }
              fVar25 = fVar25 * fVar6;
            }
            *(float *)(*(int *)(iVar12 + 0x7c) + ((uint)(*(int *)(iVar12 + 0x74) << 0x1e) >> 0x19) +
                      4) = fVar25;
            *(byte *)(iVar12 + 0x9e) = *(byte *)(iVar12 + 0x9e) & 0xfb;
          }
          fVar21 = fVar21 * fVar24;
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 + 1;
          iVar18 = iVar18 + 1;
          iVar7 = iVar11;
        } while (iVar10 != iVar15);
      }
      if (*(char *)(param_1 + 0x58) == '\x01') {
        if (bVar1) {
          uVar8 = 0;
          if (**(char **)(param_1 + 0x40) != '\0') {
            uVar8 = 1;
          }
        }
        else if (**(char **)(param_1 + 0x40) == '\0') {
          uVar8 = 3;
        }
        else {
          uVar8 = 4;
        }
        if (uVar8 < *(uint *)(param_1 + 0x50)) {
          piVar9 = (int *)(*(int *)(param_1 + 0x54) + uVar8 * 4);
        }
        else {
          piVar9 = *(int **)(param_1 + 0x54);
        }
        func_00533060(param_1,*piVar9,0);
      }
      return 0;
    }
  }
  fVar22 = (float)VectorSignedToFloat(uVar26,(byte)(uVar8 >> 0x15) & 3);
  fVar23 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(uVar8 >> 0x15) & 3);
  if (fVar23 <= fVar22) {
    fVar22 = fVar23;
  }
  *(float *)(param_1 + 0x48) = fVar22;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (bVar1) {
      uVar8 = 2;
    }
    else {
      uVar8 = 5;
    }
    if (uVar8 < *(uint *)(param_1 + 0x50)) {
      piVar9 = (int *)(*(int *)(param_1 + 0x54) + uVar8 * 4);
    }
    else {
      piVar9 = *(int **)(param_1 + 0x54);
    }
    func_00533090(param_1,*piVar9,0);
  }
  func_0034C57C(param_1,*(int *)(param_1 + 0x44));
  return 1;
}

