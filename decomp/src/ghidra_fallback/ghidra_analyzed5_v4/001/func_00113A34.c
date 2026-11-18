#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 DAT_00113e1c;
extern float DAT_00113e20;
extern float DAT_00113e24;
extern int DAT_00113e28;
extern float DAT_00114108;

// USA 00113A34 <- EU 00113A34 (Ghidra, non-matching)
// GLOBAL DAT_00113e1c undefined4
// GLOBAL DAT_00113e20 float
// GLOBAL DAT_00113e24 float
// GLOBAL DAT_00113e28 int
// GLOBAL DAT_00114108 float

void func_00113A34(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint uVar11;
  
  uVar28 = DAT_00113e1c;
  uVar7 = 0;
  iVar3 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar3 + 400);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(iVar3 + 0x2c4);
  uVar18 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x31c),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x16c) = uVar18;
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar3 + 0x2d8);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(iVar3 + 0x2dc);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar3 + 0x2b0);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(iVar3 + 0x290);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(iVar3 + 0x294);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(iVar3 + 0x298);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar3 + 0x2a0);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(iVar3 + 0x2a4);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(iVar3 + 0x2a8);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(iVar3 + 0x284);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(iVar3 + 0x288);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(iVar3 + 0x28c);
  *(undefined4 *)(param_1 + 0x1ac) = uVar28;
  *(undefined4 *)(param_1 + 0x1b0) = uVar28;
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(iVar3 + 0x208);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar3 + 0x20c);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar3 + 0x210);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(iVar3 + 0x214);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(iVar3 + 0x218);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(iVar3 + 0x21c);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(iVar3 + 0x220);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(iVar3 + 0x224);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(iVar3 + 0x228);
  *(float *)(param_1 + 0x170) = *(float *)(iVar3 + 0x208) + *(float *)(param_1 + 0xa4);
  *(float *)(param_1 + 0x174) = *(float *)(iVar3 + 0x20c) + *(float *)(param_1 + 0xa8);
  *(float *)(param_1 + 0x178) = *(float *)(iVar3 + 0x210) + *(float *)(param_1 + 0xac);
  *(float *)(param_1 + 0x17c) = *(float *)(iVar3 + 0x214) + *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0x180) = *(float *)(iVar3 + 0x218) + *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0x184) = *(float *)(iVar3 + 0x21c) + *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0x188) = *(float *)(iVar3 + 0x220) + *(float *)(param_1 + 0xbc);
  *(float *)(param_1 + 0x18c) = *(float *)(iVar3 + 0x224) + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 400) = *(float *)(iVar3 + 0x228) + *(float *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(iVar3 + 0x188);
  iVar3 = *(int *)(param_1 + 0xfc);
  if (iVar3 != 0) {
    iVar4 = iVar3 + 8;
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (*(int *)(iVar3 + 4) != 0) {
      do {
        *(int *)(param_1 + *(int *)(param_1 + 0x100) * 4 + 0x104) = iVar4;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        if (*(int *)(iVar4 + 8) == 8) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
        }
        if (*(int *)(iVar4 + 8) == 5) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
        }
        iVar3 = *(int *)(iVar4 + 8);
        if ((iVar3 == 8 || iVar3 == 5) || iVar3 == 2) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
        }
        uVar7 = uVar7 + 1;
        iVar4 = iVar4 + *(int *)(iVar4 + 0x10);
      } while (uVar7 < *(uint *)(*(int *)(param_1 + 0xfc) + 4));
    }
  }
  piVar5 = *(int **)(param_1 + 0xd8);
  uVar7 = 0;
  if ((*piVar5 != 0) && (uVar7 = piVar5[0x152], (uVar7 & 1) != 0)) {
    *(int *)(param_1 + 0x238) = piVar5[0x15c];
  }
  fVar30 = *(float *)(param_1 + 0x170);
  fVar23 = *(float *)(param_1 + 0x17c) * DAT_00113e20;
  uVar32 = *(undefined8 *)(param_1 + 0x174);
  uVar27 = *(undefined8 *)(param_1 + 0x188);
  uVar28 = *(undefined4 *)(param_1 + 400);
  uVar29 = *(undefined8 *)(param_1 + 0x180);
  fVar17 = DAT_00113e20;
  uVar31 = func_00114608((uint)ALBW_AS_U32(fVar23),uVar7);
  iVar3 = DAT_00113e28;
  uVar7 = (uint)uVar31 & 0xffffff;
  pfVar6 = (float *)(DAT_00113e28 + ((uint)uVar31 >> 0x18) * 0x10);
  fVar15 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar20 = *pfVar6 + pfVar6[1] * fVar15 * DAT_00113e24;
  fVar26 = pfVar6[2] + pfVar6[3] * fVar15 * DAT_00113e24;
  fVar15 = DAT_00113e24;
  uVar31 = func_00114608((uint)ALBW_AS_U32((ALBW_AS_F32(uVar29) * fVar17)),uVar7);
  uVar7 = (uint)uVar31 & 0xffffff;
  pfVar6 = (float *)(iVar3 + ((uint)uVar31 >> 0x18) * 0x10);
  fVar16 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar22 = *pfVar6 + pfVar6[1] * fVar16 * fVar15;
  fVar21 = pfVar6[2] + pfVar6[3] * fVar16 * fVar15;
  uVar31 = func_00114608((uint)ALBW_AS_U32((ALBW_AS_F32(((ulonglong)uVar29 >> 0x20)) * fVar17)),uVar7);
  uVar7 = (uint)uVar31 & 0xffffff;
  pfVar6 = (float *)(iVar3 + ((uint)uVar31 >> 0x18) * 0x10);
  fVar16 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = pfVar6[2] + pfVar6[3] * fVar16 * fVar15;
  fVar16 = *pfVar6 + pfVar6[1] * fVar16 * fVar15;
  fVar25 = ALBW_AS_F32(((ulonglong)uVar32 >> 0x20));
  fVar24 = ALBW_AS_F32(uVar32);
  *(float *)(param_1 + 0x1fc) = fVar21 * fVar19 * fVar30;
  *(float *)(param_1 + 0x20c) = fVar21 * fVar16 * fVar30;
  *(float *)(param_1 + 0x21c) = -(fVar30 * fVar22);
  *(float *)(param_1 + 0x200) = fVar24 * (fVar20 * fVar22 * fVar19 - fVar26 * fVar16);
  *(float *)(param_1 + 0x210) = fVar24 * (fVar26 * fVar19 + fVar20 * fVar22 * fVar16);
  *(float *)(param_1 + 0x220) = fVar20 * fVar21 * fVar24;
  *(float *)(param_1 + 0x204) = (fVar20 * fVar16 + fVar26 * fVar19 * fVar22) * fVar25;
  *(float *)(param_1 + 0x214) = (fVar22 * fVar26 * fVar16 - fVar20 * fVar19) * fVar25;
  *(float *)(param_1 + 0x224) = fVar26 * fVar21 * fVar25;
  *(int *)(param_1 + 0x208) = (int)uVar27;
  *(int *)(param_1 + 0x218) = (int)((ulonglong)uVar27 >> 0x20);
  *(undefined4 *)(param_1 + 0x228) = uVar28;
  uVar32 = func_00114608((uint)ALBW_AS_U32(fVar23),uVar7);
  uVar7 = (uint)uVar32 & 0xffffff;
  pfVar6 = (float *)(iVar3 + ((uint)uVar32 >> 0x18) * 0x10);
  fVar16 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = *pfVar6 + pfVar6[1] * fVar16 * fVar15;
  fVar22 = pfVar6[2] + pfVar6[3] * fVar16 * fVar15;
  uVar32 = func_00114608((uint)ALBW_AS_U32((ALBW_AS_F32(uVar29) * fVar17)),uVar7);
  uVar7 = (uint)uVar32 & 0xffffff;
  pfVar6 = (float *)(iVar3 + ((uint)uVar32 >> 0x18) * 0x10);
  fVar16 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar21 = *pfVar6 + pfVar6[1] * fVar16 * fVar15;
  fVar20 = pfVar6[2] + pfVar6[3] * fVar16 * fVar15;
  uVar32 = func_00114608((uint)ALBW_AS_U32((ALBW_AS_F32(((ulonglong)uVar29 >> 0x20)) * fVar17)),uVar7);
  pfVar6 = (float *)(iVar3 + ((uint)uVar32 >> 0x18) * 0x10);
  fVar17 = (float)VectorUnsignedToFloat((uint)uVar32 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = *pfVar6 + pfVar6[1] * fVar17 * fVar15;
  fVar17 = pfVar6[2] + pfVar6[3] * fVar17 * fVar15;
  *(float *)(param_1 + 0x1cc) = fVar20 * fVar17;
  *(float *)(param_1 + 0x1dc) = fVar20 * fVar16;
  *(float *)(param_1 + 0x1ec) = -fVar21;
  *(float *)(param_1 + 0x1d0) = fVar19 * fVar21 * fVar17 - fVar22 * fVar16;
  *(float *)(param_1 + 0x1e0) = fVar22 * fVar17 + fVar19 * fVar21 * fVar16;
  *(float *)(param_1 + 0x1f0) = fVar19 * fVar20;
  *(float *)(param_1 + 0x1d4) = fVar19 * fVar16 + fVar22 * fVar17 * fVar21;
  *(float *)(param_1 + 0x1e4) = fVar21 * fVar22 * fVar16 - fVar19 * fVar17;
  *(float *)(param_1 + 500) = fVar22 * fVar20;
  *(int *)(param_1 + 0x1d8) = (int)uVar27;
  *(int *)(param_1 + 0x1e8) = (int)((ulonglong)uVar27 >> 0x20);
  *(undefined4 *)(param_1 + 0x1f8) = uVar28;
  fVar17 = DAT_00114108;
  uVar9 = 0;
  iVar3 = *(int *)(param_1 + 0xd8);
  fVar15 = *(float *)(iVar3 + 0x374);
  uVar8 = *(uint *)(iVar3 + 0x188);
  bVar12 = fVar15 == DAT_00114108;
  uVar7 = (uVar8 & 4) >> 2;
  uVar1 = (uVar8 & 0x100) >> 8;
  if (bVar12) {
    fVar15 = *(float *)(iVar3 + 0x378);
  }
  uVar2 = (uVar8 & 0x200) >> 9;
  uVar8 = (uVar8 & 0x2000) >> 0xd;
  if (bVar12 && fVar15 == DAT_00114108) {
    bVar12 = false;
    if (*(float *)(iVar3 + 0x38c) == DAT_00114108) {
      bVar12 = *(float *)(iVar3 + 0x390) == DAT_00114108;
    }
    bVar13 = false;
    if (bVar12) {
      bVar13 = *(float *)(iVar3 + 0x3a4) == DAT_00114108;
    }
    if (bVar13) goto LAB_00113fa8;
  }
  uVar9 = 1;
LAB_00113fa8:
  fVar15 = *(float *)(iVar3 + 0x304);
  iVar4 = *(int *)(iVar3 + 0x300);
  bVar12 = false;
  if (fVar15 == DAT_00114108) {
    fVar15 = *(float *)(iVar3 + 0x308);
    bVar12 = fVar15 == DAT_00114108;
  }
  if (bVar12) {
    fVar15 = *(float *)(iVar3 + 0x30c);
  }
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  bVar12 = !bVar12 || fVar15 != fVar17;
  bVar13 = iVar4 != 0x3f800000;
  bVar14 = *(int *)(param_1 + 200) == 2;
  if ((uVar7 & ~uVar1 & ~uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 1;
  }
  if ((uVar1 & ~uVar7 & ~uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 2;
  }
  uVar11 = uVar2 & ~(uVar7 | uVar1);
  uVar10 = (undefined1)uVar11;
  if (uVar11 != 0) {
    uVar10 = 3;
  }
  if (uVar11 != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = uVar10;
  }
  if ((uVar1 & uVar7 & ~uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 4;
  }
  if ((uVar7 & ~uVar1 & uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 5;
  }
  if ((uVar2 & uVar1 & ~uVar7) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 6;
  }
  *(undefined1 *)(param_1 + 0x2aa) = 0;
  if ((uVar8 & ~uVar9) != 0) {
    *(undefined1 *)(param_1 + 0x2aa) = 1;
  }
  if ((uVar9 & ~uVar8) != 0) {
    *(undefined1 *)(param_1 + 0x2aa) = 2;
  }
  if ((uVar9 & uVar8) != 0) {
    *(undefined1 *)(param_1 + 0x2aa) = 3;
  }
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  if ((bool)(bVar12 & ~bVar13 & ~bVar14)) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
  }
  if ((bool)(bVar13 & ~bVar12 & ~bVar14)) {
    *(undefined1 *)(param_1 + 0x2a8) = 0;
  }
  if ((bool)(bVar14 & ~(bVar12 || bVar13))) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
  }
  if ((bool)((bVar12 && bVar13) & ~bVar14)) {
    *(undefined1 *)(param_1 + 0x2a8) = 4;
  }
  if ((bool)(bVar12 & ~bVar13 & bVar14)) {
    *(undefined1 *)(param_1 + 0x2a8) = 5;
  }
  if ((bool)(bVar13 & ~bVar12 & bVar14)) {
    *(undefined1 *)(param_1 + 0x2a8) = 6;
  }
  if (bVar14 && (bVar12 && bVar13)) {
    *(bool *)(param_1 + 0x2a8) = bVar14 && (bVar12 && bVar13) || bVar14;
  }
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  *(undefined1 *)(param_1 + 0x2ac) = 0;
  *(undefined1 *)(param_1 + 0x2ad) = 0;
  if ((*(uint *)(iVar3 + 0x188) & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x2ab) = 1;
  }
  if ((*(uint *)(iVar3 + 0x188) & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x2ac) = 1;
  }
  if ((*(uint *)(iVar3 + 0x188) & 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x2ad) = 1;
  }
  return;
}

