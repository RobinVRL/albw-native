#include "ghidra_types.h"

extern void func_002AC858(int param_1,float fparam_0);
extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FCEDC(int param_1,float fparam_0);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_00521078(int param_1);
extern int func_005811E8(int *param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float DAT_002b0b48;
extern float DAT_002b0b4c;
extern float DAT_002b0b50;
extern float DAT_002b0b54;
extern float DAT_002b0b58;
extern float DAT_002b0b5c;
extern float DAT_002b0b60;
extern float DAT_002b0b64;
extern float DAT_002b0b68;
extern float DAT_002b0b6c;

// USA 002B0754 <- EU 002B0730 (Ghidra, non-matching)
// GLOBAL DAT_002b0b48 float
// GLOBAL DAT_002b0b4c float
// GLOBAL DAT_002b0b50 float
// GLOBAL DAT_002b0b54 float
// GLOBAL DAT_002b0b58 float
// GLOBAL DAT_002b0b5c float
// GLOBAL DAT_002b0b60 float
// GLOBAL DAT_002b0b64 float
// GLOBAL DAT_002b0b68 float
// GLOBAL DAT_002b0b6c float

undefined4 func_002B0754(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  if (*(char *)(param_1[0xd] + 0x7fc) == '\x05') {
    iVar9 = 1;
LAB_002b077c:
    bVar2 = false;
  }
  else {
    iVar9 = 0;
    if (*(char *)(param_1[0xd] + 0x848) != '\0' || param_2 != 0x14) goto LAB_002b077c;
    bVar2 = true;
  }
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
  bVar3 = func_00521018(param_1[0xd]);
  fVar13 = DAT_002b0b48;
  if (bVar3) {
    func_002AC858((int)param_1,DAT_002b0b48);
  }
  fVar16 = DAT_002b0b50;
  fVar17 = DAT_002b0b4c;
  if ((*(ushort *)(param_1 + 0xe) & 0x20) != 0) {
    uVar4 = param_1[0x81];
    uVar6 = param_1[0x80];
    if (uVar6 < uVar4) {
      uVar6 = uVar6 + 1;
      param_1[0x80] = uVar6;
    }
    fVar10 = fVar17;
    if ((uVar4 != 0 && uVar6 != 0) && (fVar10 = fVar16, uVar6 < uVar4)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * ALBW_AS_F32(param_1[0x82]);
    }
    func_0051D0B0((undefined4 *)(param_1[0xd] + 1000),param_1[0x24],param_1[0x86],fVar10);
  }
  if ((uint)param_1[0x7d] < (uint)param_1[0x7e]) {
    iVar5 = param_1[0x7e] - param_1[0x7d];
    iVar8 = iVar5;
    if (iVar5 < 2) {
      iVar8 = 1;
    }
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xf] = ALBW_AS_U32(ALBW_AS_F32(param_1[0xf]) +
                   (ALBW_AS_F32(param_1[0x83]) - ALBW_AS_F32(param_1[0xf])) * (fVar16 / fVar10));
    param_1[0x11] =
         ALBW_AS_U32(ALBW_AS_F32(param_1[0x11]) + (ALBW_AS_F32(param_1[0x85]) - ALBW_AS_F32(param_1[0x11])) * (fVar16 / fVar11));
  }
  else {
    param_1[0x11] = ALBW_AS_U32(fVar17);
    param_1[0xf] = ALBW_AS_U32(fVar17);
  }
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x19) = 1;
    fVar10 = DAT_002b0b54;
    uVar6 = param_1[0x8c];
    if (uVar6 == 0) {
      bVar3 = true;
      iVar8 = 0;
      fVar11 = fVar16;
    }
    else {
      uVar4 = param_1[0x8b];
      bVar3 = false;
      fVar11 = fVar17;
      if ((uVar4 != 0) && (fVar11 = fVar16, uVar4 < uVar6)) {
        fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * ALBW_AS_F32(param_1[0x8d]);
      }
      iVar8 = uVar6 - uVar4;
    }
    pfVar7 = (float *)(param_1[0xd] + 0x4f0);
    fVar12 = *(float *)(param_1[0xd] + 0x4c4);
    uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_002b0b58 <= fVar12) << 0x1d;
    fVar18 = fVar16 - fVar11;
    if (!SUB41(uVar6 >> 0x1d,0)) {
      fVar12 = DAT_002b0b58;
    }
    iVar5 = iVar8;
    if (iVar8 < 2) {
      iVar5 = 1;
    }
    fVar14 = fVar12 + DAT_002b0b5c;
    fVar15 = fVar12 + DAT_002b0b60;
    param_1[0x17] = ALBW_AS_U32(DAT_002b0b54 + fVar18 * fVar13);
    param_1[0x16] = ALBW_AS_U32(fVar16 + (fVar14 / fVar12 - fVar16) * fVar11);
    fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    param_1[0x18] = ALBW_AS_U32(fVar16 + (fVar15 / fVar12 - fVar16) * fVar11);
    fVar12 = *pfVar7;
    *pfVar7 = fVar12 + (fVar16 - fVar12) * (fVar16 / fVar13);
    iVar5 = iVar8;
    if (iVar8 < 2) {
      iVar5 = 1;
    }
    pfVar7 = (float *)(param_1[0xd] + 0x574);
    fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    fVar12 = *pfVar7;
    *pfVar7 = fVar12 + (*(float *)(param_1[0xd] + 0x898) - fVar12) * (fVar16 / fVar13);
    fVar13 = DAT_002b0b68;
    if ((((!bVar3) && (uVar4 = param_1[0x8b], fVar11 = fVar17, (int)(param_1[0x8c] - uVar4) < 2)) &&
        (uVar4 = 2 - (param_1[0x8c] - uVar4), fVar11 = fVar16, uVar4 != 2)) &&
       ((fVar11 = fVar17, uVar4 != 0 && (fVar11 = fVar16, uVar4 < 2)))) {
      fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x15) & 3);
      fVar11 = fVar11 * DAT_002b0b64;
    }
    param_1[0x1c] = param_1[0x8e];
    param_1[0x1d] = ALBW_AS_U32(fVar11 * fVar13);
    param_1[0x1e] = ALBW_AS_U32(ALBW_AS_F32(param_1[0x90]) + fVar11 * fVar13);
    iVar5 = func_00520FC0();
    fVar13 = *(float *)(iVar5 + 4) + DAT_002b0b6c;
    fVar11 = *(float *)(param_1[0xd] + 0x3d4);
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f | (uint)(fVar11 == fVar13) << 0x1e;
    bVar1 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar11) || NAN(fVar13))) {
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(uVar6 >> 0x15) & 3);
      *(float *)(param_1[0xd] + 0x3d4) = fVar11 + (fVar13 - fVar11) * (fVar16 / fVar12);
    }
    func_004FCEDC(param_1[0xd] + 0x5a8,
                  fVar10 * fVar18 * *(float *)(*(int *)(param_1[0xd] + 0x2d0) + 0x2c));
  }
  if ((uint)param_1[0x7d] < (uint)param_1[0x7e]) {
    param_1[0x7d] = param_1[0x7d] + 1;
  }
  if ((uint)param_1[0x8b] < (uint)param_1[0x8c]) {
    param_1[0x8b] = param_1[0x8b] + 1;
  }
  iVar8 = (int)*(char *)(param_1 + 0x91);
  if (iVar8 < 0) {
    iVar8 = (int)*(char *)((int)param_1 + 0x245);
  }
  if (((bool)((param_2 != 0x14 && param_2 != 0x1e) & ~bVar2)) && (-1 < iVar8)) {
    iVar5 = (int)*(char *)((int)param_1 + 0x246);
    uVar19 = func_0058AB74(param_1[0xd]);
    if ((int)uVar19 == iVar8) {
      iVar8 = func_0058A8F0(param_1[0xd]);
      if (iVar8 != 0) {
        if (iVar5 < 0) {
          if ((uint)param_1[0x7e] <= (uint)param_1[0x7d]) {
            param_1[0xb] = 0;
            param_1[0xc] = ALBW_AS_U32(fVar17);
            param_1[10] = 0;
            goto LAB_002b0c18;
          }
        }
        else {
          bVar3 = func_00521078(param_1[0xd]);
          if (!bVar3) goto LAB_002b0c04;
          *(undefined1 *)(param_1[0xd] + 0x655) = 0;
          func_004FABDC(param_1[0xd],iVar5,0xffffffff,0);
        }
      }
    }
    else {
      if ((iVar5 < 0) || (uVar19 = func_0058AB74(param_1[0xd]), (int)uVar19 != iVar5))
      goto LAB_002b0c18;
      iVar8 = func_0058A8F0(param_1[0xd]);
      if ((iVar8 != 0) && ((uint)param_1[0x7e] <= (uint)param_1[0x7d])) goto LAB_002b0c04;
    }
LAB_002b0c8c:
    param_1[0xb] = 1;
    param_1[0xc] = ALBW_AS_U32(fVar16);
  }
  else {
    if ((uint)param_1[0x7d] < (uint)param_1[0x7e]) goto LAB_002b0c8c;
LAB_002b0c04:
    param_1[0xb] = 0;
    param_1[0xc] = ALBW_AS_U32(fVar17);
  }
  param_1[10] = 0;
LAB_002b0c18:
  if ((param_2 == 0x14 || param_2 == 0x1e) && ((uint)param_1[0x7e] <= (uint)param_1[0x7d])) {
    param_1[0xb] = 0;
    param_1[0xc] = ALBW_AS_U32(fVar17);
    param_1[10] = 0;
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x8a) == '\0') {
      if ((uint)param_1[0xb] <= (uint)param_1[10]) {
        *(undefined1 *)(param_1 + 0x8a) = 1;
        param_1[0xb] = 1;
        param_1[0xc] = ALBW_AS_U32(fVar16);
        param_1[10] = 0;
        iVar8 = func_005811E8(param_1 + 0xae);
        if (((iVar8 != 0) && (iVar8 = param_1[0xae], iVar8 != 0)) &&
           (*(int *)(iVar8 + 0x1c) == param_1[0xaf])) {
          iVar5 = *(int *)(iVar8 + 0x20);
          if (((iVar5 != 0) && (*(int *)(iVar8 + 0x24) == *(int *)(iVar5 + 0xc))) &&
             (0 < *(int *)(iVar5 + 4))) {
            *(undefined1 *)(iVar5 + 0x280) = 1;
          }
          *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) & 0xfffffffb | 8;
        }
      }
    }
    else {
      uVar6 = param_1[0x87];
      uVar4 = param_1[0x88];
      if (uVar6 < uVar4) {
        uVar6 = uVar6 + 1;
        param_1[0x87] = uVar6;
      }
      param_1[0xb] = (uint)(uVar4 > uVar6);
      if (uVar4 <= uVar6) {
        param_1[0xc] = ALBW_AS_U32(fVar17);
      }
      else {
        param_1[0xc] = ALBW_AS_U32(fVar16);
      }
      param_1[10] = 0;
    }
  }
  return func_002ACD14(param_1,iVar9,0);
}

