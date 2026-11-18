#include "ghidra_types.h"

extern int func_0048A4E4(undefined4 *param_1,int param_2);
extern undefined4 DAT_00687d64;
extern float DAT_00687d68;
extern uint DAT_00687d6c;
extern float DAT_00687d70;
extern float DAT_00687d74;
extern float DAT_00687d78;
extern float DAT_00687d7c;
extern char *DAT_00687d80;
extern float DAT_00687d84;

// USA 00687AF4 <- EU 00687ACC (Ghidra, non-matching)
// GLOBAL DAT_00687d64 undefined4
// GLOBAL DAT_00687d68 float
// GLOBAL DAT_00687d6c uint
// GLOBAL DAT_00687d70 float
// GLOBAL DAT_00687d74 float
// GLOBAL DAT_00687d78 float
// GLOBAL DAT_00687d7c float
// GLOBAL DAT_00687d80 char *
// GLOBAL DAT_00687d84 float

undefined4 func_00687AF4(float *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(int * *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 ((int *)(albw_frame + 0xc))
  local_48 = 0;
  local_50 = DAT_00687d64;
  local_4c = param_2;
  func_0048A4E4(local_44,(int)&local_50);
  iVar8 = local_44[0];
  bVar10 = false;
  uVar18 = (ulonglong)DAT_00687d6c;
  fVar11 = DAT_00687d68;
  fVar14 = DAT_00687d74;
  fVar17 = DAT_00687d7c;
  fVar15 = DAT_00687d70;
  fVar12 = DAT_00687d78;
  fVar16 = DAT_00687d68;
  do {
    iVar7 = local_48;
    piVar3 = local_4c;
    (**(code **)(*local_4c + 8))(local_4c);
    iVar5 = local_48;
    piVar4 = local_4c;
    iVar6 = 0;
    do {
      if (*(char *)(piVar3[1] + iVar6) == '\0') {
        if (iVar6 < 0x40001) goto LAB_00687b68;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40001);
    iVar6 = 0;
LAB_00687b68:
    pcVar9 = DAT_00687d80;
    if (-1 < iVar7 && iVar7 <= iVar6) {
      pcVar9 = (char *)(piVar3[1] + iVar7);
    }
    if ((0x39 < *pcVar9) || (iVar7 = *pcVar9 + -0x30, iVar7 < 0)) {
      if (!bVar10) {
        return 0;
      }
      if (param_1 != (float *)0x0) {
        *param_1 = fVar11;
      }
      (**(code **)(*local_4c + 8))(local_4c);
      iVar8 = 0;
      break;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 <= fVar11) << 0x1d;
    bVar10 = false;
    if (SUB41(uVar1 >> 0x1d,0)) {
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 <= fVar12) << 0x1d;
      bVar10 = SUB41(uVar1 >> 0x1d,0);
    }
    if (!bVar10) {
      return 0;
    }
    fVar11 = fVar11 * fVar17;
    fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x15) & 3);
    if (iVar8 < 0) {
      fVar13 = ALBW_AS_F32(uVar18) + fVar13;
      uVar1 = uVar1 & 0xfffffff | (uint)(fVar13 < fVar11) << 0x1f | (uint)(fVar13 == fVar11) << 0x1e
      ;
      in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar11)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        return 0;
      }
    }
    else {
      in_fpscr = uVar1 & 0xfffffff | (uint)(fVar11 <= fVar15 - fVar13) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        return 0;
      }
    }
    bVar10 = true;
    local_48 = local_48 + 1;
    fVar13 = (float)VectorSignedToFloat(iVar8 * iVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar13 + fVar11;
  } while( true );
  while (iVar8 = iVar8 + 1, iVar8 < 0x40001) {
    if (*(char *)(piVar4[1] + iVar8) == '\0') {
      if (iVar8 < 0x40001) goto LAB_00687c68;
      break;
    }
  }
  iVar8 = 0;
LAB_00687c68:
  pcVar9 = DAT_00687d80;
  if (-1 < iVar5 && iVar5 <= iVar8) {
    pcVar9 = (char *)(piVar4[1] + iVar5);
  }
  if (*pcVar9 != '.') {
    return 1;
  }
  fVar15 = *param_1;
  fVar14 = (float)VectorSignedToFloat(local_44[0],(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = DAT_00687d84;
  do {
    piVar3 = local_4c;
    iVar8 = local_48 + 1;
    local_48 = iVar8;
    (**(code **)(*local_4c + 8))(local_4c);
    iVar7 = 0;
    do {
      if (*(char *)(piVar3[1] + iVar7) == '\0') {
        if (iVar7 < 0x40001) goto LAB_00687cec;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_00687cec:
    pcVar9 = DAT_00687d80;
    if (-1 < iVar8 && iVar8 <= iVar7) {
      pcVar9 = (char *)(piVar3[1] + iVar8);
    }
    if ((0x39 < *pcVar9) || (iVar8 = *pcVar9 + -0x30, iVar8 < 0)) {
      if (fVar11 == 1.0) {
        return 1;
      }
      if (param_1 == (float *)0x0) {
        return 1;
      }
      *param_1 = fVar16 / fVar11 + fVar15;
      return 1;
    }
    fVar11 = fVar11 * fVar17;
    fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar16 * fVar17 + fVar14 * fVar12;
  } while( true );
}

