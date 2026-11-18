#include "ghidra_types.h"

extern int func_00340470(int param_1,int param_2);
extern int func_0038ADC0(byte *param_1,int param_2,int param_3);
extern int func_0052EA80(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int DAT_00342bc4;
extern float DAT_00342bc8;
extern float DAT_00342bcc;
extern int DAT_00342bd0;
extern uint DAT_00342bd4;
extern int *DAT_00342bd8;
extern undefined4 *DAT_00342bdc;
extern int DAT_00342be0;

// USA 003427F0 <- EU 003427CC (Ghidra, non-matching)
// GLOBAL DAT_00342bc4 int
// GLOBAL DAT_00342bc8 float
// GLOBAL DAT_00342bcc float
// GLOBAL DAT_00342bd0 int
// GLOBAL DAT_00342bd4 uint
// GLOBAL DAT_00342bd8 int *
// GLOBAL DAT_00342bdc undefined4 *
// GLOBAL DAT_00342be0 int

undefined4 func_003427F0(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  int *piVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  
  pfVar3 = (float *)(param_2 + 4);
  uVar5 = 0;
  uVar10 = *(uint *)(param_1 + 0x1e4);
  if (0 < (int)uVar10) {
    do {
      piVar8 = *(int **)(param_1 + 0x1ec);
      if (uVar5 < uVar10) {
        piVar8 = *(int **)(param_1 + 0x1ec) + uVar5;
      }
      if (*piVar8 == *(int *)(param_2 + 0x28)) goto LAB_00342844;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar10);
  }
  if ((int)uVar10 < *(int *)(param_1 + 0x1e8)) {
    *(uint *)(param_1 + 0x1e4) = uVar10 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1ec) + uVar10 * 4) = *(undefined4 *)(param_2 + 0x28);
  }
LAB_00342844:
  fVar15 = DAT_00342bcc;
  fVar9 = DAT_00342bc8;
  uVar10 = (uint)*(ushort *)(param_2 + 0x20);
  uVar12 = uVar10 & 0x1f;
  uVar5 = (uVar10 & 0x7e0) >> 5;
  if (((1 << (uVar10 & 0x1f) & 0x400U) != 0) || (uVar5 == 0x10)) {
    *(undefined1 *)(param_1 + 0x4a8) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x154) != '\0') {
    if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
      return 0;
    }
    if (uVar5 == 0x11) {
      return 0;
    }
  }
  if ((*(char *)(param_1 + 0x154) != '\0') &&
     (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x528))) {
    return 0;
  }
  if (uVar12 == 7) {
    if ((uVar5 != 0xc && uVar5 != 6) && uVar5 != 0xb) {
      return 0;
    }
LAB_00342900:
    if (uVar12 != 7) goto LAB_00342908;
    if ((int)ALBW_AS_U32((*pfVar3 * DAT_00342bcc + *(float *)(param_2 + 8) * DAT_00342bc8 +
             *(float *)(param_2 + 0xc) * DAT_00342bcc)) < DAT_00342bc4) {
      if (*(int *)(*(int *)(param_1 + 0x3c) + 4) != 0x3f800000) {
        return 0;
      }
      *(char *)(param_1 + 0x524) = (char)uVar5;
      return 0;
    }
LAB_0034297c:
    cVar7 = '\0';
  }
  else {
    if (uVar12 != 6) goto LAB_00342900;
    if (uVar5 != 0x18) {
      return 0;
    }
LAB_00342908:
    if (((uVar12 != 4 && uVar12 != 3) && uVar12 != 5) ||
       (cVar7 = '\x01',
       DAT_00342bc4 <
       (int)ALBW_AS_U32((*pfVar3 * DAT_00342bcc + *(float *)(param_2 + 8) * DAT_00342bc8 +
            *(float *)(param_2 + 0xc) * DAT_00342bcc)))) goto LAB_0034297c;
  }
  if (DAT_00342bd0 < *(int *)(param_2 + 8)) {
    bVar14 = cVar7 == '\0';
    if (bVar14) {
      cVar7 = *(char *)(param_1 + 0x154);
    }
    if (bVar14 && cVar7 == '\0') {
      fVar9 = DAT_00342bcc;
      func_0038ADC0((byte *)(param_1 + 0x314),param_2,0);
      *(undefined1 *)(param_1 + 0x4aa) = 1;
      if (((*(byte *)(param_1 + 0x314) & 2) == 0) || ((*(byte *)(param_1 + 0x314) & 4) != 0)) {
        fVar15 = *(float *)(*(int *)(param_1 + 0x34) + 4);
        if (fVar9 < fVar15) {
          fVar9 = fVar15;
        }
        *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar9;
      }
      if (uVar12 == 7) {
        if (uVar5 == 6) {
          return 0;
        }
        if (uVar5 != 0xb) {
          return 1;
        }
      }
      else {
        if (uVar12 != 1) {
          return 1;
        }
        if (uVar5 != 0x16) {
          return 1;
        }
      }
      *(undefined1 *)(param_1 + 0x1d0) = 1;
      return 1;
    }
  }
  if (uVar12 == 4) {
    if (uVar5 == 0xb) {
      *(undefined1 *)(param_1 + 0x15b) = 1;
      *(float *)(param_1 + 0x160) = *pfVar3;
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0xc);
    }
    if (((DAT_00342bd4 < *(uint *)(param_2 + 8)) &&
        (*(undefined1 *)(param_1 + 0x155) = 1, *(char *)(param_1 + 0x154) != '\0')) &&
       (bVar1 = *(byte *)(param_1 + 0x314), (bVar1 & 1) == 0)) {
      bVar14 = (bVar1 & 8) == 0;
      if (bVar14) {
        bVar1 = *(byte *)(param_1 + 0x158);
      }
      if (bVar14 && bVar1 == 0) {
        func_0038ADC0((byte *)(param_1 + 0x314),param_2,1);
      }
    }
  }
  if ((uVar5 != 0x13) || (uVar12 == 2)) {
    *(undefined1 *)(param_1 + 0x4a9) = 1;
    func_00340470(param_1 + 0x338,param_2);
    return 1;
  }
  sVar2 = *(short *)(*(int *)(*(int *)(param_1 + 0x14) + 0x614) + 0x42);
  if (sVar2 == 0x4e || sVar2 == 2) {
    return 0;
  }
  iVar4 = func_0052EA80(*(int *)(param_1 + 0x14));
  if (iVar4 != 0) {
    return 0;
  }
  *(float *)(param_1 + 0x4bc) = fVar9;
  bVar14 = false;
  if (*(float *)(param_1 + 0x4b0) == fVar15) {
    bVar14 = *(float *)(param_1 + 0x4b4) == fVar15;
  }
  bVar13 = false;
  if (bVar14) {
    bVar13 = *(float *)(param_1 + 0x4b8) == fVar15;
  }
  if (bVar13) {
    uVar6 = *(undefined4 *)(param_2 + 4);
    fVar9 = *(float *)(param_2 + 8);
    uVar11 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    pfVar3 = *(float **)(param_1 + 0x34);
    fVar9 = *(float *)(param_2 + 8);
    if (*pfVar3 * *(float *)(param_1 + 0x4b0) + pfVar3[1] * *(float *)(param_1 + 0x4b4) +
        pfVar3[2] * *(float *)(param_1 + 0x4b8) <=
        *pfVar3 * *(float *)(param_2 + 4) + pfVar3[1] * fVar9 +
        pfVar3[2] * *(float *)(param_2 + 0xc)) goto LAB_00342b78;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar11 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x4b0) = uVar6;
  *(float *)(param_1 + 0x4b4) = fVar9;
  *(undefined4 *)(param_1 + 0x4b8) = uVar11;
LAB_00342b78:
  piVar8 = DAT_00342bd8;
  if (*(short *)(*(int *)(*(int *)(param_1 + 0x14) + 0x614) + 0x42) != 0x17) {
    return 1;
  }
  iVar4 = func_005841A8(*DAT_00342bd8,*DAT_00342bdc,*(int **)(DAT_00342be0 + *DAT_00342bd8));
  if (iVar4 != *(int *)(*piVar8 + 0x3dbc8)) {
    return 0;
  }
  return 1;
}

