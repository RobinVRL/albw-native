#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_0041CAE4(int param_1,undefined1 param_2,float fparam_0);
extern float func_0056D544(int param_1,int param_2);
extern float DAT_00417558;
extern float DAT_0041755c;
extern float DAT_00417560;
extern float DAT_00417564;
extern float DAT_00417568;
extern float DAT_0041756c;
extern float DAT_00417570;
extern float DAT_00417574;

// USA 00417200 <- EU 004171E0 (Ghidra, non-matching)
// GLOBAL DAT_00417558 float
// GLOBAL DAT_0041755c float
// GLOBAL DAT_00417560 float
// GLOBAL DAT_00417564 float
// GLOBAL DAT_00417568 float
// GLOBAL DAT_0041756c float
// GLOBAL DAT_00417570 float
// GLOBAL DAT_00417574 float

void func_00417200(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  undefined8 uVar23;
  longlong lVar24;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((float *)(albw_frame + 0x8))
  bVar12 = *(char *)(param_1 + 5) != '\0';
  iVar3 = 0;
  if (bVar12) {
    iVar3 = *(int *)(param_1 + 0x130);
  }
  if (bVar12 && iVar3 != 0) {
    if ((int)*(short *)(param_1 + 0x90) < (int)*(short *)(param_1 + 0x8e)) {
      bVar1 = *(byte *)(param_1 + 0x8c);
      lVar24 = func_001104E4(((uint)*(byte *)(param_1 + 0x8d) - (uint)bVar1) *
                             (int)*(short *)(param_1 + 0x90),(int)*(short *)(param_1 + 0x8e));
      uVar10 = (int)lVar24 + (uint)bVar1 & 0xff;
    }
    else {
      uVar10 = (uint)*(byte *)(param_1 + 0x8d);
    }
    if ((int)*(short *)(param_1 + 0x96) < (int)*(short *)(param_1 + 0x94)) {
      bVar1 = *(byte *)(param_1 + 0x92);
      lVar24 = func_001104E4(((uint)*(byte *)(param_1 + 0x93) - (uint)bVar1) *
                             (int)*(short *)(param_1 + 0x96),(int)*(short *)(param_1 + 0x94));
      uVar4 = (int)lVar24 + (uint)bVar1 & 0xff;
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0x93);
    }
    iVar3 = *(int *)(param_1 + 300);
    if ((int)*(short *)(iVar3 + 0x7c) < (int)*(short *)(iVar3 + 0x7a)) {
      bVar1 = *(byte *)(iVar3 + 0x78);
      lVar24 = func_001104E4(((uint)*(byte *)(iVar3 + 0x79) - (uint)bVar1) *
                             (int)*(short *)(iVar3 + 0x7c),(int)*(short *)(iVar3 + 0x7a));
      uVar5 = (int)lVar24 + (uint)bVar1 & 0xff;
    }
    else {
      uVar5 = (uint)*(byte *)(iVar3 + 0x79);
    }
    iVar6 = (int)*(short *)(param_1 + 0xa8);
    uVar8 = (uint)*(short *)(param_1 + 0xa6);
    fVar13 = (float)VectorUnsignedToFloat(uVar10 * uVar4 * uVar5,(byte)(in_fpscr >> 0x15) & 3);
    iVar7 = iVar6;
    if ((int)uVar8 <= iVar6) {
      iVar7 = (int)*(char *)(param_1 + 0xa5);
    }
    fVar13 = *(float *)(param_1 + 8) * *(float *)(iVar3 + 0x14) *
             fVar13 * DAT_00417558 * fVar13 * DAT_00417558;
    if (iVar6 < (int)uVar8) {
      cVar2 = *(char *)(param_1 + 0xa4);
      lVar24 = func_001104E4(((int)*(char *)(param_1 + 0xa5) - (int)cVar2) * iVar7,uVar8);
      iVar7 = (int)(char)((char)lVar24 + cVar2);
    }
    uVar10 = (uint)*(short *)(param_1 + 0x9a);
    fVar14 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = (int)*(short *)(param_1 + 0x9c);
    iVar7 = iVar6;
    if ((int)uVar10 <= iVar6) {
      iVar7 = (int)*(char *)(param_1 + 0x99);
    }
    fVar15 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0xf1),(byte)(in_fpscr >> 0x15) & 3);
    uVar19 = CONCAT44(*(float *)(iVar3 + 0x18) * *(float *)(param_1 + 0xc),
                      fVar14 * DAT_0041755c * fVar15);
    if (iVar6 < (int)uVar10) {
      cVar2 = *(char *)(param_1 + 0x98);
      lVar24 = func_001104E4(((int)*(char *)(param_1 + 0x99) - (int)cVar2) * iVar7,uVar10);
      iVar7 = (int)(char)((char)lVar24 + cVar2);
    }
    fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar15 * DAT_00417560;
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar15 < DAT_00417564) << 0x1f |
             (uint)(fVar15 == DAT_00417564) << 0x1e;
    uVar4 = uVar10 | (uint)(NAN(fVar15) || NAN(DAT_00417564)) << 0x1c;
    bVar1 = (byte)(uVar10 >> 0x18);
    fVar14 = DAT_00417564;
    if (((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar4 >> 0x1c) & 1)) &&
       (uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_00417568 <= fVar15) << 0x1d, fVar14 = fVar15,
       !SUB41(uVar4 >> 0x1d,0))) {
      fVar14 = DAT_00417568;
    }
    iVar6 = (int)*(short *)(param_1 + 0xa2);
    uVar10 = (uint)*(short *)(param_1 + 0xa0);
    iVar7 = iVar6;
    if ((int)uVar10 <= iVar6) {
      iVar7 = (int)*(char *)(param_1 + 0x9f);
    }
    uVar18 = CONCAT44(fVar13,*(float *)(param_1 + 0x10) + *(float *)(iVar3 + 0x1c) +
                             fVar14 * *(float *)(param_1 + 0x18) * *(float *)(iVar3 + 0x60));
    fVar13 = DAT_00417560;
    fVar14 = DAT_00417564;
    if (iVar6 < (int)uVar10) {
      cVar2 = *(char *)(param_1 + 0x9e);
      lVar24 = func_001104E4(((int)*(char *)(param_1 + 0x9f) - (int)cVar2) * iVar7,uVar10);
      iVar7 = (int)(char)((char)lVar24 + cVar2);
    }
    fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar4 >> 0x15) & 3);
    fVar15 = fVar15 * fVar13;
    uVar10 = uVar4 & 0xfffffff | (uint)(fVar15 < DAT_0041756c) << 0x1f |
             (uint)(fVar15 == DAT_0041756c) << 0x1e;
    uVar5 = uVar10 | (uint)(NAN(fVar15) || NAN(DAT_0041756c)) << 0x1c;
    bVar1 = (byte)(uVar10 >> 0x18);
    fVar13 = DAT_0041756c;
    if (((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar5 >> 0x1c) & 1)) &&
       (uVar5 = uVar4 & 0xfffffff | (uint)(DAT_00417570 <= fVar15) << 0x1d, fVar13 = fVar15,
       !SUB41(uVar5 >> 0x1d,0))) {
      fVar13 = DAT_00417570;
    }
    cVar2 = *(char *)(iVar3 + 0x2c);
    cVar11 = *(char *)(param_1 + 0xfe);
    if (cVar2 != -1) {
      cVar11 = cVar2;
    }
    uVar22 = *(undefined4 *)(param_1 + 0x108);
    if (cVar2 != -1) {
      uVar22 = *(undefined4 *)(iVar3 + 0x28);
    }
    uVar20 = CONCAT44(*(float *)(param_1 + 0x104) + *(float *)(iVar3 + 0x24),
                      fVar13 + *(float *)(param_1 + 0x14) + *(float *)(iVar3 + 0x20));
    uVar10 = 0;
    fVar13 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0xff),(byte)(uVar5 >> 0x15) & 3)
    ;
    fVar14 = fVar13 * DAT_00417574 - fVar14;
    uVar23 = CONCAT44(fVar14,DAT_00417574);
    uVar21 = CONCAT44(uVar22,fVar14 + *(float *)(iVar3 + 0x30));
    do {
      fVar13 = func_0056D544(*(undefined4 *)(param_1 + 300),uVar10 & 0xff);
      iVar3 = param_1 + uVar10;
      pfVar9 = local_48 + uVar10;
      uVar10 = uVar10 + 1;
      fVar14 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(iVar3 + 0x100),(byte)(uVar5 >> 0x15) & 3);
      *pfVar9 = fVar13 + fVar14 * ALBW_AS_F32(uVar23);
    } while ((int)uVar10 < 2);
    for (iVar3 = *(int *)(param_1 + 0x130); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x1a4)) {
      *(int *)(iVar3 + 0x138) = (int)((ulonglong)uVar18 >> 0x20);
      *(int *)(iVar3 + 0x15c) = (int)uVar19;
      *(int *)(iVar3 + 0x13c) = (int)((ulonglong)uVar19 >> 0x20);
      *(int *)(iVar3 + 0x140) = (int)uVar18;
      *(int *)(iVar3 + 0x144) = (int)uVar20;
      *(int *)(iVar3 + 0x148) = (int)((ulonglong)uVar20 >> 0x20);
      func_0041CAE4(iVar3,cVar11,ALBW_AS_F32(((ulonglong)uVar21 >> 0x20)));
      *(int *)(iVar3 + 0x150) = (int)uVar21;
      *(float *)(iVar3 + 0x154) = local_48[0];
      *(float *)(iVar3 + 0x158) = local_48[1];
      uVar22 = *(undefined4 *)(param_1 + 0xb0);
      uVar16 = *(undefined4 *)(param_1 + 0xb4);
      uVar17 = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(iVar3 + 0xb0) = uVar22;
      *(undefined4 *)(iVar3 + 0xb4) = uVar16;
      *(undefined4 *)(iVar3 + 0xb8) = uVar17;
      *(undefined1 *)(iVar3 + 300) = *(undefined1 *)(param_1 + 0xec);
      uVar22 = *(undefined4 *)(param_1 + 0xc0);
      uVar16 = *(undefined4 *)(param_1 + 0xc4);
      uVar17 = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(iVar3 + 0xd0) = uVar22;
      *(undefined4 *)(iVar3 + 0xd4) = uVar16;
      *(undefined4 *)(iVar3 + 0xd8) = uVar17;
      *(undefined1 *)(iVar3 + 0x12d) = *(undefined1 *)(param_1 + 0xed);
      uVar22 = *(undefined4 *)(param_1 + 0xd0);
      uVar16 = *(undefined4 *)(param_1 + 0xd4);
      uVar17 = *(undefined4 *)(param_1 + 0xd8);
      *(undefined4 *)(iVar3 + 0xec) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(iVar3 + 0xf0) = uVar22;
      *(undefined4 *)(iVar3 + 0xf4) = uVar16;
      *(undefined4 *)(iVar3 + 0xf8) = uVar17;
      *(undefined1 *)(iVar3 + 0x12e) = *(undefined1 *)(param_1 + 0xee);
      uVar22 = *(undefined4 *)(param_1 + 0xdc);
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar17 = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(iVar3 + 0x118) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(iVar3 + 0x10c) = uVar22;
      *(undefined4 *)(iVar3 + 0x110) = uVar16;
      *(undefined4 *)(iVar3 + 0x114) = uVar17;
      *(undefined1 *)(iVar3 + 0x12f) = *(undefined1 *)(param_1 + 0xef);
    }
  }
  return;
}

