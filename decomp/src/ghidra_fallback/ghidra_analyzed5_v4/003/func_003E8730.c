#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00112388(void);
extern int func_003E8698(int param_1,int param_2);
extern int DAT_003e8aec;
extern float DAT_003e8af0;
extern float DAT_003e8af4;
extern int *DAT_003e8af8;
extern float DAT_003e8afc;
extern int DAT_003e8b00;
extern uint DAT_003e90bc;
extern float DAT_003e90c0;
extern uint *DAT_003e90c4;
extern float *DAT_003e90c8;

// USA 003E8730 <- EU 003E8710 (Ghidra, non-matching)
// GLOBAL DAT_003e8aec int
// GLOBAL DAT_003e8af0 float
// GLOBAL DAT_003e8af4 float
// GLOBAL DAT_003e8af8 int *
// GLOBAL DAT_003e8afc float
// GLOBAL DAT_003e8b00 int
// GLOBAL DAT_003e90bc uint
// GLOBAL DAT_003e90c0 float
// GLOBAL DAT_003e90c4 uint *
// GLOBAL DAT_003e90c8 float *

undefined4 func_003E8730(int param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint in_fpscr;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  
  fVar35 = DAT_003e8af4;
  fVar34 = DAT_003e8af0;
  iVar13 = *(int *)(param_1 + 0xd8);
  iVar14 = *(int *)(param_1 + 0x18);
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e8aec + 0x3039;
  fVar20 = *(float *)(iVar13 + 0x2e0);
  fVar23 = *(float *)(iVar14 + 0x244);
  iVar3 = *(int *)(param_1 + 200);
  fVar33 = *(float *)(iVar13 + 0x2dc) * *(float *)(iVar14 + 0x240);
  param_2[0x53] = 3;
  param_2[0x51] = param_1;
  fVar18 = fVar35 - fVar20 * fVar23 * fVar18 * fVar34;
  if (iVar3 == 0) {
    param_2[0x4c] = param_1 + 0x24;
    param_2[0x4d] = param_1 + 0x54;
  }
  else {
    func_001119F4(param_2 + 0x34,(undefined4 *)(param_1 + 0x24));
    func_001119F4(param_2 + 0x40,(undefined4 *)(param_1 + 0x54));
    param_2[0x4c] = param_2 + 0x34;
    param_2[0x4d] = param_2 + 0x40;
  }
  if (*(char *)(iVar14 + 0x281) == '\0') {
    fVar20 = *(float *)(iVar13 + 0x2e8);
    fVar23 = *(float *)(iVar13 + 0x2ec);
    param_2[8] = ALBW_AS_U32((ALBW_AS_F32(param_2[8]) + *(float *)(iVar13 + 0x2e4) * fVar33) * fVar18);
    param_2[9] = ALBW_AS_U32((ALBW_AS_F32(param_2[9]) + fVar20 * fVar33) * fVar18);
    param_2[10] = ALBW_AS_U32((ALBW_AS_F32(param_2[10]) + fVar23 * fVar33) * fVar18);
  }
  else {
    fVar20 = *(float *)(iVar14 + 600);
    fVar23 = *(float *)(iVar14 + 0x25c);
    param_2[8] = ALBW_AS_U32((ALBW_AS_F32(param_2[8]) + *(float *)(iVar14 + 0x254) * fVar33) * fVar18);
    param_2[9] = ALBW_AS_U32((ALBW_AS_F32(param_2[9]) + fVar20 * fVar33) * fVar18);
    param_2[10] = ALBW_AS_U32((ALBW_AS_F32(param_2[10]) + fVar23 * fVar33) * fVar18);
  }
  fVar18 = DAT_003e8afc;
  iVar3 = *DAT_003e8af8;
  uVar2 = *(ushort *)(param_1 + 0x84);
  *(ushort *)(param_1 + 0x84) = uVar2 + 1;
  pfVar4 = (float *)(iVar3 + (uVar2 & 0xffff01ff) * 0xc);
  fVar20 = ALBW_AS_F32(param_2[8]) + *pfVar4 * *(float *)(iVar13 + 0x2f4);
  fVar33 = ALBW_AS_F32(param_2[9]) + pfVar4[1] * *(float *)(iVar13 + 0x2f8);
  fVar23 = ALBW_AS_F32(param_2[10]) + pfVar4[2] * *(float *)(iVar13 + 0x2fc);
  fVar21 = *(float *)(iVar13 + 0x318);
  uVar17 = in_fpscr & 0xfffffff | (uint)(fVar21 == fVar18) << 0x1e;
  param_2[8] = ALBW_AS_U32(fVar20);
  param_2[9] = ALBW_AS_U32(fVar33);
  param_2[10] = ALBW_AS_U32(fVar23);
  if (!SUB41(uVar17 >> 0x1e,0)) {
    fVar33 = fVar33 + fVar33 * fVar21;
    fVar23 = fVar23 + fVar23 * fVar21;
    param_2[8] = ALBW_AS_U32(fVar20 + fVar20 * fVar21);
    param_2[9] = ALBW_AS_U32(fVar33);
    param_2[10] = ALBW_AS_U32(fVar23);
  }
  fVar20 = *(float *)(iVar14 + 0x24c);
  fVar22 = *(float *)(iVar14 + 0x1dc);
  fVar24 = *(float *)(iVar14 + 0x1e0);
  fVar31 = *(float *)(iVar14 + 0x1e4);
  fVar25 = *(float *)(iVar14 + 0x1f0);
  fVar26 = *(float *)(iVar14 + 500);
  fVar28 = *(float *)(iVar14 + 0x1d4);
  fVar21 = *(float *)(iVar14 + 0x250);
  fVar19 = *(float *)(iVar14 + 0x248);
  fVar29 = *(float *)(iVar14 + 0x1d0);
  fVar27 = *(float *)(iVar14 + 0x1ec);
  fVar30 = *(float *)(iVar14 + 0x1cc);
  *param_2 = 0;
  fVar23 = fVar20 * fVar31 + fVar21 * fVar26 + fVar23 + fVar19 * fVar28;
  fVar33 = fVar20 * fVar24 + fVar21 * fVar25 + fVar33 + fVar19 * fVar29;
  fVar20 = fVar20 * fVar22 + fVar21 * fVar27 + ALBW_AS_F32(param_2[8]) + fVar19 * fVar30;
  param_2[10] = ALBW_AS_U32(fVar23);
  param_2[8] = ALBW_AS_U32(fVar20);
  param_2[9] = ALBW_AS_U32(fVar33);
  param_2[7] = ALBW_AS_U32(fVar23);
  param_2[5] = ALBW_AS_U32(fVar20);
  param_2[6] = ALBW_AS_U32(fVar33);
  puVar5 = (uint *)func_00112388();
  uVar15 = puVar5[2];
  uVar8 = puVar5[3];
  uVar7 = *puVar5 ^ *puVar5 << 0xb;
  uVar7 = uVar7 ^ uVar7 >> 8 ^ uVar8 ^ uVar8 >> 0x13;
  puVar5[3] = uVar7;
  puVar5[2] = uVar8;
  *puVar5 = puVar5[1];
  puVar5[1] = uVar15;
  iVar3 = *(int *)(iVar13 + 0x31c);
  param_2[0x54] = uVar7;
  if (iVar3 == 0x7fffffff) {
    param_2[1] = 0x7fffffff;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x88);
    uVar8 = *(uint *)(iVar13 + 800);
    *(uint *)(param_1 + 0x88) = uVar7 * DAT_003e8aec + 0x3039;
    fVar20 = (float)VectorSignedToFloat(uVar7 * ((int)uVar8 >> 0x1f) +
                                        (int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20),
                                        (byte)(uVar17 >> 0x15) & 3);
    param_2[1] = (int)((*(float *)(param_1 + 0x16c) - fVar20) *
                      *(float *)(*(int *)(param_1 + 0x1c) + 8));
  }
  fVar20 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e8aec + 0x3039;
  iVar3 = DAT_003e8b00;
  iVar6 = param_2[1] + -1;
  fVar20 = fVar35 - *(float *)(iVar13 + 0x4e0) * fVar20 * fVar34;
  fVar23 = *(float *)(iVar14 + 0x210) * fVar20;
  fVar20 = *(float *)(iVar14 + 0x214) * fVar20;
  uVar32 = CONCAT44(fVar20,fVar23);
  if (iVar6 == 0) {
    pfVar4 = (float *)param_2[0x18];
    iVar3 = param_2[0x1b];
    pfVar4[2] = ALBW_NAN_NEG;
    pfVar4[3] = ALBW_NAN_POS;
    *pfVar4 = fVar18;
    pfVar4[1] = fVar18;
    uVar9 = *(undefined4 *)(iVar13 + 0x4bc);
    *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x14) = 0x7fffffff;
    uVar7 = *DAT_003e90c4;
    param_2[0x17] = uVar9;
    if (((uVar7 & 1) == 0) &&
       (iVar3 = func_00100174((int *)DAT_003e90c4), pfVar4 = DAT_003e90c8, iVar3 != 0)) {
      *DAT_003e90c8 = fVar18;
      pfVar4[1] = fVar18;
    }
    pfVar4 = DAT_003e90c8;
    pfVar10 = (float *)param_2[0x1b];
    fVar20 = DAT_003e90c8[1];
    *pfVar10 = *DAT_003e90c8;
    pfVar10[1] = fVar20;
    if (((*DAT_003e90c4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003e90c4), iVar3 != 0)) {
      *pfVar4 = fVar18;
      pfVar4[1] = fVar18;
    }
    iVar3 = param_2[0x1b];
    fVar18 = pfVar4[1];
    *(float *)(iVar3 + 8) = *pfVar4;
    *(float *)(iVar3 + 0xc) = fVar18;
    fVar20 = *(float *)(iVar13 + 0x4e8);
    fVar18 = *(float *)(iVar13 + 0x4f0);
    param_2[0x19] = ALBW_AS_U32(*(float *)(iVar13 + 0x4ec) * *(float *)(iVar13 + 0x4e4) * ALBW_AS_F32(uVar32));
    param_2[0x1a] = ALBW_AS_U32(fVar18 * fVar20 * ALBW_AS_F32(((ulonglong)uVar32 >> 0x20)));
  }
  else {
    pfVar4 = (float *)param_2[0x18];
    iVar16 = (int)((ulonglong)
                   ((longlong)DAT_003e8b00 * (longlong)(*(int *)(iVar13 + 0x4cc) * iVar6)) >> 0x20);
    iVar11 = (int)((ulonglong)
                   ((longlong)DAT_003e8b00 * (longlong)(*(int *)(iVar13 + 0x4c8) * iVar6)) >> 0x20);
    fVar33 = ALBW_AS_F32(((iVar11 >> 5) - (iVar11 >> 0x1f)));
    pfVar4[2] = fVar33;
    pfVar4[3] = ALBW_AS_F32(((iVar16 >> 5) - (iVar16 >> 0x1f)));
    if (fVar33 == 0.0) {
      *pfVar4 = fVar18;
    }
    else {
      fVar33 = (float)VectorSignedToFloat(ALBW_AS_U32(fVar33),(byte)(uVar17 >> 0x15) & 3);
      *pfVar4 = *(float *)(iVar13 + 0x4c0) / fVar33;
    }
    iVar11 = param_2[0x18];
    if (*(int *)(iVar13 + 0x4cc) == 100) {
      *(float *)(iVar11 + 4) = fVar18;
    }
    else {
      fVar18 = (float)VectorSignedToFloat(iVar6 - *(int *)(iVar11 + 0xc),(byte)(uVar17 >> 0x15) & 3)
      ;
      *(float *)(iVar11 + 4) = *(float *)(iVar13 + 0x4c4) / fVar18;
    }
    iVar11 = (int)((ulonglong)((longlong)iVar3 * (longlong)(*(int *)(iVar13 + 0x4d8) * iVar6)) >>
                  0x20);
    iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(*(int *)(iVar13 + 0x4dc) * iVar6)) >>
                 0x20);
    iVar16 = param_2[0x1b];
    fVar24 = *(float *)param_2[0x18];
    fVar22 = *(float *)(iVar13 + 0x4bc);
    *(undefined4 *)(iVar16 + 0x10) = 0;
    pfVar4 = (float *)param_2[0x1b];
    *(undefined4 *)(iVar16 + 0x14) = 0;
    iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
    *(int *)(iVar16 + 0x10) = (iVar11 >> 5) - (iVar11 >> 0x1f);
    *(int *)(iVar16 + 0x14) = iVar3;
    fVar18 = (float)VectorSignedToFloat(ALBW_AS_U32(pfVar4[4]),(byte)(uVar17 >> 0x15) & 3);
    fVar19 = *(float *)(iVar13 + 0x4fc);
    fVar27 = *(float *)(iVar13 + 0x500);
    fVar21 = (float)VectorSignedToFloat(iVar6 - iVar3,(byte)(uVar17 >> 0x15) & 3);
    fVar33 = *(float *)(iVar13 + 0x4f4) * (fVar35 / fVar18);
    fVar18 = *(float *)(iVar13 + 0x4f8) * (fVar35 / fVar18);
    fVar26 = *(float *)(iVar13 + 0x4ec);
    fVar25 = *(float *)(iVar13 + 0x4f0);
    *pfVar4 = *(float *)(iVar13 + 0x4e4) * fVar33 * fVar23;
    *(float *)(param_2[0x1b] + 4) = *(float *)(iVar13 + 0x4e8) * fVar18 * fVar20;
    *(float *)(param_2[0x1b] + 8) = *(float *)(iVar13 + 0x4e4) * fVar19 * (fVar35 / fVar21) * fVar23
    ;
    *(float *)(param_2[0x1b] + 0xc) =
         *(float *)(iVar13 + 0x4e8) * fVar27 * (fVar35 / fVar21) * fVar20;
    fVar21 = *(float *)(iVar13 + 0x4e4);
    fVar19 = *(float *)(iVar13 + 0x4e8);
    param_2[0x17] = ALBW_AS_U32(fVar22 - fVar24);
    param_2[0x19] = ALBW_AS_U32(fVar21 * (fVar26 - fVar33) * fVar23);
    param_2[0x1a] = ALBW_AS_U32(fVar19 * (fVar25 - fVar18) * fVar20);
  }
  iVar3 = DAT_003e8aec;
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
  iVar11 = *(int *)(param_1 + 0x88) * DAT_003e8aec + 0x3039;
  iVar6 = iVar11 * DAT_003e8aec + 0x3039;
  fVar20 = *(float *)(iVar13 + 0x508) + *(float *)(iVar14 + 0x264) +
           *(float *)(iVar13 + 0x514) * fVar18 * fVar34;
  fVar18 = (float)VectorUnsignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x11] = ALBW_AS_U32(fVar20);
  fVar23 = *(float *)(iVar13 + 0x50c) + *(float *)(iVar14 + 0x268) +
           *(float *)(iVar13 + 0x518) * fVar18 * fVar34;
  fVar18 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar17 >> 0x15) & 3);
  iVar11 = iVar6 * iVar3 + 0x3039;
  param_2[0x12] = ALBW_AS_U32(fVar23);
  iVar3 = DAT_003e8aec;
  iVar6 = iVar11 * DAT_003e8aec + 0x3039;
  fVar33 = *(float *)(iVar13 + 0x510) + *(float *)(iVar14 + 0x26c) +
           *(float *)(iVar13 + 0x51c) * fVar18 * fVar34;
  fVar18 = (float)VectorUnsignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x13] = ALBW_AS_U32(fVar33);
  fVar21 = *(float *)(iVar13 + 0x520) + *(float *)(iVar13 + 0x52c) * fVar18 * fVar34;
  fVar18 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar17 >> 0x15) & 3);
  iVar14 = iVar6 * iVar3 + 0x3039;
  param_2[0x14] = ALBW_AS_U32(fVar21);
  iVar3 = iVar14 * DAT_003e8aec + 0x3039;
  fVar19 = *(float *)(iVar13 + 0x524) + *(float *)(iVar13 + 0x530) * fVar18 * fVar34;
  fVar18 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x15] = ALBW_AS_U32(fVar19);
  *(int *)(param_1 + 0x88) = iVar3;
  cVar1 = *(char *)(iVar13 + 0x184);
  fVar18 = *(float *)(iVar13 + 0x528) + *(float *)(iVar13 + 0x534) * fVar18 * fVar34;
  param_2[0x16] = ALBW_AS_U32(fVar18);
  if (cVar1 != '\0') {
    fVar22 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar17 >> 0x15) & 3);
    *(int *)(param_1 + 0x88) = iVar3 * DAT_003e8aec + 0x3039;
    if (0x3f000000 < (int)ALBW_AS_U32((fVar22 * fVar34))) {
      param_2[0x11] = ALBW_AS_U32(-fVar20);
      param_2[0x14] = ALBW_AS_U32(-fVar21);
    }
  }
  if (*(char *)(iVar13 + 0x185) != '\0') {
    fVar20 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e8aec + 0x3039;
    if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar34))) {
      param_2[0x12] = ALBW_AS_U32(-fVar23);
      param_2[0x15] = ALBW_AS_U32(-fVar19);
    }
  }
  if (*(char *)(iVar13 + 0x186) != '\0') {
    fVar20 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e8aec + 0x3039;
    if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar34))) {
      param_2[0x13] = ALBW_AS_U32(-fVar33);
      param_2[0x16] = ALBW_AS_U32(-fVar18);
    }
  }
  uVar7 = DAT_003e90bc;
  if (*(int *)(iVar13 + 0x428) == 1) {
    iVar3 = iVar13 + (param_2[0x54] +
                     (uint)((ulonglong)(uint)param_2[0x54] * (ulonglong)DAT_003e90bc >> 0x21) * -3)
                     * 0x10;
    uVar9 = *(undefined4 *)(iVar3 + 0x430);
    uVar12 = *(undefined4 *)(iVar3 + 0x434);
    param_2[0x2e] = *(undefined4 *)(iVar3 + 0x438);
    param_2[0x2c] = uVar9;
    param_2[0x2d] = uVar12;
  }
  else {
    uVar9 = *(undefined4 *)(iVar13 + 0x434);
    uVar12 = *(undefined4 *)(iVar13 + 0x438);
    param_2[0x2c] = *(undefined4 *)(iVar13 + 0x430);
    param_2[0x2d] = uVar9;
    param_2[0x2e] = uVar12;
  }
  if (*(int *)(iVar13 + 0x42c) == 1) {
    iVar3 = iVar13 + (param_2[0x54] +
                     (uint)((ulonglong)(uint)param_2[0x54] * (ulonglong)uVar7 >> 0x21) * -3) * 0x10;
    uVar9 = *(undefined4 *)(iVar3 + 0x460);
    uVar12 = *(undefined4 *)(iVar3 + 0x464);
    param_2[0x32] = *(undefined4 *)(iVar3 + 0x468);
    param_2[0x30] = uVar9;
    param_2[0x31] = uVar12;
  }
  else {
    uVar9 = *(undefined4 *)(iVar13 + 0x464);
    uVar12 = *(undefined4 *)(iVar13 + 0x468);
    param_2[0x30] = *(undefined4 *)(iVar13 + 0x460);
    param_2[0x31] = uVar9;
    param_2[0x32] = uVar12;
  }
  fVar34 = DAT_003e90c0;
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
  iVar3 = *(int *)(param_1 + 0x88) * DAT_003e8aec + 0x3039;
  fVar20 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar17 >> 0x15) & 3);
  iVar14 = iVar3 * DAT_003e8aec + 0x3039;
  iVar3 = iVar14 * DAT_003e8aec + 0x3039;
  param_2[0x1f] =
       ALBW_AS_U32((*(float *)(iVar13 + 0x37c) + *(float *)(iVar13 + 900)) -
       fVar18 * *(float *)(iVar13 + 900) * DAT_003e90c0);
  param_2[0x20] =
       ALBW_AS_U32((*(float *)(iVar13 + 0x380) + *(float *)(iVar13 + 0x388)) -
       fVar20 * *(float *)(iVar13 + 0x388) * fVar34);
  fVar18 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar17 >> 0x15) & 3);
  fVar20 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar17 >> 0x15) & 3);
  iVar14 = iVar3 * DAT_003e8aec + 0x3039;
  iVar3 = iVar14 * DAT_003e8aec;
  param_2[0x21] =
       ALBW_AS_U32((*(float *)(iVar13 + 0x394) + *(float *)(iVar13 + 0x39c)) -
       fVar18 * *(float *)(iVar13 + 0x39c) * fVar34);
  param_2[0x22] =
       ALBW_AS_U32((*(float *)(iVar13 + 0x398) + *(float *)(iVar13 + 0x3a0)) -
       fVar20 * *(float *)(iVar13 + 0x3a0) * fVar34);
  *(int *)(param_1 + 0x88) = iVar3 + 0x3039;
  fVar20 = *(float *)(iVar13 + 0x3ac);
  fVar23 = *(float *)(iVar13 + 0x3a8);
  fVar18 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar17 >> 0x15) & 3);
  uVar9 = *(undefined4 *)(iVar13 + 0x378);
  param_2[0x1d] = *(undefined4 *)(iVar13 + 0x374);
  param_2[0x1e] = uVar9;
  param_2[0x2a] = ALBW_AS_U32(fVar35);
  param_2[0x2b] = ALBW_AS_U32(fVar35);
  param_2[0x1c] = ALBW_AS_U32((fVar23 + fVar20) - fVar18 * fVar20 * fVar34);
  return func_003E8698(param_1,(int)param_2);
}

